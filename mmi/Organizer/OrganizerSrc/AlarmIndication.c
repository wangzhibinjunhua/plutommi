/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
 *
 * Filename:
 * ---------
 *  AlarmIndication.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  Coding Template header file
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
    #include "MMI_features.h"

/*****************************************************************************
 * Header files
 *****************************************************************************/
#include "Mdi_audio.h"
#include "ProfilesSrvGprot.h"
#include "mmi_rp_srv_prof_def.h"
#include "mmi_rp_app_profiles_def.h"
#include "GpioSrvGprot.h"

#include "AlarmProt.h"
#include "AlarmDef.h"
#include "AlarmGProt.h"
#include "AlarmFrameworkProt.h"
#include "HomeScreenOp11V32Gprot.h"
#include "AzaanAlarmProt.h"
#include "PoweronChargerProt.h"

#include "BootupSrvGprot.h"
#include "AlarmsrvGprot.h"
#include "mmi_rp_srv_reminder_def.h"
    #include "custom_mmi_default_value.h"
    #include "MMIDataType.h"
    #include "DateTimeType.h"
    #include "app_datetime.h"
    #include "string.h"
    #include "MMI_common_app_trc.h"
    #include "DebugInitDef_Int.h"
    #include "kal_trace.h"
    #include "mmi_frm_scenario_gprot.h"
    #include "wgui_categories_util.h"
    #include "NotificationGprot.h"
    #include "mmi_frm_events_gprot.h"
    #include "GlobalResDef.h"
    #include "mmi_rp_app_alarm_def.h"
    #include "mmi_frm_input_gprot.h"
    #include "GlobalConstants.h"
    #include "wgui_categories_list.h"
    #include "TimerEvents.h"
    #include "mmi_frm_timer_gprot.h"
    #include "gui_typedef.h"
    #include "gui_data_types.h"
    #include "Unicodexdcl.h"
    #include "CustDataRes.h"
    #include "wgui_categories_popup.h"
    #include "mmi_frm_history_gprot.h"
    #include "wgui_categories.h"
    #include "custom_srv_prof_defs.h"
    #include "custom_led_patterns.h"
    #include "mmi_common_app_trc.h"
    #include "kal_general_types.h"
#ifdef __MMI_DEV_NEW_SLIM__
	#include "gdi_include.h"
	#include "ReminderSrvGprot.h"
#endif

#include "gui_touch_feedback.h"
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
#include "ScrLockerGprot.h"
#include "mmi_rp_app_scr_locker_def.h"
#endif    

#ifdef __MMI_WEARABLE_DEVICE_ALARM__
#include "wgui_swatch_common_pen_handle.h"
#include "gdi_include.h"

#include "mmi_frm_events_gprot.h"
#include "btcmsrvgprot.h"
#include "idlegprot.h"
#include "ScrLockerGprot.h"
#ifdef __MMI_A2DP_SUPPORT__
#include "a2dpsrvgprot.h"
#endif
#ifdef __MMI_BLE_PXP_SUPPORT__	
#include "PxpAppGprot.h"
#endif/*__MMI_BLE_PXP_SUPPORT__	*/

#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
#define __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/


#define BT_NOTIFY_SYNC_LANGUAGE_CMD "EXCD"
#define BT_NOTIFY_SYNC_LANGUAGE_SENDER "language auto sync"
#define BT_NOTIFY_SYNC_LANGUAGE_RECEIVER "mtk_language"
//extern mmi_alm_app_mem_cntx_struct *mmi_alm_app_mem_p;
swatch_alm_cell_info swatch_alarm_indication_cell;
void *g_alm_ind_mem_ptr = NULL;
mmi_pen_point_struct down;
extern stFontAttribute MMI_larger_font;
#define  ALM_TRIANGLE_DURATION     66       

extern MMI_BOOL alm_sync_state;

#endif
/*****************************************************************************
 * Typedef  
 *****************************************************************************/


/*****************************************************************************
 * Define
 *****************************************************************************/
#define ALARM_TONE_IN_CALL SRV_PROF_TONE_SMS_INCALL

/*****************************************************************************
 * Global Variables 
 *****************************************************************************/

/*****************************************************************************
 * Local function 
 *****************************************************************************/
static void AlmReInitQueueCBH(void);
#ifdef __MMI_RTC_TEST_SLIM__
static void AlmExpiryHandlerCB(U8 index, U16 *period, BOOL power_on, srv_reminder_type reminder_type);
#else
static U8 AlmExpiryHandlerCB(U8 index, U16 *period, BOOL power_on);
#endif
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
static void mmi_alm_entry_watch_indication_screen(void);
static void mmi_sync_alm_entry_watch_indication_screen(void);
void AlmSyncStopHandler(void);
static mmi_ret mmi_alm_sync_group_leave_proc(mmi_event_struct* evt);
static void mmi_sync_alm_power_key_proc(void);
MMI_BOOL send_sync_alarm_cmd_to_sp();
#else
static void mmi_alm_entry_indication_screen(void);
#endif
static void AlmHandleEndKey(void);
static void ExitAlmIndicationScreen(void);
static void mmi_alm_stop_vibrate(void);
static srv_prof_ret mmi_alm_play_tone_callback(srv_prof_ret result);
static void mmi_alm_play_tone(void);
#ifdef __MMI_ALM_CUST_VOLUME__
static void AlmPlayAlarmToneWithVol(U8 volume);
#endif
static mmi_ret mmi_alm_group_leave_proc(mmi_event_struct* evt);

static void mmi_alm_stop_int(void);

static MMI_BOOL g_mmi_alm_self_close = MMI_FALSE;
static MMI_BOOL g_mmi_alm_play_tone = MMI_FALSE;
static MMI_BOOL g_mmi_alm_play_vib = MMI_FALSE;

#ifdef MOTION_SENSOR_SUPPORT
static SRV_SENSOR_HANDLE g_sensor_handle = 0;
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_alm_remdr_notify_hdlr
 * DESCRIPTION
 *  Set callback function needed by alarm framework
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_alm_remdr_notify_hdlr(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                					   */
    /*----------------------------------------------------------------*/
	srv_reminder_evt_struct *remdr_evt;
	U16 period;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      					   */
    /*----------------------------------------------------------------*/
	if (evt->evt_id != EVT_ID_SRV_REMINDER_NOTIFY)
	{
		return MMI_RET_OK;
	}
	
	remdr_evt = (srv_reminder_evt_struct *)evt;
	MMI_ALM_TRACE2(MMI_ALM_REMDR_NOTIFY_HDLR, remdr_evt->reminder_type, remdr_evt->notify);
	
#ifdef __MMI_RTC_TEST_SLIM__
	if (remdr_evt->reminder_type != SRV_REMINDER_TYPE_ALM && 
		remdr_evt->reminder_type != SRV_REMINDER_TYPE_TOTAL&&
		remdr_evt->reminder_type != SRV_REMINDER_TYPE_FACTORY)     
#else
	if (remdr_evt->reminder_type != SRV_REMINDER_TYPE_ALM && 
		remdr_evt->reminder_type != SRV_REMINDER_TYPE_TOTAL)
#endif
	{
		return MMI_RET_OK;
	}
	
	switch(remdr_evt->notify)
	{
		case SRV_REMINDER_NOTIFY_INIT:
			srv_alm_init(NULL);
			AlmInitNvram();
			break;
			
		case SRV_REMINDER_NOTIFY_EXPIRY:
	#ifdef __MMI_WEARABLE_DEVICE_ALARM__
		if(mmi_get_alm_autosync_status() && remdr_evt->usr_data != NUM_OF_ALM-1)
		{
			srv_reminder_notify_finish(MMI_FALSE);
			kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_2,"alarm sync on, index != 5,don't expire");
			break;
		}
		else
	#endif /*__MMI_WEARABLE_DEVICE_ALARM__*/		
		{
	#ifdef __MMI_RTC_TEST_SLIM__
			AlmExpiryHandlerCB(remdr_evt->usr_data, &period, !remdr_evt->pwr_off, remdr_evt->reminder_type);
	#else
			AlmExpiryHandlerCB(remdr_evt->usr_data, &period, !remdr_evt->pwr_off);
    #endif
  
			break;
		}

		case SRV_REMINDER_NOTIFY_REINIT:
			AlmReInitQueueCBH();
			break;

		case SRV_REMINDER_NOTIFY_DEINIT:
			AlmSnoozeHandler();
			break;
#ifndef __MMI_DEV_NEW_SLIM__
		default:
			break;
#endif
	}

	return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  AlmReInitQueueCBH
 * DESCRIPTION
 *  Callback handler of reiniting alarm to alarm queue.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void AlmReInitQueueCBH(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_ALM_TRACE0(MMI_ALM_REINIT_Q);
	
	srv_alm_reset_reminder();
#if 0
#if defined( __MMI_OP11_HOMESCREEN_0301__) || defined(__MMI_OP11_HOMESCREEN_0302__)
/* under construction !*/
#endif
#endif  
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
#ifdef __MMI_BT_NOTI_SRV__
	mmi_alm_bootup_cancel_invalid_alarm();
#endif
#endif/*__MMI_WEARABLE_DEVICE_ALARM__*/
}


