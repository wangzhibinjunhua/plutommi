#include "MMIDataType.h"
#include "TimerEvents.h"
#include "ImeiSrvGprot.h"
#include "mmi_frm_events_gprot.h" 
#include "mmi_frm_queue_gprot.h"
#include "HcWatchMain.h"
#include "app_datetime.h"
#include "vmcell_sdk.h"
#include "custom_mmi_default_value.h"
#include "common_nvram_editor_data_item.h"
#include "SSCStringTable.h"
#include "HcWatchDefine.h"
#include "HcWatchMain.h"
#include "ProfilesSrvGprot.h"
#include "gui.h"
#include "vmsalcell.h"
#include "AlarmSrvGprot.h"
#include "AlarmFrameworkProt.h"
#include "med_api.h"
#include "NwInfoSrvGprot.h"
#if defined(__HC_CLIENT__)
#include "HcComm.h"
#include "HcSocket.h"
#include "HcClient.h"
#endif
#if defined(__HC_BAT__)
#include "HcBat.h"
#endif
#if defined(__HC_CAGPS__)
#include "HcCagps.h"
#endif
#include "HcLed.h"
#include "GPSDefine.h"

#include "mmi_rp_app_factorymode_def.h"

U32 hc_ud_time = 0xFF;
static hc_lk_struck g_lk_data = {0};
//static hc_ud2_cache_struck g_ud2_cache = {0};

U8 time_sync_state = 0;
//MMI_BOOL g_pedo_switch = MMI_FALSE;
MMI_BOOL g_is_silencemode = MMI_FALSE;
hc_silence_mode_struck g_silence_mode = {0};
hc_AL_STATE g_al_state = AL_IDLE;


U8 HC_DEVICE_ID[SRV_IMEI_MAX_LEN + 1] = {0};


U32 g_flower_num = 0;

extern MMI_BOOL g_sos_loop;

// gps ++
extern GPRMC_STRUCK gGprmcdate;
extern GGA_STRUCK gGGAData;
extern hc_gps_cntx_struck g_gps_cntx;
extern hc_gps_epo_struck g_epo_cntx;
extern S32 hc_gps_epo_http_req(void* msg);
//extern S32 hc_gps_epo_req_hdlr(void *msg);
// gps --

// cell ++
extern vm_cell_info_struct g_s_vm_sal_cur_cell_info;
extern vm_cell_info_struct g_s_vm_sal_nbr_cell_info[VM_SAL_CELL_NBR_MAX];
extern kal_uint8 g_s_vm_sal_cell_nbr_num;
extern kal_uint8 g_cell_info_ta;
// cell --

extern U16 gCurrLangIndex;
extern family_num_struct family_num_st;
extern whitelist1_num_struct  whitelist1_num_st;
extern whitelist1_num_struct  whitelist2_num_st;
//extern kal_uint32 pedometer_step_num;
extern kal_uint8 g_special_action_call;
extern kal_uint8 g_special_action_capture;
#if defined(__HC_BAT__)
extern hc_bat_cntx_struck g_bat_cntx;
#endif
#if defined(__HC_CAGPS__)
extern AGPSParserStruct gAGPSParser;
#endif
#if defined(__HC_SENSOR__)
extern nvram_ef_hc_sensor_cntx_struck g_sensor_cntx;
#endif

extern U8 gps_data_post_idle_entry; 

extern void mmi_sos_loop_hdlr(void);

extern void mmi_key_talk_hdlr(void);
extern void hc_record_stop(void);
extern S32 hc_tk_upload_init(void* msg);
extern void hc_gps_wake_hdlr(void);



void HcWatchPostMessage(U32 src, U32 dest, U32 msgId, oslParaType *pLocalParam)
{
	MYQUEUE Message;

	Message.oslSrcId = src;
	Message.oslDestId = dest;
	Message.oslMsgId = msgId;

	Message.oslDataPtr = (oslParaType *)pLocalParam;
	Message.oslPeerBuffPtr = NULL;
	OslMsgSendExtQueue(&Message);	
}

void set_sys_language(U8 *rbuf)
{
	S32 num;
	U8 i;	
	U8 send_data[] = "AP0800#";
	U8 data = 0;
	
	num = 0;
	for (i=0; rbuf[i] != '#'; i++)
	{
		if (rbuf[i] < '0' || rbuf[i] > '9')
		{
			kal_prompt_trace(MOD_BT,"Num error!");
			num = -1;
			break;
		}
		num = num*10 + (rbuf[i]-'0');
	}
	if (num)
	{
		data = mmi_lang_support(SSC_ENGLISH);
	}
	else
	{
		data = mmi_lang_support(SSC_SCHINESE);
	}
	
    if (data != gCurrLangIndex)
    {
        mmi_setting_set_language(data);
    }	
	//User_Socket_Send(send_data, strlen(send_data));
}

S32 hc_update_idlesrceen_from_user(void* msg)
{
	if (mmi_idle_is_active())
	{
		show_time_date();
	}

	return 0;
}


void HcWatch_init(void)
{
    S16 error;

	kal_prompt_trace(MOD_BT,"HcWatch_init");
	
	ReadRecord(NVRAM_EF_LOCATION_DATA_SEND_TIMER_LID, 1, &hc_ud_time, NVRAM_EF_LOCATION_DATA_SEND_TIMER_SIZE, &error);
	if (hc_ud_time == 0x00)
	{
		hc_ud_time = 600;
		WriteRecord(NVRAM_EF_LOCATION_DATA_SEND_TIMER_LID, 1, &hc_ud_time, NVRAM_EF_LOCATION_DATA_SEND_TIMER_SIZE, &error);
	}

	ReadRecord(NVRAM_EF_FLOWER_NUM_LID, 1, &g_flower_num, NVRAM_EF_FLOWER_NUM_SIZE, &error);
	ReadRecord(NVRAM_EF_SILENCE_LID, 1, &g_silence_mode, NVRAM_EF_SILENCE_SIZE, &error);

	kal_prompt_trace(MOD_BT,"HcWatch_init hc_ud_time=%d",hc_ud_time);
	
	//GPS_turnOffVMC();
//	SetProtocolEventHandler(hc_gps_epo_req_hdlr, MSG_ID_HC_EPO_REQ);
	SetProtocolEventHandler(hc_ud2_hdlr, MSG_ID_HC_UPLOAD2_REQ);	
	SetProtocolEventHandler(mmi_sos_loop_hdlr, MSG_ID_SOS_LOOP_REQ);
	SetProtocolEventHandler(mmi_key_talk_hdlr, MSG_ID_HC_SNDREC_START_REQ);
	SetProtocolEventHandler(hc_record_stop, MSG_ID_HC_SNDREC_STOP_REQ);
	SetProtocolEventHandler(hc_tk_upload_init, MSG_ID_HC_TALK_UPLOAD_REQ);
	SetProtocolEventHandler(hc_update_idlesrceen_from_user, MSG_ID_HC_UPDATE_IDLESCREEN_REQ);
	SetProtocolEventHandler(hc_reconnect_server_hdlr, MSG_ID_HC_RECONNECT_SERVER_REQ);
	SetProtocolEventHandler(hc_gps_epo_http_req, MSG_ID_HC_EPO_HTTP_REQ);
}

void user_config_h1_set_alarm(S16 h, S16 m, U8 days, S16 on, U8 index)
{
	FS_HANDLE fileHandle;
	U8 fileName_asc[32] = {0};
	U8 fileName_ucs[32*2] = {0};
    int j=0;
	
	alm_nvram_struct *alm_node = (srv_alm_node_type *)srv_alm_read(index);

	alm_node->Hour = h;
	alm_node->Min = m;
	alm_node->Freq =ALM_FREQ_DAYS; //ALM_FREQ_DAYS
	//kal_prompt_trace(MOD_BT,"S03A alm_node->Freq=%d", alm_node->Freq);
	/*
	if (alm_node->Freq == ALM_FREQ_DAYS)
    {           
        for (j = 0; j < H1_NUM_DAYS; j++)
        {
            kal_prompt_trace(MOD_BT,"S03A gWeekStates[%d]=%d",j, gWeekStates[j]);
            alm_node->Days |= (gWeekStates[j] << j);
			kal_prompt_trace(MOD_BT,"S03A alm_node->Days[%d]=%d",j, alm_node->Days);
        }

        if (alm_node->Days == 0)
        {
            alm_node->Freq = ALM_FREQ_ONCE;
        }
    }
	*/
	if (days == 0)
    {
        alm_node->Freq = ALM_FREQ_ONCE;
    }
	else
	{
        alm_node->Freq = ALM_FREQ_DAYS;	
	}
	alm_node->Days = days;
	alm_node->Snooze = 0;
#ifdef __MMI_ALM_ALERT_TYPE__
	alm_node->AlertType = 1;
#endif
#if defined(__PROJ_HM126_Z1__)
	sprintf(fileName_asc, "%c:\\alarm.mp3", (CHAR) FS_GetDrive(FS_DRIVE_V_NORMAL, 2, FS_DRIVE_V_NORMAL));
	mmi_asc_to_ucs2((PS8)fileName_ucs, fileName_asc);
	fileHandle = FS_Open((PU16)fileName_ucs, FS_READ_ONLY);
	if(0 <= fileHandle)
	{
		alm_node->AudioOption = ALM_AUDIO_OPTIONS_TONE;
		alm_node->AudioOptionValue = ALARM_TONE_FILE;
		mmi_ucs2cpy((CHAR*)alm_node->tone_path, (CHAR*)fileName_ucs);
	}
	else
#endif	
#ifdef __MMI_ALM_CUSTOMIZE_TONE__
	{
		alm_node->AudioOption = ALM_AUDIO_OPTIONS_TONE;
		alm_node->AudioOptionValue = AUD_ID_PROF_RING1;
	}
#endif
	if(on)
	{
		alm_node->State = 1;
	}
	else
	{
		alm_node->State = 0;
	}
	
	srv_alm_write(index, alm_node);

	if(on)
	{
		AlmActivateIndicator();
	}
	else
	{
		AlmDeactivateIndicator();
	}
}



S32 hc_str2num(U8 *str, U32 len)
{
	S32 num = 0;
	U32 i;
	
	for (i = 0; i < len; i++)
	{
		if (*(str+i) < '0' || *(str+i) > '9')
		{
			kal_prompt_trace(MOD_BT,"Num error!");
			return -1;
		}
		num = num*10 + (*(str+i)-'0');
	}

	return num;
}

void hc_set_lk_state(MMI_BOOL state)
{
	g_lk_data.lk_rsp_state = state;
}

MMI_BOOL hc_get_lk_state(void)
{
	return g_lk_data.lk_rsp_state;
}

U32 hc_make_send_data(CHAR *dest, CHAR *cont, U32 cont_len)
{
	U32 len;
	//sprintf(dest, "[%s*%s*%04x*%s]", HC_CUSTOMER_ID, HC_DEVICE_ID, cont_len, cont);
	sprintf(dest, "[%s*%s*%04x*", HC_CUSTOMER_ID, HC_DEVICE_ID, cont_len);
	len = strlen(dest);
	memcpy(dest + len, cont, cont_len);
	len += cont_len;
	*(dest + len) = ']';

	len += 1;
	
	return len;
}

