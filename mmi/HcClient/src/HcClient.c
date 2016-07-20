#include "MMI_include.h"
#ifndef MMI_ON_HARDWARE_P
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#endif //!MMI_ON_HARDWARE_P
#include "med_global.h"
#include "med_utility.h"
#include "TimerEvents.h"
#include "soc_api.h"

#include "HcComm.h"
#include "HcSocket.h"
#include "HcClient.h"
#include "GPSDefine.h"

#define HC_RECREATE_CLIENT_INTERVAL 30*1000
hc_client_data *g_hc_client_data_ptr = NULL;
hc_client_data *g_hc_epo_client_ptr = NULL;

extern sockaddr_struct g_soc_addr;
extern sockaddr_struct g_soc_sntp;
extern hc_gps_epo_struck g_epo_cntx;

extern void hc_app_callback_hdlr(hc_client_data *client_data, hc_client_event event);
extern void hc_epo_callback_hdlr(hc_client_data *client_data, hc_client_event event);
extern void hc_sntp_callback_hdlr(hc_client_data *client_data, hc_client_event event);


void *hc_alloc_mem(kal_int32 size)
{
	void *ptr = med_alloc_ext_mem((kal_int32)size);

	if(ptr != NULL)
	{
		memset(ptr,0x0,size);
	}
	return ptr;
}

void hc_free_mem(void *p)
{
	if(p != NULL)
	{
		med_free_ext_mem((void **)&p);
	}
}

extern MMI_BOOL gprsActiveTest;

HBOOL hc_client_ready(HVOID)
{
	if (g_hc_client_data_ptr != NULL
		//&& gprsActiveTest == MMI_TRUE
		&& g_hc_client_data_ptr->socket_data_ptr->socket_id >= 0
		&& g_hc_client_data_ptr->socket_data_ptr->socket_status == HC_SOC_CONNECTED)
	{
		kal_prompt_trace(MOD_BT,"hc_client_ready 1" );
		return 1;
	}

	kal_prompt_trace(MOD_BT,"hc_client_ready 0" );
	return 0;
}

HVOID hc_client_restart_from_ext(HVOID)
{
	hc_client_data *hc_client_ptr = NULL;
	
	if (g_hc_client_data_ptr != NULL)
	{
		hc_client_ptr = g_hc_client_data_ptr->socket_data_ptr->client_data;
		hc_release_client((hc_client_data **)&hc_client_ptr);
		g_hc_client_data_ptr = NULL;
	}
	
//	hc_client_start();
}

HINT hc_client_send(HINT8 *phuf, HUINT data_size)
{
	hc_socket_data *p_socket_data = NULL;
	
	if (!hc_client_ready())
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[send] error, client is null"));
		return 0;
	}

	p_socket_data = g_hc_client_data_ptr->socket_data_ptr;
	return hc_soc_send(phuf, data_size, p_socket_data);
}


/**
* @brief: socket 事件回调函数
* @param: socket_data_ptr 当前的socket data 指针
* @param: event 对应的socket 事件.
*/
static void hc_client_callback(hc_socket_data *socket_data_ptr, hc_soc_event event)
{
	hc_client_data *client_data_ptr = NULL;

	client_data_ptr = (hc_client_data *)socket_data_ptr->client_data;

 	if(client_data_ptr == NULL)
	{
		return;
	}
	
	switch (event)
	{
		case HC_SOC_EVENT_GETIP:
			//nothing todo
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CONNECT);
			break;
			
		case HC_SOC_EVENT_GETIP_ERROR:
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CONNECT_ERROR);
			break;
			
		case HC_SOC_EVENT_CONNECT_ERROR:
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CONNECT_ERROR);
			break;
			
		case HC_SOC_EVENT_CONNECTED:
			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CONNECT);
			break;

		case HC_SOC_EVENT_CONNECTING:
			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CONNECTING);
			break;

		case HC_SOC_EVENT_SEND_DATA:
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_REQUEST);
			break;
			
		case HC_SOC_EVENT_SEND_ERROR:
			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_REQUEST_ERROR);
			break;
			
		case HC_SOC_EVENT_SEND_END:
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_REQUEST);
			break;
			
		case HC_SOC_EVENT_RECV_DATA:
			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_DOWNLOAD);
			break;
			
		case HC_SOC_EVENT_RECV_ERROR:
			//client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_DOWNLOAD_ERROR);
			break;
			
		case HC_SOC_EVENT_RECV_BUFFER_FULL:

			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_DOWNLOAD);
			break;
			
		case HC_SOC_EVENT_CLOSE:
			client_data_ptr->app_callback(client_data_ptr, HC_CLIENT_EVENT_CLOSE);
			break;
			
		case HC_SOC_EVENT_ERROR:

			break;
			
		default:
			break;
	}
}


HVOID hc_release_client(hc_client_data ** http_data_pp)
{
	if((*http_data_pp)->socket_data_ptr != NULL)
	{
		kal_prompt_trace(MOD_BT,"[debug] release socket");
		hc_soc_close((*http_data_pp)->socket_data_ptr);
		hc_release_soc((hc_socket_data **)&((*http_data_pp)->socket_data_ptr));
	}

	hc_free_mem((void *)*http_data_pp);
}