/*****************************************************************************
 * FUNCTION
 *  mmi_alm_nmgr_expiry_callback
 * DESCRIPTION
 *  Display indication screen and play alarm tone when alarm expires.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_BOOL mmi_alm_nmgr_expiry_callback(mmi_scenario_id scen_id, void *arg)
{

#ifndef __MMI_DEV_NEW_SLIM__ 
	if (g_alm_frm_cntx.CurrAlmIndex == 0xFF)
	{
		return MMI_TRUE;
	}
#endif
    g_mmi_alm_self_close = MMI_TRUE;
		mmi_frm_group_close(GRP_ID_ALM_IND);
    
    EntryAlmIndicationScreen();
    
    return MMI_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  AlmExpiryHandlerCB
 * DESCRIPTION
 *  CallBack handler to execute alarm expiry.
 * PARAMETERS
 *  index           [IN]        
 *  period          [?]         
 *  power_on        [IN]        
 *  BOOL(?)         [IN]        Power status
 *  U8(?)           [IN]        Index of alarm item
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __MMI_RTC_TEST_SLIM__
static void AlmExpiryHandlerCB(U8 index, U16 *period, BOOL power_on, srv_reminder_type reminder_type)    
{

		g_alm_cntx.active_alm_idx = index;
		//kal_prompt_trace(MOD_MMI ,"AlmExpiryHandlerCB,reminder_type:%d ",reminder_type);   //__MMI_DEV_NEW_SLIM__
	
		if (power_on)
		{
			if(reminder_type == SRV_REMINDER_TYPE_FACTORY)
			{
				//kal_prompt_trace(MOD_MMI ,"power on ");
				srv_reminder_notify_finish(MMI_FALSE);
			}
			else
	
			{
				update_mainlcd_dt_display();
				
				mmi_frm_nmgr_notify_by_app(MMI_SCENARIO_ID_REMINDER_ALARM,
											 MMI_EVENT_REMINDER_ALARM,
											 mmi_alm_nmgr_expiry_callback,
											 NULL);
			}
		}
		else
		{
		
			if(reminder_type == SRV_REMINDER_TYPE_FACTORY)
			{	
				//kal_prompt_trace(MOD_MMI ,"power off ");
				srv_reminder_notify_finish(MMI_TRUE);
			}
			else
		
			{
				gdi_init();				
				mmi_frm_nmgr_notify_by_app(MMI_SCENARIO_ID_REMINDER_ALARM,
												 MMI_EVENT_REMINDER_ALARM,
												 mmi_alm_nmgr_expiry_callback,
												 NULL);
			}
		}

		return;
	}



#else
static U8 AlmExpiryHandlerCB(U8 index, U16 *period, BOOL power_on)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL ret;
    srv_alm_node_type *node = (srv_alm_node_type *)srv_alm_read(index);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	g_alm_cntx.active_alm_idx = index;
    if (power_on)
    {
        update_mainlcd_dt_display();
        ret = mmi_frm_nmgr_notify_by_app(MMI_SCENARIO_ID_REMINDER_ALARM,
                                         MMI_EVENT_REMINDER_ALARM,
                                         mmi_alm_nmgr_expiry_callback,
                                         NULL);
    }
    else
    {
    #ifdef __MMI_DEV_NEW_SLIM__
		gdi_init();	
	#else
        AlmInitLCDModule();
	#endif
        ret = mmi_frm_nmgr_notify_by_app(MMI_SCENARIO_ID_REMINDER_ALARM,
                                         MMI_EVENT_REMINDER_ALARM,
                                         mmi_alm_nmgr_expiry_callback,
                                         NULL);
    }

    if (ret)
    {
        return ALM_HAS_IND;
    }
 
    return ALM_HAS_NO_IND;
}

#endif
/*****************************************************************************
 * FUNCTION
 *  mmi_alm_ind_proc
 * DESCRIPTION
 *  Group event process function for alarm indication
 * PARAMETERS
 *  evt    :[IN] group event
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_alm_ind_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
    case EVT_ID_SCRN_DEINIT:
        mmi_frm_group_close(GRP_ID_ALM_IND);
        break;
		
    case EVT_ID_GROUP_DEINIT:
		g_mmi_alm_play_tone = MMI_FALSE;
        g_mmi_alm_play_vib = MMI_FALSE;
		break;
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
	case EVT_ID_TOUCHSCREEN_MOVE_RIGHT:
		{
			return MMI_RET_STOP_KEY_HANDLE;
		}
		break;
#endif
#ifndef __MMI_DEV_NEW_SLIM__		
    default:
        break;
#endif
    }

    return MMI_RET_OK;
}
    
/*****************************************************************************
* FUNCTION
*  EntryAlmIndicationScreen
* DESCRIPTION
*  Display indication screen and play alarm tone when alarm expires.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void EntryAlmIndicationScreen(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
     MMI_BOOL set = MMI_FALSE;
	 
#ifdef __MMI_WEARABLE_DEVICE_ALARM__ 
	 set = mmi_get_alm_autosync_status();
	 kal_prompt_trace(MOD_MMI_COMMON_APP, "EntryAlmIndicationScreen() set = %d", set);
#endif

#ifdef __MMI_DEV_NEW_SLIM__
	 mmi_frm_group_create_ex(GRP_ID_ROOT, GRP_ID_ALM_IND, mmi_alm_ind_proc, NULL,MMI_FRM_NODE_SMART_CLOSE_FLAG);
#else
     mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_ALM_IND, mmi_alm_ind_proc, NULL);
     mmi_frm_group_enter(GRP_ID_ALM_IND, MMI_FRM_NODE_SMART_CLOSE_FLAG);
#endif

#ifdef __MMI_WEARABLE_DEVICE_ALARM__
   //if(alm_sync_state || set == MMI_TRUE)//power off->on, alm_sync_state change to false, so need to check sync ON;
   if(set == MMI_TRUE)
   	 mmi_sync_alm_entry_watch_indication_screen();
   else//alm sync data,alm_sync_state is TRUE, sync OFF;
	 mmi_alm_entry_watch_indication_screen();
#else
     mmi_alm_entry_indication_screen();    
#endif
}


/*****************************************************************************
* FUNCTION
 *  mmi_alm_key_proc
 * DESCRIPTION
 *  key proc
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_alm_key_proc(mmi_event_struct *param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_frm_key_evt_struct *evt = (mmi_frm_key_evt_struct *)param;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (evt->evt_id == EVT_ID_PRE_KEY)
	{
		if (evt->key_code == KEY_END && evt->key_type == KEY_EVENT_DOWN)
		{
			#ifdef __MMI_WEARABLE_DEVICE_ALARM__
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			#endif
			mmi_alm_stop_int();
		}
	}
	
	return MMI_RET_OK;
}

#ifdef MOTION_SENSOR_SUPPORT
void mmi_alm_motion_turnover_callback(srv_sensor_type_enum sensor_type, void *sensor_data, void *user_data)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	
	srv_sensor_motion_turnover_struct *p_turnover;
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
    MMI_ASSERT(sensor_type == SRV_SENSOR_MOTION_TURNOVER);
    MMI_ASSERT(g_sensor_handle > 0);
    p_turnover = (srv_sensor_motion_turnover_struct *)sensor_data;
    if(p_turnover->direction != SRV_SENSOR_MOTION_TURNOVER_DOWN)
    {
        return;
    }
    mmi_alm_stop_tone();
	mmi_alm_stop_vibrate();
}
#endif

/*****************************************************************************
* FUNCTION
*  mmi_alm_entry_indication_screen
* DESCRIPTION
*  Display indication screen and play alarm tone when alarm expires.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
U8 current_stop_frame = 0;
U8 current_snooze_frame = 0;

static void mmi_alm_stop_triangle_icon(void)
{	

	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_lock_frame_buffer();

 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_push_and_set_clip(
	      	71, 179,
	      	113,
	      	191);
 #else
    //new style; (74,169)  42x12  (124,187)
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_push_and_set_clip(
	      	74, 169,
	      	74 + 42,
	      	169 + 12);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_push_and_set_clip(
	      	74 * 4/3, 169 * 4/3,
	      	74 * 4/3 + 42,
	      	169 * 4/3 + 12);
  #endif
 #endif
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	
	current_stop_frame ++;
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1+current_stop_frame);
 #else
    //new style; (74,169)  42x12  (124,187)
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_image_draw_id(74, 169, IMG_ALM_ARROW_STOP1+current_stop_frame);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_image_draw_id(74 * 4/3, 169 * 4/3, IMG_ALM_ARROW_STOP1+current_stop_frame);
  #endif
 #endif
	if(current_stop_frame >= 4)
	{
		current_stop_frame = 0;
	}
	
	gdi_layer_pop_clip();
	gdi_layer_unlock_frame_buffer();
	gdi_layer_pop_and_restore_active();
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_blt_previous(
		71, 179,
		113,
		191);
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_blt_previous(
      	74, 169,
      	74 + 42,
      	169 + 12);
  #else
    gdi_layer_blt_previous(
      	74 * 4/3, 169 * 4/3,
      	74 * 4/3 + 42,
      	169 * 4/3 + 12);
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/

	if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
    {
        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
    }
}
static void mmi_alm_snooze_triangle_icon(void)
{	
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_lock_frame_buffer();

 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_push_and_set_clip(
	      	125, 197,
	      	167,
	      	209);
 #else
    //new style; (74,169)  42x12  (124,187)
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_push_and_set_clip(
	      	124, 187,
	      	124 + 42,
	      	187 + 12);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_push_and_set_clip(
	      	124 * 4/3, 187 * 4/3,
	      	124 * 4/3 + 42,
	      	187 * 4/3 + 12);
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	
	current_snooze_frame ++;
#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_image_draw_id(125, 197, IMG_ALM_ARROW_SNOOZE1+current_snooze_frame);
#else
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_image_draw_id(124, 187, IMG_ALM_ARROW_SNOOZE1+current_snooze_frame);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_image_draw_id(124 * 4/3, 187 * 4/3, IMG_ALM_ARROW_SNOOZE1+current_snooze_frame);
  #endif
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	if(current_snooze_frame >= 4)
	{
		current_snooze_frame = 0;
	}
	gdi_layer_pop_clip();
	gdi_layer_unlock_frame_buffer();
	gdi_layer_pop_and_restore_active();
#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_blt_previous(
		125, 197,
		167,
		209);
#else
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_blt_previous(
	      	124, 187,
	      	124 + 42,
	      	187 + 12);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_blt_previous(
	      	124 * 4/3, 187 * 4/3,
	      	124 * 4/3 + 42,
	      	187 * 4/3 + 12);
  #endif
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	
	if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
    {
        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
    }
}

static void mmi_alm_indication_down(mmi_pen_point_struct pos)
{
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	WCHAR str_stop_alarm1[] = {'S','l', 'i', 'd','e',' ', 't', 'o', ' ', 'd', 'i', 's','m','i','s','s', 0};
	WCHAR str_snooze_alarm1[] = {'S','l', 'i', 'd','e',' ', 't', 'o', ' ', 's', 'n', 'o','o','z','e',0};
 #else
    S32 str_w, str_h = 0;
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	
	down = pos;

 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
		&& !(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}
 #else
    //new style;(15,155) 57x57 (168,155)
  #if defined(__MMI_MAINLCD_240X240__)
    if(!(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
		&& !(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155))))
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    if(!(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
		&& !(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3))))
  #endif
	{
		return;
	}
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	/*
	if(!(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}
	*/
	StopTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE);
	StopTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE);
	
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	//gdi_push_and_set_alpha_blending_source_layer(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_lock_frame_buffer();

 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_push_and_set_clip(
	      	10, 163,
	      	228,
	      	224);
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_push_and_set_clip(15, 155, 168 + 57, 155 + 57);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_push_and_set_clip(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);//for 320x320;
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__	
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		//gdi_draw_solid_rect(10,163,71,224,GDI_COLOR_BLACK);
		gdi_image_draw_id(10, 163, IMG_ALM_STOP_PRESSED);
		gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(73, 197);
		gui_set_text_color(gui_color(126, 126, 129));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_STOP_ALARM));
	}
	if(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163)))
	{
		gdi_image_draw_id(167, 163, IMG_ALM_SNOOZE_PRESSED);
		gdi_image_draw_id(125, 197, IMG_ALM_ARROW_SNOOZE1);	
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(64, 179);
		gui_set_text_color(gui_color(126, 126, 129));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_SNOOZE_ALARM));	
	}
 #else
    //new style; (74,169)  42x12  (124,187)
  #if defined(__MMI_MAINLCD_240X240__)
    if(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		gdi_image_draw_id(15, 155, IMG_ALM_STOP_PRESSED);
		gdi_image_draw_id(74, 169, IMG_ALM_ARROW_STOP1);//(74,169)

		gui_measure_string((UI_string_type)GetString(STR_ID_ALM_STOP_ALARM), &str_w, &str_h); 

        //slide to stop;
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(74, 169 + 12 +10);//interval 10;
		gui_set_text_color(gui_color(126, 126, 126));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_STOP_ALARM));
	}
	if(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		gdi_image_draw_id(168, 155, IMG_ALM_SNOOZE_PRESSED);
		gdi_image_draw_id(124, 187, IMG_ALM_ARROW_SNOOZE1);//(124,187)	

		gui_measure_string((UI_string_type)GetString(STR_ID_ALM_SNOOZE_ALARM), &str_w, &str_h); 
		
		//slide to snooze;
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(124+42-str_w, 187 - 10 - str_h);//right align;
		gui_set_text_color(gui_color(126, 126, 126));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_SNOOZE_ALARM));	
	}
  #elif defined(__MMI_MAINLCD_320X320__)
    if(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		gdi_image_draw_id(15 * 4/3, 155 * 4/3, IMG_ALM_STOP_PRESSED);
		gdi_image_draw_id(74 * 4/3, 169 * 4/3, IMG_ALM_ARROW_STOP1);//for 320x320

		gui_measure_string((UI_string_type)GetString(STR_ID_ALM_STOP_ALARM), &str_w, &str_h); 

        //slide to stop;
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(74 * 4/3, 169 * 4/3 + 12 +10);//interval 10;
		gui_set_text_color(gui_color(126, 126, 126));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_STOP_ALARM));
	}
	if(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		gdi_image_draw_id(168 * 4/3, 155 * 4/3, IMG_ALM_SNOOZE_PRESSED);
		gdi_image_draw_id(124 * 4/3, 187 * 4/3, IMG_ALM_ARROW_SNOOZE1);//for 320x320	

		gui_measure_string((UI_string_type)GetString(STR_ID_ALM_SNOOZE_ALARM), &str_w, &str_h); 
		
		//slide to snooze;
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(124 * 4/3+42-str_w, 187 * 4/3 - 10 - str_h);//right align;
		gui_set_text_color(gui_color(126, 126, 126));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_SNOOZE_ALARM));	
	}
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	
	gdi_layer_pop_clip();
	gdi_layer_unlock_frame_buffer();
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_layer_blt_previous(
		10, 163,
		228,
		224);
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_layer_blt_previous(15, 155, 168 + 57, 155 + 57);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_blt_previous(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
}