U32 hc_make_location_info(U8 *prot, U8 *pbuf, U32 pbuf_size)
{
	U32 i;
	U32 device_state;
	U32 step;
	U32 turnover;
	U32 ret = 0;
	U32 BUFFER_SIZE = 224;
	U32 cont_len;
	U32 cell_num = g_s_vm_sal_cell_nbr_num + 1;
	U16 mcc = g_s_vm_sal_cur_cell_info.mcc;
	U16 mnc = g_s_vm_sal_cur_cell_info.mnc;
	U16 lac = g_s_vm_sal_cur_cell_info.lac;
	U16 ci = g_s_vm_sal_cur_cell_info.ci;
	U16 rxlev = g_s_vm_sal_cur_cell_info.rxlev;
#if defined(__HC_CAGPS__)	
	U16 ta = gAGPSParser.agpsdata.timing_advance;
#else
	U8 ta = g_cell_info_ta;
#endif
	U8 signal_level = srv_nw_info_get_signal_strength_in_percentage(MMI_SIM1);

	U8 bat_level =0; //g_bat_cntx.pct;

	U8 ps_state = g_sensor_cntx.ps_state;
	U8 ps_alarm_flag = g_sensor_cntx.ps_alarm_flag;
	U8 sos_state = g_sos_loop;
	U8 lowbat_flag =0 ;//g_bat_cntx.lowbat_flag;
	U8 gps_state[2];
	U8 lat[16];
	U8 N_S[4];
	U8 lon[16];
	U8 E_W[4];
	U8 speed[8];
	U8 direc[8];
	U8 elev[8];
	U8 sat_num[4];
		
	U8 time[8];
	U8 date[8];
	U8 cont_extra[32];
	U8 *cont = NULL;

	// check
	if (pbuf == NULL)
	{
		kal_prompt_trace(MOD_BT,"[sys] make info check error %d", __LINE__);
		return ret;
	}
	
	// get buffer
	media_get_ext_buffer(MOD_MMI, (void **)&cont, BUFFER_SIZE);
	if (cont == NULL)
	{
		kal_prompt_trace(MOD_BT,"[sys] make info get buffer error %d", __LINE__);
		return ret;
	}
	
	memset(cont, 0, BUFFER_SIZE);	
	
	// date time
	memset(date, 0, sizeof(date));
	memset(time, 0, sizeof(time));
	
	strcpy(date, gGprmcdate.date);
	strncpy(time, gGprmcdate.time, 6);

	// device state
	device_state = 0;
	if (ps_state) 
	{
		device_state |= (1 << 3);
		if (ps_alarm_flag) 
		{
			device_state |= (1 << 20);
		}
	}	

	if (sos_state)
	{
		device_state |= (1 << 16);
	}

	if (lowbat_flag) {
		device_state |= (1 << 0);
		device_state |= (1 << 17);
	}

	// motion sensor
	step = 0;
	turnover = 0;
	if (g_sensor_cntx.pedo_en)
	{
		step = g_sensor_cntx.pedo_step_count;
	}

	if (g_sensor_cntx.turnover_en)
	{
		turnover = g_sensor_cntx.turnover_count;
	}

	// gps info
	memset(lat, 0, sizeof(lat));
	memset(N_S, 0, sizeof(N_S));
	memset(lon, 0, sizeof(lon));
	memset(E_W, 0, sizeof(E_W));
	memset(speed, 0, sizeof(speed));
	memset(direc, 0, sizeof(direc));
	memset(elev, 0, sizeof(elev));
	memset(sat_num, 0, sizeof(sat_num));
kal_prompt_trace(MOD_BT,"====hc_make_location_info  gps_state=%s", gGprmcdate.state);
	strcpy(gps_state, gGprmcdate.state);
	strcpy(lat, gGprmcdate.lati);
	strcpy(N_S, gGprmcdate.N_S);
	strcpy(lon, gGprmcdate.longi);
	strcpy(E_W, gGprmcdate.E_W);
	strcpy(speed, gGprmcdate.speed);
	strcpy(direc, gGprmcdate.direc);
	strcpy(elev, gGGAData.elev);
	strcpy(sat_num, gGGAData.sat_num);	
	
	// build up
	sprintf(cont, "%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%08x,%d,%d,%d,%d,%d,%d,%d",
		prot, date, time, gps_state, lat, N_S, lon, E_W, speed, direc, elev, sat_num, 
		signal_level, bat_level, step, turnover, device_state, cell_num, ta, mcc, mnc, lac, ci, rxlev);

	for (i = 0; i < g_s_vm_sal_cell_nbr_num; i++) 
	{
		memset(cont_extra, 0, sizeof(cont_extra));
		sprintf(cont_extra, ",%d,%d,%d", g_s_vm_sal_nbr_cell_info[i].lac,
											g_s_vm_sal_nbr_cell_info[i].ci,
											g_s_vm_sal_nbr_cell_info[i].rxlev);
		strcat(cont, cont_extra);
	}

	cont_len = strlen(cont);
	if ((pbuf_size - cont_len) > 30)
	{
		ret = hc_make_send_data(pbuf, cont, cont_len);
	}

	// free buffer
	if (cont != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&cont);
	}
	
	return ret;
}

void hc_get_imei(void)
{
	//U8 imei_num[SRV_IMEI_MAX_LEN + 1] = "4522398242";
	U8 imei_num[SRV_IMEI_MAX_LEN + 1] = {0};

	srv_imei_get_imei(MMI_SIM1, imei_num, SRV_IMEI_MAX_LEN + 1);
	memcpy(HC_DEVICE_ID, imei_num, SRV_IMEI_MAX_LEN + 1);
}


MMI_BOOL hc_check_incoming_num(U8 *num_uri)
{
	U32 integer1, integer2;
	U8 i;

	if (g_is_silencemode)
	{
		return MMI_FALSE;
	}
	
    integer1 = srv_phb_sse_convert_number_to_int(num_uri);
	//kal_prompt_trace(MOD_BT,"1 %d", integer1);
	for (i = 0; i < 3; i++) 
	{
	    integer2 = srv_phb_sse_convert_number_to_int((CHAR *)family_num_st.family_num[i]);
		//kal_prompt_trace(MOD_BT,"2 %d", integer2);
	    if (integer1 == integer2)
	    {
	        return MMI_TRUE;
	    }
	}

	for (i = 0; i < 5; i++) 
	{
	    integer2 = srv_phb_sse_convert_number_to_int((CHAR *)whitelist1_num_st.whitelist1_num[i]);
		//kal_prompt_trace(MOD_BT,"2 %d", integer2);
	    if (integer1 == integer2)
	    {
	        return MMI_TRUE;
	    }
	}

	for (i = 0; i < 5; i++) 
	{
	    integer2 = srv_phb_sse_convert_number_to_int((CHAR *)whitelist2_num_st.whitelist1_num[i]);
		//kal_prompt_trace(MOD_BT,"2 %d", integer2);
	    if (integer1 == integer2)
	    {
	        return MMI_TRUE;
	    }
	}

	return MMI_FALSE;
}


void hc_al_timeout_hdlr(void)
{
	StopTimer(HC_SOC_AL_TIMEOUT);
	if (g_al_state == AL_IDLE)
		return;

	g_al_state = AL_IDLE;

	hc_al_hdlr();
}

#if 0
void hc_al_hdlr(void)
{
	U32 len;
	CHAR time[8];
	CHAR cont[256];
	CHAR send_data[256];
	CHAR extra_data[32];
	U8 signal_level, bat_level;
	U16 mcc, mnc;
	U8 i;
	U32 watch_state = 0;
	U32 step = 0;
	U32 turnover = 0;

	if (g_al_state == AL_SENDING)
	{
		return;
	}
	
	g_al_state = AL_SENDING;
	
	StopTimer(HC_SOC_AL_TIMEOUT);
	
	memset(time, 0, sizeof(time));
	memset(cont, 0, sizeof(cont));
	memset(send_data, 0, sizeof(send_data));

	time[0] = gGprmcdate.time[0];
	time[1] = gGprmcdate.time[1];
	time[2] = gGprmcdate.time[2];
	time[3] = gGprmcdate.time[3];
	time[4] = gGprmcdate.time[4];
	time[5] = gGprmcdate.time[5];

	signal_level = srv_nw_info_get_signal_strength_in_percentage(MMI_SIM1);
	bat_level = g_bat_cntx.pct;

	mcc = g_s_vm_sal_cur_cell_info.mcc;
	mnc = g_s_vm_sal_cur_cell_info.mnc;

	if (g_sensor_cntx.ps_state) {
		watch_state |= (g_sensor_cntx.ps_state << 3);
		if (g_sensor_cntx.ps_alarm_flag) {
			watch_state |= (g_sensor_cntx.ps_state << 20);
		}
	}

	if (g_sos_loop)
	{
		watch_state |= (1 << 16);
	}
		
	if (g_bat_cntx.lowbat_flag) {
		watch_state |= (g_bat_cntx.lowbat_flag << 0);
		watch_state |= (g_bat_cntx.lowbat_flag << 17);
	}


	//kal_prompt_trace(MOD_BT,"watch_state %08x %d", watch_state, watch_state);

	if (g_sensor_cntx.pedo_en)
	{
		step = g_sensor_cntx.pedo_step_count;
	}

	if (g_sensor_cntx.turnover_en)
	{
		turnover = g_sensor_cntx.turnover_count;
	}

	sprintf(cont, "%s,%s,%s,%c,%s,%s,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%08x,%d,%d,%d,%d", 
											HC_PROTL_AL, gGprmcdate.date, 
											time, GetGpsState()?'A':'V',
											gGprmcdate.lati, gGprmcdate.N_S,
											gGprmcdate.longi, gGprmcdate.E_W,
											gGprmcdate.speed, gGprmcdate.direc,
											gGGAData.elev, gGGAData.sat_num,
											signal_level, bat_level, step, turnover, watch_state,
											g_s_vm_sal_cell_nbr_num, gAGPSParser.agpsdata.timing_advance,
											mcc, mnc);

	
	for (i = 0; i < g_s_vm_sal_cell_nbr_num; i++) 
	{
		memset(extra_data, 0, sizeof(extra_data));
		sprintf(extra_data, ",%d,%d,%d", g_s_vm_sal_nbr_cell_info[i].lac,
											g_s_vm_sal_nbr_cell_info[i].ci,
											g_s_vm_sal_nbr_cell_info[i].rxlev);
		strcat(cont, extra_data);
		//kal_prompt_trace(MOD_BT,"%s", extra_data);
	}

	//kal_prompt_trace(MOD_BT,"%s", cont);
	len = strlen(cont);
	hc_make_send_data(send_data, cont, len);
	kal_prompt_trace(MOD_BT,"AL %s", send_data);

	#if defined(__HC_CLIENT__)
		hc_client_send(send_data, strlen(send_data));
	#else
		User_Socket_Send(send_data, strlen(send_data));
	#endif

	StartTimer(HC_SOC_AL_TIMEOUT, HC_SOC_AL_RSP_CHECK_TIME, hc_al_timeout_hdlr);
	g_al_state = AL_WAITE_RSP;
}
#else
void hc_al_hdlr(void)
{
	U8 *send_data = NULL;
	U32 send_size;

	if (g_al_state == AL_SENDING)
	{
		return;
	}
	
	g_al_state = AL_SENDING;
	StopTimer(HC_SOC_AL_TIMEOUT);

	if (hc_client_ready())
	{
		// malloc buffer
		media_get_ext_buffer(MOD_MMI, (void **)&send_data, UD2_CACHE_SIZE);
		if (send_data == NULL)
		{
			kal_prompt_trace(MOD_BT,"[sys] make info get buffer error %d", __LINE__);
			return;
		}

		memset(send_data, 0, UD2_CACHE_SIZE);

		send_size = hc_make_location_info(HC_PROTL_AL, send_data, UD2_CACHE_SIZE);
		hc_client_send(send_data, send_size);	

		//kal_prompt_trace(MOD_BT,"[ALARM] %s", send_data);	
		// free buffer
		if (send_data != NULL)
		{
			media_free_ext_buffer(MOD_MMI, (void **)&send_data);
		}

		StartTimer(HC_SOC_AL_TIMEOUT, HC_SOC_AL_RSP_CHECK_TIME, hc_al_timeout_hdlr);
		g_al_state = AL_WAITE_RSP;		
	}
}

#endif

void hc_stop_tone(void)
{
	srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
}


void hc_find_hdlr(void)
{
	CHAR send_data[64];

	if (SRV_PROF_RET_SUCCESS == srv_prof_play_tone(SRV_PROF_TONE_ALARM, NULL))
	{
		memset(send_data, 0, sizeof(send_data));
		hc_make_send_data(send_data, HC_PROTL_FIND, strlen(HC_PROTL_FIND));
		#if defined(__HC_CLIENT__)
		hc_client_send(send_data, strlen(send_data));
		#else
		User_Socket_Send(send_data, strlen(send_data)); 
		#endif
		StartTimer(HC_FIND_TONE_STOP_TIMER, 60*1000, hc_stop_tone);
	}
}

