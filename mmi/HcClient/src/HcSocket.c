#include "MMI_include.h"
#include "SimCtrlSrvGprot.h"
#include "cbm_api.h"
#include "DtcntSrvIntStruct.h"
#include "nvram_common_defs.h"
#include "NwInfoSrvGprot.h"

#include "HcComm.h"
#include "HcSocket.h"
#include "HcClient.h"

static HCHAR g_plmn_sim1[SRV_MAX_PLMN_LEN + 1] = {0};	//PLMN
static HCHAR g_user_apn[8] = {0};
static kal_uint8 g_app_id = CBM_INVALID_APP_ID;
sockaddr_struct g_soc_addr;
sockaddr_struct g_soc_sntp;

#define HC_SOC_RECV_BUFFER_THRESHOLD (512)


static void hc_soc_system_notify_callback(void* msg);

/**
 * @brief: 得到当前sim卡1的信息
 * @return:  0->移动, 1->联通. 2->无sim卡
 */
static HINT8 hc_get_sim_1_type(void)
{
	if ((srv_nw_info_get_service_availability(MMI_SIM1) == SRV_NW_INFO_SA_FULL_SERVICE) )
	{
		if((memcmp(g_plmn_sim1, "46000", 5)==0)
			||(memcmp(g_plmn_sim1, "46002", 5)==0))
		{
			memset(g_user_apn,0, sizeof(g_user_apn));
			strcpy(g_user_apn, "cmnet");
			return 0;
		}
		else if(memcmp(g_plmn_sim1, "46001", 5)==0)
		{
			memset(g_user_apn,0, sizeof(g_user_apn));
			strcpy(g_user_apn, "uninet");
			return 1;
		}
	}
	return -1;
}


BOOL hc_sys_RegisterAppId(void)
{
	cbm_app_info_struct app_info;
	U8 app_id = CBM_INVALID_APP_ID;
	S8 ret = 0;

	memset(&app_info, 0, sizeof(app_info));
	app_info.app_icon_id = 301;
	app_info.app_str_id = 111;
	app_info.app_type = 0;	 //DTCNT_APPTYPE_NONE

	ret = cbm_register_app_id_with_app_info(&app_info, &app_id);
	if(ret == CBM_OK)
	{
		g_app_id = app_id;
		return TRUE;
	}

	return FALSE;
}

U32 Hc_Socket_FindAccProfIdByApn(const CHAR *apn, cbm_sim_id_enum sim)
{
    extern srv_dtcnt_store_info_context g_srv_dtcnt_store_ctx;
    int i;

    for(i = 0; i < SRV_DTCNT_PROF_MAX_ACCOUNT_NUM; ++i)
    {		
        if(g_srv_dtcnt_store_ctx.acc_list[i].in_use &&
                g_srv_dtcnt_store_ctx.acc_list[i].bearer_type == SRV_DTCNT_BEARER_GPRS &&
                g_srv_dtcnt_store_ctx.acc_list[i].sim_info == (sim + 1) &&
                app_stricmp((char*)g_srv_dtcnt_store_ctx.acc_list[i].dest_name, (char*)apn) == 0)
        {
            return g_srv_dtcnt_store_ctx.acc_list[i].acc_id;
        }
    }

    return -1;
}

HUINT Hc_Socket_AddAccProfId(const WCHAR* account_name)
{
    srv_dtcnt_store_prof_data_struct store_prof_data;
    srv_dtcnt_prof_gprs_struct prof_gprs;
    U32 acc_prof_id;
    srv_dtcnt_result_enum ret;

    memset(&prof_gprs, 0, sizeof(prof_gprs));
    prof_gprs.APN = g_user_apn;
    prof_gprs.prof_common_header.sim_info = SRV_DTCNT_SIM_TYPE_1;
    prof_gprs.prof_common_header.AccountName = (const U8*)account_name;
    prof_gprs.prof_common_header.acct_type = SRV_DTCNT_PROF_TYPE_USER_CONF;
    prof_gprs.prof_common_header.px_service = SRV_DTCNT_PROF_PX_SRV_HTTP;

    store_prof_data.prof_data = &prof_gprs;
    store_prof_data.prof_fields = SRV_DTCNT_PROF_FIELD_ALL;
    store_prof_data.prof_type = SRV_DTCNT_BEARER_GPRS;

    ret = srv_dtcnt_store_add_prof(&store_prof_data, &acc_prof_id);
    if(ret != SRV_DTCNT_RESULT_SUCCESS)
    {
        acc_prof_id = -1;
    }

    return acc_prof_id;
}