static void mmi_sync_alm_indication_down(mmi_pen_point_struct pos)
{
	WCHAR str_stop_alarm1[] = {'S','l', 'i', 'd','e',' ', 't', 'o', ' ', 'd', 'i', 's','m','i','s','s', 0};
	//WCHAR str_snooze_alarm1[] = {'S','l', 'i', 'd','e',' ', 't', 'o', ' ', 's', 'n', 'o','o','z','e',0};
	
	down = pos;

	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}
	
	//StopTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE);
	StopTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE);
	
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	//gdi_push_and_set_alpha_blending_source_layer(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_lock_frame_buffer();

	gdi_layer_push_and_set_clip(
			10, 163,
			228,
			224);
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		//gdi_draw_solid_rect(10,163,71,224,GDI_COLOR_BLACK);
		gdi_image_draw_id(10, 163, IMG_ALM_STOP_PRESSED);
		gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
		gui_set_font(&MMI_small_font); 
		gui_move_text_cursor(73, 197);
		gui_set_text_color(gui_color(126, 126, 129));
		gui_print_text((UI_string_type) GetString(STR_ID_ALM_STOP_ALARM));
	}
	#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#endif
	
	gdi_layer_pop_clip();
	gdi_layer_unlock_frame_buffer();
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	gdi_layer_blt_previous(
		10, 163,
		228,
		224);
	
}
static void mmi_alm_indication_move(mmi_pen_point_struct pos)
{
	S16 distance,startd,starts;
	
	distance = pos.x - down.x;
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	startd = 10 + distance;
	starts = 167 + distance;
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    startd = 15 + distance;
	starts = 155 + distance;
  #elif defined(__MMI_MAINLCD_320X320__)
    startd = 15 * 4/3 + distance;
	starts = 155 * 4/3 + distance;
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/

 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
		&& !(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}
 #else
    //new style;(15,155) 57x57 (168,155)
  #if defined(__MMI_MAINLCD_240X240__)
    if(!(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
		&& !(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155))))
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    if(!(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
		&& !(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3))))
  #endif
	{
		return;
	}
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
	    //down stop region, not to left;not to right boundary; 
	    if((pos.x < down.x) || (pos.x - down.x) > (167 - 10))
		  return;

		
	}
	if(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163)))
	{
	    //down snooze region, not to right;not to left boundary; 
	    if((pos.x > down.x) || (down.x - pos.x) > (167 - 10))
		  return; 
	}
 #else
    //new style;(15,155) 57x57 (168,155)
  #if defined(__MMI_MAINLCD_240X240__)
    if(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
	    //down stop region, not to left;not to right boundary; 
	    if((pos.x < down.x) || (pos.x - down.x) > (168 - 15))
		  return;

		
	}
	if(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
	    //down snooze region, not to right;not to left boundary; 
	    if((pos.x > down.x) || (down.x - pos.x) > (168 - 15))
		  return; 
	}
  #elif defined(__MMI_MAINLCD_320X320__)
    if(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
	    //down stop region, not to left;not to right boundary; 
	    if((pos.x < down.x) || (pos.x - down.x) > (168 - 15) * 4/3)
		  return;

		
	}
	if(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
	    //down snooze region, not to right;not to left boundary; 
	    if((pos.x > down.x) || (down.x - pos.x) > (168 - 15) * 4/3)
		  return; 
	}
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
 
	//stop;
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		if(((pos.x < 228) && (pos.x > 10)) && ((pos.y < 224) && (pos.y > 163)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
			      10, 163,
			      228,
			      224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(startd, 163, IMG_ALM_STOP_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
			
		}
	}
  #else
    //new style;(15,155) 57x57 (168,155)
   #if defined(__MMI_MAINLCD_240X240__) 
    if(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		if(((pos.x < 168 + 57) && (pos.x > 15)) && ((pos.y < 155 + 57) && (pos.y > 155)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15, 155, 168 + 57, 155 + 57);
			
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(startd, 155, IMG_ALM_STOP_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15, 155, 168 + 57, 155 + 57);
			
		}
	}
   #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    if(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		if(((pos.x < 168 * 4/3 + 57) && (pos.x > 15 * 4/3)) && ((pos.y < 155 * 4/3 + 57) && (pos.y > 155 * 4/3)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
			
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(startd, 155 * 4/3, IMG_ALM_STOP_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15* 4/3, 155* 4/3, 168* 4/3 + 57, 155* 4/3 + 57);
			
		}
	}
   #endif
  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/

  //snooze;
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	if(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163)))
	{
		if(((pos.x < 228) && (pos.x > 10)) && ((pos.y < 224) && (pos.y > 163)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
			      10, 163,
			      228,
			      224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(starts, 163, IMG_ALM_SNOOZE_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
		}
	}
 #else
    //new style;(15,155) 57x57 (168,155)
  #if defined(__MMI_MAINLCD_240X240__) 
    if(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		if(((pos.x < 168 + 57) && (pos.x > 15)) && ((pos.y < 155 + 57) && (pos.y > 155)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15, 155, 168 + 57, 155 + 57);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(starts, 155, IMG_ALM_SNOOZE_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15, 155, 168 + 57, 155 + 57);
		}
	}
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    if(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		if(((pos.x < 168 * 4/3 + 57) && (pos.x > 15 * 4/3)) && ((pos.y < 155 * 4/3 + 57) && (pos.y > 155 * 4/3)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(starts, 155 * 4/3, IMG_ALM_SNOOZE_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
		}
	}
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
 
/*
	gdi_layer_pop_clip();
	gdi_layer_unlock_frame_buffer();
	gdi_layer_pop_and_restore_active();
	gdi_layer_blt_previous(
		10, 163,
		228,
		224);
*/
}

static void mmi_sync_alm_indication_move(mmi_pen_point_struct pos)
{
	S16 distance,startd,starts;
	
	distance = pos.x - down.x;
	startd = 10 + distance;
	starts = 167 + distance;

	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}
	
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
	    //down stop region, not to left;not to right boundary; 
	    if((pos.x < down.x) || (pos.x - down.x) > (167 - 10))
		  return;

		
	}
	//stop;
	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		if(((pos.x < 228) && (pos.x > 10)) && ((pos.y < 224) && (pos.y > 163)))
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
				  10, 163,
				  228,
				  224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			gdi_image_draw_id(startd, 163, IMG_ALM_STOP_PRESSED);

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
			
		}
	}

   #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
}