void hc_factory_hdlr(void)
{
	CHAR send_data[64];

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_FACTORY, strlen(HC_PROTL_FACTORY));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else	
	User_Socket_Send(send_data, strlen(send_data)); 
	#endif
	RstStartRestore();
}


void hc_poweroff_hdlr(void)
{
	CHAR send_data[64];

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_POWEROFF, strlen(HC_PROTL_POWEROFF));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else	
	User_Socket_Send(send_data, strlen(send_data));	
	#endif
	srv_shutdown_normal_start(0);
}


void hc_get_silence_mode(kal_int8 hours, kal_int8 minutes)
{
	U8 i;

	MMI_BOOL ret = MMI_FALSE;
	kal_int8 start_h, end_h;
	kal_int8 start_m, end_m;
#if 0	
	for (i = 0; i < SILENCE_MODE_MAX; i++)
	{	
		//kal_prompt_trace(MOD_BT,"loop: %d", i);
		if ((g_silence_mode.time[i].start.nHour != g_silence_mode.time[i].end.nHour)
				&& (g_silence_mode.time[i].start.nMin != g_silence_mode.time[i].end.nMin))
		{
			if (g_silence_mode.time[i].start.nHour > g_silence_mode.time[i].end.nHour)
			{
				if ((hours > g_silence_mode.time[i].start.nHour) || (hours < g_silence_mode.time[i].end.nHour))
				{
					g_is_silencemode = MMI_TRUE;
				}
				else
				{
					g_is_silencemode = MMI_FALSE;
				}
			}
			else
			{
				if ((hours > g_silence_mode.time[i].start.nHour) && (hours < g_silence_mode.time[i].end.nHour))
				{
					g_is_silencemode = MMI_TRUE;
				}
				else
				{
					g_is_silencemode = MMI_FALSE;
				}
			}

			if (g_is_silencemode)
			{
				return;
			}
			else
			{
				continue;
			}

			if ((hours == g_silence_mode.time[i].start.nHour) && (minutes > g_silence_mode.time[i].start.nMin))
			{
				g_is_silencemode = MMI_TRUE;
			} 
			else if ((hours == g_silence_mode.time[i].end.nHour) && (minutes < g_silence_mode.time[i].end.nMin))
			{
				g_is_silencemode = MMI_TRUE;
			}
			else
			{
				g_is_silencemode = MMI_FALSE;
			}

		}
		else if ((g_silence_mode.time[i].start.nHour == g_silence_mode.time[i].end.nHour)
				&& (g_silence_mode.time[i].start.nMin != g_silence_mode.time[i].end.nMin))
		{
			if (g_silence_mode.time[i].start.nMin < g_silence_mode.time[i].end.nMin)
			{
				if ((hours == g_silence_mode.time[i].start.nHour) && (minutes > g_silence_mode.time[i].start.nMin) && (minutes < g_silence_mode.time[i].end.nMin))
				{
					g_is_silencemode = MMI_TRUE;
				}
				else
				{
					g_is_silencemode = MMI_FALSE;
				}
			}
			else
			{
				if ((hours == g_silence_mode.time[i].start.nHour) && (minutes > g_silence_mode.time[i].end.nMin) && (minutes < g_silence_mode.time[i].start.nMin))
				{
					g_is_silencemode = MMI_FALSE;
				}
				else
				{
					g_is_silencemode = MMI_TRUE;
				}

			}		
		}
		else if ((g_silence_mode.time[i].start.nHour != g_silence_mode.time[i].end.nHour)
				&& (g_silence_mode.time[i].start.nMin == g_silence_mode.time[i].end.nMin))
		{
			if (g_silence_mode.time[i].start.nHour > g_silence_mode.time[i].end.nHour)
			{
				if ((hours > g_silence_mode.time[i].start.nHour) || (hours < g_silence_mode.time[i].end.nHour))
				{
					g_is_silencemode = MMI_TRUE;
				}
				else
				{
					g_is_silencemode = MMI_FALSE;
				}
			}
			else
			{
				if ((hours > g_silence_mode.time[i].start.nHour) && (hours < g_silence_mode.time[i].end.nHour))
				{
					g_is_silencemode = MMI_TRUE;
				}
				else
				{
					g_is_silencemode = MMI_FALSE;
				}
			}

			if (g_is_silencemode)
			{
				return;
			}
			else
			{
				continue;
			}
			
			if ((hours == g_silence_mode.time[i].start.nHour) && (minutes > g_silence_mode.time[i].start.nMin))
			{
				g_is_silencemode = MMI_TRUE;
			} 
			else if ((hours == g_silence_mode.time[i].end.nHour) && (minutes < g_silence_mode.time[i].end.nMin))
			{
				g_is_silencemode = MMI_TRUE;
			}
			else
			{
				g_is_silencemode = MMI_FALSE;
			}	

		}
		else
		{
			g_is_silencemode = MMI_FALSE;
		}

		if (g_is_silencemode)
		{
			return;
		}			
	}
#else

	//kal_prompt_trace(MOD_BT,"H: %d, M: %d", hours, minutes);
	for (i = 0; i < SILENCE_MODE_MAX; i++)
	{	
		//kal_prompt_trace(MOD_BT,"Loop: %d", i);
		start_h = g_silence_mode.time[i].start.nHour;
		start_m = g_silence_mode.time[i].start.nMin;
		end_h = g_silence_mode.time[i].end.nHour;
		end_m = g_silence_mode.time[i].end.nMin;	
		//kal_prompt_trace(MOD_BT,"Start H: %d, M: %d", start_h, start_m);
		//kal_prompt_trace(MOD_BT,"End H: %d, M: %d", end_h, end_m);
		if ((start_h == end_h) && (start_m == end_m))	
		{
			//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
			ret = MMI_FALSE;
		}
		else if (start_h != end_h)
		{
			//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
			if (start_h < end_h)
			{
				//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
				if (hours == start_h)
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					if (minutes > start_m)
					{
						//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
						ret = MMI_TRUE;
						goto exit;
					}
				}
				else if (hours == end_h)
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					if (minutes < end_m)
					{
						//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
						ret = MMI_TRUE;
						goto exit;
					}
				}	
				else if ((hours > start_h) && (hours < end_h))
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_TRUE;
					goto exit;
				}
				else
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_FALSE;
				}
			}
			else if (start_h > end_h)
			{
				//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
				if (hours == start_h)
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					if (minutes > start_m)
					{
						//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
						ret = MMI_TRUE;
						goto exit;
					}
				}
				else if (hours == end_h)
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					if (minutes < end_m)
					{
						//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
						ret = MMI_TRUE;
						goto exit;
					}
				}	
				else if ((hours > start_h) || (hours < end_h))
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_TRUE;
					goto exit;
				}
				else
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_FALSE;
				}				
			}
		}
		else
		{
			if (start_m < end_m)
			{
				//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
				if ((minutes > start_m) && (minutes < end_m))
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_TRUE;
					goto exit;
				}
				else
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_FALSE;
				}
			}
			else
			{
				//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
				if ((minutes > end_m) && (minutes < start_m))
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_FALSE;
				}
				else
				{
					//kal_prompt_trace(MOD_BT,"Line: %d", __LINE__);
					ret = MMI_TRUE;
					goto exit;
				}

			}		
		}
	}

exit:
	g_is_silencemode = ret;
	//kal_prompt_trace(MOD_BT,"silence mode: %d", g_is_silencemode);
	return;
#endif
}


void hc_silence_hdlr(U8 *pbuf, U32 len)
{
	CHAR temp[64];
	CHAR h[4];
	CHAR m[4];
	U8 i ,j, k;
	S16 error;
	MYTIME  currTime;
	kal_int8 hours, minutes;
	
	memset(temp, 0, sizeof(temp));
	hc_make_send_data(temp, HC_PROTL_SILENCETIME, strlen(HC_PROTL_SILENCETIME));
	hc_client_send(temp, strlen(temp));

	for (i = 0, j = 0; i < SILENCE_MODE_MAX; i++)
	{
		k = 0;
		memset(temp, 0, sizeof(temp));
		while(*(pbuf+j) != HC_CONTENT_SEPARTOR && j < len)
		{
			temp[k] = *(pbuf+j);
			j++;
			k++;
		}

		j++;

		//kal_prompt_trace(MOD_BT,"temp: %s", temp);

		memset(&g_silence_mode.time[i], 0, sizeof(hc_silence_mode_time_struck));
		// hh:mm-hh:mm, size 11
		if (strlen(temp) == 11)
		{
			U8 a = 0;

			for(; a < 2; a++)
			{
				 g_silence_mode.time[i].start.nHour = g_silence_mode.time[i].start.nHour*10 + (temp[a] - '0');
			}

			a++;
			
			for(; a < 5; a++)
			{
				 g_silence_mode.time[i].start.nMin = g_silence_mode.time[i].start.nMin*10 + (temp[a] - '0');
			}	

			//kal_prompt_trace(MOD_BT,"start %d:%d", g_silence_mode.time[i].start.nHour, g_silence_mode.time[i].start.nMin);
			
			a++;
			
			for(; a < 8; a++)
			{
				 g_silence_mode.time[i].end.nHour = g_silence_mode.time[i].end.nHour*10 + (temp[a] - '0');
			}

			a++;
			
			for(; a < 11; a++)
			{
				 g_silence_mode.time[i].end.nMin= g_silence_mode.time[i].end.nMin*10 + (temp[a] - '0');
			}	

			//kal_prompt_trace(MOD_BT,"end %d:%d", g_silence_mode.time[i].end.nHour, g_silence_mode.time[i].end.nMin);
		}
		
	}


	WriteRecord(NVRAM_EF_SILENCE_LID, 1, &g_silence_mode, NVRAM_EF_SILENCE_SIZE, &error);

	GetDateTime(&currTime);
	hours=currTime.nHour;
	minutes=currTime.nMin;	
	//kal_prompt_trace(MOD_BT,"hours:%d, min:%d", hours, minutes);

	hc_get_silence_mode(hours, minutes);	

	//kal_prompt_trace(MOD_BT,"g_is_silencemode:%d", g_is_silencemode);
}

S32 hc_set_alm_hdlr(U8 *ptime, U8 *pstate, U8 *ptype, U8 *pdate, U8 index)
{
	U8 days = 0;
	U8 hour = 0;
	U8 min = 0;
	U8 state = 0;
	U8 i;

	// hour min
	for (i = 0; *(ptime+i) != ':'; i++)
	{
		if (*(ptime+i) < '0' || *(ptime+i) > '9')
		{
			goto err;
		}
		hour = hour*10 + (*(ptime+i)-'0');
	}

	i++;

	for (; i < strlen(ptime); i++)
	{
		if (*(ptime+i) < '0' || *(ptime+i) > '9')
		{
			goto err;
		}
		min = min*10 + (*(ptime+i)-'0');
	}

	// state
	if (*pstate == '1')
		state = 1;
	else if (*pstate == '0')
		state = 0;
	else
		goto err;

	// type
	if (*ptype == '1')
		days = 0;
	else if (*ptype == '2')
		days = 0xff;
	else if (*ptype == '3') {
		for (i = 0; i < strlen(pdate); i++)
		{
			days |= ((*(pdate+i) - '0') << i);
		}
	} else
		goto err;

	user_config_h1_set_alarm(hour, min, days, state, index);
	return 1;
  err:
	return 0;	
}