HINT hc_soc_getaccprofid(HCHAR *apn, cbm_sim_id_enum sim_id)
{

	const WCHAR name[] = L"USER GPRS";
	HINT acc_prof_id;

	acc_prof_id = Hc_Socket_FindAccProfIdByApn((const HCHAR*)apn, sim_id);
	if(acc_prof_id != -1)
	{
		return acc_prof_id;
	}	
	else	
	{
		HCCLIENT_DBGTRACE((MOD_BT, "FindAccProfIdByApn failed: %d", acc_prof_id));
		acc_prof_id = Hc_Socket_AddAccProfId(name);
	}	

    return acc_prof_id;
}

static HUINT hc_sys_get_account_id(void)
{
	S32 i;
	U16 vs_apn[32];
	S8 temp[32];

	i = hc_soc_getaccprofid(g_user_apn, CBM_SIM_ID_SIM1);
	if(i == -1)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "get_account_id failed: %d", i));
		return FALSE;
	}
	
	cbm_hold_bearer(g_app_id);
	
	return cbm_encode_data_account_id(i, CBM_SIM_ID_SIM1, g_app_id, KAL_FALSE);
}

HVOID hc_init_socket(HVOID)
{
	srv_nw_info_get_nw_plmn(MMI_SIM1, g_plmn_sim1, SRV_MAX_PLMN_LEN + 1);
	//HCCLIENT_DBGTRACE((MOD_BT, "g_plmn_sim1: %s", g_plmn_sim1));
}

HVOID hc_init_sockaddr(HVOID)
{
	S16 error;
	
	ReadRecord(NVRAM_EF_HC_SOCADDR_LID, 1, &g_soc_addr, NVRAM_EF_HC_SOCADDR_SIZE, &error);
	if (g_soc_addr.port == 0 && g_soc_addr.addr[0] == 0)
	{
		/*
		g_soc_addr.port = 7755;
		g_soc_addr.addr[0] = 123;
		g_soc_addr.addr[1] = 57;
		g_soc_addr.addr[2] = 172;
		g_soc_addr.addr[3] = 93;
		*/

		//IP:120.25.66.222 端口:7755 
		g_soc_addr.port = 7755;
		g_soc_addr.addr[0] = 120;
		g_soc_addr.addr[1] = 25;
		g_soc_addr.addr[2] = 66;
		g_soc_addr.addr[3] = 222;
		
		g_soc_addr.addr_len = 4;
		g_soc_addr.sock_type = SOC_SOCK_STREAM;
		
		WriteRecord(NVRAM_EF_HC_SOCADDR_LID, 1, &g_soc_addr, NVRAM_EF_HC_SOCADDR_SIZE, &error);
	}
	//HCCLIENT_DBGTRACE((MOD_BT, "socaddr: %d.%d.%d.%d:%d", g_soc_addr.addr[0], g_soc_addr.addr[1],
	//													g_soc_addr.addr[2], g_soc_addr.addr[3], g_soc_addr.port));
}

HVOID hc_init_sntp_sockaddr(HVOID)
{
	S16 error;
	
	//ReadRecord(NVRAM_EF_HC_SOCADDR_LID, 1, &g_soc_sntp, NVRAM_EF_HC_SOCADDR_SIZE, &error);
	if (g_soc_sntp.port == 0 && g_soc_sntp.addr[0] == 0)
	{
		// au.pool.ntp.org   IP:   130.102.128.23  端口:1323 
		g_soc_sntp.port = 1323;
		g_soc_sntp.addr[0] = 130;
		g_soc_sntp.addr[1] = 102;
		g_soc_sntp.addr[2] = 128;
		g_soc_sntp.addr[3] = 23;
		
		g_soc_sntp.addr_len = 4;
		g_soc_sntp.sock_type = SOC_SOCK_DGRAM;
		
		//WriteRecord(NVRAM_EF_HC_SOCADDR_LID, 1, &g_soc_sntp, NVRAM_EF_HC_SOCADDR_SIZE, &error);
	}
	//HCCLIENT_DBGTRACE((MOD_BT, "socaddr: %d.%d.%d.%d:%d", g_soc_sntp.addr[0], g_soc_sntp.addr[1],
	//													g_soc_sntp.addr[2], g_soc_sntp.addr[3], g_soc_sntp.port));
}



