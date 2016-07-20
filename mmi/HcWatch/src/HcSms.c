#if defined(__HC_SMS__)
#include "MMIDataType.h"
#include "SmsSrvGprot.h"
#include "NwInfoSrvGprot.h"
#include "common_nvram_editor_data_item.h"
#include "UcmSrvGprot.h"

#include "HcWatchDefine.h"

// 设备SOS
const U16 sos_text_cn[6] = {0x8BBE, 0x5907, 0x0053, 0x004F, 0x0053};
// 经度
const U16 sos_longi_text_cn[3] = {0x7ECF, 0x5EA6};
// 纬度
const U16 sos_lati_text_cn[3] = {0x7EAC, 0x5EA6};

// 设备电量不足，请及时充电。
const U16 lowbat_text_cn[14] = {0x8BBE, 0x5907, 0x7535, 0x91CF, 0x4E0D, 0x8DB3, 0xFF0C, 0x8BF7, 0x53CA, 0x65F6, 0x5145, 0x7535, 0x3002};

hc_sms_switch_struct g_sms_switch;
hc_center_num_struct g_center_num;

static void user_config_send_sms(S8* text, U8* tel_num, U8 is_ucs)
{
	U8 rsp_num_ucs2[(SRV_SMS_MAX_ADDR_LEN + 1)*2];
	S8 text_ucs[512];

	if(NULL == tel_num || 0 == strlen(tel_num))
	{
		return;
	}

	memset(rsp_num_ucs2, 0, sizeof(rsp_num_ucs2));
	mmi_asc_to_ucs2((S8*)rsp_num_ucs2, (S8*)tel_num);
	if(is_ucs)
	{
		srv_sms_send_ucs2_text_msg((CHAR*)text, rsp_num_ucs2, SRV_SMS_SIM_1,NULL,NULL);
	}
	else
	{
		memset(text_ucs, 0, sizeof(text_ucs));
		mmi_asc_to_ucs2((S8*)text_ucs, (S8*)text);
		srv_sms_send_ucs2_text_msg((CHAR*)text_ucs, rsp_num_ucs2, SRV_SMS_SIM_1,NULL,NULL);
	}
}


static void user_config_send_sos_sms(S8* text, S8* longi_text, S8* lati_text, U8* tel_num, U8 is_ucs)
{
	U8 rsp_num_ucs2[(SRV_SMS_MAX_ADDR_LEN + 1)*2];
	S8 text_ucs[512];
	S8 text_tmp[32];

	if(NULL == tel_num || 0 == strlen(tel_num))
	{
		return;
	}

	memset(rsp_num_ucs2, 0, sizeof(rsp_num_ucs2));
	mmi_asc_to_ucs2((S8*)rsp_num_ucs2, (S8*)tel_num);
	if(is_ucs)
	{
		memset(text_ucs, 0, sizeof(text_ucs));
		mmi_ucs2ncpy((S8*) text_ucs, (S8*) text, 5);
		//mmi_ucs2ncat((S8*) text_ucs, (S8*) longi_text, 2);
		//mmi_ucs2ncat((S8*) text_ucs, (S8*) lati_text, 2);

		/*
	strcpy(gps_state, gGprmcdate.state);
	strcpy(lat, gGprmcdate.lati);
	strcpy(N_S, gGprmcdate.N_S);
	strcpy(lon, gGprmcdate.longi);
		*/
		
		srv_sms_send_ucs2_text_msg((CHAR*)text_ucs, rsp_num_ucs2, SRV_SMS_SIM_1,NULL,NULL);
	}
	else
	{
		memset(text_ucs, 0, sizeof(text_ucs));
		mmi_asc_to_ucs2((S8*)text_ucs, (S8*)text);
		srv_sms_send_ucs2_text_msg((CHAR*)text_ucs, rsp_num_ucs2, SRV_SMS_SIM_1,NULL,NULL);
	}
}


MMI_BOOL user_config_get_nw_status(void)
{
    if(srv_sim_ctrl_is_available(MMI_SIM1))
   	{
		if(SRV_NW_INFO_SA_FULL_SERVICE == srv_nw_info_get_service_availability(MMI_SIM1))
		{
			return MMI_TRUE;
		}
	}

	return MMI_FALSE;
}

void user_config_sos_send_sms(void)
{
	if (!g_sms_switch.sos_sms)
	{
		return;
	}
	
	if (user_config_get_nw_status())
	{
		kal_prompt_trace(MOD_BT,"[SOS] send sms");
		user_config_send_sos_sms((S8 *)sos_text_cn, (S8*)sos_longi_text_cn,(S8*)sos_lati_text_cn, g_center_num.num, 1);
	}
}

MMI_BOOL user_config_bat_send_sms(void)
{
	if (!g_sms_switch.lowbat_sms)
	{
		goto error;
	}

	if (user_config_get_nw_status())
	{
		kal_prompt_trace(MOD_BT,"[BAT] send sms");
		user_config_send_sms((S8 *)lowbat_text_cn, g_center_num.num, 1);

		return MMI_TRUE;
	}

error:

	return MMI_FALSE;
}

void hc_set_center_num(U8 *pbuf, U32 len)
{
	U8 send_data[64];
	U32 send_size;
	S16 error;
	
	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_CENTER, strlen(HC_PROTL_CENTER));	
	hc_client_send(send_data, send_size);
	
	memset(g_center_num.num, 0, SRV_UCM_MAX_NUM_URI_LEN);
	memcpy(g_center_num.num, pbuf, len);

    WriteRecord(NVRAM_EF_HC_CENTER_NUM_LID, 1, &g_center_num, NVRAM_EF_HC_CENTER_NUM_SIZE, &error);	
}

void hc_sossms_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	U32 send_size;
	S16 error;

	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_SOSSMS, strlen(HC_PROTL_SOSSMS));
#if defined(__HC_CLIENT__)
	hc_client_send(send_data, send_size);
#else	
	User_Socket_Send(send_data, send_size);	
#endif

	if (*pbuf = '1')
	{
		g_sms_switch.sos_sms = 1;
	}
	else if (*pbuf = '0')
	{
		g_sms_switch.sos_sms = 0;
	}
	
	WriteRecord(NVRAM_EF_HC_SMS_SWITCH_LID, 1, &g_sms_switch, NVRAM_EF_HC_SMS_SWITCH_SIZE, &error);	
}

void hc_lowbat_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	U32 send_size;
	S16 error;
	
	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_LOWBAT, strlen(HC_PROTL_LOWBAT));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, send_size);
	#else	
	User_Socket_Send(send_data, send_size);	
	#endif

	if (*pbuf = '1')
	{
		g_sms_switch.lowbat_sms = 1;
	}
	else if (*pbuf = '0')
	{
		g_sms_switch.lowbat_sms = 0;
	}

	WriteRecord(NVRAM_EF_HC_SMS_SWITCH_LID, 1, &g_sms_switch, NVRAM_EF_HC_SMS_SWITCH_SIZE, &error);	
}

void hc_sms_init(void)
{
	S16 error;
	
	memset(&g_sms_switch, 0, sizeof(hc_sms_switch_struct));
	memset(&g_center_num, 0, sizeof(hc_center_num_struct));
	ReadRecord(NVRAM_EF_HC_SMS_SWITCH_LID, 1, &g_sms_switch, NVRAM_EF_HC_SMS_SWITCH_SIZE, &error);
	ReadRecord(NVRAM_EF_HC_CENTER_NUM_LID, 1, &g_center_num, NVRAM_EF_HC_CENTER_NUM_SIZE, &error);
}
#endif