void hc_remind_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	CHAR t[8];
	CHAR d[8];
	CHAR type[8];
	CHAR s[8];
	U8 i = 0, index = 0;
	U8 *outer_ptr = NULL;
	U8 *inner_ptr = NULL;	
	U8 *buf_p = NULL;
	U8 *buf = NULL;
	U8 *p;

	media_get_ext_buffer(MOD_MMI, (void **)&buf, len + 1);
	if (buf == NULL) {
		kal_prompt_trace(MOD_BT,"remind error 01");
		return;
	}

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_REMIND, strlen(HC_PROTL_REMIND));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else	
	User_Socket_Send(send_data, strlen(send_data));	
	#endif

	memset(buf, 0, len + 1);
	memcpy(buf, pbuf, len + 1);
	buf_p = buf;
	while((p = strtok_r(buf_p, ",", &outer_ptr)) != NULL) 
	{
		//kal_prompt_trace(MOD_BT,"p %s", p);
		memset(t, 0, sizeof(t));
		memset(d, 0, sizeof(d));
		memset(type, 0, sizeof(type));
		memset(s, 0, sizeof(s));
		///*
		buf_p = p;
		i = 0;
		while((p = strtok_r(buf_p, "-", &inner_ptr)) != NULL) 
		{
			switch (i%4)
			{
				case 0:
					strcpy(t, p);
					//kal_prompt_trace(MOD_BT,"t %s", t);
					break;
				case 1:
					strcpy(s, p);
					//kal_prompt_trace(MOD_BT,"s %s", s);
					break;
				case 2:
					strcpy(type, p);
					//kal_prompt_trace(MOD_BT,"type %s", type);
					break;
				case 3:
					strcpy(d, p);
					//kal_prompt_trace(MOD_BT,"d %s", d);
					break;
				default:
					break;
			}
			i++;
			buf_p = NULL;
		}

		hc_set_alm_hdlr(t, s, type, d, index);
		//*/
		buf_p = NULL;
		index++;
	}

	

	if (buf != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&buf);
	}	
	
}

void hc_monitor_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	CHAR num[SRV_UCM_MAX_NUM_URI_LEN];
	
	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_MONITOR, strlen(HC_PROTL_MONITOR));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else		
	User_Socket_Send(send_data, strlen(send_data));	
	#endif
	
	memset(num, 0x00, SRV_UCM_MAX_NUM_URI_LEN);
	memcpy(num, pbuf, len);
	//kal_prompt_trace(MOD_BT,"monitor: %s", num);
	g_special_action_call = 1;
	mmi_speed_dial_call2(num);
}

void hc_cr_hdlr(void)
{
	CHAR send_data[64];
	//CHAR msg[] = "RESET";
	U32 send_size;

	kal_prompt_trace(MOD_BT,"hc_cr_hdlr");

	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_CR, strlen(HC_PROTL_CR));
	hc_client_send(send_data, send_size);	

	hc_gps_set_work_state(gps_locating);
}

void hc_set_whitelist1_num(U8 *pbuf, U32 len)
{
	U32 i = 0;
	U32 j = 0;
	U32 k = 0;
	U8 temp[SRV_UCM_MAX_NUM_URI_LEN];
	CHAR send_data[64];

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_WHITELIST1, strlen(HC_PROTL_WHITELIST1));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else		
	User_Socket_Send(send_data, strlen(send_data)); 
	#endif
	
	memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);
	for (i = 0; i < len; i++)
	{
		if (*(pbuf+i) != HC_CONTENT_SEPARTOR) {
			temp[k++] = *(pbuf+i);
		} else {
			memcpy(whitelist1_num_st.whitelist1_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
			k = 0;
			j++;
			memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);			
		}
	}

	memcpy(whitelist1_num_st.whitelist1_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
	
	user_config_whitelist1_num_set_info(&whitelist1_num_st);

	//kal_prompt_trace(MOD_BT,"0: %s",family_num_st.family_num[0]);
	//kal_prompt_trace(MOD_BT,"1: %s",family_num_st.family_num[1]);
	//kal_prompt_trace(MOD_BT,"2: %s",family_num_st.family_num[2]);


}

void hc_set_whitelist2_num(U8 *pbuf, U32 len)
{
	U32 i = 0;
	U32 j = 0;
	U32 k = 0;
	U8 temp[SRV_UCM_MAX_NUM_URI_LEN];
	CHAR send_data[64];

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_WHITELIST2, strlen(HC_PROTL_WHITELIST2));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else		
	User_Socket_Send(send_data, strlen(send_data)); 
	#endif
	
	memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);
	for (i = 0; i < len; i++)
	{
		if (*(pbuf+i) != HC_CONTENT_SEPARTOR) {
			temp[k++] = *(pbuf+i);
		} else {
			memcpy(whitelist2_num_st.whitelist1_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
			k = 0;
			j++;
			memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);			
		}
	}

	memcpy(whitelist2_num_st.whitelist1_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
	
	user_config_whitelist2_num_set_info(&whitelist2_num_st);

	//kal_prompt_trace(MOD_BT,"0: %s",family_num_st.family_num[0]);
	//kal_prompt_trace(MOD_BT,"1: %s",family_num_st.family_num[1]);
	//kal_prompt_trace(MOD_BT,"2: %s",family_num_st.family_num[2]);


}


void hc_set_sos_num(U8 *pbuf, U32 len)
{
	U32 i = 0;
	U32 j = 0;
	U32 k = 0;
	U8 temp[SRV_UCM_MAX_NUM_URI_LEN];
	CHAR send_data[64];

	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_SOS, strlen(HC_PROTL_SOS));
	#if defined(__HC_CLIENT__)
	hc_client_send(send_data, strlen(send_data));
	#else		
	User_Socket_Send(send_data, strlen(send_data)); 
	#endif
	
	memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);
	for (i = 0; i < len; i++)
	{
		if (*(pbuf+i) != HC_CONTENT_SEPARTOR) {
			temp[k++] = *(pbuf+i);
		} else {
			memcpy(family_num_st.family_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
			k = 0;
			j++;
			memset(temp, 0x00, SRV_UCM_MAX_NUM_URI_LEN);			
		}
	}

	memcpy(family_num_st.family_num[j], temp, SRV_UCM_MAX_NUM_URI_LEN);
	
	user_config_custom_family_num_set_info(&family_num_st);

	//kal_prompt_trace(MOD_BT,"0: %s",family_num_st.family_num[0]);
	//kal_prompt_trace(MOD_BT,"1: %s",family_num_st.family_num[1]);
	//kal_prompt_trace(MOD_BT,"2: %s",family_num_st.family_num[2]);


}


void hc_set_flower_num(U8 *pbuf, U32 len)
{
	S16 error;
	CHAR send_data[64];
	S32 num = hc_str2num(pbuf, len);

	if (num >= 0)
	{
		memset(send_data, 0, sizeof(send_data));
		hc_make_send_data(send_data, HC_PROTL_FLOWER, strlen(HC_PROTL_FLOWER));
		#if defined(__HC_CLIENT__)
		hc_client_send(send_data, strlen(send_data));
		#else		
		User_Socket_Send(send_data, strlen(send_data));	
		#endif
		
		WriteRecord(NVRAM_EF_FLOWER_NUM_LID, 1, &num, NVRAM_EF_FLOWER_NUM_SIZE, &error);
		g_flower_num = num;
		hc_led_blink_set_work(hc_led_green, MMI_TRUE);
		HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_UPDATE_IDLESCREEN_REQ, NULL);
		//show_time_date();		
	}
}


void hc_set_ud_time(U8 *str_time, U32 len)
{
	U8 i;	
	S16 error;
	CHAR send_data[64];
	S32 num = hc_str2num(str_time, len);;

	kal_prompt_trace(MOD_BT,"========hc_set_ud_time entry");

	if ((num == 30) || (num == 60) || (num == 600) || (num == 3600)) 
	{		
		memset(send_data, 0, sizeof(send_data));
		hc_make_send_data(send_data, HC_PROTL_UPLOAD, strlen(HC_PROTL_UPLOAD));
	#if defined(__HC_CLIENT__)
		hc_client_send(send_data, strlen(send_data));
	#else		
		User_Socket_Send(send_data, strlen(send_data));
	#endif

		if (g_gps_cntx.work_state != gps_locating) // sleep work 
		{
			hc_ud_time = num;
			kal_prompt_trace(MOD_BT,"========hc_set_ud_time hc_upload_timer_hdlr hc_ud_time=%d",hc_ud_time );
			hc_upload_timer_hdlr();			
		}
		
		WriteRecord(NVRAM_EF_LOCATION_DATA_SEND_TIMER_LID, 1, &num, NVRAM_EF_LOCATION_DATA_SEND_TIMER_SIZE, &error); 

	}
}


//void hc_set_device_time(U8 *date_time, U32 len)
//{
//	applib_time_struct updateTime = {0};
//	U8 i, j;
//	CHAR date[16];
//	CHAR time[16];

//	memset(date, 0, sizeof(date));
//	memset(time, 0, sizeof(time));
//	for (i = 0, j = 0; *(date_time + i) != ' '; i++, j++)
//	{
//		date[j] = *(date_time + i);
//	}

//	for (i += 1, j = 0; i < len; i++, j++)
//	{
//		time[j] = *(date_time + i);
//	}

//	//kal_prompt_trace(MOD_BT,"date: %s", date);
//	//kal_prompt_trace(MOD_BT,"time: %s", time);


// date
//	for (i = 0; i < strlen(date); i++)
//	{
//		if (date[i] == '/')
//		{
//			break;
//		}
//		updateTime.nYear = updateTime.nYear*10 + (date[i] - '0');
//	}

//	for (i += 1; i < strlen(date); i++)
//	{
//		if (date[i] == '/')
//		{
//			break;
//		}
//		updateTime.nMonth = updateTime.nMonth*10 + (date[i] - '0');
//	}

//	for (i += 1; i < strlen(date); i++)
//	{
//		if (date[i] == '/')
//		{
//			break;
//		}
//		updateTime.nDay = updateTime.nDay*10 + (date[i] - '0');
//	}

// time
//	for (i = 0; i < strlen(time); i++)
//	{
//		if (time[i] == ':')
//		{
//			break;
//		}
//		updateTime.nHour = updateTime.nHour*10 + (time[i] - '0');
//	}

//	for (i += 1; i < strlen(time); i++)
//	{
//		if (time[i] == ':')
//		{
//			break;
//		}
//		updateTime.nMin = updateTime.nMin*10 + (time[i] - '0');
//	}

//	for (i += 1; i < strlen(time); i++)
//	{
//		if (time[i] == ':')
//		{
//			break;
//		}
//		updateTime.nSec = updateTime.nSec*10 + (time[i] - '0');
//	}

//	//kal_prompt_trace(MOD_BT,"set device time %d %d %d %d %d %d", updateTime.nYear, updateTime.nMonth, updateTime.nDay,
//	//																	updateTime.nHour, updateTime.nMin, updateTime.nSec);

//	mmi_dt_set_dt((const MYTIME*)&updateTime, NULL, NULL);
//}

S32 hc_set_device_time(U8 *date_time, U32 size)
{
	applib_time_struct updateTime = {0};
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	U8 len;
	CHAR date[16];
	CHAR time[16];
	CHAR filename[32];
	S32 error;
	S32 ret;
	U16 yr, mo, day, hr, min, sec;

	applib_time_struct phonetime = {0};

	memset(date, 0, sizeof(date));
	memset(time, 0, sizeof(time));
	start_p = date_time;
	end_p = strchr(start_p, ' ');
	if (end_p == NULL)
	{
		error = -1;
		goto err;
	}
	else
	{
		len = end_p - start_p;
		if (len > 0 && len < sizeof(date))
		{
			memcpy(date, start_p, len);
		}
		else
		{
			error = -11;
			goto err;		
		}
	}

	start_p = end_p + 1;
	len = size - len - 1;
	if (len > 0 && len < sizeof(date))
	{
		memcpy(time, start_p, len);
	}
	else
	{
		error = -2;
		goto err;
	}

	ret = sscanf(date, "%d/%d/%d", &yr, &mo, &day);
	if (ret != 3)
	{
		error = -3;
		goto err;
	}
	
	ret = sscanf(time, "%d:%d:%d", &hr, &min, &sec);
	if (ret != 3)
	{
		error = -4;
		goto err;
	}

	updateTime.nYear = yr;
	updateTime.nMonth = mo;
	updateTime.nDay = day;
	updateTime.nHour = hr;
	updateTime.nMin = min;
	updateTime.nSec = sec;
	//kal_prompt_trace(MOD_BT,"set device time %d %d %d %d %d %d", updateTime.nYear, updateTime.nMonth, updateTime.nDay,
	//																	updateTime.nHour, updateTime.nMin, updateTime.nSec);


	applib_dt_get_rtc_time(&phonetime);
	
	kal_prompt_trace(MOD_BT,"=============hc_set_device_time%d %d cur=%d %d ", min, sec, phonetime.nMin, phonetime.nSec);
	
	mmi_dt_set_dt((const MYTIME*)&updateTime, NULL, NULL);
	
	return 0;
err:
	kal_prompt_trace(MOD_BT,"[sys] Set device time error %d, %s", error, date_time);
	return error;
}

