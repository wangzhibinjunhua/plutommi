#if defined(__HC_SENSOR__)
#include "MMI_include.h"
#include "nvram_common_defs.h"
#include "common_nvram_editor_data_item.h"

#include "HcWatchDefine.h"
#include "HcSensor.h"
#include "mmi_rp_app_factorymode_def.h"

#include "HcFs.h"

nvram_ef_hc_sensor_cntx_struck g_sensor_cntx;

extern hc_fs_ud2_cache_struck g_ud2_cache_cntx;


extern kal_uint8 g_ps_state;

void hc_remove_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	U32 send_size;
	S16 error;
	
	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_REMOVE, strlen(HC_PROTL_REMOVE));
	hc_client_send(send_data, send_size);

	if (*pbuf == '1')
	{
		g_sensor_cntx.ps_alarm_flag = 1;
	}
	else if (*pbuf == '0')
	{
		g_sensor_cntx.ps_alarm_flag = 0;
	}
	
	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);

	if (g_sensor_cntx.ps_alarm_flag && g_sensor_cntx.ps_state)
	{
		hc_al_hdlr();
	}
}

void hc_pedo_hdlr(U8 *pbuf, U32 len)
{
	CHAR send_data[64];
	U32 send_size;
	S16 error;

	memset(send_data, 0, sizeof(send_data));
	send_size = hc_make_send_data(send_data, HC_PROTL_PEDO, strlen(HC_PROTL_PEDO));
	hc_client_send(send_data, send_size);

	if (*pbuf == '1') {
		if (!g_sensor_cntx.pedo_en) {
			g_sensor_cntx.pedo_en = 1;
			mmi_start_pedometer(1);
			HcWatchPostMessage(MOD_MMI, MOD_MMI, MSG_ID_HC_UPDATE_IDLESCREEN_REQ, NULL);
		}
	} else if (*pbuf == '0') {
		if (g_sensor_cntx.pedo_en) {
			g_sensor_cntx.pedo_en = 0;
			mmi_start_pedometer(0);
		}			
	}

	WriteRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);
}

S32 hc_turnover_detect_hdlr(void* msg)
{
	if (g_sensor_cntx.turnover_en)
	{
		mmi_start_turnover(1);
	}
	else
	{
		mmi_start_turnover(0);
	}

	return 0;
}

S32 hc_sensor_ps_get_state(void* msg)
{
	static U8 state_change_num=0;
	
	g_sensor_cntx.ps_state = g_ps_state;

	//kal_prompt_trace(MOD_BT, "hc_sensor_ps_get_state entry");
	if(mmi_frm_scrn_get_active_id()==SCR_ID_FM_DISTANCE_TEST){

		state_change_num++;
		if(state_change_num>3){
			MYQUEUE Message;
			state_change_num = 0;

			//kal_prompt_trace(MOD_BT, "hc_sensor_ps_get_state send");
			Message.oslSrcId = MOD_MMI;
			Message.oslDestId = MOD_MMI;
			Message.oslMsgId = MSG_ID_HC_DISTANCE_SENSOR_AVALIABLE_REQ;
			
			Message.oslDataPtr = NULL;// (oslParaType *)pLocalParam;
			Message.oslPeerBuffPtr = NULL;
			OslMsgSendExtQueue(&Message);	
		}
	}
		
	if (g_sensor_cntx.ps_alarm_flag && g_sensor_cntx.ps_state)
	{
		hc_al_hdlr();
	}

	return 0;
}

void hc_sensor_init(void)
{
	S16 error;
	
	memset(&g_sensor_cntx, 0, sizeof(nvram_ef_hc_sensor_cntx_struck));
	ReadRecord(NVRAM_EF_HC_SENSOR_CNTX_LID, 1, &g_sensor_cntx, NVRAM_EF_HC_SENSOR_CNTX_SIZE, &error);

	//g_ud2_cache_cntx.wIndex = g_sensor_cntx.wIndex;
	//g_ud2_cache_cntx.rIndex = g_sensor_cntx.rIndex;

	SetProtocolEventHandler(hc_sensor_ps_get_state, MSG_ID_HC_PS_STATE_IND);
	SetProtocolEventHandler(hc_turnover_detect_hdlr, MSG_ID_HC_TURNOVER_DETECT_REQ);
	//	ps
	ap3426_entry();
	// ¼Æ²½
	if (g_sensor_cntx.pedo_en) {
	  mmi_start_pedometer(1);
	}
}

U8 get_gps_test_count(void)
{
	return g_sensor_cntx.gps_test_count;
}


#endif