/**
 * @brief: socket 读信号的回调函数.
 * @param: socket_data_ptr 对应的当前的socket data
 */

static void hc_soc_on_recv(hc_socket_data * socket_data_ptr)
{
	HINT recv_bytes = 0;			
	HINT i;
	HINT pack = 100;
	HINT count;

	socket_data_ptr->recv_lenth_once = 0;
	while (socket_data_ptr->recv_data_size < socket_data_ptr->recv_buffer_size)
	{
		recv_bytes = soc_recv(socket_data_ptr->socket_id, socket_data_ptr->recv_buffer + socket_data_ptr->recv_data_size, 
							  socket_data_ptr->recv_buffer_size - socket_data_ptr->recv_data_size, 0);

		
		HCCLIENT_DBGTRACE((MOD_BT, "[recv] ret: %d", recv_bytes));
		if (recv_bytes > 0)
		{
			count = recv_bytes / pack;
			if (recv_bytes % pack > 0)
			{
				count += 1;
			}

			for (i = 0; i < count; i++)
			{
				HCCLIENT_DBGTRACE((MOD_BT, "[recv] content: %s", socket_data_ptr->recv_buffer + socket_data_ptr->recv_data_size + (i * pack)));
			}
			
			socket_data_ptr->recv_data_size += recv_bytes;
			socket_data_ptr->recv_lenth_once += recv_bytes;
			
			if(socket_data_ptr->recv_buffer_size - socket_data_ptr->recv_data_size <= HC_SOC_RECV_BUFFER_THRESHOLD)
			{
				//缓冲区快满了,需要马上处理一部分数据
				(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_RECV_BUFFER_FULL);
			}
		}
		else if (recv_bytes == SOC_WOULDBLOCK)
		{
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_RECV_DATA);
			break;
		}
		else if (recv_bytes == 0)
		{
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_RECV_DATA);
			//hc_soc_close(socket_data_ptr);
			//(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CLOSE);
			break;
		}
		else
		{
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] aaaaa"));
			hc_soc_close(socket_data_ptr);
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CLOSE);
			break;
		}
	}	
}


/**
 * @brief: socket 写信号的回调函数.
 * @param: socket_data_ptr 对应的当前的socket data
 */
static HINT hc_soc_on_send(hc_socket_data * socket_data_ptr)
{
	HINT send_bytes;

	if (!socket_data_ptr)
	{
		return 0;
	}
				
	while (socket_data_ptr->send_data_size > 0)
	{
		send_bytes = soc_send(socket_data_ptr->socket_id, socket_data_ptr->send_buffer, socket_data_ptr->send_data_size, 0);
		HCCLIENT_DBGTRACE((MOD_BT, "[send] content: %s", socket_data_ptr->send_buffer));
		HCCLIENT_DBGTRACE((MOD_BT, "[send] size: %d", socket_data_ptr->send_data_size));
		HCCLIENT_DBGTRACE((MOD_BT, "[send] ret: %d", send_bytes));
		if (send_bytes > 0)
		{
			socket_data_ptr->send_data_size -= send_bytes;
			socket_data_ptr->send_lenth_once = send_bytes;
			
			//(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_SEND_DATA);
			
			if (socket_data_ptr->send_data_size > 0)
			{
				memcpy(socket_data_ptr->send_buffer, socket_data_ptr->send_buffer + send_bytes, socket_data_ptr->send_data_size);
			}

			if (socket_data_ptr->send_data_size == 0)
			{
				memset(socket_data_ptr->send_buffer, 0, HC_SOC_SEND_BUFFER_SIZE);
				break;
			}
		}
		else if (send_bytes == SOC_WOULDBLOCK)
		{
			memset(socket_data_ptr->send_buffer, 0, HC_SOC_SEND_BUFFER_SIZE);
			break;
		}
		else 
		{
			//出错了socket
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] bbbbb"));
			hc_soc_close(socket_data_ptr);
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CLOSE);
			break;
		}
	}

	return send_bytes;
}


/**
 * @brief: socket  层 发送数据
 * @param: send_buffer 发送缓冲区
 * @param: send_lenth 发送缓冲区大小.
 * @param: socket_data_ptr 当前使用的socket_data 指针.
  * @return : 成功为INTrue. 发送失败返回INFalse
 */