extern void hc_gps_epo_req_start();

void hc_recv_cont_parse(U8 *cont, U32 len)
{
	CHAR cmd_id[16];
	U32 i = 0, j = 0;
	static MMI_BOOL first_epo_ok = MMI_FALSE;
	
	memset(cmd_id, 0, sizeof(cmd_id));
	while ((*(cont+i) != HC_CONTENT_SEPARTOR) && (i < len)) {
		cmd_id[j] = *(cont+i);
		i++;
		j++;
	}
	//kal_prompt_trace(MOD_BT,"cmd_id: %s", cmd_id);
	if (i != len)
	{
		i++;
	}

	kal_prompt_trace(MOD_BT,"=============hc_recv_cont_parse cmd_id=%s hc_ud_time=%d", cmd_id ,hc_ud_time);
	
	if (strcmp(cmd_id, HC_PROTL_LK) == 0) {
		hc_set_lk_state(MMI_TRUE);
		if ((time_sync_state==0) && (len - i))
		{
			if (hc_set_device_time(cont+i, len-i) >= 0)
			{
				//time_sync_state = 0;
			}
		}

		time_sync_state++;
		//kal_prompt_trace(MOD_BT, "time_sync_state=%d",time_sync_state);
		if(time_sync_state>9){
			time_sync_state = 0;
		}

		kal_prompt_trace(MOD_BT,"=============hc_recv_cont_parse first_epo_ok ==MMI_FALSE " );
		if(first_epo_ok == MMI_FALSE){
			first_epo_ok = MMI_TRUE;
			hc_gps_epo_req_start();
		}
		else{
			if(IsMyTimerExist(HC_SOC_UD_TIMER)== MMI_FALSE){
				if(hc_ud_time<=3600){
					StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
				}
				else{
					kal_prompt_trace(MOD_BT,"hc_recv_cont_parse error");
					StartTimer(HC_SOC_UD_TIMER, 600*1000, hc_soc_upload_hdlr);
				}
			}
		}
			
	} 
	else if (strcmp(cmd_id, HC_PROTL_UD) == 0) {
			kal_prompt_trace(MOD_BT,"HC_PROTL_UD");
	} 
	else if (strcmp(cmd_id, HC_PROTL_UD2) == 0) {
			kal_prompt_trace(MOD_BT,"HC_PROTL_UD2");
	} 
	else if (strcmp(cmd_id, HC_PROTL_UPLOAD) == 0) {
		//if ((len - i) <= 1) {
		//	kal_prompt_trace(MOD_BT,"HC_PROTL_UPLOAD error");
		//	return;
		//}
		hc_set_ud_time(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_FLOWER) == 0) {
		//if ((len - i) <= 1) {
		//	kal_prompt_trace(MOD_BT,"HC_PROTL_FLOWER error");
		//	return;
		//}
		hc_set_flower_num(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_SOS) == 0) {
		hc_set_sos_num(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_WHITELIST1) == 0) {
		hc_set_whitelist1_num(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_WHITELIST2) == 0) {
		hc_set_whitelist2_num(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_MONITOR) == 0) {
		hc_monitor_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_REMOVE) == 0) {
		hc_remove_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_LOWBAT) == 0) {
		hc_lowbat_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_SOSSMS) == 0) {
		hc_sossms_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_PEDO) == 0) {
		hc_pedo_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_REMIND) == 0) {
		hc_remind_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_POWEROFF) == 0) {
		hc_poweroff_hdlr();
	} else if (strcmp(cmd_id, HC_PROTL_FACTORY) == 0) {
		hc_factory_hdlr();
	} else if (strcmp(cmd_id, HC_PROTL_FIND) == 0) {
		hc_find_hdlr();
	} else if (strcmp(cmd_id, HC_PROTL_AL) == 0) {
		g_al_state = AL_IDLE;
	} else if (strcmp(cmd_id, HC_PROTL_PHOTO) == 0) {
		hc_photo_recv_process_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_SILENCETIME) == 0) {
		hc_silence_hdlr(cont+i, len-i);
	} else if (strcmp(cmd_id, HC_PROTL_TK) == 0) {
		if (len - i == 1)
		{
			hc_tk_upload_hdlr(cont+i, len-i);
		}
		else if (len - i > 1)
		{
			hc_tk_dl_hdlr(cont+i, len-i);
		}
	} else if (strcmp(cmd_id, HC_PROTL_CENTER) == 0) {
		hc_set_center_num(cont+i, len-i);	
	} else if (strcmp(cmd_id, HC_PROTL_CR) == 0) {
		hc_cr_hdlr();
	} else if (strcmp(cmd_id, HC_PROTL_EPO) == 0) {
		hc_gps_epo_rsp_hdlr(cont+i, len-i);
	}	
}

//S32 hc_soc_recv_hdlr(U8 *rbuf)
//{
//	U32 i, j, k;
//	CHAR customer_id[4];
//	CHAR device_id[SRV_IMEI_MAX_LEN + 1];
//	CHAR cont_len[8];
//	U32 len = 0;

//	memset(customer_id, 0x00, sizeof(customer_id));
//	memset(device_id, 0x00, sizeof(device_id));
//	memset(cont_len, 0x00, sizeof(cont_len));
//	
//	if (rbuf[0] != HC_BRACKETS_HEAD) {
//		kal_prompt_trace(MOD_BT,"recv error 01");
//		return -1;
//	}

//	for (i = 0, j = 0; i < 3; i++) {
//		k = 0;
//		j++;
//		while (*(rbuf+j) != HC_SEPARTOR) {
//			switch (i) {
//				case 0:
//					customer_id[k] = *(rbuf+j);
//					break;
//				case 1:
//					device_id[k] = *(rbuf+j);
//					break;
//				case 2:
//					cont_len[k] = *(rbuf+j);
//					break;

//				default:
//					break;
//			}
//			
//			j++;
//			k++;
//		}
//	}

//	//kal_prompt_trace(MOD_BT,"customer_id: %s", customer_id);
//	//kal_prompt_trace(MOD_BT,"device_id: %s", device_id);
//	//kal_prompt_trace(MOD_BT,"cont_len: %s", cont_len);

//	if (strcmp(customer_id, HC_RX_CUSTOMER_ID)) {
//		kal_prompt_trace(MOD_BT,"recv error 02");
//		return -2;
//	}

//	if (strcmp(device_id, HC_DEVICE_ID)) {
//		kal_prompt_trace(MOD_BT,"recv error 03");
//		return -3;
//	}

//	sscanf(cont_len, "%x", &len);

//	j++;

//	if (*(rbuf+j+len) != HC_BRACKETS_END) {
//		kal_prompt_trace(MOD_BT,"recv error 04");
//		return -4;
//	}
//	
//	hc_recv_cont_parse(rbuf+j, len);

//	return j+len+1;
//}

S32 hc_soc_recv_hdlr(U8 *rbuf, S32 rbuf_size)
{
	U8 *start_p = NULL;
	U8 *end_p = NULL;
	S32 error = 0;
	S32 offset = 0;
	S32 parse = 0;
	
	CHAR customer_id[4];
	CHAR device_id[SRV_IMEI_MAX_LEN + 1];
	CHAR len_str[8];
	U32 len = 0;
	

	memset(customer_id, 0x00, sizeof(customer_id));
	memset(device_id, 0x00, sizeof(device_id));
	memset(len_str, 0x00, sizeof(len_str));
	

	strncpy(len_str,rbuf,4);
	strncpy(device_id,rbuf+5,15);
	hc_recv_cont_parse(rbuf+23, strlen(rbuf+23));
	return strlen(rbuf+23);
	#if 0
	if (*rbuf != HC_BRACKETS_HEAD) {
		error = -1;
		goto err;
	}

	start_p = rbuf + 1;
	end_p = strchr(start_p, HC_SEPARTOR);
	if (end_p == NULL)
	{
		error = -2;
		goto err;	
	}
	else
	{
		offset = end_p - start_p;
		if (offset >= sizeof(customer_id))
		{
			error = -21;
			goto err;
		}
		else
		{
			if (offset > 0)
			{
				strncpy(customer_id, start_p, offset);
			}
			else
			{
				error = -22;
				goto err;				
			}
		}		
	}

	start_p = end_p + 1;
	end_p = strchr(start_p, HC_SEPARTOR);
	if (end_p == NULL)
	{
		error = -3;
		goto err;	
	}
	else
	{
		offset = end_p - start_p;
		if (offset >= sizeof(device_id))
		{
			error = -31;
			goto err;
		}
		else
		{
			if (offset > 0)
			{
				strncpy(device_id, start_p, offset);
			}
			else
			{
				error = -32;
				goto err;				
			}
		}		
	}

	start_p = end_p + 1;
	end_p = strchr(start_p, HC_SEPARTOR);
	if (end_p == NULL)
	{
		error = -4;
		goto err;	
	}
	else
	{
		offset = end_p - start_p;
		if (offset >= sizeof(len_str))
		{
			error = -41;
			goto err;
		}
		else
		{
			if (offset > 0)
			{
				strncpy(len_str, start_p, offset);
			}
			else
			{
				error = -42;
				goto err;				
			}
		}		
	}


	//kal_prompt_trace(MOD_BT,"customer_id: %s", customer_id);
	//kal_prompt_trace(MOD_BT,"device_id: %s", device_id);
	//kal_prompt_trace(MOD_BT,"cont_len: %s", cont_len);

	if (strcmp(customer_id, HC_RX_CUSTOMER_ID)) {
		error = -5;
		goto err;
	}

	if (strcmp(device_id, HC_DEVICE_ID)) {
		error = -6;
		goto err;
	}

	if (1 != sscanf(len_str, "%x", &len)) {
		error = -7;
		goto err;
	}

	start_p = end_p + 1;
	
	parse = (start_p - rbuf) + len + 1;
	if (parse <= rbuf_size)
	{
		hc_recv_cont_parse(start_p, len);
		return parse;
	}
	else
	{
		error = -8;
		goto err;	
	}
	#endif
err:
	kal_prompt_trace(MOD_BT,"[debug] Soc read parse error %d", error);
	return error;
}

//U8 cur_read_cache_index = 0;
//MMI_BOOL isSendingGPSCache = MMI_FALSE;

void hc_ud2_timer_cb(void)
{
	U8 *rbuff;
	
	media_get_ext_buffer(MOD_MMI, (void **)&rbuff, UD2_CACHE_SIZE);
//	kal_prompt_trace(MOD_BT,"[debug] ud2 get buffer");
	if (rbuff == NULL)
	{
		kal_prompt_trace(MOD_BT,"[debug] ud2 upload get buffer failed");
		return;
	}

	memset(rbuff, 0, UD2_CACHE_SIZE);
	if (hc_fs_ud2_read_cache(rbuff, UD2_CACHE_SIZE) > 0) // , cur_read_cache_index 
	{
		//++cur_read_cache_index;
		hc_client_send(rbuff, strlen(rbuff));
		//isSendingGPSCache = MMI_TRUE;
//		gui_start_timer(5000, hc_ud2_timer_cb);
		StartTimer(HC_UD2_TIMER, 25000, hc_ud2_timer_cb);
	}
	else
	{
		//cur_read_cache_index = 0;
		if (hc_fs_ud2_recreate_cache() == 0) // dont delete old data for test
		{
//			kal_prompt_trace(MOD_BT,"[debug] ud2 cache recreate success");
		}

	}

	if (rbuff != NULL)
	{
//		kal_prompt_trace(MOD_BT,"[debug] ud2 free buffer");
		media_free_ext_buffer(MOD_MMI, (void **)&rbuff);
	}
}

