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
 * BTMMIAntilostScr.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is for MMI screen of bluetooth anti-lost eature.
 *
 * Author:
 * -------
 *  
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/***************************************************************************** 
* Included files
*****************************************************************************/
#include "MMI_features.h"
#include "BTMMIScrGprots.h"
#include "BTMMIScr.h"

#include "ProfilesSrvGprot.h"
#include "Wgui_categories_util.h"
#include "wgui_categories_popup.h"
#include "gui_touch_feedback.h"

#include "GlobalResDef.h"
#include "CommonScreens.h"
#include "gpiosrvgprot.h"
#include "mmi_rp_app_profiles_def.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "BTMMIAntilostScr.h"

/***************************************************************************** 
 * External Variable
 *****************************************************************************/
#define MMI_BT_SLOW_DETECT_TIME (5)

/***************************************************************************** 
 * External functions
 *****************************************************************************/
extern void srv_bt_cm_copy_addr(void *dest,void *src);
 
/*****************************************************************
*Internal functions
*****************************************************************/
static  void mmi_bt_cm_read_rssi_cnf_hdler(void* msg);
static mmi_bt_anti_lost_alert_mode_enum mmi_bt_anti_lost_get_alert_mode(void);

/***************************************************************************** 
* Local Variable
*****************************************************************************/
static U16 g_mmi_bt_anti_lost_status_str_id[] = 
{
    STR_GLOBAL_OFF,
    STR_GLOBAL_ON,  
};

const static U16 g_mmi_bt_anti_lost_alert_str_id[MMI_BT_ANTI_LOST_ALERT_MODE_TOTAL]=
{
	STR_ID_PROF_VIB_AND_RING,
	STR_ID_PROF_RING_ONLY,
	STR_ID_PROF_VIB_ONLY
};

static cui_inline_item_caption_struct g_mmi_bt_anti_lost_status_caption = {STR_BT_SET_ANTI_LOST_STATUS} ;

static cui_inline_item_select_struct g_mmi_bt_anti_lost_status_select =
{
    2,
    0,
    g_mmi_bt_anti_lost_status_str_id
};

static cui_inline_item_caption_struct g_mmi_bt_anti_lost_mode_caption = {STR_BT_ANTI_LOST_ALERT_TYPE} ;

static const cui_inline_item_select_struct g_mmi_bt_anti_lost_alert_select = 
{
    MMI_BT_ANTI_LOST_ALERT_MODE_TOTAL, 
	0, 
	g_mmi_bt_anti_lost_alert_str_id
};

const static cui_inline_set_item_struct g_mmi_bt_anti_lost_inline_data[] =
{
    {BT_ANTI_LOST_SET_STATUS_CAPTION, CUI_INLINE_ITEM_TYPE_CAPTION, NULL, &g_mmi_bt_anti_lost_status_caption},
    {BT_ANTI_LOST_SET_STATUS, CUI_INLINE_ITEM_TYPE_SELECT, 0, &g_mmi_bt_anti_lost_status_select},
    {BT_ANTI_LOST_SET_ALERT_CAPTION, CUI_INLINE_ITEM_TYPE_CAPTION, NULL, &g_mmi_bt_anti_lost_mode_caption},
	{BT_ANTI_LOST_SET_ALERT_MODE,CUI_INLINE_ITEM_TYPE_SELECT,0, &g_mmi_bt_anti_lost_alert_select}
};

static const cui_inline_struct g_mmi_bt_anti_lost_inline = 
{
    sizeof(g_mmi_bt_anti_lost_inline_data)/sizeof(cui_inline_set_item_struct),
    STR_BT_SET_ANTI_LOST,
    NULL,
    CUI_INLINE_SCREEN_DEFAULT_TEXT | CUI_INLINE_SCREEN_DISABLE_DONE,
    NULL,
    g_mmi_bt_anti_lost_inline_data    
};


/* items common structure */
typedef struct 
{
    S16 curr_status;
    S16 alert_mode;
    MMI_BOOL need_slow_timer; /* After 1st  reminder, it will user show  timer to show reminder again. */
}mmi_bt_anti_lost_cntx_struct;


static mmi_bt_anti_lost_cntx_struct g_mmi_bt_anti_lost_cntx;