#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
static void mmi_alm_indication_up(mmi_pen_point_struct pos)
{

	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
		&& !(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}

	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		//if((pos.x > down.x+10) && ((pos.y < 224) && (pos.y > 163)))//need to move more than half distance, then to execute handler;
		if((pos.x > UI_device_width/2) && ((pos.y < 224) && (pos.y > 163)))
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmStopHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
			      10, 163,
			      228,
			      224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(10, 163, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(167, 163, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(125, 197, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
		}
	}
	else if(((down.x < 228) && (down.x > 167)) && ((down.y < 224) && (down.y > 163)))
	{
		//if((pos.x < down.x-10) && (pos.y < 224) && (pos.y > 163))
		if((pos.x < UI_device_width/2) && (pos.y < 224) && (pos.y > 163))//need to move more than half distance, then to execute handler;
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmSnoozeHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
			      10, 163,
			      228,
			      224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(10, 163, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(167, 163, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(125, 197, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
		}
	}
}
#else
//new style;(15,155) 57x57 (168,155)
#if defined(__MMI_MAINLCD_240X240__) 
static void mmi_alm_indication_up(mmi_pen_point_struct pos)
{
	//new style;(15,155) 57x57 (168,155)
    if(!(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
		&& !(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155))))
	{
		return;
	}

    //stop handle case;
	if(((down.x < 15 + 57) && (down.x > 15)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		//if((pos.x > down.x+10) && ((pos.y < 224) && (pos.y > 163)))//need to move more than half distance, then to execute handler;
		if((pos.x > UI_device_width/2) && ((pos.y < 155 + 57)) && (pos.y > 155))
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmStopHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15, 155, 168 + 57, 155 + 57);
			
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(15, 155, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(74, 169, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(168, 155, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(124, 187, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15, 155, 168 + 57, 155 + 57);
		}
	}
	//snooze handle case;
	else if(((down.x < 168 + 57) && (down.x > 168)) && ((down.y < 155 + 57) && (down.y > 155)))
	{
		//if((pos.x < down.x-10) && (pos.y < 224) && (pos.y > 163))
		if((pos.x < UI_device_width/2) && (pos.y < 155 + 57) && (pos.y > 155))//need to move more than half distance, then to execute handler;
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmSnoozeHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15, 155, 168 + 57, 155 + 57);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(15, 155, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(74, 169, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(168, 155, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(124, 187, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15, 155, 168 + 57, 155 + 57);
		}
	}
}
#elif defined(__MMI_MAINLCD_320X320__) 
//for 320x320;
static void mmi_alm_indication_up(mmi_pen_point_struct pos)
{
	//new style;
    if(!(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
		&& !(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3))))
	{
		return;
	}

    //stop handle case;
	if(((down.x < 15 * 4/3 + 57) && (down.x > 15 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		//if((pos.x > down.x+10) && ((pos.y < 224) && (pos.y > 163)))//need to move more than half distance, then to execute handler;
		if((pos.x > UI_device_width/2) && ((pos.y < 155 * 4/3 + 57)) && (pos.y > 155 * 4/3))
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmStopHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
			
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(15 * 4/3, 155 * 4/3, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(74 * 4/3, 169 * 4/3, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(168 * 4/3, 155 * 4/3, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(124 * 4/3, 187 * 4/3, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
		}
	}
	//snooze handle case;
	else if(((down.x < 168 * 4/3 + 57) && (down.x > 168 * 4/3)) && ((down.y < 155 * 4/3 + 57) && (down.y > 155 * 4/3)))
	{
		//if((pos.x < down.x-10) && (pos.y < 224) && (pos.y > 163))
		if((pos.x < UI_device_width/2) && (pos.y < 155 * 4/3 + 57) && (pos.y > 155 * 4/3))//need to move more than half distance, then to execute handler;
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmSnoozeHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(15 * 4/3, 155 * 4/3, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(74 * 4/3, 169 * 4/3, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }
			//snooze icon
			gdi_image_draw_id(168 * 4/3, 155 * 4/3, IMG_ALM_SNOOZE_NORMAL);
			gdi_image_draw_id(124 * 4/3, 187 * 4/3, IMG_ALM_ARROW_SNOOZE1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
		    }

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(15 * 4/3, 155 * 4/3, 168 * 4/3 + 57, 155 * 4/3 + 57);
		}
	}
}
#endif
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/

//only stop;
static void mmi_sync_alm_indication_up(mmi_pen_point_struct pos)
{
    //stop area;
	if(!(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163))))
	{
		return;
	}

	if(((down.x < 71) && (down.x > 10)) && ((down.y < 224) && (down.y > 163)))
	{
		//if((pos.x > down.x+10) && ((pos.y < 224) && (pos.y > 163)))
		if((pos.x > UI_device_width/2) && ((pos.y < 224) && (pos.y > 163)))//need to move more than half distance, then to execute handler;
		{
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			AlmSyncStopHandler();
			return;
		}
		else
		{
			gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
			gdi_layer_lock_frame_buffer();

			gdi_layer_push_and_set_clip(
			      10, 163,
			      228,
			      224);
			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_TRANSPARENT);
			
			//stop icon
			gdi_image_draw_id(10, 163, IMG_ALM_STOP_NORMAL);
			gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
			if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
		    {
		        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
		    }

			#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
			#endif

			gdi_layer_pop_clip();
			gdi_layer_unlock_frame_buffer();
			gdi_layer_pop_and_restore_active();
			gdi_layer_blt_previous(
				10, 163,
				228,
				224);
		}
	}
 #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}	
static void mmi_alm_power_key_proc(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	kal_prompt_trace(MOD_MMI_COMMON_APP,"mmi_alm_power_key_proc");
			#ifdef __MMI_WEARABLE_DEVICE_ALARM__
			if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
			{
				gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
				swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
			}
			#endif
			mmi_alm_stop_int();
			mmi_frm_group_close(GRP_ID_ALM_IND);
			mmi_frm_close_to_idle_group();

}
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
static void mmi_sync_alm_power_key_proc(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	kal_prompt_trace(MOD_MMI_COMMON_APP,"mmi_sync_alm_power_key_proc().");
	#ifdef __MMI_WEARABLE_DEVICE_ALARM__
	if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
	{
		gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
		swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
	}
	#endif
	mmi_alm_stop_int();
	mmi_frm_group_close(GRP_ID_ALM_IND);
	mmi_frm_close_to_idle_group();
    
	kal_prompt_trace(MOD_MMI_COMMON_APP, "mmi_sync_alm_power_key_proc(), send_sync_alarm_cmd_to_sp.");
	//send CMD to sync alarm again;
	send_sync_alarm_cmd_to_sp();

}
#endif/*__MMI_WEARABLE_DEVICE_ALARM__*/
static void mmi_alm_entry_watch_indication_screen(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables 											   */
	/*----------------------------------------------------------------*/
	U8 *guiBuffer;
	MYTIME currTime;
	U8 timeString[SIZE_OF_DATE_STRING];
	static U8 dateString[SIZE_OF_ALARM_STRING + SIZE_OF_DATE_STRING];
	U8 almindex = g_alm_cntx.active_alm_idx;
	U16 lsk_str, rsk_str;
	srv_alm_node_type node;
	srv_alm_node_type *almnode;
	swatch_common_pos_struct alarm_layout;
	S32 str_w, str_h;
	S32 string_region;
	U8 per_time[10];
	S8 ts[32];
	WCHAR alarm_time[20]={0};
	string_region = LCD_WIDTH;
	//GDI_RESULT gdi_result;
	
	/*----------------------------------------------------------------*/
	/* Code Body													   */
	/*----------------------------------------------------------------*/
	MMI_ALM_TRACE0(MMI_ALM_INDICATION_SCREEN);
	if (!mmi_frm_scrn_enter(
			GRP_ID_ALM_IND, 
			SCR_ID_ALM_INDICATION, 
			ExitAlmIndicationScreen, 
			(FuncPtr)mmi_alm_entry_watch_indication_screen, 
			MMI_FRM_FULL_SCRN))
	{
		return;
	}

#ifdef MOTION_SENSOR_SUPPORT     
	if(srv_reminder_get_sensor_listen_state(SRV_SENSOR_MOTION_TURNOVER))
	{
		g_sensor_handle = srv_sensor_start_listen(SRV_SENSOR_MOTION_TURNOVER,
								NULL,
								mmi_alm_motion_turnover_callback,
								NULL);
	}
#endif
#ifndef __MMI_DEV_NEW_SLIM__
	StopTimer(ALARM_TIMER_WAIT_FOR_CALL);
#endif
	if (!IsMyTimerExist(ALARM_ALERT_NOTIFYDURATION_TIMER))
	{
		StartTimer(ALARM_ALERT_NOTIFYDURATION_TIMER, ALM_EXPIRE_DURATION, AlmSnoozeHandler);
	}
	mmi_frm_scrn_set_leave_proc(GRP_ID_ALM_IND, SCR_ID_ALM_INDICATION, mmi_alm_group_leave_proc);
	mmi_frm_start_scenario(MMI_SCENARIO_ID_REMINDER_ALARM);
	
	if(g_mmi_alm_play_tone == MMI_TRUE)
	{
		mmi_alm_play_tone();
	}
	if(g_mmi_alm_play_vib == MMI_TRUE)
	{
		srv_vibrator_on();
		gui_touch_feedback_disable_vibrate();
	}
	
	GetDateTime(&currTime);
	time_string(&currTime, (UI_string_type) timeString, DT_IDLE_SCREEN);
		 /* prepare string to display */
	
	date_string(&currTime, (UI_string_type) dateString, DT_IDLE_SCREEN);
	mmi_ucs2cat((CHAR*) dateString, (CHAR*) L"\n");
	mmi_ucs2cat((CHAR*) dateString, (CHAR*) timeString);
	
		 /* flush key because alarm if some key is not released, the alarm may be stopped */
	ClearKeyEvents();
	
#ifndef __MMI_DEV_NEW_SLIM__ 
	g_alm_cntx.IsSaveToHistory = 1;
#endif
	
	guiBuffer = mmi_frm_scrn_get_active_gui_buf();
	lsk_str = STR_GLOBAL_STOP;

	almnode = (srv_alm_node_type *)srv_alm_read(almindex);
	node = *almnode;
#ifdef __MMI_DEV_NEW_SLIM__
	
	rsk_str = (node.Snooze >= MAX_SNOOZE_CHANCES ? 0 : ALARMS_SNOOZE_STRINGID);
#else
	
	if (node.Snooze >= MAX_SNOOZE_CHANCES)
	{
		rsk_str = 0;
	}
	else
	{
		rsk_str = ALARMS_SNOOZE_STRINGID;
	}
		 
#endif	 
	srv_backlight_turn_on(SRV_BACKLIGHT_PERMANENT);
	
	EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
	SetKeyHandler(mmi_alm_power_key_proc, KEY_POWER, KEY_EVENT_DOWN);
		 
	mmi_frm_set_curr_scr_blt_mode(MMI_FRM_SCR_BLT_IMMEDIATE);

	//draw screen

	//gdi_result = 
	gdi_layer_create(	0,
						0,
						LCD_WIDTH,
						LCD_HEIGHT,
						&swatch_alarm_indication_cell.cell_layer_handler);
	
	//MMI_ASSERT(GDI_SUCCEED == gdi_result);

	gdi_layer_get_base_handle(&swatch_alarm_indication_cell.base_layer);
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.base_layer);
	
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_BLACK);

	gdi_layer_pop_and_restore_active();
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	//gdi_push_and_set_alpha_blending_source_layer(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);

	//draw time icon
	
	if(PhnsetGetTimeFormat())//24hours
	{
	/*
		per_time[0] = node.Hour / 10;
		per_time[1] = node.Hour % 10;
		per_time[2] = node.Min / 10;
		per_time[3] = node.Min % 10;
	*/
		
		per_time[0] = currTime.nHour / 10;
		per_time[1] = currTime.nHour % 10;
		per_time[2] = currTime.nMin / 10;
		per_time[3] = currTime.nMin % 10;

	  #if defined(__MMI_MAINLCD_240X240__)
		gdi_image_draw_id(29, 63, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67, 63, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105, 63, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128, 63, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166, 63, IMG_ALM_TIME0+per_time[3]);
	  #elif defined(__MMI_MAINLCD_320X320__)
	    gdi_image_draw_id(29 * 4/3 + (38*4/3 -38)/2, 63* 4/3 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67* 4/3 + (38*4/3 -38)/2, 63* 4/3 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105* 4/3 + (38*4/3 -38)/2, 63* 4/3 + (55*4/3 -55)/2, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128* 4/3 + (38*4/3 -38)/2, 63* 4/3 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166* 4/3 + (38*4/3 -38)/2, 63* 4/3 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[3]);
	  #endif
	}
	else
	{	//0:am;1:pm
		if(currTime.nHour == 12)
		{
			//node.Hour = node.Hour;
			sprintf((S8*) ts, "PM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else if (currTime.nHour == 0)
		{
			currTime.nHour = 12;
			sprintf((S8*) ts, "AM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else if (currTime.nHour > 12)
		{
			currTime.nHour = currTime.nHour - 12;
			sprintf((S8*) ts, "PM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else
		{
			//node.Hour = node.Hour;
			sprintf((S8*) ts, "AM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
	/*
		per_time[0] = node.Hour / 10;
		per_time[1] = node.Hour % 10;
		per_time[2] = node.Min / 10;
		per_time[3] = node.Min % 10;
	*/
		per_time[0] = currTime.nHour / 10;
		per_time[1] = currTime.nHour % 10;
		per_time[2] = currTime.nMin / 10;
		per_time[3] = currTime.nMin % 10;

	  #if defined(__MMI_MAINLCD_240X240__)
		gdi_image_draw_id(29, 63, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67, 63, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105, 63, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128, 63, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166, 63, IMG_ALM_TIME0+per_time[3]);
	  #elif defined(__MMI_MAINLCD_320X320__)
	    gdi_image_draw_id(29 * 4/3 + (38*4/3 -38)/2, 63 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67 * 4/3 + (38*4/3 -38)/2, 63 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105 * 4/3 + (38*4/3 -38)/2, 63 + (55*4/3 -55)/2, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128 * 4/3 + (38*4/3 -38)/2, 63 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166 * 4/3 + (38*4/3 -38)/2, 63 + (55*4/3 -55)/2, IMG_ALM_TIME0+per_time[3]);
	  #endif
		gui_set_text_color(gui_color(255, 255, 255));
		gui_set_font(&MMI_small_font);
	  #if defined(__MMI_MAINLCD_240X240__)
		gui_move_text_cursor(204, 63);
	  #elif defined(__MMI_MAINLCD_320X320__)
	    gui_move_text_cursor(204 * 4/3, 63  * 4/3);
	  #endif
		gui_print_text((UI_string_type)alarm_time);
		
	}
	
	//stop icon
#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_image_draw_id(10, 163, IMG_ALM_STOP_NORMAL);
	gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
#else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_image_draw_id(15, 155, IMG_ALM_STOP_NORMAL);//(15,155)
    gdi_image_draw_id(74, 169, IMG_ALM_ARROW_STOP1);//(74,169)
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_image_draw_id(15 * 4/3, 155 * 4/3, IMG_ALM_STOP_NORMAL);//for 320x320
    gdi_image_draw_id(74 * 4/3, 169 * 4/3, IMG_ALM_ARROW_STOP1);//for 320x320
  #endif 
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
	if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
    {
        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
    }
	
	//snooze icon
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_ALARM__
	gdi_image_draw_id(167, 163, IMG_ALM_SNOOZE_NORMAL);
	gdi_image_draw_id(125, 197, IMG_ALM_ARROW_SNOOZE1);
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__)
    gdi_image_draw_id(168, 155, IMG_ALM_SNOOZE_NORMAL);//(168,155)
    gdi_image_draw_id(124, 187, IMG_ALM_ARROW_SNOOZE1);//(124,187)
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_image_draw_id(168 * 4/3, 155 * 4/3, IMG_ALM_SNOOZE_NORMAL);//for 320x320
    gdi_image_draw_id(124 * 4/3, 187 * 4/3, IMG_ALM_ARROW_SNOOZE1);//for 320x320
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_ALARM__*/
 	
	if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE))
    {
        StartTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_snooze_triangle_icon);
    }
	
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	gdi_layer_blt(swatch_alarm_indication_cell.base_layer,
						swatch_alarm_indication_cell.cell_layer_handler,
						NULL,
						NULL,
						0, 0, LCD_WIDTH, LCD_HEIGHT);
	
#if defined(__MMI_TOUCH_SCREEN__)	
	wgui_clear_pen_handlers();

	mmi_pen_register_up_handler(mmi_alm_indication_up);
	mmi_pen_register_down_handler(mmi_alm_indication_down);
	mmi_pen_register_move_handler(mmi_alm_indication_move);
#endif

	if (AlmIsRTCPwron())
	 {		
		 ClearKeyHandler(KEY_POWER, KEY_EVENT_UP);
		 ClearKeyHandler(KEY_POWER, KEY_EVENT_DOWN);
		 //SetKeyHandler(AlmHandleEndKey, KEY_POWER, KEY_LONG_PRESS);
		 SetKeyLongpressHandler(AlmHandleEndKey, KEY_POWER);
		 SetKeyHandler(mmi_alm_power_key_proc, KEY_POWER, KEY_EVENT_DOWN);
	 }
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	mmi_frm_cb_reg_event(EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING, mmi_alm_group_leave_proc, NULL);
#endif

}
//for sync_alm ind, only have stop handler;
static void mmi_sync_alm_entry_watch_indication_screen(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables 											   */
	/*----------------------------------------------------------------*/
	U8 *guiBuffer;
	MYTIME currTime;
	U8 timeString[SIZE_OF_DATE_STRING];
	static U8 dateString[SIZE_OF_ALARM_STRING + SIZE_OF_DATE_STRING];
	U8 almindex = g_alm_cntx.active_alm_idx;
	U16 lsk_str, rsk_str;
	srv_alm_node_type node;
	srv_alm_node_type *almnode;
	swatch_common_pos_struct alarm_layout;
	S32 str_w, str_h;
	S32 string_region;
	U8 per_time[10];
	S8 ts[32];
	WCHAR alarm_time[20]={0};
	string_region = LCD_WIDTH;
	//GDI_RESULT gdi_result;
	
	/*----------------------------------------------------------------*/
	/* Code Body													   */
	/*----------------------------------------------------------------*/
	MMI_ALM_TRACE0(MMI_ALM_INDICATION_SCREEN);
	if (!mmi_frm_scrn_enter(
			GRP_ID_ALM_IND, 
			SCR_ID_ALM_INDICATION, 
			ExitAlmIndicationScreen, 
			(FuncPtr)mmi_sync_alm_entry_watch_indication_screen, 
			MMI_FRM_FULL_SCRN))
	{
		return;
	}

#ifdef MOTION_SENSOR_SUPPORT     
	if(srv_reminder_get_sensor_listen_state(SRV_SENSOR_MOTION_TURNOVER))
	{
		g_sensor_handle = srv_sensor_start_listen(SRV_SENSOR_MOTION_TURNOVER,
								NULL,
								mmi_alm_motion_turnover_callback,
								NULL);
	}
#endif
#ifndef __MMI_DEV_NEW_SLIM__
	StopTimer(ALARM_TIMER_WAIT_FOR_CALL);
#endif

	if (!IsMyTimerExist(ALARM_ALERT_NOTIFYDURATION_TIMER))
	{
		//StartTimer(ALARM_ALERT_NOTIFYDURATION_TIMER, ALM_EXPIRE_DURATION, AlmSnoozeHandler);
		StartTimer(ALARM_ALERT_NOTIFYDURATION_TIMER, ALM_EXPIRE_DURATION, AlmSyncStopHandler);
	}
	mmi_frm_scrn_set_leave_proc(GRP_ID_ALM_IND, SCR_ID_ALM_INDICATION, mmi_alm_sync_group_leave_proc);
	mmi_frm_start_scenario(MMI_SCENARIO_ID_REMINDER_ALARM);
	
	if(g_mmi_alm_play_tone == MMI_TRUE)
	{
		mmi_alm_play_tone();
	}
	if(g_mmi_alm_play_vib == MMI_TRUE)
	{
		srv_vibrator_on();
		gui_touch_feedback_disable_vibrate();
	}
	
	GetDateTime(&currTime);
	time_string(&currTime, (UI_string_type) timeString, DT_IDLE_SCREEN);
		 /* prepare string to display */
	
	date_string(&currTime, (UI_string_type) dateString, DT_IDLE_SCREEN);
	mmi_ucs2cat((CHAR*) dateString, (CHAR*) L"\n");
	mmi_ucs2cat((CHAR*) dateString, (CHAR*) timeString);
	
		 /* flush key because alarm if some key is not released, the alarm may be stopped */
	ClearKeyEvents();
	
#ifndef __MMI_DEV_NEW_SLIM__ 
	g_alm_cntx.IsSaveToHistory = 1;
#endif
	
	guiBuffer = mmi_frm_scrn_get_active_gui_buf();
	lsk_str = STR_GLOBAL_STOP;

	almnode = (srv_alm_node_type *)srv_alm_read(almindex);
	node = *almnode;
#ifdef __MMI_DEV_NEW_SLIM__
	
	rsk_str = (node.Snooze >= MAX_SNOOZE_CHANCES ? 0 : ALARMS_SNOOZE_STRINGID);
#else
	
	if (node.Snooze >= MAX_SNOOZE_CHANCES)
	{
		rsk_str = 0;
	}
	else
	{
		rsk_str = ALARMS_SNOOZE_STRINGID;
	}
		 
#endif	 
	srv_backlight_turn_on(SRV_BACKLIGHT_PERMANENT);
	
	EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
	SetKeyHandler(mmi_sync_alm_power_key_proc, KEY_POWER, KEY_EVENT_DOWN);
#endif
	mmi_frm_set_curr_scr_blt_mode(MMI_FRM_SCR_BLT_IMMEDIATE);

	//draw screen

	//gdi_result = 
	gdi_layer_create(	0,
						0,
						LCD_WIDTH,
						LCD_HEIGHT,
						&swatch_alarm_indication_cell.cell_layer_handler);
	
	//MMI_ASSERT(GDI_SUCCEED == gdi_result);

	gdi_layer_get_base_handle(&swatch_alarm_indication_cell.base_layer);
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.base_layer);
	
	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	gdi_layer_clear(GDI_COLOR_BLACK);

	gdi_layer_pop_and_restore_active();
	gdi_layer_push_and_set_active(swatch_alarm_indication_cell.cell_layer_handler);
	//gdi_push_and_set_alpha_blending_source_layer(swatch_alarm_indication_cell.cell_layer_handler);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);

	//draw time icon
	
	if(PhnsetGetTimeFormat())//24hours
	{
	/*
		per_time[0] = node.Hour / 10;
		per_time[1] = node.Hour % 10;
		per_time[2] = node.Min / 10;
		per_time[3] = node.Min % 10;
	*/
		
		per_time[0] = currTime.nHour / 10;
		per_time[1] = currTime.nHour % 10;
		per_time[2] = currTime.nMin / 10;
		per_time[3] = currTime.nMin % 10;
		 
		gdi_image_draw_id(29, 63, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67, 63, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105, 63, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128, 63, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166, 63, IMG_ALM_TIME0+per_time[3]);
	}
	else
	{	//0:am;1:pm
		if(currTime.nHour == 12)
		{
			//node.Hour = node.Hour;
			sprintf((S8*) ts, "PM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else if (currTime.nHour == 0)
		{
			currTime.nHour = 12;
			sprintf((S8*) ts, "AM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else if (currTime.nHour > 12)
		{
			currTime.nHour = currTime.nHour - 12;
			sprintf((S8*) ts, "PM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
		else
		{
			//node.Hour = node.Hour;
			sprintf((S8*) ts, "AM");
			mmi_asc_to_ucs2((S8*) alarm_time, ts);
		}
	/*
		per_time[0] = node.Hour / 10;
		per_time[1] = node.Hour % 10;
		per_time[2] = node.Min / 10;
		per_time[3] = node.Min % 10;
	*/
		per_time[0] = currTime.nHour / 10;
		per_time[1] = currTime.nHour % 10;
		per_time[2] = currTime.nMin / 10;
		per_time[3] = currTime.nMin % 10;
		
		gdi_image_draw_id(29, 63, IMG_ALM_TIME0+per_time[0]);
		gdi_image_draw_id(67, 63, IMG_ALM_TIME0+per_time[1]);
		gdi_image_draw_id(105, 63, IMG_ALM_TIMECOLON);
		gdi_image_draw_id(128, 63, IMG_ALM_TIME0+per_time[2]);
		gdi_image_draw_id(166, 63, IMG_ALM_TIME0+per_time[3]);
		gui_set_text_color(gui_color(255, 255, 255));
		gui_set_font(&MMI_small_font);
		gui_move_text_cursor(204, 63);
		gui_print_text((UI_string_type)alarm_time);
		
	}
	
	//stop icon
	gdi_image_draw_id(10, 163, IMG_ALM_STOP_NORMAL);
	gdi_image_draw_id(71, 179, IMG_ALM_ARROW_STOP1);
	if (!IsMyTimerExist(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE))
    {
        StartTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE, ALM_TRIANGLE_DURATION, mmi_alm_stop_triangle_icon);
    }

  #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
  #endif
	
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	gdi_layer_blt(swatch_alarm_indication_cell.base_layer,
						swatch_alarm_indication_cell.cell_layer_handler,
						NULL,
						NULL,
						0, 0, LCD_WIDTH, LCD_HEIGHT);
	
#if defined(__MMI_TOUCH_SCREEN__)	
	wgui_clear_pen_handlers();

	mmi_pen_register_up_handler(mmi_sync_alm_indication_up);
	mmi_pen_register_down_handler(mmi_sync_alm_indication_down);
	mmi_pen_register_move_handler(mmi_sync_alm_indication_move);
#endif

	if (AlmIsRTCPwron())
	 {		
		 ClearKeyHandler(KEY_POWER, KEY_EVENT_UP);
		 ClearKeyHandler(KEY_POWER, KEY_EVENT_DOWN);
		 //SetKeyHandler(AlmHandleEndKey, KEY_POWER, KEY_LONG_PRESS);
		 SetKeyLongpressHandler(AlmHandleEndKey, KEY_POWER);
	  #ifdef __MMI_WEARABLE_DEVICE_ALARM__
		 SetKeyHandler(mmi_sync_alm_power_key_proc, KEY_POWER, KEY_EVENT_DOWN);
	  #endif
	 }
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	mmi_frm_cb_reg_event(EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING, mmi_alm_sync_group_leave_proc, NULL);
#endif

}

#else
static void mmi_alm_entry_indication_screen(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
     U8 *guiBuffer;
     MYTIME currTime;
     U8 timeString[SIZE_OF_DATE_STRING];
     static U8 dateString[SIZE_OF_ALARM_STRING + SIZE_OF_DATE_STRING];
     U8 almindex = g_alm_cntx.active_alm_idx;
     U16 lsk_str, rsk_str;
	 srv_alm_node_type *node;
     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
	 MMI_ALM_TRACE0(MMI_ALM_INDICATION_SCREEN);
     if (!mmi_frm_scrn_enter(
             GRP_ID_ALM_IND, 
             SCR_ID_ALM_INDICATION, 
             ExitAlmIndicationScreen, 
             (FuncPtr)mmi_alm_entry_indication_screen, 
             MMI_FRM_FULL_SCRN))
     {
         return;
     }
#ifdef MOTION_SENSOR_SUPPORT     
     if(srv_reminder_get_sensor_listen_state(SRV_SENSOR_MOTION_TURNOVER))
     {
	     g_sensor_handle = srv_sensor_start_listen(SRV_SENSOR_MOTION_TURNOVER,
	                             NULL,
	                             mmi_alm_motion_turnover_callback,
	                             NULL);
	 }
#endif
#ifndef __MMI_DEV_NEW_SLIM__
     StopTimer(ALARM_TIMER_WAIT_FOR_CALL);
#endif
     if (!IsMyTimerExist(ALARM_ALERT_NOTIFYDURATION_TIMER))
     {
         StartTimer(ALARM_ALERT_NOTIFYDURATION_TIMER, ALM_EXPIRE_DURATION, AlmSnoozeHandler);
     }
     mmi_frm_scrn_set_leave_proc(GRP_ID_ALM_IND, SCR_ID_ALM_INDICATION, mmi_alm_group_leave_proc);
     mmi_frm_start_scenario(MMI_SCENARIO_ID_REMINDER_ALARM);

	 if(g_mmi_alm_play_tone == MMI_TRUE)
	 {
	 	mmi_alm_play_tone();
	 }
	 if(g_mmi_alm_play_vib == MMI_TRUE)
	 {
	 	srv_vibrator_on();
		gui_touch_feedback_disable_vibrate();
	 }

     GetDateTime(&currTime);
     time_string(&currTime, (UI_string_type) timeString, DT_IDLE_SCREEN);
     /* prepare string to display */

     date_string(&currTime, (UI_string_type) dateString, DT_IDLE_SCREEN);
     mmi_ucs2cat((CHAR*) dateString, (CHAR*) L"\n");
     mmi_ucs2cat((CHAR*) dateString, (CHAR*) timeString);

     /* flush key because alarm if some key is not released, the alarm may be stopped */
     ClearKeyEvents();

#ifndef __MMI_DEV_NEW_SLIM__ 
     g_alm_cntx.IsSaveToHistory = 1;
#endif

     guiBuffer = mmi_frm_scrn_get_active_gui_buf();
     lsk_str = STR_GLOBAL_STOP;

	 node = (srv_alm_node_type *)srv_alm_read(almindex);
#ifdef __MMI_DEV_NEW_SLIM__

	rsk_str = (node->Snooze >= MAX_SNOOZE_CHANCES ? 0 : ALARMS_SNOOZE_STRINGID);
#else

     if (node->Snooze >= MAX_SNOOZE_CHANCES)
     {
         rsk_str = 0;
     }
     else
     {
         rsk_str = ALARMS_SNOOZE_STRINGID;
     }
	 
#endif	 
	 srv_backlight_turn_on(SRV_BACKLIGHT_PERMANENT);

     EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
	 
     mmi_frm_set_curr_scr_blt_mode(MMI_FRM_SCR_BLT_IMMEDIATE);
	 
#ifdef __MMI_DEV_NEW_SLIM__
	 ShowCategory121Screen(
         lsk_str,
         0,
         rsk_str,
         0,
         dateString,
         0,
         guiBuffer,
         1);
#else	 
     ShowCategory121Screen(
         lsk_str,
         0,
         rsk_str,
         0,
         dateString,
         ALARM_ANIMATION_INDICATION_IMAGEID,
         guiBuffer,
         1);
#endif
     if (node->Snooze < MAX_SNOOZE_CHANCES)
     {
         SetRightSoftkeyFunction(AlmSnoozeHandler, KEY_EVENT_UP);
     }

     SetLeftSoftkeyFunction(AlmStopHandler, KEY_EVENT_UP);
     SetCenterSoftkeyFunction(AlmStopHandler, KEY_EVENT_UP);
	 mmi_frm_scrn_set_key_proc(GRP_ID_ALM_IND, SCR_ID_ALM_INDICATION, mmi_alm_key_proc);
	 
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	 mmi_frm_cb_reg_event(EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING, mmi_alm_group_leave_proc, NULL);
#endif

     /* register END key for power on alarm */
     if (AlmIsRTCPwron())
     {
         ClearKeyHandler(KEY_END, KEY_EVENT_UP);
         ClearKeyHandler(KEY_END, KEY_EVENT_DOWN);
         if (mmi_frm_kbd_is_key_supported(KEY_POWER))
         {
             ClearKeyHandler(KEY_END, KEY_LONG_PRESS);       
             ClearKeyHandler(KEY_POWER, KEY_EVENT_UP);
             ClearKeyHandler(KEY_POWER, KEY_EVENT_DOWN);
             //SetKeyHandler(AlmHandleEndKey, KEY_POWER, KEY_LONG_PRESS);
			 SetKeyLongpressHandler(AlmHandleEndKey, KEY_POWER);
         }
         else
         {
             //SetKeyHandler(AlmHandleEndKey, KEY_END, KEY_LONG_PRESS);
			 SetKeyLongpressHandler(AlmHandleEndKey, KEY_END);
         }        
         mmi_charbat_update_status_icon();
     }
}

#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_alm_group_leave_proc
 * DESCRIPTION
 *  Group event process function
 * PARAMETERS
 *  evt    :[IN] group event
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_alm_group_leave_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	mmi_scr_locker_pre_lock_evt_struct *lock_event;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
    		if (!g_mmi_alm_self_close)
    		{
	            AlmSnoozeHandler();  	
	            g_mmi_alm_self_close = MMI_FALSE;
            }
	#ifdef __MMI_WEARABLE_DEVICE_ALARM__
		if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
		{
			gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
			swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
		}
	#endif
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	        mmi_frm_cb_dereg_event(EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING, mmi_alm_group_leave_proc,NULL);
#endif
            break;			
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
         case EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING:
		 	lock_event = (mmi_scr_locker_pre_lock_evt_struct *)evt;
			
			if(lock_event->lock_mode == MMI_SCR_LOCKER_LOCK_MODE_POWER_KEY)
			{		
			#ifdef __MMI_WEARABLE_DEVICE_ALARM__
				if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
				{
					gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
					swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
				}
			#endif
				AlmSnoozeHandler();
				return MMI_RET_OK;
			}			
			else if(lock_event->lock_mode == MMI_SCR_LOCKER_LOCK_MODE_AUTO_LOCK)
			{
				return MMI_RET_ERR;
			}
		 	break;
#endif
#ifndef __MMI_DEV_NEW_SLIM__
        default:
            break;
#endif
    }

    return MMI_RET_ALLOW_CLOSE;
}

//only to stop handler;
static mmi_ret mmi_alm_sync_group_leave_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	mmi_scr_locker_pre_lock_evt_struct *lock_event;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
    		if (!g_mmi_alm_self_close)
    		{
	            AlmSyncStopHandler();  	
	            g_mmi_alm_self_close = MMI_FALSE;
            }
	#ifdef __MMI_WEARABLE_DEVICE_ALARM__
		if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
		{
			gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
			swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
		}
	#endif
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
	        mmi_frm_cb_dereg_event(EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING, mmi_alm_sync_group_leave_proc,NULL);
#endif
            break;			
#if defined(__MMI_SCREEN_LOCK_ANY_TIME__) || defined(__MMI_SCREEN_LOCK_ANY_TIME_WDEVICE__)
         case EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING:
		 	lock_event = (mmi_scr_locker_pre_lock_evt_struct *)evt;
			
			if(lock_event->lock_mode == MMI_SCR_LOCKER_LOCK_MODE_POWER_KEY)
			{		
			#ifdef __MMI_WEARABLE_DEVICE_ALARM__
				if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
				{
					gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
					swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
				}
			#endif
				AlmSyncStopHandler();
				return MMI_RET_OK;
			}			
			else if(lock_event->lock_mode == MMI_SCR_LOCKER_LOCK_MODE_AUTO_LOCK)
			{
				return MMI_RET_ERR;
			}
		 	break;
#endif
#ifndef __MMI_DEV_NEW_SLIM__
        default:
            break;
#endif
    }

    return MMI_RET_ALLOW_CLOSE;
}

/*****************************************************************************
 * FUNCTION
*  AlmHandleEndKey
* DESCRIPTION
*  End key handler of alarm indication screen.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
static void AlmHandleEndKey(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
	 srv_alm_node_type *node;
     U8 i;

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
     MMI_ALM_TRACE0(MMI_ALM_END_KEY);
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
	if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
	{
			gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
			swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
	}
#endif
	StopTimer(ALARM_ALERT_NOTIFYDURATION_TIMER);
	 
     mmi_alm_stop_tone();

     i = g_alm_cntx.active_alm_idx;

     RETURN_IF_FAIL(i < NUM_OF_ALM);
	 
	 node = srv_alm_read(i);
  	 node->Snooze = 0;

     if (node->Freq == ALM_FREQ_ONCE)    /* reset the alarm state */
     {
         node->State = UNSET_STATE;
		 if (srv_alm_active_alms() == 0)
         {
             AlmDeactivateIndicator();
         }
     }
     srv_alm_write(i, node);
#ifdef __MMI_DEV_NEW_SLIM__
     mmi_frm_group_close(GRP_ID_ALM_IND);
	 srv_reminder_util_send_pwron();
#else
     AlmExitIndScreen();
     AlmSendPowerOn();
#endif
}


/*****************************************************************************
* FUNCTION
*  ExitAlmIndicationScreen
* DESCRIPTION
*  Exit function of alarm indication screen.
*  If exits screen because of interrupts, add screen to history.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
static void ExitAlmIndicationScreen(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
     mmi_alm_stop_tone();
	 srv_backlight_turn_off();
#ifdef MOTION_SENSOR_SUPPORT	 
     if(g_sensor_handle > 0)
     {
         srv_sensor_stop_listen(g_sensor_handle);
         g_sensor_handle = 0;
         
     }
#endif	 
#ifdef __MMI_WEARABLE_DEVICE_ALARM__
	StopTimer(ALARM_TIMER_WAIT_FOR_SNOOZE_TRIANGLE);
	StopTimer(ALARM_TIMER_WAIT_FOR_STOP_TRIANGLE);
	if (swatch_alarm_indication_cell.cell_layer_handler != GDI_LAYER_EMPTY_HANDLE)
	{
		gdi_layer_free(swatch_alarm_indication_cell.cell_layer_handler);
		swatch_alarm_indication_cell.cell_layer_handler = GDI_LAYER_EMPTY_HANDLE;
	}
#endif
     mmi_frm_end_scenario(MMI_SCENARIO_ID_REMINDER_ALARM);
}

#ifndef __MMI_DEV_NEW_SLIM__ 

/*****************************************************************************
* FUNCTION
*  AlmCommonExitProcedure
* DESCRIPTION
*  Stop alarm tone by user or timeout.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmCommonExitProcedure(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
     g_alm_cntx.IsSaveToHistory = 0;
     mmi_alm_stop_tone();
}


/*****************************************************************************
* FUNCTION
*  AlmExitIndScreen
* DESCRIPTION
*  Exit alarm indication screen.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmExitIndScreen(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/

     mmi_frm_group_close(GRP_ID_ALM_IND);
}
#endif

static void mmi_alm_stop_int(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
	alm_nvram_struct *alm_node;
	U8 index = g_alm_cntx.active_alm_idx;

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
	MMI_ALM_TRACE2(MMI_ALM_STOP, 0, index);
	 
     StopTimer(ALARM_ALERT_NOTIFYDURATION_TIMER);
#ifdef __MMI_DEV_NEW_SLIM__ 
    mmi_alm_stop_tone();
#else
     AlmCommonExitProcedure();
#endif

	RETURN_IF_FAIL(index < NUM_OF_ALM);
	alm_node = (alm_nvram_struct *)srv_alm_read(index);
             
     /* factory alarm does not have to re-schedule */
     alm_node->Snooze = 0;

     if (alm_node->Freq == ALM_FREQ_ONCE)/* reset the alarm state */
         {
         alm_node->State = UNSET_STATE;
         if (srv_alm_active_alms() == 0)
             {
                 AlmDeactivateIndicator();
             }
         }
         
    if (srv_bootup_get_booting_mode() == SRV_BOOTUP_MODE_ALARM)
    {
        /* When it is alarm boot up, there is only on group GRP_ID_ALM_IND */
        /* It should be closed or the power on screen may be displayed incorrectly */
        mmi_frm_group_close(GRP_ID_ALM_IND);
    } 
	
	 srv_alm_write(index, alm_node);

	 srv_reminder_notify_finish(MMI_TRUE);

	 g_alm_cntx.active_alm_idx = 0xFF;

}

#ifdef __MMI_WEARABLE_DEVICE_ALARM__
#if 0//def __MMI_BT_SUPPORT__
MMI_BOOL send_sync_alarm_cmd_to_sp()
{
	srv_bt_cm_bt_addr *bt_addr;
 #ifndef __MMI_BLE_DOGP_SUPPORT__
	const srv_bt_cm_dev_struct* linked_dev = NULL;
 #endif
	//int i = 0;
 #ifndef __MMI_BLE_DOGP_SUPPORT__
	U32 dev_count;
    U32 idx;
 #else
    U8 cntx_chnl = 0;
 #endif/*__MMI_BLE_DOGP_SUPPORT__*/
	
	U8 data[40] = {0};
	char cmd[32];
	char date[10];
	U8 len;
	U8 set = 0;
	
 #ifndef __MMI_BLE_DOGP_SUPPORT__	
	dev_count = srv_bt_cm_get_linked_dev_list_idx();

	for (idx = 0; idx < dev_count; idx++)
    {
        linked_dev = (srv_bt_cm_dev_struct*)srv_bt_cm_get_linked_dev_info(idx);
        if (linked_dev != NULL)
        {
            kal_prompt_trace(MOD_MMI, "send_sync_alarm_cmd_to_sp sync alarm ON idx:%d", idx);
            break;
        }
    }	
 #else
    //BLE 4.0;
    for(cntx_chnl = 0; cntx_chnl < 2; cntx_chnl++)
    {
	    bt_addr = (srv_bt_cm_bt_addr *)srv_bt_noti_get_bt_device_addr(cntx_chnl);
		
	    if(srv_bt_noti_check_connection_ext(bt_addr) == MMI_TRUE)
	    {
	       kal_prompt_trace(MOD_MMI_COMMON_APP, "send_sync_alarm_cmd_to_sp BLE connected cntx_chnl = %d", cntx_chnl);
		   break;
	    }
    }

	if(cntx_chnl == 2)
	{
	    kal_prompt_trace(MOD_MMI_COMMON_APP, "send_sync_alarm_cmd_to_sp BLE connect fail, cntx_chnl = %d", cntx_chnl);
		return;
	}
 #endif
 #ifndef __MMI_BLE_DOGP_SUPPORT__	
    //BT connected;
	if(linked_dev != NULL)
	{
		//bt_addr = &(((srv_bt_cm_dev_struct *)srv_bt_cm_get_linked_dev_info(0))->bd_addr);
		bt_addr = &(((srv_bt_cm_dev_struct *)linked_dev)->bd_addr);
 #endif/*__MMI_BLE_DOGP_SUPPORT__*/
        //send CMD;
		sprintf(cmd, "%s", BT_NOTIFY_SYNC_ALARM_CMD);//BT_NOTIFY_SYNC_ALARM_CMD
		sprintf(date, "%s", "0 0");
		len = strlen(date);
		
		kal_prompt_trace(MOD_MMI_COMMON_APP, "len = %d ", strlen(date));
		sprintf(data, "%s %s %s",BT_NOTIFY_SYNC_ALARM_SENDERR,
			BT_NOTIFY_SYNC_ALARM_RECEIVER,"0 3 0 0");
		
		MMI_PRINT(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[alarm]auto sync,data = %s",data);
		//EXCD language mtk_language 1 0
		
		kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[alarm]send auto sync");
#ifdef __MMI_BT_NOTI_SRV__
		srv_bt_noti_send_cmd_ext(bt_addr,cmd,data, strlen(data));
#endif
 #ifndef __MMI_BLE_DOGP_SUPPORT__	
	}
 #endif/*__MMI_BLE_DOGP_SUPPORT__*/
}
#else
MMI_BOOL send_sync_alarm_cmd_to_sp()
{
    return MMI_FALSE;
}
#endif/*__MMI_BT_SUPPORT__*/
#endif/*__MMI_WEARABLE_DEVICE_ALARM__*/
/*****************************************************************************
* FUNCTION
*  AlmStopHandler
* DESCRIPTION
*  Handler for stopping alarm.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmStopHandler(void)
{
     mmi_alm_stop_int();
	 mmi_frm_group_close(GRP_ID_ALM_IND);
}

#ifdef __MMI_WEARABLE_DEVICE_ALARM__
void AlmSyncStopHandler(void)
{
     mmi_alm_stop_int();
	 mmi_frm_group_close(GRP_ID_ALM_IND);
	 AlmDeactivateIndicator();
	 mmi_scr_locker_restart_timer();

     kal_prompt_trace(MOD_MMI_COMMON_APP, "AlmSyncStopHandler(), send_sync_alarm_cmd_to_sp.");
	 //send CMD to sync alarm again;
	 send_sync_alarm_cmd_to_sp();
}
#endif

/*****************************************************************************
* FUNCTION
*  AlmSnoozeHandler
* DESCRIPTION
*  Handler for snoozing alarm.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmSnoozeHandler(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
	 alm_nvram_struct *alm_node;
     U8 index = g_alm_cntx.active_alm_idx;

     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
    MMI_ALM_TRACE1(MMI_ALM_SNOOZE, index);
	 
	if (mmi_frm_nmgr_is_scenario_deferred(MMI_SCENARIO_ID_REMINDER_ALARM,
										  mmi_alm_nmgr_expiry_callback,
										  NULL))
	{
		mmi_frm_nmgr_cancel_deferred_scenario(MMI_SCENARIO_ID_REMINDER_ALARM, 
								   			  mmi_alm_nmgr_expiry_callback, 
								  			  NULL);
	}
	
     StopTimer(ALARM_ALERT_NOTIFYDURATION_TIMER);
	RETURN_IF_FAIL(index < NUM_OF_ALM);

	 alm_node = srv_alm_read(index);
#ifdef __MMI_DEV_NEW_SLIM__
	mmi_alm_stop_tone();
#else
     AlmCommonExitProcedure();
#endif

#ifndef __MMI_DEV_NEW_SLIM__
     if (alm_node->Snooze < MAX_SNOOZE_CHANCES)
#endif
     {
     	alm_node->Snooze++;
	 	alm_node->State = SET_STATE;
	
		srv_alm_write(index, alm_node);
		srv_reminder_notify_finish(MMI_FALSE);
		g_alm_cntx.active_alm_idx = 0xFF;

		mmi_frm_group_close(GRP_ID_ALM_IND);
     }
#ifndef __MMI_DEV_NEW_SLIM__
     else
     {
         AlmStopHandler();
     }
#endif
}


/*****************************************************************************
* FUNCTION
*  AlmActivateIndicator
* DESCRIPTION
*  Show alarm status icon in IDLE screen.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmActivateIndicator(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_status_icon_bar_set_icon_display(STATUS_ICON_ALARM);
#ifdef __MMI_SUBLCD__
#ifndef __MMI_SUBLCD_SHORT_STATUSICON_LIST__
    wgui_status_icon_bar_set_icon_display(STATUS_ICON_SUBLCD_ALARM);
#endif 
#endif 
    wgui_status_icon_bar_update();
}


/*****************************************************************************
* FUNCTION
*  AlmDeactivateIndicator
* DESCRIPTION
*  Hide alarm status icon in IDLE screen.
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void AlmDeactivateIndicator(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    wgui_status_icon_bar_reset_icon_display(STATUS_ICON_ALARM);
#ifdef __MMI_SUBLCD__
#ifndef __MMI_SUBLCD_SHORT_STATUSICON_LIST__
    wgui_status_icon_bar_reset_icon_display(STATUS_ICON_SUBLCD_ALARM);
#endif
#endif 
    wgui_status_icon_bar_update();
}


/*****************************************************************************
* FUNCTION
*  mmi_alm_play_tone_callback
* DESCRIPTION
*  Get Snooze Interval
* PARAMETERS
*  void
* RETURNS
*  Snooze interval
*****************************************************************************/
static srv_prof_ret mmi_alm_play_tone_callback(srv_prof_ret result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
     
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    RETURN_VAL_IF_FAIL(g_alm_cntx.active_alm_idx < NUM_OF_ALM, SRV_PROF_RET_NO);

    MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE_CALLBACK, result);
	
    if (result != SRV_PROF_RET_PLAY_FINISHED)
    {
        srv_prof_play_tone(SRV_PROF_TONE_ALARM, NULL);
    }
     
    return SRV_PROF_RET_YES;
}


/*****************************************************************************
* FUNCTION
*  mmi_alm_play_tone
* DESCRIPTION
*  Get Snooze Interval
* PARAMETERS
*  void
* RETURNS
*  Snooze interval
*****************************************************************************/
static void mmi_alm_play_tone(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 alarm_index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (mmi_is_redrawing_bk_screens())
    {
        return;
    }

	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 0);

    alarm_index = g_alm_cntx.active_alm_idx;
    RETURN_IF_FAIL(alarm_index < NUM_OF_ALM);

    if (!g_alm_cntx.is_tone_playing)
    {
         mdi_audio_suspend_background_play();
     
         /* Play special tone in call */
         if (mmi_frm_is_scenario_started(MMI_SCENARIO_ID_IN_CALL))
         {
#if 0
#ifndef	__OP01__		 	
/* under construction !*/
/* under construction !*/
#endif			 
#else
	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 11);
	
	srv_prof_play_tone(ALARM_TONE_IN_CALL,NULL);
#endif
         }
         else
         {        
#if 0
#if defined(__MMI_PROFILE_ALERT_TYPE_DOMINANT__)
/* under construction !*/
#endif 
#endif 
             {
#if defined (__MMI_PROFILE_HIGH_PRIORITY__)
						if (srv_prof_if_can_ring())
#endif
           {
#ifdef __MMI_ALM_CUSTOMIZE_TONE__
                 alm_nvram_struct *alm_node = srv_alm_read(alarm_index);
             
                 if (alm_node->AudioOption == ALM_AUDIO_OPTIONS_TONE)
                 {
          #ifndef __MMI_ALARM_SLIM2__
                     if (alm_node->AudioOptionValue == ALARM_TONE_FILE)
                     {
                     	srv_prof_ret ret;
                     	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 12);
                         ret = srv_prof_play_tone_with_filepath(
                                                SRV_PROF_TONE_ALARM, 
                                                (WCHAR*)alm_node->tone_path, 
                                                SRV_PROF_RING_TYPE_REPEAT, 
                                                mmi_alm_play_tone_callback);
                         
                         if (ret == SRV_PROF_RET_FAIL)
                         {
                             MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 13);
					#ifndef __MMI_DEV_NEW_SLIM__
                             srv_prof_play_tone_with_id(SRV_PROF_TONE_ALARM, 
                                                    mmi_alm_default_ring_id(), 
                                                    SRV_PROF_RING_TYPE_REPEAT, 
                                                    NULL);
					#else
                             srv_prof_play_tone_with_id(SRV_PROF_TONE_ALARM, 
                                                    ALARM_DEFAULT_RING_ID, 
                                                    SRV_PROF_RING_TYPE_REPEAT, 
                                                    NULL);			
					#endif
                         }

                     }
                     else
			#endif
                     {
                     	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 14);
                         srv_prof_play_tone_with_id(SRV_PROF_TONE_ALARM, 
                                                alm_node->AudioOptionValue, 
                                                SRV_PROF_RING_TYPE_REPEAT, 
                                                NULL);
                     }
                 }
#if 0
#ifdef __MMI_ALM_FM_RADIO_SUPPORT__                 
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_ALM_FM_RADIO_SUPPORT__ */
#endif
#else /* __MMI_ALM_CUSTOMIZE_TONE__ */ 
	    MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE, 17);
             srv_prof_play_tone(SRV_PROF_TONE_ALARM, NULL);
#endif
             }
             }
         }
		 
        g_alm_cntx.is_tone_playing = MMI_TRUE;
    }
}


/*****************************************************************************
* FUNCTION
*  mmi_alm_stop_tone
* DESCRIPTION
*  Stops Any Alarm Tone that may be playing
* PARAMETERS
*  void
* RETURNS
*  void
*****************************************************************************/
void mmi_alm_stop_tone(void)
{
     /*----------------------------------------------------------------*/
     /* Local Variables                                                */
     /*----------------------------------------------------------------*/
#if 0     
#if defined (__MMI_ALM_ALERT_TYPE__) || defined (__MMI_PROFILE_ALERT_TYPE_DOMINANT__)
/* under construction !*/
#endif 
#else
#if defined (__MMI_ALM_ALERT_TYPE__) 
     U8 alert_type;
#endif 
#endif 
     U8 alarm_index = g_alm_cntx.active_alm_idx;
     
     /*----------------------------------------------------------------*/
     /* Code Body                                                      */
     /*----------------------------------------------------------------*/
	 MMI_ALM_TRACE1(MMI_ALM_STOP_TONE, g_alm_cntx.is_tone_playing);

     RETURN_IF_FAIL(alarm_index < NUM_OF_ALM);

     if (g_alm_cntx.is_tone_playing || g_mmi_alm_play_tone)
     {
     	srv_alm_node_type *node = srv_alm_read(alarm_index);
#if defined (__MMI_ALM_ALERT_TYPE__)

         alert_type = node->AlertType;
         switch (alert_type)
         {
             case ALM_ALERT_VIBRATION_AND_RING:
             case ALM_ALERT_RING:
		#ifdef __MMI_ALM_CUSTOMIZE_TONE__
	 	if (node->AudioOption == ALM_AUDIO_OPTIONS_TONE)
	 	{
		    srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
		}
		else
		{
		    mdi_audio_stop_fmr();
				/* If there is no earphone, default tone will be playing. */
				if (srv_prof_is_tone_playing(SRV_PROF_TONE_ALARM))
				{
					srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
				}
		}
		#else
		    srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
		#endif
                 break;
	#ifndef __MMI_DEV_NEW_SLIM__
             default:
                 break;
	#endif
         }
#else /* __MMI_ALM_ALERT_TYPE__ */

		#ifdef __MMI_ALM_CUSTOMIZE_TONE__
		 if (node->AudioOption == ALM_AUDIO_OPTIONS_TONE)
		 {
			 srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
		 }
		 else
		 {
			 mdi_audio_stop_fmr();
		 }
         #else
             srv_prof_stop_tone(SRV_PROF_TONE_ALARM);
         #endif
#endif
         g_alm_cntx.is_tone_playing = MMI_FALSE;

         mdi_audio_resume_background_play();
     }

     mmi_alm_stop_vibrate();
}

#ifdef __MMI_ALM_CUST_VOLUME__
/*****************************************************************************
 * FUNCTION
 *  AlmPlayAlarmToneWithVol
 * DESCRIPTION
 *  Play alarm tone with setting volume level.
 * PARAMETERS
 *  volume      [IN]        
 *  U8(?)       [IN]        Volumn level
 * RETURNS
 *  void
 *****************************************************************************/
static void AlmPlayAlarmToneWithVol(U8 volume)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 alarm_index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE_WITH_VOL, volume);
	
    if (mmi_is_redrawing_bk_screens())
    {
        return;
    }
    
    alarm_index = g_alm_cntx.active_alm_idx;
    RETURN_IF_FAIL(alarm_index < NUM_OF_ALM);

    if (!g_alm_cntx.is_tone_playing)
    {
        srv_prof_play_req_struct play_req;
        alm_nvram_struct *alm_node;
        srv_prof_audio_type_enum audio_type = SRV_PROF_AUDIO_STRING;
        
        mdi_audio_suspend_background_play();
#if 0
    #ifdef __MMI_PROFILE_ALERT_TYPE_DOMINANT__
/* under construction !*/
    #endif 
    #endif 
        {
            /* Added support for Alarm Audio Options i.e. FM Radio as alarm tone. */
#ifdef __MMI_ALM_CUSTOMIZE_TONE__
            alm_node = srv_alm_read(alarm_index);
            if (alm_node->AudioOption == ALM_AUDIO_OPTIONS_TONE)
            {
                srv_prof_play_req_struct_init(&play_req, SRV_PROF_TONE_ALARM);
                if (alm_node->AudioOptionValue == ALARM_TONE_FILE)
                {                    
                	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE_WITH_VOL, 11);
                    if (srv_fmgr_fs_path_exist(alm_node->tone_path) < 0)
                    {
                    	MMI_ALM_TRACE1(MMI_ALM_PLAY_TONE_WITH_VOL, 12);
                        play_req.audio_id = g_alm_cntx.default_tone;
                    }
                    else
                    {
                        play_req.audio_path = alm_node->tone_path;
			audio_type = SRV_PROF_AUDIO_FILE;
                    }                    
                }
                else
                {
                    play_req.audio_id = alm_node->AudioOptionValue;
                }
                play_req.play_style = SRV_PROF_RING_TYPE_REPEAT;
                play_req.volume = volume;
                play_req.tone_type = SRV_PROF_TONE_ALARM;
                play_req.audio_path = MDI_DEVICE_SPEAKER_BOTH;
                play_req.callback = NULL;
		        play_req.audio_type = audio_type;
                srv_prof_play_tone_with_full_struct(&play_req);          
          }
#if 0
#ifdef __MMI_ALM_FM_RADIO_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_ALM_FM_RADIO_SUPPORT__ */
#endif
#else /* __MMI_ALM_CUSTOMIZE_TONE__ */
            srv_prof_play_req_struct_init(&play_req, SRV_PROF_TONE_ALARM);

            play_req.audio_id = g_alm_cntx.default_tone;
            play_req.play_style = SRV_PROF_RING_TYPE_REPEAT;
            play_req.volume = volume;
            play_req.tone_type = SRV_PROF_TONE_ALARM;
            play_req.callback = NULL;
	        play_req.audio_type = audio_type;
            srv_prof_play_tone_with_full_struct(&play_req);
#endif /* __MMI_ALM_CUSTOMIZE_TONE__ */

        }

        g_alm_cntx.is_tone_playing = MMI_TRUE;
    }
}
#endif /* __MMI_ALM_CUST_VOLUME__ */ 