S32 hc_ud2_hdlr(void* msg)
{
	U8 i;
	U8 *rbuff;

	//kal_prompt_trace(MOD_BT,"[debug] ud2 upload start");
	#if 0
	for (i = 0; i < UD2_CACHE_MAX; i++)
	{
		if (g_ud2_cache.cache[i][0])
		{
			hc_client_send(g_ud2_cache.cache[i], strlen(g_ud2_cache.cache[i]));
			memset(g_ud2_cache.cache[i], 0, UD2_CACHE_SIZE);
		}
	}
	#else

//	media_get_ext_buffer(MOD_MMI, (void **)&rbuff, UD2_CACHE_SIZE);
//	if (rbuff == NULL)
//	{
//		kal_prompt_trace(MOD_BT,"[debug] ud2 upload get buffer failed");
//		return;
//	}
//	
//	for (i = 0; i < UD2_CACHE_MAX; i++)
//	{
//		if (hc_fs_ud2_read_cache(rbuff, UD2_CACHE_SIZE, i) > 0)
//		{
//			hc_client_send(rbuff, strlen(rbuff));
//		}
//		else
//		{
//			break;	
//		}
//	}

//	if (rbuff != NULL)
//	{
//		media_free_ext_buffer(MOD_MMI, (void **)&rbuff);
//	}

//	if (hc_fs_ud2_recreate_cache() == 0)
//	{
//		//kal_prompt_trace(MOD_BT,"[debug] ud2 cache recreate success");
//	}

//	return 0;

//	gui_start_timer(5000, hc_ud2_timer_cb);
	StartTimer(HC_UD2_TIMER, 5000, hc_ud2_timer_cb);
	#endif
	//kal_prompt_trace(MOD_BT,"[debug] ud2 upload stop");
}

#if 0
void hc_soc_upload_hdlr(void)
{
	U32 len;
	CHAR time[8];
	CHAR cont[256];
	CHAR send_data[256];
	CHAR extra_data[32];
	U8 signal_level, bat_level;
	U16 mcc, mnc;
	U8 i;
	U32 watch_state = 0;
	U32 step = 0;
	U32 turnover = 0;

	uddata_is_sending = MMI_TRUE;
	
	StopTimer(HC_SOC_UD_TIMER);
	StopTimer(HC_GPS_OPEN_TIMER);
	
	memset(time, 0, sizeof(time));
	memset(cont, 0, sizeof(cont));
	memset(send_data, 0, sizeof(send_data));

	time[0] = gGprmcdate.time[0];
	time[1] = gGprmcdate.time[1];
	time[2] = gGprmcdate.time[2];
	time[3] = gGprmcdate.time[3];
	time[4] = gGprmcdate.time[4];
	time[5] = gGprmcdate.time[5];

	signal_level = srv_nw_info_get_signal_strength_in_percentage(MMI_SIM1);
	bat_level = g_bat_cntx.pct;

	mcc = g_s_vm_sal_cur_cell_info.mcc;
	mnc = g_s_vm_sal_cur_cell_info.mnc;

	if (g_sensor_cntx.ps_state) {
		watch_state |= (g_sensor_cntx.ps_state << 3);
		if (g_sensor_cntx.ps_alarm_flag) {
			watch_state |= (g_sensor_cntx.ps_state << 20);
		}
	}

	if (g_sos_loop)
	{
		watch_state |= (1 << 16);
	}

	if (g_bat_cntx.lowbat_flag) {
		watch_state |= (g_bat_cntx.lowbat_flag << 0);
		watch_state |= (g_bat_cntx.lowbat_flag << 17);
	}


	if (g_sensor_cntx.pedo_en)
	{
		step = g_sensor_cntx.pedo_step_count;
	}

	if (g_sensor_cntx.turnover_en)
	{
		turnover = g_sensor_cntx.turnover_count;
	}

#if 0
	if (hc_client_ready())
	{
		sprintf(cont, "%s,%s,%s,%c,%s,%s,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%08x,%d,%d,%d,%d", 
												HC_PROTL_UD, gGprmcdate.date, 
												time, GetGpsState()?'A':'V',
												gGprmcdate.lati, gGprmcdate.N_S,
												gGprmcdate.longi, gGprmcdate.E_W,
												gGprmcdate.speed, gGprmcdate.direc,
												gGGAData.elev, gGGAData.sat_num,
												signal_level, bat_level, step, turnover, watch_state,
												g_s_vm_sal_cell_nbr_num, gAGPSParser.agpsdata.timing_advance,
												mcc, mnc);
	}
	else
	{
		sprintf(cont, "%s,%s,%s,%c,%s,%s,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%08x,%d,%d,%d,%d", 
												HC_PROTL_UD2, gGprmcdate.date, 
												time, GetGpsState()?'A':'V',
												gGprmcdate.lati, gGprmcdate.N_S,
												gGprmcdate.longi, gGprmcdate.E_W,
												gGprmcdate.speed, gGprmcdate.direc,
												gGGAData.elev, gGGAData.sat_num,
												signal_level, bat_level, step, turnover, watch_state,
												g_s_vm_sal_cell_nbr_num, gAGPSParser.agpsdata.timing_advance,
												mcc, mnc);
	}
#else
	sprintf(cont, "%s,%s,%s,%c,%s,%s,%s,%s,%s,%s,%s,%s,%d,%d,%d,%d,%08x,%d,%d,%d,%d", 
											HC_PROTL_UD, gGprmcdate.date, 
											time, GetGpsState()?'A':'V',
											gGprmcdate.lati, gGprmcdate.N_S,
											gGprmcdate.longi, gGprmcdate.E_W,
											gGprmcdate.speed, gGprmcdate.direc,
											gGGAData.elev, gGGAData.sat_num,
											signal_level, bat_level, step, turnover, watch_state,
											g_s_vm_sal_cell_nbr_num, gAGPSParser.agpsdata.timing_advance,
											mcc, mnc);
#endif

	for (i = 0; i < g_s_vm_sal_cell_nbr_num; i++) 
	{
		memset(extra_data, 0, sizeof(extra_data));
		sprintf(extra_data, ",%d,%d,%d", g_s_vm_sal_nbr_cell_info[i].lac,
											g_s_vm_sal_nbr_cell_info[i].ci,
											g_s_vm_sal_nbr_cell_info[i].rxlev);
		strcat(cont, extra_data);
		//kal_prompt_trace(MOD_BT,"%s", extra_data);
	}

	//kal_prompt_trace(MOD_BT,"%s", cont);
	len = strlen(cont);
	hc_make_send_data(send_data, cont, len);
	kal_prompt_trace(MOD_BT,"UD %s", send_data);

#if 1
	if (hc_client_ready())
	{
		hc_client_send(send_data, strlen(send_data));
	}
	else
	{
		memset(g_ud2_cache.cache[g_ud2_cache.cur_index], 0, UD2_CACHE_SIZE);
		memcpy(g_ud2_cache.cache[g_ud2_cache.cur_index], send_data, UD2_CACHE_SIZE);
		g_ud2_cache.cur_index++;
		if (g_ud2_cache.cur_index == UD2_CACHE_MAX)
		{
			g_ud2_cache.cur_index = 0;
		}
	}
#else
	
	hc_client_send(send_data, strlen(send_data));

#endif

	if (g_gps_cntx.work_state == gps_locating)
	{
		StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
	}
	else
	{
		if (hc_ud_time > 60)
		{
			U32 wake_timer = hc_ud_time - 120;
			kal_prompt_trace(MOD_BT,"hc_soc_upload_hdlr");
			hc_gps_set_work_state(gps_sleep);
			if (hc_ud_time == 600)
			{
				wake_timer = hc_ud_time - 120;
			}
			else if (hc_ud_time == 3600)
			{
				wake_timer = hc_ud_time - 180;
			}
			
			StartTimer(HC_GPS_OPEN_TIMER, wake_timer * 1000, hc_gps_wake_hdlr);
		}

		StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
	}
	
	uddata_is_sending = MMI_FALSE;
}
#else
void hc_upload_timer_hdlr(void)
{
	U32 wake_timer = 0;

	kal_prompt_trace(MOD_BT,"==hc_upload_timer_hdlr hc_ud_time=%d work_state=%d",hc_ud_time, g_gps_cntx.work_state );

	StopTimer(HC_SOC_UD_TIMER);
	StopTimer(HC_GPS_OPEN_TIMER);
	
	if (g_gps_cntx.work_state == gps_locating)
	{
		kal_prompt_trace(MOD_BT,"====hc_upload_timer_hdlr hc_soc_upload_hdlr gps_locating" );
		//StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
		StartTimer(HC_SOC_UD_TIMER, 60*1000, hc_soc_upload_hdlr);
	}
	else
	{
		if (hc_ud_time > 60)
		{
			//kal_prompt_trace(MOD_BT,"hc_soc_upload_hdlr");
			if(mmi_frm_scrn_get_active_id() != SCR_ID_FM_GPS_TEST){
				hc_gps_set_work_state(gps_sleep);
				if (hc_ud_time == 600)
				{
					wake_timer = hc_ud_time - 120;
				}
				else if (hc_ud_time == 3600)
				{
					wake_timer = hc_ud_time - 180;
				}
				else // (hc_ud_time == 600)
				{
					kal_prompt_trace(MOD_BT,"hc_upload_timer_hdlr error");
					wake_timer = hc_ud_time - 120;
				}

				kal_prompt_trace(MOD_BT,"=======hc_upload_timer_hdlr wake_timer=%d hc_gps_wake_hdlr",wake_timer);
				StartTimer(HC_GPS_OPEN_TIMER, wake_timer*1000, hc_gps_wake_hdlr);
			}				

		}
		else
		{
			kal_prompt_trace(MOD_BT,"========hc_upload_timer_hdlr hc_gps_wake_hdlr" );
			hc_gps_wake_hdlr();
		}

		kal_prompt_trace(MOD_BT,"====hc_upload_timer_hdlr hc_soc_upload_hdlr" );
		StartTimer(HC_SOC_UD_TIMER, hc_ud_time*1000, hc_soc_upload_hdlr);
	}

}

MMI_BOOL gprsActiveTest = MMI_TRUE;



void hc_soc_upload_hdlr(void)
{
	U8 *send_data = NULL;
	U32 send_size;

	kal_prompt_trace(MOD_BT,"========hc_soc_upload_hdlr entry hc_ud_time=%d", hc_ud_time );

	if(strlen(g_epo_cntx.filename)<=0){
		kal_prompt_trace(MOD_BT,"hc_soc_upload_hdlr filename is empty" );
		goto exit;
	}
	
	// malloc buffer
	media_get_ext_buffer(MOD_MMI, (void **)&send_data, UD2_CACHE_SIZE);
	if (send_data == NULL)
	{
		kal_prompt_trace(MOD_BT,"[sys] make info get buffer error %d", __LINE__);
		goto exit;
	}

	memset(send_data, 0, UD2_CACHE_SIZE);
	if (hc_client_ready()  )
	{
		send_size = hc_make_location_info(HC_PROTL_UD, send_data, UD2_CACHE_SIZE);
		hc_client_send(send_data, send_size);		
	}
	else
	{
		if(hc_gps_get_state() ){ // save gps info only 
			send_size = hc_make_location_info(HC_PROTL_UD2, send_data, UD2_CACHE_SIZE);
			#if 0
			memset(g_ud2_cache.cache[g_ud2_cache.cur_index], 0, UD2_CACHE_SIZE);
			memcpy(g_ud2_cache.cache[g_ud2_cache.cur_index], send_data, send_size);
			g_ud2_cache.cur_index++;
			if (g_ud2_cache.cur_index == UD2_CACHE_MAX)
			{
				g_ud2_cache.cur_index = 0;
			}	
			#endif
			if(hc_fs_ud2_write_cache(send_data, UD2_CACHE_SIZE) > 0)
			{
				//kal_prompt_trace(MOD_BT,"[debug] write ud2 cache success");	
			}
		}
	}


	
	//kal_prompt_trace(MOD_BT,"[UPLOAD] %s", send_data);	
	// free buffer
	if (send_data != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&send_data);
	}	