/*****************************************************************************
 * Functions
 *****************************************************************************/


static void mmi_bt_cm_read_rssi_req_hdler(srv_bt_cm_bt_addr *bt_addr)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	bt_bm_read_rssi_req_struct* msg_p;

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
	msg_p = (bt_bm_read_rssi_req_struct*)construct_local_para(
											sizeof(bt_bm_read_rssi_req_struct),
											TD_CTRL);
	srv_bt_cm_copy_addr(&msg_p->bd_addr,(void *)bt_addr);
	srv_bt_cm_send_msg(MOD_BT, BT_APP_SAP, MSG_ID_BT_READ_RSSI_REQ, (void*)msg_p, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_timeout_hdlr
 * DESCRIPTION
 *  This function is the timerout handler for send RSSI req to MOD_BT.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_timeout_hdlr(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	srv_bt_cm_bt_addr bt_addr;
	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_TIMER_OUT);
    
	mmi_bt_dialer_get_connected_dev_addr(&bt_addr);
	mmi_bt_cm_read_rssi_req_hdler(&bt_addr);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_start_timer
 * DESCRIPTION
 *  This function is to start query timer.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_start_timer(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	U32 time;
    
	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
	if(IsMyTimerExist(BT_READ_RSSI_TIMER))
    {   
	    return;
    }

	time = g_mmi_bt_anti_lost_cntx.need_slow_timer ? MMI_BT_SLOW_DETECT_TIME : BT_ANTI_LOST_CFG_QUERY_INTERVAL;

    MMI_TRACE(MMI_CONN_TRC_G7_BT,MMI_BT_ANTILOST_TIMER_START, time);
    
	if(time != 0)
	{
        StartTimer(BT_READ_RSSI_TIMER, (time * 1000), mmi_bt_anti_lost_timeout_hdlr);
	}
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_stop_timer
 * DESCRIPTION
 *  This function is to stop query timer.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_stop_timer(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_TIMER_STOP);

	if(IsMyTimerExist(BT_READ_RSSI_TIMER))
    {   
	  StopTimer(BT_READ_RSSI_TIMER);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_stop_timer
 * DESCRIPTION
 *  This function is to restart query timer.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_restart_timer(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_TIMER_RESTART);
    
	mmi_bt_anti_lost_stop_timer();
	mmi_bt_anti_lost_start_timer();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_init
 * DESCRIPTION
 *  This function is to init anti-lost global variable
 * PARAMETERS
 *  void         
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_anti_lost_init(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*/
	S16 error;
    
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/
	ReadValue(NVRAM_BT_ANTI_LOST_STATUS, &(g_mmi_bt_anti_lost_cntx.curr_status), DS_BYTE, &error);
	ReadValue(NVRAM_BT_ANTI_LOST_ALERT_MODE, &(g_mmi_bt_anti_lost_cntx.alert_mode), DS_BYTE, &error);
	
	if (g_mmi_bt_anti_lost_cntx.curr_status == 0xFF)
	{
        g_mmi_bt_anti_lost_cntx.curr_status = 0;
	    WriteValue(NVRAM_BT_ANTI_LOST_STATUS, &(g_mmi_bt_anti_lost_cntx.curr_status), DS_BYTE, &error);
	}

	if (g_mmi_bt_anti_lost_cntx.alert_mode == 0xFF)
	{
        g_mmi_bt_anti_lost_cntx.alert_mode = 0;
        WriteValue(NVRAM_BT_ANTI_LOST_ALERT_MODE, &(g_mmi_bt_anti_lost_cntx.alert_mode), DS_BYTE, &error);
	}
    
	SetProtocolEventHandler(mmi_bt_cm_read_rssi_cnf_hdler, MSG_ID_BT_READ_RSSI_CNF);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_get_status
 * DESCRIPTION
 *  This function is to get anti-lost status on/off
 * PARAMETERS
 *  void         
 * RETURNS
 *  0 OFF, 1 ON
 *****************************************************************************/
mmi_bt_anti_lost_status_enum mmi_bt_anti_lost_get_status(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_GET_STATUS, g_mmi_bt_anti_lost_cntx.curr_status);
    
	if (g_mmi_bt_anti_lost_cntx.curr_status == 1)
    {
        return MMI_BT_ANTI_LOST_ON;
    }

    return MMI_BT_ANTI_LOST_OFF;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_get_alert_mode
 * DESCRIPTION
 *  This function is to get anti-lost alert type
 * PARAMETERS
 *  void         
 * RETURNS
 *  0 , 1 ,2
 *****************************************************************************/
mmi_bt_anti_lost_alert_mode_enum mmi_bt_anti_lost_get_alert_mode(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_GET_ALERTMODE, g_mmi_bt_anti_lost_cntx.alert_mode);
    
    if (g_mmi_bt_anti_lost_cntx.alert_mode < MMI_BT_ANTI_LOST_ALERT_MODE_TOTAL)
    {
        return (mmi_bt_anti_lost_alert_mode_enum)g_mmi_bt_anti_lost_cntx.alert_mode;
    }
    
    return MMI_BT_ANTI_LOST_VIBRATION_AND_RING;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_setting_lsk_hdlr
 * DESCRIPTION
 *  This function is left softkey handler for connectivity->bluetooth->anti lost ->edit
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_setting_lsk_hdlr(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	S16 error;
	MMI_ID *inlinecui_gid = mmi_frm_group_get_user_data(GRP_ID_BT_ANTI_LOST_SETTING);
	U8 status;
	U8 alert_mode;
	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_ENTRY_SETTING_LSK);
    
	cui_inline_get_value(
	    *inlinecui_gid, 
	    BT_ANTI_LOST_SET_STATUS, 
	    (void*)&status);
	g_mmi_bt_anti_lost_cntx.curr_status = status;
	WriteValue(NVRAM_BT_ANTI_LOST_STATUS, &(g_mmi_bt_anti_lost_cntx.curr_status), DS_BYTE, &error);

	/*if set on, check if connected remote device has*/
	if((mmi_bt_anti_lost_get_status()== MMI_BT_ANTI_LOST_ON) && (srv_bt_cm_get_existed_conn_num() == 0)) 
	{
        mmi_bt_anti_lost_stop_timer();
        mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_SETTING);
        mmi_popup_display((WCHAR*)GetString(STR_BT_ANTI_LOST_PRE_ENTRY), MMI_EVENT_FAILURE, NULL);	
        mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_SETTING);
        
        return;
	}

	cui_inline_get_value(
	    *inlinecui_gid, 
	    BT_ANTI_LOST_SET_ALERT_MODE, 
	    (void*)&alert_mode);
	g_mmi_bt_anti_lost_cntx.alert_mode = alert_mode;
	WriteValue(NVRAM_BT_ANTI_LOST_ALERT_MODE, &(g_mmi_bt_anti_lost_cntx.alert_mode), DS_BYTE, &error);

	/*start to timer when anti-lost set on,need to modify */
	if(mmi_bt_anti_lost_get_status() == MMI_BT_ANTI_LOST_ON)
    {   
	    mmi_bt_anti_lost_start_timer();
    }
    
	mmi_popup_display_simple_ext(STR_GLOBAL_DONE, MMI_EVENT_SUCCESS, GRP_ID_ROOT, NULL);    
	mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_SETTING);

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_ENTRY_SETTING_SAVE, status, alert_mode);
}