hc_client_data *hc_create_client(hc_app_callback app_callback)
{
	hc_client_data *hc_client_data_ptr = NULL;

	kal_prompt_trace(MOD_BT,"=====hc_create_client");

	hc_client_data_ptr = (hc_client_data *)hc_alloc_mem(sizeof(hc_client_data));
	if(hc_client_data_ptr == NULL)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] client alloc mem failed"));
		return NULL;
	}	

	memset(hc_client_data_ptr, 0x00, sizeof(hc_client_data));
	hc_client_data_ptr->socket_data_ptr = hc_create_soc(HC_SOC_SEND_BUFFER_SIZE, HC_SOC_RECV_BUFFER_SIZE, hc_client_callback);	

	if(hc_client_data_ptr->socket_data_ptr == NULL)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] client create soc failed"));
		hc_release_client((hc_client_data **)&hc_client_data_ptr);
		return NULL;
	}

	hc_client_data_ptr->app_callback = app_callback;

	hc_client_data_ptr->socket_data_ptr->client_data = hc_client_data_ptr;
	
	HCCLIENT_DBGTRACE((MOD_BT, "[sys] client create success"));	
	return hc_client_data_ptr;
}

HINT hc_connet_client(hc_client_data * client_data_ptr, sockaddr_struct addr)
{	
	HINT ret = 0;

	kal_prompt_trace(MOD_BT,"=====hc_connet_client");
	
	ret = hc_soc_connect(client_data_ptr->socket_data_ptr, addr);

	if(ret != 0)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] client connet failed, error code %d", ret));
		hc_release_client((hc_client_data **)&client_data_ptr);
		return -1;
	}

	return ret;
}

HINT hc_connet_sntp(hc_client_data * client_data_ptr, sockaddr_struct addr)
{	
	HINT ret = 0;

	ret = hc_soc_connect_udp(client_data_ptr->socket_data_ptr, addr);

	if(ret != 0)
	{
		HCCLIENT_DBGTRACE((MOD_BT, "[sys] hc_connet_sntp connet failed, error code %d", ret));
		hc_release_client((hc_client_data **)&client_data_ptr);
		return -1;
	}

	return ret;
}

HVOID hc_client_connect_timeout(HVOID)
{
	kal_prompt_trace(MOD_BT,"=====hc_client_connect_timeout" );
	
	if (g_hc_client_data_ptr != NULL && g_hc_client_data_ptr->socket_data_ptr->socket_status == HC_SOC_CONNECTING)
	{
		hc_client_restart_from_ext();
	}
}

HVOID hc_client_start(HVOID)
{
	hc_client_data *hc_client_ptr = NULL;

	kal_prompt_trace(MOD_BT,"=====hc_client_start g_hc_client_data_ptr=%d", g_hc_client_data_ptr);

	if (g_hc_client_data_ptr == NULL)
	{
		hc_client_ptr = hc_create_client(hc_app_callback_hdlr);
		if (hc_client_ptr != NULL)
		{
			if (hc_connet_client(hc_client_ptr, g_soc_addr) == 0)
			{
				g_hc_client_data_ptr = hc_client_ptr;

				kal_prompt_trace(MOD_BT,"=====hc_client_start socket_status=%d", g_hc_client_data_ptr->socket_data_ptr->socket_status);
				
				if (g_hc_client_data_ptr->socket_data_ptr->socket_status == HC_SOC_CONNECTING)
				{
					kal_prompt_trace(MOD_BT,"=====hc_client_start HC_SOC_CONNECTING StartTimer state=%d", g_hc_client_data_ptr->socket_data_ptr->socket_status );
					StartTimer(HC_CLIENT_CONNECT_TIMER, 60*1000, hc_client_connect_timeout);
				}
			}
		}
	}

	kal_prompt_trace(MOD_BT,"=====hc_client_start StartTimer time=%d",HC_RECREATE_CLIENT_INTERVAL);
	StartTimer(HC_CREATE_CLIENT_TIMER, HC_RECREATE_CLIENT_INTERVAL, hc_client_start);
}


void hc_client_sntp(void)
{
	hc_client_data *hc_client_ptr = NULL;

	if (g_hc_client_data_ptr == NULL)
	{
		kal_prompt_trace(MOD_BT,"hc_client_sntp hc_create_client");
		hc_client_ptr = hc_create_client(hc_sntp_callback_hdlr);
		if (hc_client_ptr != NULL)
		{
			kal_prompt_trace(MOD_BT,"hc_client_sntp hc_connet_client");
			if (hc_connet_sntp(hc_client_ptr, g_soc_sntp) == 0)
			{
				g_hc_client_data_ptr = hc_client_ptr;
				if (g_hc_client_data_ptr->socket_data_ptr->socket_status == HC_SOC_CONNECTING)
				{
					StartTimer(HC_CLIENT_CONNECT_TIMER, 60*1000, hc_client_connect_timeout);
				}
			}
		}
	}
	
	StartTimer(HC_CREATE_CLIENT_TIMER, HC_RECREATE_CLIENT_INTERVAL, hc_client_sntp);
}



void hc_gps_epo_create_http(void)
{
	hc_client_data *client_ptr = NULL;

	kal_prompt_trace(MOD_BT,"hc_gps_epo_create_http");

	if (g_hc_epo_client_ptr != NULL)
	{
		return;
	}
	
	client_ptr = hc_create_client(hc_epo_callback_hdlr);
	if (client_ptr != NULL)
	{
//		kal_prompt_trace(MOD_BT,"[GPS] create_http %d.%d.%d.%d:%d", g_epo_cntx.addr.addr[0], g_epo_cntx.addr.addr[1], g_epo_cntx.addr.addr[2], g_epo_cntx.addr.addr[3], g_epo_cntx.addr.port);
		if (hc_connet_client(client_ptr, g_epo_cntx.addr) == 0)
		{
			g_hc_epo_client_ptr = client_ptr;
			kal_prompt_trace(MOD_BT,"[EPO] Epo client socket id %d", g_hc_epo_client_ptr->socket_data_ptr->socket_id);
			return;
		}
	}		

	StartTimer(HC_CREATE_EPO_CLIENT_TIMER, HC_RECREATE_CLIENT_INTERVAL, hc_gps_epo_create_http);	
}