exit:

	kal_prompt_trace(MOD_BT,"========hc_soc_upload_hdlr hc_upload_timer_hdlr" );
	hc_upload_timer_hdlr();
	return;
}

#endif

void hc_link_keep_start_timer(void)
{
	StartTimer(HC_SOC_LINK_KEEP_TIMER, HC_SOC_LINK_KEEP_TIME, hc_link_keep_hdlr);
	StartTimer(HC_SOC_LK_TIMEOUT, HC_SOC_LK_RSP_CHECK_TIME, hc_link_keep_timeout_hdlr);
}

void hc_link_keep_stop_timer(void)
{
	StopTimer(HC_SOC_LINK_KEEP_TIMER);
	StopTimer(HC_SOC_LK_TIMEOUT);
}

void hc_link_keep_timeout_hdlr(void)
{
	MMI_BOOL ret = hc_get_lk_state();

	kal_prompt_trace(MOD_BT,"=============hc_link_keep_timeout_hdlr" );

	if (ret)
	{
		g_lk_data.lk_error_cout = 0;
		//if (!g_lk_data.handshake)
		//{
		//	g_lk_data.handshake = MMI_TRUE;
		//}
		return;
	}
	else
	{
		kal_prompt_trace(MOD_BT,"[LK] Timeout");
		g_lk_data.lk_error_cout++;
		if (g_lk_data.lk_error_cout == 2)	// 连续2 次心跳包没回复，强制重启连接。
		{
			kal_prompt_trace(MOD_BT,"[LK] Restart");
			g_lk_data.lk_error_cout = 0;
			//g_lk_data.handshake = MMI_FALSE;

			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_RECONNECT_SERVER_REQ, NULL);
		}
		else
		{
			hc_link_keep_hdlr();
		}
	}
}

void hc_utc_test(void)
{
//	U32 utc_sec;
//	FLOAT timezone;
//	MYTIME temp, UtcTime;
//	
//	utc_sec = hc_get_utc_sec();
//	timezone = mmi_dt_get_tz();
//	kal_prompt_trace(MOD_BT,"utc_sec %d", utc_sec);
//	mmi_dt_utc_sec_2_mytime(utc_sec, &temp, MMI_TRUE);
//	mmi_dt_utc_to_rtc(timezone, temp, UtcTime);
//	kal_prompt_trace(MOD_BT,"%d/%d/%d", UtcTime.nYear, UtcTime.nMonth, UtcTime.nDay);
//	kal_prompt_trace(MOD_BT,"%d:%d:%d", UtcTime.nHour, UtcTime.nMin, UtcTime.nSec);

    applib_time_struct utc_time;
    applib_time_struct rtc_time;

	applib_dt_get_rtc_time(&rtc_time);
	applib_dt_rtc_to_utc_with_default_tz(&rtc_time, &utc_time);
	kal_prompt_trace(MOD_BT,"%04d/%02d/%02d", utc_time.nYear, utc_time.nMonth, utc_time.nDay);
	kal_prompt_trace(MOD_BT,"%02d:%02d:%02d", utc_time.nHour, utc_time.nMin, utc_time.nSec);
}

void hc_link_keep_hdlr(void)
{
	U32 len;
	U8 bat_level = 0;//g_bat_cntx.pct;
	CHAR cont[64];
	CHAR send_data[96];
	S16 error;

	kal_prompt_trace(MOD_BT,"=============hc_link_keep_hdlr" );

	hc_link_keep_stop_timer();
	hc_set_lk_state(MMI_FALSE);
	memset(cont, 0, sizeof(cont));
	memset(send_data, 0, sizeof(send_data));	
	
	if (g_sensor_cntx.pedo_en && g_sensor_cntx.turnover_en)
	{
		sprintf(cont, "%s,%d,%d,%d", HC_PROTL_LK, g_sensor_cntx.pedo_step_count, g_sensor_cntx.turnover_count, bat_level);
	}
	else if (!g_sensor_cntx.pedo_en && g_sensor_cntx.turnover_en)
	{
		sprintf(cont, "%s,0,%d,%d", HC_PROTL_LK, g_sensor_cntx.turnover_count, bat_level);
	}
	else if (g_sensor_cntx.pedo_en && !g_sensor_cntx.turnover_en)
	{
		sprintf(cont, "%s,%d,0,%d", HC_PROTL_LK, g_sensor_cntx.pedo_step_count, bat_level);
	}
	else
	{
		sprintf(cont, "%s,0,0,%d", HC_PROTL_LK, bat_level);
	}

	if (g_sensor_cntx.pedo_en)
	{
		WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
	}
		
	len = hc_make_send_data(send_data, cont, strlen(cont));
	hc_client_send(send_data, len);

	hc_link_keep_start_timer();

//	hc_utc_test();
}

void hc_reconnect_server_hdlr(void)
{
	kal_prompt_trace(MOD_BT,"[debug] reconnect server");
	hc_link_keep_stop_timer();
	hc_tkq_timer_stop();
	hc_client_restart_from_ext();
}

#if defined(__HC_CLIENT__)

void hc_epo_http_parse_rsp_head(U8 *rsp, U32 *server_status, U32 *total_len)
{
	S32 offset;
	U8 *pStatus = strstr(rsp, "HTTP/1.1");
	U8 *pLen = strstr(rsp, "Content-Length:");

	if (pStatus)
	{
		pStatus += strlen("HTTP/1.1");
		offset = 1;
		while (*(pStatus + offset) == ' ') ++offset;
		*server_status = atoi(pStatus + offset);		
	}
	else
	{
		*server_status = 0;
	}

	if (pLen)
	{
		pLen += strlen("Content-Length:");
		offset = 1;
		while (*(pLen + offset) == ' ') ++offset;
		*total_len = atoi(pLen + offset);		
	}
	else
	{
		*total_len = 0;
	}
}

S32 hc_epo_http_get_rsp_head(U8 *rsp, S32 max)
{
	U8 *p;
	U8 CRLFCRLF[] = "\r\n\r\n";
	S32 ret = 0;

	p = strstr(rsp, CRLFCRLF);
	if (p == NULL)
	{
		return 0;
	}

	ret = p + strlen(CRLFCRLF) - rsp;
	if (ret > max)
	{
		return 0;
	}
	
	return ret;
}

void hc_epo_http_download(hc_client_data *pClient)
{
	U8 *recv_p = NULL;
	S32 recv_size = 0;
	S32 parse_size = 0;
	S32 rsp_len;
	U32 server_status;
	U32 total_len;
	FS_HANDLE fd = -1;

	recv_size = pClient->socket_data_ptr->recv_data_size;
	// malloc buffer ++
	media_get_ext_buffer(MOD_MMI, (void **)&recv_p, recv_size + 1);
	if (recv_p == NULL )
	{
		kal_prompt_trace(MOD_BT,"[EPO] Http download error");
		return;
	}
	memset(recv_p, 0, recv_size + 1);
	// malloc buffer --

	memcpy(recv_p, pClient->socket_data_ptr->recv_buffer, recv_size);
	memset(pClient->socket_data_ptr->recv_buffer, 0, HC_SOC_RECV_BUFFER_SIZE + 1);
	pClient->socket_data_ptr->recv_data_size = 0;	

	rsp_len = hc_epo_http_get_rsp_head(recv_p, recv_size);
	if (rsp_len)
	{
		hc_epo_http_parse_rsp_head(recv_p, &server_status, &total_len);
//		kal_prompt_trace(MOD_BT,"[EPO] Sserver_status %d", server_status);
//		kal_prompt_trace(MOD_BT,"[EPO] total_len %d", total_len);
		switch(server_status) 
		{
			case 200:
				if (total_len > 0)
				{
					hc_fs_epo_save_local_file(g_epo_cntx.filename, recv_p + rsp_len, recv_size - rsp_len);
				}
				break;
			default:
				break;
		}		
	}
	else
	{
		hc_fs_epo_save_local_file(g_epo_cntx.filename, recv_p, recv_size);
	}
	
	// free buffer ++
	if (recv_p != NULL	) 
	{
		media_free_ext_buffer(MOD_MMI, (void **)&recv_p);
	}
	// free buffer --
}

void hc_epo_http_assemble(hc_client_data *pClient)
{
	U8 *m_requestheader = NULL;
	UINT head_length;
	UINT BUFFER_SIZE = 256;
	U8 addr[32];
	
	media_get_ext_buffer(MOD_MMI, (void **)&m_requestheader, BUFFER_SIZE);
	if (!m_requestheader)
	{
		return;
	}

	memset(m_requestheader, 0, BUFFER_SIZE);
	memset(addr, 0, sizeof(addr));
	sprintf(addr, "%d.%d.%d.%d:%d", g_epo_cntx.addr.addr[0], g_epo_cntx.addr.addr[1],
					g_epo_cntx.addr.addr[2], g_epo_cntx.addr.addr[3], g_epo_cntx.addr.port);
	// http://120.25.66.222/EPO/20151016.EPO
	strcat(m_requestheader, "GET ");
//	strcat(m_requestheader, "/EPO/20151016.EPO");
	strcat(m_requestheader, g_epo_cntx.path);
	strcat(m_requestheader, " HTTP/1.1");
	strcat(m_requestheader, "\r\n");

	strcat(m_requestheader, "Host: ");
//	strcat(m_requestheader, "120.25.66.222:80");
	strcat(m_requestheader, addr);
	strcat(m_requestheader, "\r\n");

	strcat(m_requestheader,"Accept: */*");
	strcat(m_requestheader, "\r\n");

	strcat(m_requestheader,"Connection: close");
	strcat(m_requestheader, "\r\n");
	strcat(m_requestheader, "\r\n");

	head_length = strlen(m_requestheader);

	memcpy(pClient->socket_data_ptr->send_buffer + pClient->socket_data_ptr->send_data_size, m_requestheader, head_length);
	pClient->socket_data_ptr->send_data_size += head_length;

	if (m_requestheader != NULL)
	{
		media_free_ext_buffer(MOD_MMI, (void **)&m_requestheader);
	}

}

void hc_epo_callback_hdlr(hc_client_data *client_data, hc_client_event event)
{
	U8 *recv_data_p = NULL;
	S32 recv_data_size = 0;
	S32 parse_data_size = 0;

	if (client_data == NULL)
	{
		kal_prompt_trace(MOD_BT,"epo client is null");
		return;
	}

	switch (event)
	{
		case HC_CLIENT_EVENT_DOWNLOAD:
			hc_epo_http_download(client_data);
			break;
		case HC_CLIENT_EVENT_CONNECTING:
			hc_epo_http_assemble(client_data);
			break;
		case HC_CLIENT_EVENT_CLOSE:
			kal_prompt_trace(MOD_BT,"hc_epo_callback_hdlr  HC_CLIENT_EVENT_CLOSE");
			hc_release_client((hc_client_data **)&client_data);
			g_hc_epo_client_ptr = NULL;
//			hc_epo_uart_write_hdlr();
			if (hc_fs_epo_check_local_file_exist(g_epo_cntx.filename) && !hc_gps_get_state()  && gps_data_post_idle_entry == 0)
			{
				kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_CLOSE hc_gps_epo_uart_write_hdlr");
				hc_gps_epo_uart_write_hdlr();
			}

			break;
		default:
			break;

	}
}