/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_setting_proc
 * DESCRIPTION
 *  Proc function for anti lost setting 
 * PARAMETERS
 * 
 * RETURNS
 *  static mmi_ret
 *****************************************************************************/
static mmi_ret mmi_bt_anti_lost_setting_proc(mmi_event_struct *param)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	MMI_ID *inlinecui_gid =(MMI_ID*)mmi_frm_group_get_user_data(GRP_ID_BT_ANTI_LOST_SETTING);
	U8 highlighted_item;    
    
	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
	switch(param->evt_id)
	{
	  case EVT_ID_CUI_INLINE_SUBMIT:
	  case EVT_ID_CUI_INLINE_CSK_PRESS:        
	    mmi_bt_anti_lost_setting_lsk_hdlr();
	    break;
        
	  case EVT_ID_CUI_INLINE_ABORT:
	    cui_inline_close(*inlinecui_gid);
	    break;

	  case EVT_ID_CUI_INLINE_NOTIFY:
	  {
	    cui_event_inline_notify_struct *notify_event = (cui_event_inline_notify_struct*)param;
	  #ifndef __INLINE_CUI_SLIM_SELECT_ITEM_STYLE__
	    if (notify_event->event_type == CUI_INLINE_NOTIFY_HIGHLIGHT_ITEM)
	    {
	      cui_inline_set_softkey_text(
	      notify_event->sender_id, 
	      notify_event->item_id,
	      MMI_LEFT_SOFTKEY,
	      STR_GLOBAL_SAVE);
	    }
	  #endif /* __INLINE_CUI_SLIM_SELECT_ITEM_STYLE__ */
	    if (notify_event->event_type == CUI_INLINE_NOTIFY_SELECT_FOCUS_CHANGED)
	    {
	        switch (notify_event->item_id)
	        {
	          case BT_ANTI_LOST_SET_STATUS:
	            cui_inline_get_value(
	               *inlinecui_gid,
	               BT_ANTI_LOST_SET_STATUS,
	               (void*) &highlighted_item);                   
	            break;  
			case BT_ANTI_LOST_SET_ALERT_MODE:
				cui_inline_get_value(
					*inlinecui_gid,
					BT_ANTI_LOST_SET_ALERT_MODE,
					(void*) &highlighted_item);                   
				break;
			}
	    }
	  break;
	}   

	case EVT_ID_GROUP_DEINIT:
		if (param->user_data)
		{
			OslMfree(param->user_data);
			param->user_data = NULL;
		}
		break;
        
	default:
		break;
	}
	return MMI_RET_OK;    
}