HINT hc_soc_send(HUINT8 *send_buffer, HUINT send_lenth, hc_socket_data *socket_data_ptr)
{
	if (!socket_data_ptr)
	{
		return 0;
	}
	
	if (socket_data_ptr->send_buffer_size - socket_data_ptr->send_data_size < send_lenth)
	{
		//发送缓冲区已满
		HCCLIENT_DBGTRACE((MOD_BT, "socket send buffer is full"));
		return 0;
	}

	memcpy(socket_data_ptr->send_buffer + socket_data_ptr->send_data_size, send_buffer, send_lenth);
	socket_data_ptr->send_data_size += send_lenth;
	return hc_soc_on_send(socket_data_ptr);
}


/**
 * @brief: socket 链接信号的回调函数.
 * @param: socket_data_ptr 对应的当前的socket data
 */
static void hc_soc_on_connect(hc_socket_data * socket_data_ptr)
{
	//停止连接超时函数
	//gui_cancel_timer(socket_data_ptr->socket_timeout_handler);
	
	socket_data_ptr->socket_status = HC_SOC_CONNECTED;
	
	//通知上层socket连接成功
	(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECTED);
	
	//连接成功后直接发送收据
	hc_soc_on_send(socket_data_ptr);
}


/**
 * @brief: socket 关闭信号的回调函数.
 * @param: socket_data_ptr 对应的当前的socket data
 */
static void hc_soc_on_close(hc_socket_data *socket_data_ptr)
{
	HCCLIENT_DBGTRACE((MOD_BT, "[sys] ccccc"));
	hc_soc_close(socket_data_ptr);
	(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CLOSE);
}


/**
 * @brief: socket 信号的回调函数.
 * @param: msg 信号对应的信号体指针.
 */
static void hc_soc_system_notify_callback(void* msg)
{
	hc_socket_data* socket_data_ptr = NULL;
	app_soc_notify_ind_struct* soc_notify = (app_soc_notify_ind_struct*)msg;

	if (NULL == soc_notify)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Notify callback failed"));
		return;
	}

	//HCCLIENT_DBGTRACE((MOD_BT, "[sys] Notify socket id %d", soc_notify->socket_id));
	
	if (g_hc_client_data_ptr != NULL &&
			soc_notify->socket_id == g_hc_client_data_ptr->socket_data_ptr->socket_id)
	{
		socket_data_ptr = g_hc_client_data_ptr->socket_data_ptr;
	}
	else if (g_hc_epo_client_ptr != NULL &&
			soc_notify->socket_id == g_hc_epo_client_ptr->socket_data_ptr->socket_id)
	{
		socket_data_ptr = g_hc_epo_client_ptr->socket_data_ptr;
	}
	
	if(socket_data_ptr == 0)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Notify socket error"));
		return;
	}

	if (soc_notify->error_cause < 0)
	{
		//出错了，通知上层socket错误，并关闭socket
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] ddddd"));
		hc_soc_close(socket_data_ptr);
		(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CLOSE);
		return;
	}
	
	switch (soc_notify->event_type)
	{
	case SOC_READ:
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Socket read"));
		hc_soc_on_recv(socket_data_ptr);
		break;
		
	case SOC_WRITE:
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Socket write"));
		hc_soc_on_send(socket_data_ptr);
		break;
		
	case SOC_CONNECT:
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Socket connect"));
		hc_soc_on_connect(socket_data_ptr);
		break;
		
	case SOC_CLOSE:
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] Socket close"));
		hc_soc_on_close(socket_data_ptr);
		break;
		
	default:
		break;
	}
}


/**
 * @brief: 关闭当前socket占用的资源
 * @param: socket_data_ptr 当前使用的socket_data 指针
 */