void hc_app_callback_hdlr(hc_client_data *client_data, hc_client_event event)
{
	U8 *recv_data_p = NULL;
	S32 recv_data_size = 0;
	S32 parse_data_size = 0;

	if (client_data == NULL)
	{
		kal_prompt_trace(MOD_BT,"client is null");
		return;
	}

	switch (event)
	{
		case HC_CLIENT_EVENT_DOWNLOAD:
			recv_data_size = client_data->socket_data_ptr->recv_data_size;
			media_get_ext_buffer(MOD_MMI, (void **)&recv_data_p, recv_data_size + 1);
			if (recv_data_p == NULL	)
			{
				kal_prompt_trace(MOD_BT,"app alloc mem error");
				break;
			}
			memset(recv_data_p, 0, recv_data_size + 1);
			memcpy(recv_data_p, client_data->socket_data_ptr->recv_buffer, recv_data_size);
			
			memset(client_data->socket_data_ptr->recv_buffer, 0, HC_SOC_RECV_BUFFER_SIZE + 1);
			client_data->socket_data_ptr->recv_data_size = 0;
			

			while (recv_data_size > 0)
			{
				parse_data_size = hc_soc_recv_hdlr(recv_data_p, recv_data_size);
				kal_prompt_trace(MOD_BT,"[recv] process: %d", parse_data_size);
				
				if (parse_data_size < 0)
				{	
					switch (parse_data_size)
					{
						case -1:
						case -5:
						case -6:
						case -7:	
						case -21:
						case -22:
						case -31:
						case -32:
						case -41:
						case -42:
							memset(recv_data_p, 0, recv_data_size + 1);
							recv_data_size = 0;
							break;
						case -2:
						case -3:
						case -4:	
						case -8:	
							memcpy(client_data->socket_data_ptr->recv_buffer, recv_data_p, recv_data_size);
							client_data->socket_data_ptr->recv_data_size = recv_data_size;
							recv_data_size = 0;
							break;
						default:
							break;
					}
				}
				else
				{
					recv_data_size -= parse_data_size;
					
					if (recv_data_size > 0)
					{
						memcpy(recv_data_p, recv_data_p + parse_data_size, recv_data_size);
					}
				}
			}
			
			if (recv_data_p != NULL	) 
			{
				media_free_ext_buffer(MOD_MMI, (void **)&recv_data_p);
			}
			
			break;
		case HC_CLIENT_EVENT_CONNECT:
			kal_prompt_trace(MOD_BT,"=============HC_CLIENT_EVENT_CONNECT" );
			
		#if 1
//			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_EPO_REQ, NULL);
			
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_UPLOAD2_REQ, NULL);

			//hc_gps_epo_req_timer_start();

			hc_tkq_timer_start();
			//hc_soc_upload_hdlr();
			hc_link_keep_hdlr();

			hc_scan_ud_folder();

//			hc_tkq_hdlr();
		#else
			kal_prompt_trace(MOD_BT,"[debug] socket id: %d", client_data->socket_data_ptr->socket_id);
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_RECONNECT_SERVER_REQ, NULL);
		#endif
			break;
		case HC_CLIENT_EVENT_CONNECTING:
			//HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_GPS_START_REQ, NULL);
			break;
		case HC_CLIENT_EVENT_CLOSE:
			hc_release_client((hc_client_data **)&client_data);
			g_hc_client_data_ptr = NULL;
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_RECONNECT_SERVER_REQ, NULL);
			break;
		default:
			break;
	}
}


void hc_sntp_callback_hdlr(hc_client_data *client_data, hc_client_event event)
{
	U8 *recv_data_p = NULL;
	S32 recv_data_size = 0;
	S32 parse_data_size = 0;

	kal_prompt_trace(MOD_BT,"hc_sntp_callback_hdlr");
		
	if (client_data == NULL)
	{
		kal_prompt_trace(MOD_BT,"client is null");
		return;
	}

	switch (event)
	{
		case HC_CLIENT_EVENT_DOWNLOAD:
			kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_DOWNLOAD");
			
			recv_data_size = client_data->socket_data_ptr->recv_data_size;
			media_get_ext_buffer(MOD_MMI, (void **)&recv_data_p, recv_data_size + 1);
			if (recv_data_p == NULL)
			{
				kal_prompt_trace(MOD_BT,"app alloc mem error");
				break;
			}
			memset(recv_data_p, 0, recv_data_size + 1);
			memcpy(recv_data_p, client_data->socket_data_ptr->recv_buffer, recv_data_size);
			
			memset(client_data->socket_data_ptr->recv_buffer, 0, HC_SOC_RECV_BUFFER_SIZE + 1);
			client_data->socket_data_ptr->recv_data_size = 0;
			

			while (recv_data_size > 0)
			{
				parse_data_size = hc_soc_recv_hdlr(recv_data_p, recv_data_size);
				kal_prompt_trace(MOD_BT,"[recv] process: %d", parse_data_size);
				
				if (parse_data_size < 0)
				{	
					switch (parse_data_size)
					{
						case -1:
						case -5:
						case -6:
						case -7:	
						case -21:
						case -22:
						case -31:
						case -32:
						case -41:
						case -42:
							memset(recv_data_p, 0, recv_data_size + 1);
							recv_data_size = 0;
							break;
						case -2:
						case -3:
						case -4:	
						case -8:	
							memcpy(client_data->socket_data_ptr->recv_buffer, recv_data_p, recv_data_size);
							client_data->socket_data_ptr->recv_data_size = recv_data_size;
							recv_data_size = 0;
							break;
						default:
							break;
					}
				}
				else
				{
					recv_data_size -= parse_data_size;
					
					if (recv_data_size > 0)
					{
						memcpy(recv_data_p, recv_data_p + parse_data_size, recv_data_size);
					}
				}
			}
			
			if (recv_data_p != NULL	) 
			{
				media_free_ext_buffer(MOD_MMI, (void **)&recv_data_p);
			}
			
			break;
		case HC_CLIENT_EVENT_CONNECT:
			kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_CONNECT");
			
		#if 1
//			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_EPO_REQ, NULL);
			
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_UPLOAD2_REQ, NULL);

			hc_gps_epo_req_timer_start();

			hc_tkq_timer_start();
			//hc_soc_upload_hdlr();
			hc_link_keep_hdlr();

			hc_scan_ud_folder();

//			hc_tkq_hdlr();
		#else
			kal_prompt_trace(MOD_BT,"[debug] socket id: %d", client_data->socket_data_ptr->socket_id);
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_RECONNECT_SERVER_REQ, NULL);
		#endif
			break;
		case HC_CLIENT_EVENT_CONNECTING:
			kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_CONNECTING");
			//HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_GPS_START_REQ, NULL);
			break;
		case HC_CLIENT_EVENT_CLOSE:
			kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_CLOSE");
			hc_release_client((hc_client_data **)&client_data);
			g_hc_client_data_ptr = NULL;
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_RECONNECT_SERVER_REQ, NULL);
			break;
		default:
			break;
	}
}

#endif

// 检查网络状态
MMI_BOOL hc_get_nw_status(void)
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

#include "mmi_cb_mgr_gprot.h"
#include "ModeSwitchSrvGprot.h"
extern MMI_BOOL srv_mode_switch_switch_flight_mode(MMI_BOOL flight_mode_on, MMI_BOOL check_sim, mmi_proc_func callback, void *user_data);

//mmi_flight_mode_switch_rsp

static mmi_ret hcflight_mode_switch_rsp(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_at_general_res_req_struct *rsp_msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (((srv_mode_switch_rsp_event_struct*)evt)->result)
    {
		kal_prompt_trace(MOD_BT,"======mmi_flight_mode_switch_rsp true");
    }
    else{
		kal_prompt_trace(MOD_BT,"======mmi_flight_mode_switch_rsp false");
    }
	
	 return MMI_RET_OK;   
	 
}

void hc_test_gprs_active_true(){
	gprsActiveTest = MMI_TRUE;
	kal_prompt_trace(MOD_BT,"======hc_test_gprs_active_true");
	srv_mode_switch_switch_flight_mode( MMI_FALSE, MMI_TRUE, hcflight_mode_switch_rsp, NULL);
	
}
void hc_test_gprs_active_false(){
	gprsActiveTest = MMI_FALSE;
	kal_prompt_trace(MOD_BT,"======hc_test_gprs_active_false");
	srv_mode_switch_switch_flight_mode(  MMI_TRUE, MMI_TRUE, hcflight_mode_switch_rsp, NULL);
	//StartTimer(CWH_TEST_TIMER, 1000*300, hc_test_gprs_active_true);
}





void hc_check_nw_timer(void)
{
	U32 delay = 5*1000; // 10
	
	StopTimer(HC_NW_CHECK_TIMER);
	if (hc_get_nw_status())
	{
		hc_get_imei();
		if (HC_DEVICE_ID[0] == NULL)
		{
			kal_prompt_trace(MOD_BT,"[sys] error! imei is NULL");
			return;
		}
		
		// gps
		hc_gps_init();
		
		// cell info ++
	#ifdef __CUSTOM_CELL_INFO__
		user_config_cell_info_start_req();
	#endif
	#if defined(__HC_CAGPS__)
		cagps_open();
	#endif
		// cell info --

		// socket
	#if defined(__HC_CLIENT__)	
		hc_client_start();
		//hc_client_sntp();
	#endif
		return;
	}

	kal_prompt_trace(MOD_BT,"[sys] warning! network is not ready");
	StartTimer(HC_NW_CHECK_TIMER, delay, hc_check_nw_timer);


	//StartTimer(CWH_TEST_TIMER, 1000*300, hc_test_gprs_active_false);
}

extern check_plmn_info_remain();

// 设备程序总入口
void hc_main_entry(void)
{
	hc_sensor_init();

	hc_fs_init();
		
#if defined(__HC_BAT__)
	hc_bat_check_timer();
#endif
	hc_fs_delete_all_photo();
	// 扫描未读语音
	hc_scan_dl_folder();

	hc_check_nw_timer();


	// post gps epo data if file is avaliable
	//hc_gps_set_work_state(gps_locating);
	{
/*	applib_time_struct utc_time;
	applib_time_struct rtc_time;
	char filename[32] = {0};

	applib_dt_get_rtc_time(&rtc_time);
	applib_dt_rtc_to_utc_with_default_tz(&rtc_time, &utc_time);
	
	sprintf(filename, "%4d%02d%02d.EPO", utc_time.nYear,  utc_time.nMonth, utc_time.nDay);
	kal_prompt_trace(MOD_BT,"======hc_main_entry filename=%s  hc_get_nvram_enable=%d", filename, hc_get_nvram_enable() );
	if(utc_time.nYear>=2015  && hc_fs_epo_check_local_file_exist(filename)  ){
		if( hc_get_nvram_enable() == 1 ){
			kal_prompt_trace(MOD_BT,"hc_main_entry gps_data_post_idle_entry 1");
			//hc_gps_set_work(MMI_TRUE);
			gps_data_post_idle_entry = 1; // nv 
			//StartTimer(HC_EPO_REQ_TIMER, 300, hc_gps_epo_uart_write_hdlr); 
		}
		else{
			gps_data_post_idle_entry = 2; // plmn
			kal_prompt_trace(MOD_BT,"hc_main_entry gps_data_post_idle_entry 2");
		}
		
		

	}
	else{
		gps_data_post_idle_entry = 0;
		kal_prompt_trace(MOD_BT,"hc_main_entry gps_data_post_idle_entry 0");
	}
	*/

	//hc_gps_epo_send_assistance_data();
	//hc_ud_time = 60;
	//hc_upload_timer_hdlr();
	/*StartTimer(HC_GPS_LOCATING_TIMER, g_gps_cntx.locating_timer, hc_gps_locating_timer_hdlr);
			
	if (hc_fs_epo_check_local_file_exist(g_epo_cntx.filename) && !hc_gps_get_state()  )
	{
		kal_prompt_trace(MOD_BT,"HC_CLIENT_EVENT_CLOSE entry");
		hc_gps_epo_uart_write_hdlr();
	}*/
	}
	
}

void hc_test(void)
{
	U8 send_data[64];
	
	memset(send_data, 0, sizeof(send_data));
	hc_make_send_data(send_data, HC_PROTL_PHOTO, strlen(HC_PROTL_PHOTO));	
	hc_client_send(send_data, strlen(send_data));
}