/*****************************************************************************
 * FUNCTION
 * mmi_bt_entry_anti_lost
 * DESCRIPTION
 * entry function for anti lost setting
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_entry_anti_lost(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables											  */
	/*----------------------------------------------------------------*/
	MMI_ID *inlinecui_gid;
        
	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT,MMI_BT_ANTILOST_ENTRY_SETTING);
    
	inlinecui_gid = (MMI_ID*)OslMalloc(sizeof(MMI_ID));
	mmi_frm_group_create_ex(
		g_mmi_bt_scr_cntx.main_gid,
		GRP_ID_BT_ANTI_LOST_SETTING,
		mmi_bt_anti_lost_setting_proc,
		(void*)inlinecui_gid,
		MMI_FRM_NODE_SMART_CLOSE_FLAG);

	*inlinecui_gid = cui_inline_create(GRP_ID_BT_ANTI_LOST_SETTING, &g_mmi_bt_anti_lost_inline);
	cui_inline_set_value(*inlinecui_gid, BT_ANTI_LOST_SET_STATUS, (void*)g_mmi_bt_anti_lost_cntx.curr_status);
	cui_inline_set_value(*inlinecui_gid, BT_ANTI_LOST_SET_ALERT_MODE, (void*)g_mmi_bt_anti_lost_cntx.alert_mode);
	cui_inline_run(*inlinecui_gid);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_play_ringtone
 * DESCRIPTION
 *  play ringtone when alert
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_play_ringtone(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	srv_prof_play_req_struct play_req;    
	srv_prof_play_req_struct_init(&play_req, SRV_PROF_TONE_REMIND);
	/*----------------------------------------------------------------*/
	/* Code										 */
	/*----------------------------------------------------------------*/
	play_req.volume = 4;
	play_req.aud_path = MDI_DEVICE_LOUDSPEAKER;
	play_req.play_style = SRV_PROF_RING_TYPE_REPEAT;
	play_req.audio_id = srv_prof_get_audio_id_from_audio_resourece(SRV_PROF_AUDIO_RES_RING, 0);
	play_req.callback = NULL;
	play_req.audio_type = SRV_PROF_AUDIO_STRING;
	srv_prof_play_tone_with_full_struct(&play_req);
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_antilost_clear_alertmode
 * DESCRIPTION
 *  clear alert
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_antilost_clear_alertmode(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*/
    mmi_bt_anti_lost_alert_mode_enum mode = mmi_bt_anti_lost_get_alert_mode();
    
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/
            		
    if (mode == MMI_BT_ANTI_LOST_VIBRATION_AND_RING || mode == MMI_BT_ANTI_LOST_VIBRATION);
    {
        srv_vibrator_off();
    }
    
    if (mode == MMI_BT_ANTI_LOST_VIBRATION_AND_RING || mode == MMI_BT_ANTI_LOST_RING);
    {
        srv_prof_stop_tone(SRV_PROF_TONE_REMIND);
    }
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_indication_resume_hdlr
 * DESCRIPTION
 * stop exist alert and restart anti lost timer for next alert
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_indication_resume()
{
    /*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*
	
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/   
    mmi_bt_anti_lost_restart_timer();
    mmi_bt_antilost_clear_alertmode();
    
    mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_IND);
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_ind_lsk_hdlr
 * DESCRIPTION
 * stop exist alert and restart anti lost timer for next alert
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_ind_lsk_hdlr(void)
{
    /*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*
	
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_IND_LSK);
    g_mmi_bt_anti_lost_cntx.need_slow_timer = MMI_TRUE;
    mmi_bt_anti_lost_indication_resume();
}

static void mmi_bt_anti_lost_ind_reset(void)
{
    /*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*
	
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_IND_RESET);
    g_mmi_bt_anti_lost_cntx.need_slow_timer = MMI_FALSE;
    
    mmi_bt_anti_lost_indication_resume();
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_indication_cancle_hdlr
 * DESCRIPTION
 * exit alert ind group and stop anti-lost alert timer
 * PARAMETERS
 * void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_anti_lost_indication_cancle_hdlr()
{
	/*----------------------------------------------------------------*/
	/* Local Variables												*/
	/*----------------------------------------------------------------*/
    
	/*----------------------------------------------------------------*/
	/* Code Body														*/
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_IND_CANCEL);
    
    mmi_bt_antilost_clear_alertmode();
	StopTimer(BT_ANTI_LOST_ALARM_DURATION_TIMER);
	mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_IND);
	g_mmi_bt_anti_lost_cntx.need_slow_timer = MMI_FALSE;
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_connect_complete_hdlr
 * DESCRIPTION
 * connect event handler
 * PARAMETERS
 * void
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_bt_anti_lost_connect_complete_hdlr(void *para)
{

	/*----------------------------------------------------------------*/
	/* Local Variables											      */
	/*----------------------------------------------------------------*/
	srv_bt_cm_conn_res_struct *event_conn = (srv_bt_cm_conn_res_struct *)para;

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_CONN_EVT_HDLR, event_conn->result);

	if((mmi_bt_anti_lost_get_status() == MMI_BT_ANTI_LOST_ON) && (event_conn->result == SRV_BT_CM_BTBM_SUCCESS)) 
    {   
		mmi_bt_anti_lost_start_timer();
    }
    
	return MMI_RET_OK;	
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_disconn_complete_hdlr
 * DESCRIPTION
 * disconn event handler
 * PARAMETERS
 * void
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_bt_anti_lost_disconn_complete_hdlr(void *para)
{

	/*----------------------------------------------------------------*/
	/* Local Variables											      */
	/*----------------------------------------------------------------*/
	srv_bt_cm_disconnect_ind_struct *evt = (srv_bt_cm_disconnect_ind_struct *)para;
    
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_DISCONN_EVT_HDLR, evt->profile_id);
	if(srv_bt_cm_get_existed_conn_num() == 0 && mmi_frm_group_is_present(GRP_ID_BT_ANTI_LOST_SETTING))
	{
		mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_SETTING);
	}
    
	return MMI_RET_OK;	
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_indication_screen_delete_proc
 * DESCRIPTION
 * Proc function for delete anti lost alert indication screen
 * PARAMETERS
 * mmi_event_struct
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_bt_anti_lost_indication_screen_delete_proc(mmi_event_struct* evt)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	switch (evt->evt_id)
	{
		case EVT_ID_SCRN_GOBACK_IN_END_KEY:
		case EVT_ID_SCRN_DELETE_REQ_IN_END_KEY:  
		case EVT_ID_SCRN_DELETE_REQ:
            mmi_bt_antilost_clear_alertmode();
			StopTimer(BT_ANTI_LOST_ALARM_DURATION_TIMER);
            g_mmi_bt_anti_lost_cntx.need_slow_timer = MMI_FALSE;
			break;
            
		default:
			break;
	}


	return MMI_RET_OK;
	
}