void hc_soc_close(hc_socket_data* socket_data_ptr)
{
	UINT result = 0;
		
	if (socket_data_ptr == 0)
	{
		return;
	}
		
	//停止连接超时定时器
	//INSOCKET_DEBUG((MOD_XDM, "stop soc timer 1285 %x", socket_data_ptr->socket_timeout_handler));
	//gui_cancel_timer(socket_data_ptr->socket_timeout_handler);

	kal_prompt_trace(MOD_BT,"[debug] close socket %d", socket_data_ptr->socket_id);
	
	if (socket_data_ptr->socket_id >= 0)
	{
		result = soc_close(socket_data_ptr->socket_id);
	}

	socket_data_ptr->socket_id = -1;
	socket_data_ptr->socket_status = HC_SOC_DICONNECT;	
	socket_data_ptr->gprs_type = 0; 

	if (g_app_id != CBM_INVALID_APP_ID)
	{
		//cbm_release_bearer(g_app_id);
		cbm_deregister_app_id(g_app_id);
		g_app_id = CBM_INVALID_APP_ID;
	}

	//mmi_frm_clear_protocol_event_handler(MSG_ID_APP_SOC_NOTIFY_IND, (PsIntFuncPtr)hc_soc_system_notify_callback);

	//if(socket_data_ptr->client_callback != NULL)
	//{
	//	socket_data_ptr->client_callback(socket_data_ptr, IN_SOC_EVENT_CLOSE);
	//}
	//INSOCKET_DEBUG((MOD_XDM, "stop soc timer 1285"));
	//ClearProtocolEventHandler(MSG_ID_APP_SOC_NOTIFY_IND);
	return;
	
}


/**
 * @brief: 释放当前socket占用的资源
 * @param: socket_data_pp 当前使用的socket_data 指针的地址
 */

void hc_release_soc(hc_socket_data** socket_data_pp)
{
	if((*socket_data_pp) != NULL)
	{
		kal_prompt_trace(MOD_BT,"[debug] free socket buffer");
		//if((*socket_data_pp)->recv_buffer_ptr != NULL)
		//{
		//	hc_free_mem((void *)((*socket_data_pp)->recv_buffer_ptr));
		//}
		//if((*socket_data_pp)->send_buffer_ptr != NULL)
		//{
		//	hc_free_mem((void *)((*socket_data_pp)->send_buffer_ptr));
		//}

		//hc_soc_delete((*socket_data_pp));
		hc_free_mem((void *)*socket_data_pp);
	}
}

/**
 * @brief: 清理当前socket data使用的buffer
 * @param:  socket_data_ptr 对应的当前的socket data
 */
void hc_soc_clean_buf(hc_socket_data* socket_data_ptr)
{
	memset(socket_data_ptr->send_buffer, 0, socket_data_ptr->send_buffer_size);
	socket_data_ptr->send_data_size = 0;

	memset(socket_data_ptr->recv_buffer, 0, socket_data_ptr->recv_buffer_size);
	socket_data_ptr->recv_data_size = 0;

	socket_data_ptr->send_lenth_once= 0;
	socket_data_ptr->recv_lenth_once = 0;

//	socket_data_ptr->peek_data_length = 0;
//	socket_data_ptr->peek_state = IN_SOCKET_PEEK_NO;
}


hc_socket_data *hc_create_soc(HUINT send_buffer_size, HUINT recv_buffer_size, hc_client_callback_func client_callback)
{
	hc_socket_data *hc_socket_data_ptr = NULL;

	hc_init_socket();
	
	hc_socket_data_ptr = (hc_socket_data *)hc_alloc_mem(sizeof(hc_socket_data));

	if(hc_socket_data_ptr == NULL)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] socket alloc mem failed"));
		return NULL;
	}


	memset((void *)hc_socket_data_ptr, 0x00, sizeof(hc_socket_data));
	hc_socket_data_ptr->send_buffer_size = send_buffer_size;
	hc_socket_data_ptr->recv_buffer_size = recv_buffer_size;
	//hc_socket_data_ptr->time_interval = time_interval;
	//hc_socket_data_ptr->socket_timeout_handler = socket_timeout_handler;

	hc_socket_data_ptr->client_callback = client_callback;
	hc_socket_data_ptr->socket_id = -1;
	hc_socket_data_ptr->account_id = 0;
	//in_soc_add(hc_socket_data_ptr);
	HCCLIENT_DBGTRACE((MOD_BT, "[sys] socket create success"));
	return hc_socket_data_ptr;	
}