/*****************************************************************************
 * FUNCTION
 *  mmi_alm_stop_vibrate
 * DESCRIPTION
 *  Display indication screen and play alarm tone when alarm expires.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_alm_stop_vibrate(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    if (g_alm_cntx.vibing || g_mmi_alm_play_vib)
    {
#if 0
#if defined (__MMI_ALM_ALERT_TYPE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#ifndef __MMI_DEV_NEW_SLIM__
/* under construction !*/
/* under construction !*/
	#endif
/* under construction !*/
#elif defined(__MMI_PROFILE_ALERT_TYPE_DOMINANT__)
/* under construction !*/
#endif
#else
#if defined (__MMI_ALM_ALERT_TYPE__)
		srv_alm_node_type *node = srv_alm_read(g_alm_cntx.active_alm_idx);

		switch (node->AlertType)
        {
            case ALM_ALERT_VIBRATION_AND_RING:
            case ALM_ALERT_VIBRATION:
                srv_vibrator_off();
                gui_touch_feedback_enable_vibrate();
                break;
	#ifndef __MMI_DEV_NEW_SLIM__
            default:
                break;
	#endif
        }
#endif
#endif

        g_alm_cntx.vibing = MMI_FALSE; 
    }
    
}

#define NMGR_HANDLER
/*****************************************************************************
 * FUNCTION
 *  mmi_alm_nmgr_evt_tone_handlr
 * DESCRIPTION
 *  Display indication screen and play alarm tone when alarm expires.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_alm_nmgr_evt_tone_handlr(void *param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_nmgr_custom_evt_struct *evt = (mmi_nmgr_custom_evt_struct*)param;
    srv_alm_node_type *node;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ALM_TRACE1(MMI_ALM_EVT_TONE_HDLR, 0);
	
    if (evt->scenario_id != MMI_SCENARIO_ID_REMINDER_ALARM)
    {
    	MMI_ALM_TRACE1(MMI_ALM_EVT_TONE_HDLR, 1);
       return MMI_RET_OK;
    }
    
    if (g_alm_cntx.active_alm_idx >= NUM_OF_ALM)
    {
    	MMI_ALM_TRACE1(MMI_ALM_EVT_TONE_HDLR, 2);
        return MMI_RET_OK;
    }

    #ifdef __MMI_ALM_ALERT_TYPE__
	node = srv_alm_read(g_alm_cntx.active_alm_idx);
    if (node->AlertType == ALM_ALERT_VIBRATION)
    {
    	MMI_ALM_TRACE1(MMI_ALM_EVT_TONE_HDLR, 3);
        return MMI_RET_OK;
    }
    #endif
	if (mmi_frm_nmgr_is_scenario_deferred(MMI_SCENARIO_ID_REMINDER_ALARM,
										  mmi_alm_nmgr_expiry_callback,
										  NULL))
	{
    	MMI_ALM_TRACE1(MMI_ALM_EVT_VIB_HDLR, 4);
        if ((mmi_frm_get_active_scenario_id() == MMI_SCENARIO_ID_USB_WEBCAM)||
			(mmi_frm_get_active_scenario_id() == MMI_SCENARIO_ID_UCM_OUTGOING_CALL))
    	{
            /* Play a notification ring tone if in web camera screen */