static void mmi_bt_antilost_alert(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	mmi_bt_anti_lost_alert_mode_enum alert_mode;
	MMI_BOOL is_play_tone = MMI_FALSE;
	MMI_BOOL is_play_vib  = MMI_FALSE;

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/

    if (!mmi_frm_is_scenario_started(MMI_SCENARIO_ID_IN_CALL))
    {
		alert_mode = mmi_bt_anti_lost_get_alert_mode();
		switch(alert_mode)
		{
			case MMI_BT_ANTI_LOST_VIBRATION_AND_RING:
				is_play_tone = MMI_TRUE;
				is_play_vib = MMI_TRUE;
				break;
				
			case MMI_BT_ANTI_LOST_RING:
				is_play_tone = MMI_TRUE;
				break;

			case MMI_BT_ANTI_LOST_VIBRATION:
				is_play_vib = MMI_TRUE;
				break;	
			
			default:
				break;
	    }
        
	    if(is_play_tone)
	    {
		    mmi_bt_anti_lost_play_ringtone();
	    }
    
	    if(is_play_vib)
	    {
		    srv_vibrator_on();
		    gui_touch_feedback_disable_vibrate();
        }
    }
    else
    {
        srv_prof_play_tone(SRV_PROF_TONE_SMS_INCALL, NULL);
    }
       
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_exit_ind_scr
 * DESCRIPTION
 * entry function for  anti lost alert indication screen
 * PARAMETERS
 * void
 * RETURNS
 * void
 *****************************************************************************/
void mmi_bt_anti_lost_exit_ind_scr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_backlight_turn_off();
	mmi_frm_end_scenario(MMI_SCENARIO_ID_HIGH_SCRN);
}