HINT hc_soc_connect(hc_socket_data* socket_data_ptr, sockaddr_struct addr )
{
	HINT ret;
	HUINT account_id;
	HUINT8 socket_opt;
	kal_int8 result;
	sockaddr_struct soc_addr;
	
	if (socket_data_ptr->socket_id != -1)
	{
		//如果soc已经存在,则需要关闭当前的soc,清除buffer
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] eeeee"));
		hc_soc_close(socket_data_ptr);
		hc_soc_clean_buf(socket_data_ptr);		
	}

	if (socket_data_ptr->account_id == 0)
	{
		//if (gprs_type != 0)
		//{
			if (hc_get_sim_1_type() < 0)
			{
				HCCLIENT_DBGTRACE((MOD_BT, "[sys] get apn failed"));
				ret = -1;
				goto err;
			}
		
			if (hc_sys_RegisterAppId() == FALSE)
			{	
				HCCLIENT_DBGTRACE((MOD_BT, "[sys] reg app id failed"));
				ret = -2;
				goto err;
			}
			socket_data_ptr->account_id = account_id = hc_sys_get_account_id();	

			//HCCLIENT_DBGTRACE((MOD_BT, "account_id: %d", account_id));
		//}
		//else
		//{
		//	INSOCKET_DEBUG((MOD_XDM, "in_soc_connect socket_data_ptr->account_id FALSE"));
		//	return INFalse;
		//}
	}
	else
	{
		account_id = socket_data_ptr->account_id;
	}		

	socket_data_ptr->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_STREAM, 0, MOD_MMI, account_id);
	if (socket_data_ptr->socket_id < 0)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC CREATE FAILED"));
		ret = -3;
		goto err;
	}	

	socket_opt = 1;
	if (soc_setsockopt(socket_data_ptr->socket_id, SOC_NBIO, &socket_opt, sizeof(socket_opt)) < 0)
	{
		ret = -4;
		goto err;
	}
	
	socket_opt = SOC_READ | SOC_WRITE | SOC_CONNECT | SOC_CLOSE;//SOC_ACCEPT | 
	if (soc_setsockopt(socket_data_ptr->socket_id, SOC_ASYNC, &socket_opt, sizeof(socket_opt)) < 0)
	{
		ret = -5;
		goto err;
	}

//	kal_prompt_trace(MOD_BT,"[SOC] %d.%d.%d.%d:%d", addr.addr[0], addr.addr[1], addr.addr[2], addr.addr[3], addr.port);
	memset(&soc_addr, 0, sizeof(sockaddr_struct));
	soc_addr.addr[0] = addr.addr[0];
	soc_addr.addr[1] = addr.addr[1];
	soc_addr.addr[2] = addr.addr[2];
	soc_addr.addr[3] = addr.addr[3];
	soc_addr.port = addr.port;
	soc_addr.addr_len = addr.addr_len;
	soc_addr.sock_type = addr.sock_type;
	
 	result = soc_connect(socket_data_ptr->socket_id, &soc_addr);
	
	if (result == SOC_WOULDBLOCK)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC WOULD BLOCK"));
		//SetProtocolEventHandler(hc_soc_system_notify_callback, MSG_ID_APP_SOC_NOTIFY_IND);
		mmi_frm_set_protocol_event_handler(MSG_ID_APP_SOC_NOTIFY_IND, (PsIntFuncPtr)hc_soc_system_notify_callback, TRUE);
		//INSOCKET_DEBUG((MOD_XDM, "start soc timer 1259 %x", socket_data_ptr->socket_timeout_handler));
		//gui_start_timer(socket_data_ptr->time_interval, socket_data_ptr->socket_timeout_handler);
		socket_data_ptr->socket_status = HC_SOC_CONNECTING;
		(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECTING);

		//return INTrue;
	}
	else
	{
		if(result == SOC_SUCCESS)
		{
			//直接发送数据
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC SUCCESS"));
			socket_data_ptr->socket_status = HC_SOC_CONNECTED;
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECTED);
			//return INTrue;
		}	
		else
		{
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC CONNECT FAILED"));
			
			//in_soc_close(socket_data_ptr);
			socket_data_ptr->socket_status = HC_SOC_ERROR;
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECT_ERROR);
			ret = -6;
			goto err;
		}
	}	

	return 0;

err:
	HCCLIENT_DBGTRACE((MOD_BT, "[sys] fffff"));
	hc_soc_close(socket_data_ptr);
	return ret;
}