#if 0
#ifndef	__OP01__			
/* under construction !*/
#endif
#else
            srv_prof_play_tone(ALARM_TONE_IN_CALL,NULL);
#endif
    	}
        return MMI_RET_OK;
	}	

    mmi_alm_play_tone();
	g_mmi_alm_play_tone = MMI_TRUE;
	return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_alm_nmgr_evt_vib_handlr
 * DESCRIPTION
 *  Display indication screen and play alarm tone when alarm expires.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_alm_nmgr_evt_vib_handlr(void *param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_nmgr_custom_evt_struct *evt = (mmi_nmgr_custom_evt_struct*)param;
	srv_alm_node_type *node;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ALM_TRACE1(MMI_ALM_EVT_VIB_HDLR, 0);
	
    if (evt->scenario_id != MMI_SCENARIO_ID_REMINDER_ALARM)
    {
    	MMI_ALM_TRACE1(MMI_ALM_EVT_VIB_HDLR, 1);
       return MMI_RET_OK;
    }
    
    if (g_alm_cntx.active_alm_idx >= NUM_OF_ALM)
    {
    	MMI_ALM_TRACE1(MMI_ALM_EVT_VIB_HDLR, 2);
        return MMI_RET_OK;
    }

	if (mmi_frm_nmgr_is_scenario_deferred(MMI_SCENARIO_ID_REMINDER_ALARM,
										  mmi_alm_nmgr_expiry_callback,
										  NULL))
	{
    	MMI_ALM_TRACE1(MMI_ALM_EVT_VIB_HDLR, 3);
        return MMI_RET_OK;
	}
	
#if 0
#if defined (__MMI_ALM_ALERT_TYPE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined (__MMI_PROFILE_HIGH_PRIORITY__)
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef __MMI_DEV_NEW_SLIM__
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#elif defined(__MMI_PROFILE_ALERT_TYPE_DOMINANT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_PROFILE_ALERT_TYPE_DOMINANT__ */
#else
#if defined (__MMI_ALM_ALERT_TYPE__)
	node = srv_alm_read(g_alm_cntx.active_alm_idx);
    switch (node->AlertType)
    {
        case ALM_ALERT_VIBRATION_AND_RING:
        case ALM_ALERT_VIBRATION:
#if defined (__MMI_PROFILE_HIGH_PRIORITY__)
		 if (srv_prof_if_can_vibrate())
#endif
		{
            srv_vibrator_on();
            gui_touch_feedback_disable_vibrate();
            g_alm_cntx.vibing = MMI_TRUE;
			g_mmi_alm_play_vib = MMI_TRUE;
		}	
            break;
#ifndef __MMI_DEV_NEW_SLIM__
        default:
            break;
#endif
    }
#endif

#endif
    return MMI_RET_OK;
}