/*****************************************************************************
 * FUNCTION
 * mmi_bt_anti_lost_entry_indication_screen
 * DESCRIPTION
 * entry function for  anti lost alert indication screen
 * PARAMETERS
 * void
 * RETURNS
 * void
 *****************************************************************************/
static void mmi_bt_anti_lost_entry_indication_screen(mmi_scrn_essential_struct* scr_info)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	U8 *guiBuffer;

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_IND);
    
	if (!mmi_frm_scrn_enter(
			GRP_ID_BT_ANTI_LOST_IND, 
			SCR_ID_BT_ANTI_LOST_IND, 
			mmi_bt_anti_lost_exit_ind_scr, 
			(FuncPtr)mmi_bt_anti_lost_entry_indication_screen, 
			MMI_FRM_FULL_SCRN))
	{
		mmi_frm_scrn_set_leave_proc(GRP_ID_BT_ANTI_LOST_IND, SCR_ID_BT_ANTI_LOST_IND, mmi_bt_anti_lost_indication_screen_delete_proc);
		return;
	}
    
	mmi_frm_scrn_set_leave_proc(GRP_ID_BT_ANTI_LOST_IND, SCR_ID_BT_ANTI_LOST_IND, mmi_bt_anti_lost_indication_screen_delete_proc);


    mmi_bt_antilost_alert();
    mmi_frm_start_scenario(MMI_SCENARIO_ID_HIGH_SCRN);

	ClearKeyEvents();
	guiBuffer = mmi_frm_scrn_get_active_gui_buf();
	 
	srv_backlight_turn_on(SRV_BACKLIGHT_PERMANENT);
	EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
	mmi_frm_set_curr_scr_blt_mode(MMI_FRM_SCR_BLT_IMMEDIATE);
	 
	ShowCategory121Screen(
		STR_GLOBAL_YES,
		0,
		STR_GLOBAL_NO,
		0,
		(U8*)GetString(STR_BT_ANTI_LOST_NOTIFY),
		NULL,
		guiBuffer,
		1);
	StartTimer(BT_ANTI_LOST_ALARM_DURATION_TIMER, MMI_BT_ANTI_LOST_ALARM_DURATION, mmi_bt_anti_lost_ind_lsk_hdlr);
	SetLeftSoftkeyFunction(mmi_bt_anti_lost_ind_lsk_hdlr, KEY_EVENT_UP);
	SetCenterSoftkeyFunction(mmi_bt_anti_lost_ind_lsk_hdlr, KEY_EVENT_UP);
	SetRightSoftkeyFunction(mmi_bt_anti_lost_indication_cancle_hdlr, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_indication_proc
 * DESCRIPTION
 * Proc fuprocesn for anti-lost indication
 * PARAMETERS
 *  evt    :[IN] group evs functioent
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_bt_anti_lost_indication_proc(mmi_event_struct* evt)
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
        	mmi_frm_group_close(GRP_ID_BT_ANTI_LOST_IND);
        	break;
            
        case EVT_ID_GROUP_INACTIVE:
        	if(mmi_bt_anti_lost_get_status() == MMI_BT_ANTI_LOST_ON)
        	{
        		mmi_bt_antilost_clear_alertmode();
        	}
            break;
        	
        default:
        	break;
    }

	return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_antilost_nmgr_callback
 * DESCRIPTION
 * NMGR callback
 * PARAMETERS
 *  scen_id    :[IN] scenario id
 *  arg          :[IN] arg
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static MMI_BOOL mmi_bt_antilost_nmgr_callback(mmi_scenario_id scen_id, void *arg)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body                                                      */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_NMGR_CALLBACK);
   
    if((MMI_FALSE == mmi_frm_group_is_present(GRP_ID_BT_ANTI_LOST_IND)) && 
       (mmi_bt_anti_lost_get_status() == MMI_BT_ANTI_LOST_ON))
    {
        mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_BT_ANTI_LOST_IND, mmi_bt_anti_lost_indication_proc, NULL);
        mmi_frm_group_enter(GRP_ID_BT_ANTI_LOST_IND, MMI_FRM_NODE_SMART_CLOSE_FLAG);
    
        if(mmi_frm_scrn_is_present(GRP_ID_BT_ANTI_LOST_IND, SCR_ID_BT_ANTI_LOST_IND, MMI_FRM_NODE_ALL_FLAG))
        {
            mmi_frm_scrn_close(GRP_ID_BT_ANTI_LOST_IND, SCR_ID_BT_ANTI_LOST_IND); 
        }
    
        mmi_frm_scrn_first_enter(
            GRP_ID_BT_ANTI_LOST_IND, 
            SCR_ID_BT_ANTI_LOST_IND, 
            (FuncPtr)mmi_bt_anti_lost_entry_indication_screen, 
            (void*)NULL);
    }

    return MMI_TRUE;
}