HINT hc_soc_connect_udp(hc_socket_data* socket_data_ptr, sockaddr_struct addr )
{
	HINT ret;
	HUINT account_id;
	HUINT8 socket_opt;
	kal_int8 result;
	sockaddr_struct soc_addr;

	kal_prompt_trace(MOD_BT, "hc_soc_connect_udp");
	
	if (socket_data_ptr->socket_id != -1)
	{
		//如果soc已经存在,则需要关闭当前的soc,清除buffer
		kal_prompt_trace(MOD_BT, "[sys] eeeee");
		hc_soc_close(socket_data_ptr);
		hc_soc_clean_buf(socket_data_ptr);		
	}

	if (socket_data_ptr->account_id == 0)
	{
		//if (gprs_type != 0)
		//{
			if (hc_get_sim_1_type() < 0)
			{
				kal_prompt_trace(MOD_BT, "[sys] get apn failed");
				ret = -1;
				goto err;
			}
		
			if (hc_sys_RegisterAppId() == FALSE)
			{	
				kal_prompt_trace(MOD_BT, "[sys] reg app id failed");
				ret = -2;
				goto err;
			}
			socket_data_ptr->account_id = account_id = hc_sys_get_account_id();	

			//HCCLIENT_DBGTRACE((MOD_BT, "account_id: %d", account_id));
		//}
		//else
		//{
		//	INSOCKET_DEBUG((MOD_XDM, "in_soc_connect socket_data_ptr->account_id FALSE"));
		//	return INFalse;
		//}
	}
	else
	{
		account_id = socket_data_ptr->account_id;
	}		

	socket_data_ptr->socket_id = soc_create(SOC_PF_INET, SOC_SOCK_DGRAM, 0, MOD_MMI, account_id);
	kal_prompt_trace(MOD_BT, "[sys] SOC CREATE success");
	if (socket_data_ptr->socket_id < 0)
	{
		ret = -3;
		goto err;
	}	

	socket_opt = 1;
	if (soc_setsockopt(socket_data_ptr->socket_id, SOC_NBIO, &socket_opt, sizeof(socket_opt)) < 0)
	{
		ret = -4;
		goto err;
	}
	
	socket_opt = SOC_READ | SOC_WRITE | SOC_CONNECT | SOC_CLOSE;//SOC_ACCEPT | 
	if (soc_setsockopt(socket_data_ptr->socket_id, SOC_ASYNC, &socket_opt, sizeof(socket_opt)) < 0)
	{
		ret = -5;
		goto err;
	}

//	kal_prompt_trace(MOD_BT,"[SOC] %d.%d.%d.%d:%d", addr.addr[0], addr.addr[1], addr.addr[2], addr.addr[3], addr.port);
	memset(&soc_addr, 0, sizeof(sockaddr_struct));
	soc_addr.addr[0] = addr.addr[0];
	soc_addr.addr[1] = addr.addr[1];
	soc_addr.addr[2] = addr.addr[2];
	soc_addr.addr[3] = addr.addr[3];
	soc_addr.port = addr.port;
	soc_addr.addr_len = addr.addr_len;
	soc_addr.sock_type = addr.sock_type;
	
 	result = soc_connect(socket_data_ptr->socket_id, &soc_addr);
	
	if (result == SOC_WOULDBLOCK)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC WOULD BLOCK"));
		//SetProtocolEventHandler(hc_soc_system_notify_callback, MSG_ID_APP_SOC_NOTIFY_IND);
		mmi_frm_set_protocol_event_handler(MSG_ID_APP_SOC_NOTIFY_IND, (PsIntFuncPtr)hc_soc_system_notify_callback, TRUE);
		//INSOCKET_DEBUG((MOD_XDM, "start soc timer 1259 %x", socket_data_ptr->socket_timeout_handler));
		//gui_start_timer(socket_data_ptr->time_interval, socket_data_ptr->socket_timeout_handler);
		socket_data_ptr->socket_status = HC_SOC_CONNECTING;
		(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECTING);

		//return INTrue;
	}
	else
	{
		if(result == SOC_SUCCESS)
		{
			//直接发送数据
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC SUCCESS"));
			socket_data_ptr->socket_status = HC_SOC_CONNECTED;
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECTED);
			//return INTrue;
		}	
		else
		{
			HCCLIENT_DBGTRACE((MOD_BT, "[sys] SOC CONNECT FAILED"));
			
			//in_soc_close(socket_data_ptr);
			socket_data_ptr->socket_status = HC_SOC_ERROR;
			(socket_data_ptr->client_callback)(socket_data_ptr, HC_SOC_EVENT_CONNECT_ERROR);
			ret = -6;
			goto err;
		}
	}	

	return 0;

err:
	HCCLIENT_DBGTRACE((MOD_BT, "[sys] fffff"));
	hc_soc_close(socket_data_ptr);
	return ret;
}