/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_indication_hdlr
 * DESCRIPTION
 * hdlr for event  .
 * PARAMETERS
 *  void
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
 void mmi_bt_cm_read_rssi_cnf_hdler(void* msg)
{

	/*----------------------------------------------------------------*/
	/* Local Variables												 */
	/*----------------------------------------------------------------*/
	bt_bm_read_rssi_cnf_struct* read_rssi_ind = (bt_bm_read_rssi_cnf_struct*)msg;
    
	/*----------------------------------------------------------------*/
	/* Code Body 													 */
	/*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_RSSI_CNF);

	if(read_rssi_ind->result == 0)	
	{   
	    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_ANTILOST_RSSI, read_rssi_ind->rssi_value, BT_ANTI_LOST_CFG_RSSI_ALERT_THRESHOLD);
        
		if(read_rssi_ind->rssi_value < BT_ANTI_LOST_CFG_RSSI_ALERT_THRESHOLD)
		{
            mmi_frm_nmgr_notify_by_app(
                MMI_SCENARIO_ID_HIGH_SCRN,
                 MMI_EVENT_WARNING,
                 mmi_bt_antilost_nmgr_callback,
                 NULL);
            
            mmi_bt_anti_lost_stop_timer();
		}
        else
        {
            if (mmi_frm_group_is_present(GRP_ID_BT_ANTI_LOST_IND))
		    {
			    mmi_bt_anti_lost_ind_reset();
                return;
		    }

            mmi_bt_anti_lost_restart_timer();
        }
        
	}
    
	return ;
}

