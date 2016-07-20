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
 * BTCONNScr.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is for MMI screen of BT dailer conn application.
 *
 * Author:
 * -------
 * -------

*============================================================================
* 			HISTORY
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
*
*------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "MMI_features.h"


#ifdef __MMI_BT_SUPPORT__ 
#ifdef __MMI_BT_DIALER_SUPPORT__

#include "GlobalResDef.h"
#include "CommonScreens.h"
#include "mmi_rp_app_bluetooth_def.h"



#include "wgui_categories_util.h"
#include "wgui_categories.h"
#include "bluetooth_bm_struct.h"

/* for get sound/image id */
#include "Custom_events_notify.h"

/***************************/
/* for MTK bluetooh       */
/***************************/
#ifdef __MMI_BT_AUDIO_SUPPORT__
#include "BTMMIScoPathGprots.h"
#endif

#include "BTMMIHfpGprots.h"
#include "BthfSrvGprot.h"

#ifdef __MMI_SPP_SUPPORT__

#include "BTMMISpp.h"
#include "BTMMISppGprots.h"
#endif
#include "BTMMIDunGprots.h"

#ifdef __MMI_SIMAP_SUPPORT__
#include "BTMMISimapGprots.h"
#endif

#ifdef __MMI_FAX_SUPPORT__
#include "BTMMIFaxGprots.h"
#endif

#if defined(__MMI_HIDD_SUPPORT__)
#include "BTMMIHiddGprots.h"
#include "BTMMIHidScr.h"
#endif /*defined(__MMI_HIDD_SUPPORT__)*/

#include "BTMMIObexGprots.h"

#ifdef __MMI_OPP_SUPPORT__
#include "BTMMIOppGprots.h"
#endif
#ifdef __MMI_BT_MAP_CLIENT__
#include "MapSrvGprot.h"
#include "mapcsrv.h"
#endif 
#if defined(__MMI_FTS_SUPPORT__) || defined(__MMI_FTC_SUPPORT__)
#include "BTMMIFtpGprots.h"
#endif

#ifdef __MMI_BIP_SUPPORT__
#include "BTMMIBipGprot.h"
#endif 

#ifdef __MMI_BPP_SUPPORT__
#include "BppMmiGprot.h"
#endif

#if defined(__MMI_PBAP_SUPPORT__) || defined(__BT_PBAP_CLIENT__)
#include "BTMMIPbapGprots.h"
#endif
#ifdef __MMI_BT_PBAP_CLIENT__
#include "PbapSrvGprot.h"
#include "pbapcsrv.h"
#endif
#include "BTDialerSrvGprot.h"
#include "mmi_rp_app_bt_dialer_def.h"
#if defined(__MMI_A2DP_SUPPORT__)
#include "A2dpSrvGprot.h"
#endif
#if defined(__MMI_BT_MUSIC__) || defined(__MMI_AUDIO_PLAYER_BT__)
#ifdef __MMI_AVRCP_SUPPORT__
#include "AudioPlayerBTNowPlaying.h"
#endif
#endif
/***************************/
/* bluetooh common files   */
/***************************/

#include "BTMMIScrGprots.h"
#include "BTMMIScr.h"
#include "BtcmCuiGprot.h"
#include "BtcmSrvGprot.h"
#include "nvram_common_defs.h"

/***************************************************************************** 
 * Typedef
 *****************************************************************************/
typedef  void (*mmi_bt_dialer_profile_cm_ballback)(srv_bt_cm_connection_type conn_type, MMI_BOOL result, MMI_BOOL is_connect);
typedef void (*mmi_bt_dialer_profile_conn_funcptr)(srv_bt_cm_bt_addr *addr, mmi_bt_dialer_profile_cm_ballback cb);
typedef void (*mmi_bt_dialer_profile_disconn_funcptr)(mmi_bt_dialer_profile_cm_ballback	cb);
typedef struct
{
	U32 indx;
	srv_bt_cm_connection_type type;
	mmi_bt_dialer_profile_conn_funcptr conn;
	mmi_bt_dialer_profile_disconn_funcptr disconn;	 
}mmi_bt_dialer_conn_callback_item;


/***************************************************************************** 
 * Golobal function
 *****************************************************************************/
#ifdef __MMI_BT_SPP_CLIENT_SUPPORT__
extern void mmi_spp_connect_req_from_cm(srv_bt_cm_bt_addr *dev_addr, srv_bt_cm_spp_callback  cb);
extern void mmi_bt_sppc_send_disconnect_req_from_cm(srv_bt_cm_spp_callback cb);
#endif
extern U16 mmi_btdialer_app_launch_func(void *param, U32 param_size);
#ifdef __MMI_BT_PBAP_CLIENT__
extern void mmi_pbapc_cm_connect_req(srv_bt_cm_bt_addr *addr);
typedef void (*srv_bt_cm_pbapc_callback)(srv_bt_cm_connection_type conn_type,MMI_BOOL result,MMI_BOOL is_connect);
void mmi_pbapc_connect_req_from_cm(srv_bt_cm_bt_addr *dev_addr,srv_bt_cm_pbapc_callback  mmi_pbapc_cm_cb);
extern void mmi_pbapc_cm_disconnect_req();
#endif
extern void mmi_btdialer_cm_app_exit_func(void);
extern void mmi_bt_entry_main_menu_bt_dialer(void);
extern void mmi_bt_dialor_disconnect(srv_bt_cm_bt_addr* dev_addr);
#ifdef __MMI_BT_MAP_CLIENT__
extern void srv_bt_mapc_connect_req_from_cm(srv_bt_cm_bt_addr dev_addr,srv_bt_cm_map_callback srv_cm_cb,MMI_BOOL is_mns_supported);
extern	void srv_mapc_disconnect_from_cm(srv_bt_cm_map_callback srv_cm_cb);
#endif
/***************************************************************************** 
 * Local functions
 *****************************************************************************/
static void mmi_bt_dialer_connecting(void);
static void mmi_bt_dialer_disconnect_lsk(void);
static void mmi_bt_dialer_disconn_hdlr(void);
#ifdef __MMI_BT_MAP_CLIENT__
static void mmi_bt_dialer_mapc_conn_adp(srv_bt_cm_bt_addr *addr, srv_bt_cm_map_callback cb);
#endif
#ifdef __MMI_BT_SPEAKER_SUPPORT__
#if defined(__MMI_A2DP_SUPPORT__)
static void mmi_bt_dialer_a2dp_discon_adp(srv_bt_a2dp_sink_cm_connect_notify cb);
static void mmi_bt_dialer_music_cb(kal_int32 result);
#endif
#endif
static const mmi_bt_dialer_conn_callback_item *mmi_bt_dialer_next_callback_item(srv_bt_cm_connection_type conn_type, MMI_BOOL connect_flag);
static void mmi_bt_dialer_set_time_out_flag(MMI_BOOL time_out_flag);
static MMI_BOOL mmi_bt_dialer_get_time_out_flag(void);

/**************************************************************************** 
 * Globol Variable
 *****************************************************************************/
extern mmi_bt_scr_cntx_struct g_mmi_bt_scr_cntx;
/**************************************************************************** 
 * Local Variable
 *****************************************************************************/
static MMI_BOOL g_mmi_is_disconn_req=MMI_FALSE;
static MMI_BOOL g_centkey_flag = MMI_FALSE;
static MMI_BOOL time_out_flag = MMI_FALSE;
static U32 g_bt_dialer_connecting = 0x00;
static MMI_BOOL g_mmi_bt_dialer_headset_flag = MMI_FALSE;
#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
static MMI_BOOL g_bt_dialer_reconn_flag = MMI_FALSE;
static S32 g_bt_dialer_reconn_accu_time;
static U32 g_bt_dialer_reconn_duration = MMI_BT_DIALER_AUTO_RECONN_DURATION;
static U32 g_bt_dialer_reconn_freq = MMI_BT_DIALER_AUTO_RECONN_FREQ;
static void mmi_bt_dialer_auto_reconn_hdlr(void);
static void mmi_bt_dialer_auto_reconn_start(void);
static void mmi_bt_dialer_auto_reconn_first_start_check(void);
#endif
static void mmi_bt_dialer_show_conn_status_nmgr_popup(WCHAR* str);

static mmi_frm_proc_id_info_struct g_id_info;
static mmi_id g_parent_id = NULL ;
static const mmi_bt_dialer_conn_callback_item g_mmi_btdialer_callback_tbl[] = 
{
	{
		0,
        SRV_BT_CM_HSP_CONNECTION,
		srv_bt_dialer_cm_connect_req,
		srv_bt_dialer_cm_disconnect_req
	},
	#ifndef __MMI_BT_MAPC_BY_SPP__
#ifdef __MMI_BT_MAP_CLIENT__
    {
        1,
        SRV_BT_CM_MAPC_CONNECTION, 
		mmi_bt_dialer_mapc_conn_adp,
		srv_mapc_disconnect_from_cm
	},
#endif
#endif
#ifdef __MMI_BT_PBAP_CLIENT__
    {
    	2,
        SRV_BT_CM_PBAPC_CONNECTION,
		mmi_pbapc_connect_req_from_cm,
		mmi_pbapc_cm_disconnect_req
	},
#endif
#ifdef __MMI_BT_SPP_CLIENT_SUPPORT__

	{
		3,
        SRV_BT_CM_SPP_CONNECTION,
		mmi_spp_connect_req_from_cm,
		mmi_bt_sppc_send_disconnect_req_from_cm
	},
	#endif
#ifdef __MMI_BT_SPEAKER_SUPPORT__
#if defined(__MMI_A2DP_SUPPORT__)

	{
		4,
        SRV_BT_CM_A2DP_CONNECTION,
		NULL,
		mmi_bt_dialer_a2dp_discon_adp
	},
#endif /* __MMI_A2DP_SUPPORT__ */
#endif /* __MMI_BT_SPEAKER_SUPPORT__ */
};
static MMI_BOOL mmi_bt_dialer_get_time_out_flag(void)
{
	  /*----------------------------------------------------------------*/
	  /* Local Variables												*/
	  /*----------------------------------------------------------------*/
	
	  /*----------------------------------------------------------------*/
	  /* Code Body														*/
	  /*----------------------------------------------------------------*/
	
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_TIME_OUT_FLAG, time_out_flag);
	return time_out_flag;

}
static void mmi_bt_dialer_set_time_out_flag(MMI_BOOL flag)
{
	  /*----------------------------------------------------------------*/
	  /* Local Variables												*/
	  /*----------------------------------------------------------------*/
	
	  /*----------------------------------------------------------------*/
	  /* Code Body														*/
	  /*----------------------------------------------------------------*/
	
	time_out_flag = flag;
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_TIME_OUT_FLAG, time_out_flag);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_set_connecting_flag
 * DESCRIPTION
 *  This function is for setting connecting flag.
 * PARAMETERS
 *  MMI_BOOL req
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_set_connecting_flag(U32 req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  g_bt_dialer_connecting &= req;
  MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING_STATUS, g_bt_dialer_connecting);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_get_connecting_flag
 * DESCRIPTION
 * This function is for getting connecting flag.
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  MMI_BOOL g_bt_dialer_connecting
 *****************************************************************************/

U32 mmi_bt_dialer_get_connecting_flag(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING_STATUS, g_bt_dialer_connecting);
  return g_bt_dialer_connecting;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_set_disconn_req
 * DESCRIPTION
 *  This function is for setting disconnecting flag.
 * PARAMETERS
 *  MMI_BOOL req
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_set_disconn_req(MMI_BOOL req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  g_mmi_is_disconn_req = req;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_get_disconn_req
 * DESCRIPTION
 *  This function is for getting disconnecting flag.
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  MMI_BOOL g_mmi_is_disconn_req
 *****************************************************************************/

MMI_BOOL mmi_bt_dialer_get_disconn_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  return g_mmi_is_disconn_req;
}

void mmi_bt_dialer_get_connected_dev_addr(srv_bt_cm_bt_addr *addr)
{
    U16 error;
    ReadRecord(NVRAM_BYTE_BT_DIALER_AUTO_CONN,1,addr,sizeof(srv_bt_cm_bt_addr),&error);

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_entry_main_menu_bt_dialer
 * DESCRIPTION
 *  This function is Main menu entry function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_entry_main_menu_bt_dialer(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_G7_BT_ENTRY_MAIN_MENU);

    g_mmi_bt_scr_cntx.main_gid = mmi_frm_group_create_ex(
        GRP_ID_ROOT,
        GRP_ID_BT_CM,
        mmi_bt_main_group_proc,
        NULL,
        MMI_FRM_NODE_SMART_CLOSE_FLAG);

	mmi_bt_pre_entry_mydev_menu	();
		
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_show_dialor_conn_success
 * DESCRIPTION
 *  This function is for showning connected popup function
 * PARAMETERS
 *  srv_bt_cm_dev_struct* dev_p
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_bt_conn_pop_show_timer_hdlr(void* usr_data)
{
}

void mmi_bt_show_dialor_conn_success(srv_bt_cm_dev_struct* dev_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	MMI_BOOL show_pop = MMI_TRUE;
	S32 i;
    S16 error;
    S16 error1;
    WCHAR string[NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE] = {0};
    WCHAR string1[NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE] = {0};
   
    /*----------------------------------------------------------------*/
    /* Code Body 													 */
    /*----------------------------------------------------------------*/
	#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
	if (MMI_TRUE == g_bt_dialer_reconn_flag || 0 != g_bt_dialer_reconn_accu_time)
	{
		show_pop = MMI_FALSE;
	}
	#endif
   
    if(dev_p==NULL)
        return;
    mmi_chset_utf8_to_ucs2_string((kal_uint8*)string, (SRV_BT_CM_BD_UCS2_NAME_LEN * 2), (kal_uint8*)dev_p->name);
    mmi_bt_dialer_app_emit_event(EVT_ID_DIALER_CONN_EVENT_ID, string);
    mmi_wcscat((WCHAR*)string, (WCHAR*)GetString(STR_BT_CONN_POP));
    WriteRecord(NVRAM_BYTE_BT_DIALER_CONNSTR,1,&string,NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE,&error);
    mmi_wcs_to_asc((CHAR *)string1, (WCHAR *)string);
    kal_prompt_trace(MOD_MMI, "[btconn]STRING = %s", string1);
    WriteRecord(NVRAM_BYTE_BT_DIALER_AUTO_CONN,1,(srv_bt_cm_bt_addr*)&dev_p->bd_addr,sizeof(srv_bt_cm_bt_addr),&error); 
	if (show_pop)
	{
		mmi_bt_dialer_show_conn_status_nmgr_popup((WCHAR*)string);
	}
 
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_EVENT);

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_show_dialor_help
 * DESCRIPTION
 *  This function is for showning help function
 * PARAMETERS
 *  srv_bt_cm_dev_struct *dev_p
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_show_dialor_help(srv_bt_cm_dev_struct *dev_p)
{
	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 ui_buffer_size;
    U8 *guiBuffer;                      /* Buffer holding history data */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_G7_BT_ENTRY_ABOUT);

    if (mmi_frm_scrn_enter(
            g_mmi_bt_scr_cntx.main_gid,
            SCR_BT_ABOUT,
            (FuncPtr) NULL,
            (FuncPtr) mmi_bt_show_dialor_help,
            MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }

#ifdef __MMI_BTD_BOX_UI_STYLE__
    mmi_wcscpy(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) GetString(STR_BT_MYDEV_HELP_CONTENT_BT_BOX));
#else /*__MMI_BTD_BOX_UI_STYLE__*/
    mmi_wcscpy(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) GetString(STR_BT_DIALER_HELP_CONTENT));
    #ifdef __MMI_BT_REMOTE_CAPTURE__
        mmi_wcscat(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) GetString(STR_BT_REMOTE_CAPTURE_INFO));
    #endif
    #ifdef __MMI_BT_ANTI_LOST_BY_RSSI__
        mmi_wcscat(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) GetString(STR_BT_ANTI_LOST_INFO));
    #endif
    mmi_wcscat(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) GetString(STR_BT_DIALER_ETC));
#endif /*__MMI_BTD_BOX_UI_STYLE__*/
    mmi_wcscat(g_mmi_bt_scr_cntx.ui_buf, (WCHAR *) L"\n");


    ui_buffer_size = mmi_wcslen(g_mmi_bt_scr_cntx.ui_buf);

    guiBuffer = mmi_frm_scrn_get_active_gui_buf();

    SetParentHandler(MENU_CONN_BT_MAIN);
	if( srv_bt_cm_get_btdialor_app_mode() == MMI_TRUE)
    	ShowCategory74Screen(
        	STR_GLOBAL_HELP,
       		 GetRootTitleIcon(MENU_CONN_BT_MAIN),
        	0,
        	0,
        	STR_GLOBAL_BACK,
        	IMG_GLOBAL_BACK,
        	(PU8) g_mmi_bt_scr_cntx.ui_buf,
        	ui_buffer_size,
        	guiBuffer);
	else
    ShowCategory74Screen(
        STR_BT_ABOUT,
        GetRootTitleIcon(MENU_CONN_BT_MAIN),
        0,
        0,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        (PU8) g_mmi_bt_scr_cntx.ui_buf,
        ui_buffer_size,
        guiBuffer);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_mapc_conn_adp
 * DESCRIPTION
 *  This function is for connecting mapc function
 * PARAMETERS
 *  srv_bt_cm_bt_addr *addr
 *  srv_bt_cm_map_callback cb
 *
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __MMI_BT_MAP_CLIENT__
static void mmi_bt_dialer_mapc_conn_adp(srv_bt_cm_bt_addr *addr, srv_bt_cm_map_callback cb)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                						*/
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                     						 */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_MAPC_CONN_FUNC);
	  srv_bt_mapc_connect_req_from_cm((*addr), cb, MMI_TRUE);
}
#endif
#ifdef __MMI_BT_SPEAKER_SUPPORT__
#if defined(__MMI_A2DP_SUPPORT__)
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_a2dp_discon_adp
 * DESCRIPTION
 *  This function is for disconnecting a2dp  function
 * PARAMETERS
 *  srv_bt_a2dp_sink_cm_connect_notify cb
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_bt_dialer_a2dp_discon_adp(srv_bt_a2dp_sink_cm_connect_notify cb)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                						*/
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                     						 */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_A2DP_DIS_FUNC);
	srv_bt_a2dp_sink_cm_disconnect_req(cb);
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
		#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
/* under construction !*/
		#endif
/* under construction !*/
/* under construction !*/
	 #endif
}
#endif //__MMI_A2DP_SUPPORT__
#endif //__MMI_BT_SPEAKER_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_next_callback_item
 * DESCRIPTION
 *  This function is for call callback function.
 * PARAMETERS
 *  srv_bt_cm_connection_type conn_type
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
static const mmi_bt_dialer_conn_callback_item *mmi_bt_dialer_next_callback_item(srv_bt_cm_connection_type conn_type, MMI_BOOL connect_flag)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                						*/
    /*----------------------------------------------------------------*/
	U32 total = sizeof(g_mmi_btdialer_callback_tbl) / sizeof (mmi_bt_dialer_conn_callback_item);
	U32 i;
	static MMI_BOOL has_first_item_conn = MMI_FALSE;
    /*----------------------------------------------------------------*/
    /* Code Body                                                     						 */
    /*----------------------------------------------------------------*/
	kal_prompt_trace(MOD_MMI_CONN_APP,"[btconn]mmi_bt_dialer_next_callback_item(type = %d, connect_flag = %)", conn_type, (U32)connect_flag);

    if (conn_type == SRV_BT_CM_NO_CONNECTION)
	{
		return &g_mmi_btdialer_callback_tbl[0];
	}

	if(conn_type == g_mmi_btdialer_callback_tbl[0].type)
	{
		has_first_item_conn = connect_flag? MMI_TRUE: MMI_FALSE;
	}
	
   for (i = 0; i < total  ; i++)
	{
		if (g_mmi_btdialer_callback_tbl[i].type == conn_type)
		{
				g_bt_dialer_connecting &=~(1<<g_mmi_btdialer_callback_tbl[i].indx);// receive the request
	        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING_STATUS, g_bt_dialer_connecting);
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CBTBL, i, conn_type);
			break;
		}
	}
   
	if ((i + 1) < total)
	{
		return &g_mmi_btdialer_callback_tbl[i + 1];
	}

	if (conn_type == SRV_BT_CM_A2DP_CONNECTION && connect_flag &&  !has_first_item_conn)
	{
		return &g_mmi_btdialer_callback_tbl[0];
	}
	
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CB_NEXTITEM, i, total);
	return NULL;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_callback_done
 * DESCRIPTION
 *  This function is callback result function
 * PARAMETERS
 *  MMI_BOOL result
 *  MMI_BOOL is_connect
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_dialer_show_conn_status_nmgr_popup(WCHAR* str)
{
	MMI_BOOL timer_exist = IsMyTimerExist(BT_DIALER_CONN_NMGR_POP_TIMER);
	kal_prompt_trace(MOD_MMI_CONN_APP, "mmi_bt_dialer_show_conn_status_nmgr_popup, timer_exist = %d", (U32)timer_exist);
	if(!timer_exist)
	{
		StartTimer(BT_DIALER_CONN_NMGR_POP_TIMER,2000,mmi_bt_conn_pop_show_timer_hdlr);
		mmi_frm_nmgr_popup(MMI_SCENARIO_ID_DEFAULT, MMI_EVENT_FAILURE, str);
	}
}
void mmi_bt_dialer_callback_done(MMI_BOOL result,MMI_BOOL is_connect)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                						*/
    /*----------------------------------------------------------------*/
	MMI_BOOL show_pop = MMI_TRUE;
    /*----------------------------------------------------------------*/
    /* Code Body                                                     						 */
    /*----------------------------------------------------------------*/
	/* when reconnection started, then should not show popup*/
	#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
		if (MMI_TRUE == g_bt_dialer_reconn_flag && 0 != g_bt_dialer_reconn_accu_time)
		{
			show_pop = MMI_FALSE;
		}
	#endif
	
	mmi_bt_update_status_icon();
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CB_DONE, result, is_connect);

	if (is_connect)
	{
		      //  mmi_frm_scrn_close(mmi_frm_group_get_active_id(), SCR_BT_INQUIRED_POWER_ON);
		     mmi_frm_scrn_close(g_parent_id, SCR_BT_INQUIRED_POWER_ON); 
		if(mmi_bt_dialer_app_is_connected())
		{			
			mmi_bt_show_dialor_conn_success((srv_bt_cm_dev_struct *)srv_bt_cm_get_dev_info(&g_mmi_bt_scr_cntx.conn_dev_add));

			#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
				MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIALER_AUTO_RECONN_STATUS, is_connect, g_bt_dialer_reconn_flag, g_bt_dialer_reconn_accu_time/1000);

				if (MMI_TRUE == g_bt_dialer_reconn_flag)
				{
					g_bt_dialer_reconn_flag = MMI_FALSE;
				}
			#endif
		}
		else
		{
			MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_FAIL_POPUP);
			if (show_pop)
			{
				mmi_frm_nmgr_popup(MMI_SCENARIO_ID_DEFAULT, MMI_EVENT_FAILURE, (WCHAR*)GetString(STR_BT_CONN_FAILED));
			}
		}	
        mmi_frm_scrn_close(g_mmi_bt_scr_cntx.main_gid, SCR_BT_CONNECTING);
	}
	else
	{
		 mmi_frm_scrn_close(mmi_frm_group_get_active_id(), SCR_BT_DIALER_DISCONNECT_ASK);
		if(!mmi_bt_dialer_app_is_connected())
		{
    		if(!srv_shutdown_is_running())
    		{
				mmi_frm_nmgr_popup(MMI_SCENARIO_ID_DEFAULT, MMI_EVENT_FAILURE, (WCHAR*)GetString(STR_BT_DISCON_ED));
			mmi_bt_dialer_app_emit_event(EVT_ID_DIALER_DISCONN_EVENT_ID, NULL);
			MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIS_EVENT);
                mmi_bt_dialer_set_disconn_req(MMI_FALSE);
            mmi_frm_scrn_close(g_mmi_bt_scr_cntx.main_gid, SCR_BT_CONNECTING);

				/* restart connnection when the disconnection pop comes firstly*/
				#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
				mmi_bt_dialer_auto_reconn_first_start_check();
				#endif
    		}
		}
	}
	if(mmi_bt_dialer_get_time_out_flag())
	{
     	mmi_bt_dialer_set_time_out_flag(MMI_FALSE); 
	}
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialor_callback
 * DESCRIPTION
 *  This function is bt dialer callback function
 * PARAMETERS
 *  srv_bt_cm_connection_type conn_type
 * MMI_BOOL result
 * MMI_BOOL is_connect
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialor_callback(srv_bt_cm_connection_type conn_type, MMI_BOOL result,MMI_BOOL is_connect)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                						*/
    /*----------------------------------------------------------------*/
	MMI_BOOL res = MMI_FALSE;
	srv_bt_cm_dev_struct* dev_p;
	const mmi_bt_dialer_conn_callback_item *callback_item;
#if defined(__MMI_A2DP_SUPPORT__)
	srv_bt_cm_bt_addr* conn_addr = srv_a2dp_get_connect_bt_addr();
#else
  srv_bt_cm_bt_addr* conn_addr;
#endif
    /*----------------------------------------------------------------*/
    /* Code Body                                                     						 */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CALLBACK, result, is_connect, conn_type);
 #if defined(__MMI_A2DP_SUPPORT__)   
	if (SRV_BT_CM_A2DP_CONNECTION != conn_type || conn_addr->nap == 0 || conn_addr->lap == 0)
	{
 #endif		
		conn_addr = srv_bt_get_dialor_addr();
#if defined(__MMI_A2DP_SUPPORT__)	
	}
#endif	
	srv_bt_cm_copy_addr(&g_mmi_bt_scr_cntx.conn_dev_add,conn_addr);

	dev_p = (srv_bt_cm_dev_struct *)srv_bt_cm_get_dev_info(&g_mmi_bt_scr_cntx.conn_dev_add);
	callback_item = mmi_bt_dialer_next_callback_item(conn_type, is_connect);

	if (mmi_bt_dialer_get_time_out_flag())
	{
		callback_item = NULL;
		  MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CB_NULL);

	}
	if (callback_item != NULL)
	{
	    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CBITEM_NULL);
		if (is_connect)
		{
			if (callback_item->conn != NULL)
			{
                MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CBITEM_CONN_NULL);
				g_bt_dialer_connecting |=1<<callback_item->indx;
				callback_item->conn(&dev_p->bd_addr,mmi_bt_dialor_callback);
				MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING_STATUS, g_bt_dialer_connecting);
			}
            else
            {
                mmi_bt_dialer_callback_done(result, is_connect);
            }
		}
		else
		{
			callback_item->disconn(mmi_bt_dialor_callback);
		}
	}
	else
	{
        mmi_bt_dialer_callback_done(result, is_connect);
	}

}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialor_disconnect
 * DESCRIPTION
 *  This function is bt dialer disconnect function
 * PARAMETERS
 *  srv_bt_cm_bt_addr* dev_addr
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_bt_dialor_disconnect(srv_bt_cm_bt_addr* dev_addr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	const mmi_bt_dialer_conn_callback_item *callback_item;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
     MMI_TRACE(MMI_CONN_TRC_G7_BT,MMI_BT_CONN_DIS_FROM_DAILER);
    if(!mmi_bt_dialer_get_connecting_flag())
    {
        mmi_bt_dialer_set_disconn_req(MMI_TRUE);
        if(!srv_shutdown_is_running())
        {
		    mmi_bt_show_progress_scr(
	                g_mmi_bt_scr_cntx.main_gid,
	                SCR_BT_CONNECTING,
	                STR_GLOBAL_DISCONNECTING,
	                STR_GLOBAL_DISCONNECTING,
	                NULL);
        }
	    callback_item = mmi_bt_dialer_next_callback_item(SRV_BT_CM_NO_CONNECTION, MMI_FALSE);
	    if (callback_item != NULL)
	    {
	 	    callback_item->disconn(mmi_bt_dialor_callback);
	    }
     }
     else
     {
         mmi_frm_nmgr_popup(
                        MMI_SCENARIO_ID_DEFAULT,
                        MMI_EVENT_FAILURE,
                       (WCHAR*)GetString(STR_BT_SERVICE_UNAVAILABLE));
     }
  
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_is_message_access_profile_supported
 * DESCRIPTION
 *  This function is mmi_bt_is_message_access_profile_supported
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_is_message_access_profile_supported()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	#ifdef __MMI_BT_MAP_CLIENT__
	return g_mmi_bt_scr_cntx.map_supported;
	#else
	return MMI_FALSE;
	#endif 

}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_is_call_supported
 * DESCRIPTION
 *  This function is mmi_bt_is_call_supported
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_bt_is_call_supported()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	return g_mmi_bt_scr_cntx.call_supported;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_map_connect_timeout
 * DESCRIPTION
 *  This function is mmi_bt_map_connect_timeout
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_map_connect_timeout()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	StopTimer(BT_MMI_MAP_CONNECT_TIMER);
	mmi_bt_dialor_callback(SRV_BT_CM_MAPC_CONNECTION,MMI_FALSE,MMI_TRUE);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialor_connect
 * DESCRIPTION
 *  This function is bt dialer connect function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialor_connect(srv_bt_cm_bt_addr* dev_addr)
{	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	MMI_BOOL show_pop_up = MMI_TRUE;
	const mmi_bt_dialer_conn_callback_item *callback_item;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    callback_item = mmi_bt_dialer_next_callback_item(SRV_BT_CM_NO_CONNECTION, MMI_TRUE);
    MMI_TRACE(MMI_CONN_TRC_G7_BT,MMI_BT_CONN_CONNECT_FROM_DIALER);

    if(!mmi_bt_dialer_get_connecting_flag())
    {
        g_bt_dialer_connecting |=1<<callback_item->indx;
	    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING_STATUS, g_bt_dialer_connecting);
	    if (callback_item != NULL)
	    {
            MMI_TRACE(MMI_CONN_TRC_G7_BT,MMI_BT_CONN_CBITEM_NULL);
		    callback_item->conn(dev_addr, mmi_bt_dialor_callback);
	    }
		#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
		if (g_bt_dialer_reconn_flag == MMI_TRUE)
			show_pop_up = MMI_FALSE;
 		#endif
		if (show_pop_up)
		{
			mmi_bt_show_progress_scr(g_mmi_bt_scr_cntx.main_gid, SCR_BT_CONNECTING, STR_GLOBAL_CONNECTING, STR_GLOBAL_CONNECTING, NULL);
		}
     }
     else
     {
     	U16 pop_str_id = STR_BT_SERVICE_UNAVAILABLE;
     #ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
     	if (g_bt_dialer_reconn_flag == MMI_TRUE)
     	{
			g_bt_dialer_reconn_flag = MMI_FALSE;
		}
	#endif
         mmi_frm_nmgr_popup(
                        MMI_SCENARIO_ID_DEFAULT,
                        MMI_EVENT_FAILURE,
                       (WCHAR*)GetString(pop_str_id));
     }
  
}


/*****************************************************************************
 * FUNCTION
 *  mmi_bt_entry_dialor_mydev_opt_group_proc
 * DESCRIPTION
 *  This function is the screen group proc function of my device option menu
 *  It is responsible for handling the event of screen group.
 * PARAMETERS
 *  evt         [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_bt_entry_dialor_mydev_opt_group_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct* menu_evt = (cui_menu_event_struct*)evt;
    srv_bt_cm_dev_struct* dev_p =(srv_bt_cm_dev_struct *)srv_bt_cm_get_dev_info(&g_mmi_bt_scr_cntx.conn_dev_add);

    U16 nItems = 0;
	srv_bt_cm_bt_addr dev_addr = dev_p->bd_addr;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	
    switch (menu_evt->evt_id)
    {
        /* CUI Menu show event sent to APP before entering list menu screen */
        case EVT_ID_CUI_MENU_LIST_ENTRY:
		{
            if (menu_evt->parent_menu_id == SCR_BT_MYDEV_OPT)
            {
                mmi_menu_id root_ids[MMI_BT_MYDEV_OPT_LAST];
				//root_ids[nItems++]=MMI_BT_MYDEV_OPEN;
				//root_ids[nItems++]=MMI_BT_MYDEV_DISCONNECT;	
				if( srv_bt_cm_is_dev_conn_active((srv_bt_cm_bt_addr*)&dev_addr)&&
					mmi_bt_dialer_app_is_connected())
				{	 
				#if 0
/* under construction !*/
                #endif
				root_ids[nItems++]=MMI_BT_MYDEV_DISCONNECT;	
				}
				else	
				{
					root_ids[nItems++]=MMI_BT_MYDEV_CONNECT;
				}
				
                root_ids[nItems++] = MMI_BT_MYDEV_OPT_DEL;
				root_ids[nItems++]=MMI_BT_MYDEV_HELP;
#if defined(__MMI_HIDD_SUPPORT__)
				if (srv_bt_cm_dev_is_support_hid(dev_p))
				{
					root_ids[nItems++] = MMI_BT_MYDEV_OPT_REMOTE_CTRL;
				}
#endif /*defined(__MMI_HIDD_SUPPORT__) */

	        cui_menu_set_currlist(	menu_evt->sender_id,
									nItems,
									root_ids);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
       		 cui_menu_set_item_string(
								   menu_evt->sender_id,
								   MMI_BT_MYDEV_CONNECT,
                    (WCHAR*)GetString(STR_GLOBAL_CONNECT));
				cui_menu_set_item_string(
								   menu_evt->sender_id,
								   MMI_BT_MYDEV_DISCONNECT,
                    (WCHAR*)GetString(STR_GLOBAL_DISCONNECT));
				
				cui_menu_set_item_string(
								   menu_evt->sender_id,
								   MMI_BT_MYDEV_HELP,
								   (WCHAR*)GetString(STR_GLOBAL_HELP));			
			cui_menu_set_item_string(
                    menu_evt->sender_id,
                    MMI_BT_MYDEV_OPT_DEL,
                    (WCHAR*)GetString(STR_GLOBAL_DELETE));
#if defined(__MMI_HIDD_SUPPORT__)				
				cui_menu_set_item_string(
								   menu_evt->sender_id,
								   MMI_BT_MYDEV_OPT_REMOTE_CTRL,
								   (WCHAR*)GetString(STR_BT_REMOTE_CONTROL));
#endif /*defined(__MMI_HIDD_SUPPORT__)*/
                cui_menu_set_default_title_string(
                    menu_evt->sender_id,
                    (WCHAR*)GetString(STR_GLOBAL_OPTIONS));
			}
		}
            break;

        case EVT_ID_CUI_MENU_ITEM_SELECT:
            switch (menu_evt->highlighted_menu_id)
            {
            #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
                #endif
                                case MMI_BT_MYDEV_OPT_DEL:
				{
					mmi_bt_entry_mydev_delete_confirm(MMI_BT_DELETE_DEV_CONFIRM);
					break;
        		}
        
				case MMI_BT_MYDEV_CONNECT:
				{
					#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
					 StopTimer(BT_DIALER_AUTO_RECONN_TIMER);
					if (g_bt_dialer_reconn_flag == MMI_TRUE)
					{
						g_bt_dialer_reconn_flag = MMI_FALSE;
					}
					#endif
					if (mmi_bt_dialer_app_is_connected())
					{
						mmi_bt_popup_display(
							STR_BT_RELEASE_CONN_PROMPT,
							MMI_EVENT_FAILURE,
							NULL);
					}
					else if(mmi_bt_dialer_get_connecting_flag())
					{
						mmi_frm_nmgr_popup(
									   MMI_SCENARIO_ID_DEFAULT,
									   MMI_EVENT_FAILURE,
									  (WCHAR*)GetString(STR_BT_SERVICE_UNAVAILABLE));

					}
					else
					{
						if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) )
					{
							mmi_bt_entry_connecting(g_mmi_bt_scr_cntx.mydev_gid);
					}
					else
					{
					            mmi_bt_dialor_connect(&(dev_p->bd_addr)); 
					}
						}
                    break;
                }
				case MMI_BT_MYDEV_DISCONNECT:
				{
					if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK))|| srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION) )
					{
						mmi_bt_entry_release_device_connections(g_mmi_bt_scr_cntx.mydev_gid);

					}
					else
					{

				        mmi_bt_dialor_disconnect(&(dev_p->bd_addr));
					}
                    break;
                }
        
				case MMI_BT_MYDEV_HELP:
				{
					 mmi_bt_show_dialor_help(dev_p);
                    break;
                }
#if defined(__MMI_HIDD_SUPPORT__)											
				case MMI_BT_MYDEV_OPT_REMOTE_CTRL:
                {
					mmi_bt_entry_remote_control_ext(&(dev_p->bd_addr));
					break;
                }
				
#endif /*defined(__MMI_HIDD_SUPPORT__)*/
                default:
                    break;
            }

         default:
            break;
    }

    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_connecting
 * DESCRIPTION
 *  This function is bt dialer connecting function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_bt_dialer_connecting(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	srv_bt_cm_dev_struct* dev_p;
    mmi_id parent_id;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    U8 num = srv_bt_cm_get_paired_dev_num();
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_CONNECTING);

    dev_p = srv_bt_cm_get_paired_dev_info(num-1);
    memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &(dev_p->bd_addr), sizeof(srv_bt_cm_bt_addr));
    parent_id =  mmi_frm_group_get_active_id();
    g_mmi_bt_scr_cntx.main_gid = parent_id;

    mmi_bt_dialor_connect((srv_bt_cm_bt_addr *)&(dev_p->bd_addr));

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_main_group_proc
 * DESCRIPTION
 *  This function is bt dialer main proc function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

mmi_ret mmi_bt_dialer_main_group_proc(mmi_event_struct *param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	switch (param->evt_id)
    {
        case EVT_ID_GROUP_ACTIVE:
            g_mmi_bt_scr_cntx.main_gid = GRP_ID_BT_CM;
            break;

        default:
            break;
    }
     return MMI_RET_OK;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_power_on
 * DESCRIPTION
 *  This function is bt dialer power on function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_power_on(void)
{ 
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	mmi_id group_id;
    mmi_id parent_id;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_POWER_ON);

    parent_id =  mmi_frm_group_get_active_id();
    group_id = mmi_frm_group_create_ex(
             parent_id,
             GRP_ID_BT_CM_POWER_ON_CNF,
             mmi_bt_dialer_main_group_proc,
             NULL,
             MMI_FRM_NODE_SMART_CLOSE_FLAG);
    
    mmi_bt_display_power_on_confirm(group_id);

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_close_group
 * DESCRIPTION
 *  This function is bt dialer close group function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_close_group(MMI_ID group_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(MMI_TRUE == mmi_frm_group_is_present (group_id))
    {
        mmi_frm_group_close(group_id);
    }

}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_cb
 * DESCRIPTION
 *  This function is bt dialer power on cb function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_bt_dialer_cb(MMI_BOOL is_open)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_BT_DIALER_CB);
    if (!is_open)
    {
        return;
    }
	
    if (mmi_frm_group_is_present(GRP_ID_BT_CM_POWER_ON_CNF) == MMI_TRUE)
    {
        mmi_frm_group_close(GRP_ID_BT_CM_POWER_ON_CNF);
    }
		
    if(srv_bt_cm_get_paired_dev_num()> 0)
    {
        mmi_bt_dialer_connecting();
    }
    else
    {
        mmi_btdialer_app_launch_func(NULL,0);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_connected_by_app
 * DESCRIPTION
 *  This function is bt dialer connect  function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_connected_by_app(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	mmi_id parent_id;
    S16 error, error1;
    srv_bt_cm_bt_addr addr;
		const srv_bt_cm_dev_struct* dev_p ;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    WCHAR string[NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE] = {0};
    parent_id =  mmi_frm_group_get_active_id();
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_BY_APP);
    ReadRecord(NVRAM_BYTE_BT_DIALER_AUTO_CONN,1,&addr,sizeof(srv_bt_cm_bt_addr),&error1);
	dev_p = srv_bt_cm_get_dev_info_by_addr(&addr,SRV_BT_CM_PAIRED_DEV);
    if((srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_ON) && mmi_bt_dialer_app_is_connected())
    {  

      ReadRecord(NVRAM_BYTE_BT_DIALER_CONNSTR,1,&string,NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE,&error);

            mmi_frm_nmgr_popup(
               MMI_SCENARIO_ID_DEFAULT,
               MMI_EVENT_FAILURE,
              (WCHAR*)string);
     // have connected
    }
    else if (srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_OFF)
    {
        mmi_bt_close_group(GRP_ID_BT_CM);
        mmi_bt_close_group(GRP_ID_BT_CM_POWER_ON_CNF);
    //ask power on
     	mmi_bt_register_power_on_callback_with_result(mmi_bt_dialer_cb);
        mmi_bt_dialer_power_on();
    }
    else if ((srv_bt_cm_get_paired_dev_num()> 0) && (srv_bt_cm_get_dev_index(&addr, SRV_BT_CM_PAIRED_DEV) != 0xFFFFFFFF))//have paired device
    {
    // auto connecting
	if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) )
				{
						  MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_QUICK_CONNECTHS);
				   memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &addr, sizeof(srv_bt_cm_bt_addr));
						mmi_bt_entry_connecting( parent_id);
				}
				else
				{
		 g_mmi_bt_scr_cntx.main_gid = parent_id;
           MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_AUTO_CASE); 
           memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &addr, sizeof(srv_bt_cm_bt_addr));
           mmi_bt_dialor_connect(&addr);
				}
    }
    else
    {
    //launch app
        mmi_bt_close_group(GRP_ID_BT_CM);
        mmi_btdialer_app_launch_func(NULL,0);

    }
    mmi_frm_scrn_close(g_parent_id, SCR_BT_INQUIRED_POWER_ON);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_show_popup_int
 * DESCRIPTION
 *  This function is bt dialer function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_show_popup_int(mmi_scrn_essential_struct* param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(mmi_frm_scrn_enter(
                param->group_id,
                param->scrn_id,
                (FuncPtr) NULL,
                (FuncPtr) mmi_bt_dialer_show_popup_int,
                MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }
#ifdef __MMI_BTD_BOX_UI_STYLE__
ShowCategory163Screen(
	(UI_string_type) GetString(STR_GLOBAL_OK),
	(PU8)GetImage(IMG_GLOBAL_OK),
	(UI_string_type) GetString(STR_GLOBAL_BACK),
	(PU8)GetImage(IMG_GLOBAL_BACK),
	(UI_string_type) GetString(STR_BT_BOX_USED_BY_APP),
	mmi_get_event_based_image(MMI_EVENT_PROGRESS),
	NULL);

#else
    ShowCategory163Screen(
        (UI_string_type) GetString(STR_GLOBAL_OK),
        (PU8)GetImage(IMG_GLOBAL_OK),
        (UI_string_type) GetString(STR_GLOBAL_BACK),
        (PU8)GetImage(IMG_GLOBAL_BACK),
        (UI_string_type) GetString(STR_BT_DIALER_USED_BY_APP),
        mmi_get_event_based_image(MMI_EVENT_PROGRESS),
        NULL);
#endif

    SetLeftSoftkeyFunction(mmi_bt_connected_by_app, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_connected_by_app, KEY_EVENT_UP);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_show_popup
 * DESCRIPTION
 *  This function is bt dialer for app function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_show_popup(mmi_id group_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	S16 error;   
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    WCHAR string[NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE] = {0};
	#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
		StopTimer(BT_DIALER_AUTO_RECONN_TIMER);
		if (g_bt_dialer_reconn_flag == MMI_TRUE)
		{
			g_bt_dialer_reconn_flag = MMI_FALSE;
		}
	#endif
	g_parent_id = group_id;

    if(!mmi_bt_dialer_get_connecting_flag())
    {
        if( (srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_ON) && mmi_bt_dialer_app_is_connected())
        {  
        ReadRecord(NVRAM_BYTE_BT_DIALER_CONNSTR,1,&string,NVRAM_BYTE_BT_DIALER_CONNSTR_SIZE,&error);

              mmi_frm_nmgr_popup(
               MMI_SCENARIO_ID_DEFAULT,
               MMI_EVENT_FAILURE,
              (WCHAR*)string);
         // have connected
        return;
    }
    
        mmi_frm_scrn_first_enter(group_id,SCR_BT_INQUIRED_POWER_ON,mmi_bt_dialer_show_popup_int,NULL);
    }
    else
    {
        mmi_frm_nmgr_popup(
                     MMI_SCENARIO_ID_DEFAULT,
                     MMI_EVENT_FAILURE,
                    (WCHAR*)GetString(STR_BT_SERVICE_UNAVAILABLE));
    }
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_disconnect_notify_int
 * DESCRIPTION
 *  This function is diaconnected function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_disconnect_notify_int(mmi_scrn_essential_struct* param)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(mmi_frm_scrn_enter(
                    param->group_id,
                    param->scrn_id,
                    (FuncPtr) NULL,
                    (FuncPtr) mmi_bt_dialer_disconnect_notify_int,
                    MMI_FRM_FULL_SCRN) == MMI_FALSE)
    {
        return;
    }
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DISCONN_NOTIFY);
	#ifdef __MMI_BTD_BOX_UI_STYLE__
	ShowCategory163Screen(
            (UI_string_type) GetString(STR_GLOBAL_YES),
            (PU8)GetImage(IMG_GLOBAL_YES),
            (UI_string_type) GetString(STR_GLOBAL_NO),
            (PU8)GetImage(IMG_GLOBAL_NO),
            (UI_string_type) GetString(STR_BT_DISCONN_BTBOX_PROMPT),
            mmi_get_event_based_image(MMI_EVENT_PROGRESS),
            NULL);
	#else
    ShowCategory163Screen(
            (UI_string_type) GetString(STR_GLOBAL_YES),
            (PU8)GetImage(IMG_GLOBAL_YES),
            (UI_string_type) GetString(STR_GLOBAL_NO),
            (PU8)GetImage(IMG_GLOBAL_NO),
            (UI_string_type) GetString(STR_BT_DISCONN_PROMPT),
            mmi_get_event_based_image(MMI_EVENT_PROGRESS),
            NULL);
	#endif
    
    SetLeftSoftkeyFunction(mmi_bt_dialer_disconnect_lsk, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_dialer_disconnect_lsk, KEY_EVENT_UP);

}

/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_disconnect_notify
 * DESCRIPTION
 *  This function is disconnected function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
 void mmi_bt_dialer_disconnect_notify(mmi_id group_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    mmi_frm_scrn_first_enter(group_id,SCR_BT_DIALER_DISCONNECT_ASK,mmi_bt_dialer_disconnect_notify_int,NULL);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_disconnect_lsk
 * DESCRIPTION
 *  This function is disconnected LSK function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_bt_dialer_disconnect_lsk(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	  srv_bt_cm_bt_addr dialer_addr;
	   const srv_bt_cm_dev_struct* dev_p;	 
    if(!mmi_bt_dialer_get_connecting_flag())
    {
		mmi_bt_dialer_get_connected_dev_addr(&dialer_addr);
		g_mmi_bt_scr_cntx.main_gid = mmi_frm_group_get_active_id();
		dev_p = srv_bt_cm_get_dev_info_by_addr(&dialer_addr,SRV_BT_CM_PAIRED_DEV);
		memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &dialer_addr, sizeof(srv_bt_cm_bt_addr));
		if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) || srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION))
		{
			mmi_bt_dialer_set_disconn_req(MMI_TRUE);
			mmi_bt_entry_release_device_connections( g_mmi_bt_scr_cntx.main_gid);
		}
		else
		{

			mmi_bt_dialor_disconnect(&(g_mmi_bt_scr_cntx.conn_dev_add));
		}
  }
    else
    {
        mmi_frm_nmgr_popup(
                     MMI_SCENARIO_ID_DEFAULT,
                     MMI_EVENT_FAILURE,
                    (WCHAR*)GetString(STR_BT_SERVICE_UNAVAILABLE));
    }
    mmi_frm_scrn_close(g_mmi_bt_scr_cntx.main_gid, SCR_BT_DIALER_DISCONNECT_ASK);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_app_emit_event
 * DESCRIPTION
 *  This function is bt dialer emit evnet function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_app_emit_event(U32 event_id, void* event_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_bt_dialer_event_struct event_data;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_FRM_INIT_EVENT(&event_data, event_id);
    event_data.event_info = event_info;

    MMI_FRM_CB_EMIT_EVENT(&event_data);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_auto_connect
 * DESCRIPTION
 *  This function is bt dialer auto connect function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_auto_connect(mmi_id group_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

	S16 error;
    srv_bt_cm_bt_addr addr;
	const srv_bt_cm_dev_struct* dev_p;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_AUTO); 
    ReadRecord(NVRAM_BYTE_BT_DIALER_AUTO_CONN,1,&addr,sizeof(srv_bt_cm_bt_addr),&error);
		dev_p = srv_bt_cm_get_dev_info_by_addr(&addr,SRV_BT_CM_PAIRED_DEV);
		    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_AUTO); 
    if(!mmi_bt_dialer_get_connecting_flag() && !srv_bt_cm_get_btdialor_app_mode())
    {
        if(srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_OFF)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_BT_NOT_OPEN); 
         //bt is not open
            return;
        }
        else if(srv_bt_cm_get_paired_dev_num()<= 0)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_BT_NOT_PAIRED); 
         //have not paired device
            return;
        }
        else if(&(g_mmi_bt_scr_cntx.conn_dev_add) == NULL)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_BT_NOT_CONNED); 
         //have not recent connect device
            return;
        }
        else if( 0xFFFFFFFF == srv_bt_cm_get_dev_index(&addr, SRV_BT_CM_PAIRED_DEV))
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_INDEX_ERROR); 
            return;
        }
        else
        {

           g_mmi_bt_scr_cntx.main_gid = mmi_frm_group_get_active_id();
		   if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) )
						   {
						    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_QUICK_CONNECTHS);
							  memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &addr, sizeof(srv_bt_cm_bt_addr));
								   mmi_bt_entry_connecting( g_mmi_bt_scr_cntx.main_gid);
						   }
						   else
						   {
           MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_AUTO_CASE); 
           memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &addr, sizeof(srv_bt_cm_bt_addr));
           mmi_bt_dialor_connect(&addr);
						   }
         //connect device.
        }
    }
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_conn_profile_end
 * DESCRIPTION
 *  This function is bt dialer connect signal profile end function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_conn_profile_end(srv_bt_cm_connection_type conn_type) 
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  switch(conn_type)
  {
    case SRV_BT_CM_PBAPC_CONNECTION:
	   #ifdef __MMI_BT_PBAP_CLIENT__
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_PBAPC); 
       srv_btpbapc_set_cm_callback(mmi_bt_dialor_callback);
       #endif
       break;
    case SRV_BT_CM_HFP_CONNECTION:
       break;
    case SRV_BT_CM_HSP_CONNECTION:
       break;
    case SRV_BT_CM_SPP_CONNECTION:
       break;    
    case SRV_BT_CM_A2DP_CONNECTION:
       break;/* 7 */
    case SRV_BT_CM_A2DP_SINK_CONNECTION:
       break;
    case SRV_BT_CM_AVRCP_CONNECTION: 
       break;/* 8 */
    case SRV_BT_CM_MAPC_CONNECTION: 
		 #ifdef __MMI_BT_MAP_CLIENT__
	    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_MAPC); 
		srv_bt_mapc_register_cm_callback(mmi_bt_dialor_callback);
		#endif
       break;
    default:
        break;

  }
    
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_music_cb
 * DESCRIPTION
 *  This function is bt dialer connect a2dp profile and callback music.
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __MMI_BT_SPEAKER_SUPPORT__
#if defined(__MMI_A2DP_SUPPORT__)
static void mmi_bt_dialer_music_cb(kal_int32 result)
{
	MMI_BOOL music_result = MMI_TRUE;
	switch(result)
	{
		case SRV_A2DP_CALLBACK_EVENT_OPEN_FAILED:
		case SRV_A2DP_CALLBACK_EVENT_OPEN_STOPPED:
		case SRV_A2DP_CALLBACK_EVENT_OPEN_CANCELED:
		case SRV_A2DP_CALLBACK_EVENT_UNEXPECTED_DISCONNECT_IND:
		case SRV_A2DP_CALLBACK_EVENT_OPEN_SCO:
		case SRV_A2DP_CALLBACK_EVENT_SECURITY_BLOCK:
			music_result = MMI_FALSE;
			break;
		default:
			break;

	}
#if defined(__MMI_BT_MUSIC__) || defined(__MMI_AUDIO_PLAYER_BT__)
#ifdef __MMI_AVRCP_SUPPORT__
    mmi_bt_music_conn_A2DP_profile_cb(SRV_BT_CM_A2DP_CONNECTION, music_result, MMI_TRUE);
#endif
#endif
}
#endif
#endif
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_conn_profile
 * DESCRIPTION
 *  This function is bt dialer connect signal profile function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_conn_profile(MMI_ID prarent_id, srv_bt_cm_connection_type conn_type, BT_DAILER_CALLBACK callback)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
		 srv_bt_cm_bt_addr dialer_addr;
	const srv_bt_cm_dev_struct* dev_p;
    if(srv_bt_cm_get_bqb_test_flag())
    {
        dev_p = srv_bt_cm_get_dev_info_by_index(0, SRV_BT_CM_PAIRED_DEV);
        memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &(dev_p->bd_addr), sizeof(srv_bt_cm_bt_addr));
    }
    else
    {
		  mmi_bt_dialer_get_connected_dev_addr(&dialer_addr);
	   dev_p = srv_bt_cm_get_dev_info_by_addr(&dialer_addr,SRV_BT_CM_PAIRED_DEV);
	memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &dialer_addr, sizeof(srv_bt_cm_bt_addr));
    }
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_FUN); 
	
    if((!mmi_bt_dialer_get_connecting_flag()) && 
    	(!mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)))&&
		(!srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION)))
    {
    	mmi_bt_show_progress_scr(
                prarent_id,
                SCR_BT_CONNECTING,
                STR_GLOBAL_CONNECTING,
                STR_GLOBAL_CONNECTING,
                NULL);

		switch(conn_type)
		{
			case SRV_BT_CM_PBAPC_CONNECTION:
				#ifdef __MMI_BT_PBAP_CLIENT__
			   MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_PBAPC); 
			   mmi_pbapc_connect_req_from_cm(&(g_mmi_bt_scr_cntx.conn_dev_add),callback);
			   #endif
			   break;
			case SRV_BT_CM_HFP_CONNECTION:
			   break;
			case SRV_BT_CM_HSP_CONNECTION:
			   break;
			case SRV_BT_CM_SPP_CONNECTION:
			   break;    
			case SRV_BT_CM_A2DP_CONNECTION:
				#ifdef __MMI_BT_SPEAKER_SUPPORT__
                #if defined(__MMI_A2DP_SUPPORT__)
				MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_A2DP); 
				srv_a2dp_open_sink(&(g_mmi_bt_scr_cntx.conn_dev_add),mmi_bt_dialer_music_cb, MMI_TRUE);
				#endif
				#endif
			   break;/* 7 */
			case SRV_BT_CM_A2DP_SINK_CONNECTION:
			   break;
			case SRV_BT_CM_AVRCP_CONNECTION: 
			   break;/* 8 */
			case SRV_BT_CM_MAPC_CONNECTION: 
			    #ifdef __MMI_BT_MAP_CLIENT__
			    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_PROFILE_MAPC); 
			    srv_bt_mapc_connect_req_from_cm(g_mmi_bt_scr_cntx.conn_dev_add, callback, MMI_TRUE);   	
			    g_mmi_bt_scr_cntx.map_connect_flag=MMI_TRUE;
			    #endif
			   break;
			default:
			    break;

		}
	}
	else
	{
	  mmi_frm_nmgr_popup(
	                 MMI_SCENARIO_ID_DEFAULT,
	                 MMI_EVENT_FAILURE,
	                (WCHAR*)GetString(STR_BT_SERVICE_UNAVAILABLE));

	}

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_app_is_connected
 * DESCRIPTION
 *  This function is judged bt dialer is connected function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

MMI_BOOL mmi_bt_dialer_app_is_connected()
{

    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(srv_bt_cm_is_profile_connected(SRV_BT_CM_PBAPC_CONNECTION) ||
       srv_bt_cm_is_profile_connected(SRV_BT_CM_MAPC_CONNECTION) ||
       srv_bt_cm_is_profile_connected(SRV_BT_CM_HSP_CONNECTION) ||
       srv_bt_cm_is_profile_connected(SRV_BT_CM_A2DP_CONNECTION) ||
       srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION) ||
       srv_bt_cm_is_profile_connected(SRV_BT_CM_SPP_CONNECTION))
    {
    	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_IS_CONNECTED); 
        return MMI_TRUE;
        
    }
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_IS_NOT_CONNECTED); 
    return MMI_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_cent
 * DESCRIPTION
 *  This function is center key function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_cent(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	srv_bt_cm_dev_struct* dev_p = srv_bt_cm_get_paired_dev_info(g_mmi_bt_scr_cntx.hilight_item);
	MMI_BT_RESET_FLAG(MMI_BT_CONFIRM_PAIRED_DEV_OPT);
    
    if(srv_bt_cm_get_btdialor_app_mode() == MMI_TRUE)
    {
        if (srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_OFF)
        {
			mmi_bt_dialer_set_cent_flag(MMI_TRUE);
			MMI_BT_SET_FLAG(MMI_BT_CONFIRM_PAIRED_DEV_OPT);
			mmi_bt_display_power_on_confirm(g_mmi_bt_scr_cntx.mydev_gid);
			return;
            
        }
    
        if ((srv_bt_cm_is_dev_conn_active(&g_mmi_bt_scr_cntx.conn_dev_add)) && (mmi_bt_dialer_app_is_connected()))
        {
        if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) || srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION))
					{
						mmi_bt_entry_release_device_connections(g_mmi_bt_scr_cntx.mydev_gid);

					}
					else
					{

				        mmi_bt_dialor_disconnect(&g_mmi_bt_scr_cntx.conn_dev_add);
					}
            //disconnect
        }
        else
        {
			if(MMI_TRUE == mmi_bt_dialer_app_is_connected())
			{
				mmi_bt_popup_display(
								STR_BT_RELEASE_CONN_PROMPT,
								MMI_EVENT_FAILURE,
								NULL);
								return;
    		}
            mmi_bt_dialor_connect(&g_mmi_bt_scr_cntx.conn_dev_add);
            //connect
        }
    }
    else
    {
        if (srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_OFF)
        {
    
            mmi_bt_display_power_on_confirm(g_mmi_bt_scr_cntx.mydev_gid);
            return;
        }
    
        if (srv_bt_cm_is_dev_conn_active(&g_mmi_bt_scr_cntx.conn_dev_add))
        {
        #ifdef __MMI_BT_DIALER_SUPPORT__
            mmi_bt_dialer_set_disconn_req(MMI_TRUE);
        #endif
            mmi_bt_entry_release_device_connections(g_mmi_bt_scr_cntx.mydev_gid);
            //disconnect
        }
        else
        {
            mmi_bt_entry_mydev_ren();
            //rename
        }
    }

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_get_cent_flag
 * DESCRIPTION
 *  This function is whether is center key function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

MMI_BOOL mmi_bt_dialer_get_cent_flag(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if(g_centkey_flag)
    {
        return MMI_TRUE;
    }
    else
        {
        return MMI_FALSE;
    }
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_set_cent_flag
 * DESCRIPTION
 *  This function is set center key flag function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_bt_dialer_set_cent_flag(MMI_BOOL flag)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    g_centkey_flag = flag;

}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_shutdown
 * DESCRIPTION
 *  This function is bt dialer shutdown function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

mmi_frm_proc_result_enum mmi_bt_dialer_shutdown(
                                    void *arg,
                                    const mmi_frm_proc_id_info_struct id_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	srv_bt_cm_dev_struct* dev_p =(srv_bt_cm_dev_struct *)srv_bt_cm_get_dev_info(&g_mmi_bt_scr_cntx.conn_dev_add);
    g_id_info = id_info;
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_SHUTDOWN); 
		#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
		 StopTimer(BT_DIALER_AUTO_RECONN_TIMER);
		if (g_bt_dialer_reconn_flag == MMI_TRUE)
		{
			g_bt_dialer_reconn_flag = MMI_FALSE;
		}
		#endif     
	if(mmi_bt_dialer_app_is_connected())
	{
		if (mmi_bt_is_dev_cod_match(dev_p->cod, (MMI_BT_AUDIO_MAJOR_SERVICE_MASK|MMI_BT_AV_MAJOR_DEVICE_MASK)) || srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION))
		{
			mmi_bt_entry_release_device_connections(g_mmi_bt_scr_cntx.mydev_gid);

		}
		else
		{

    mmi_bt_dialor_disconnect(&g_mmi_bt_scr_cntx.conn_dev_add);
		}
    if(mmi_bt_dialer_get_disconn_req())
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_SHUTDOWN_TIMER);
         StartTimer(BT_DIALER_DISCONN_TIMER,50,mmi_bt_dialer_disconn_hdlr);
         return MMI_FRM_PROC_RESULT_NOTIFY_LATER;
		}
    }
    return MMI_FRM_PROC_RESULT_COMPLETED;   
}
/*****************************************************************************
 * FUNCTION
 *  mmi_bt_dialer_disconn_hdlr
 * DESCRIPTION
 *  This function is bt dialer disconnect hdlr in shutdown function
 * PARAMETERS
 *  void
 *
 *
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_bt_dialer_disconn_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_SHUTDOWN_HDLR);
    if(!mmi_bt_dialer_get_disconn_req())
    {        
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_SHUTDOWN_STOP_TIMER);
        StopTimer(BT_DIALER_DISCONN_TIMER);
        mmi_frm_proc_notify_completed(g_id_info);
    }
    else
    {
        StartTimer(BT_DIALER_DISCONN_TIMER,50,mmi_bt_dialer_disconn_hdlr);
    }
}


void mmi_bt_dialer_connect_time_out_hdlr(void *msg_ptr)
{
  MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_TIMER_OUT_HDLR);
    if (mmi_bt_dialer_get_connecting_flag())
	{
// don't do connect the next profile.
		mmi_bt_dialer_set_time_out_flag(MMI_TRUE);
		MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_TIMER_OUT_HDLR_SET_TRUE);
	}
}

#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
MMI_BOOL mmi_bt_dialer_disconn_excpt_hdlr(void *msg_ptr)
{
	bt_cmgr_spto_ind_struct* msg = msg_ptr;	
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIALER_CONNECT_LOST,
		((msg->bd_addr.nap & 0xff00) >> 8), (msg->bd_addr.nap & 0x00ff), (msg->bd_addr.uap),
        ((msg->bd_addr.lap & 0xff0000) >> 16), ((msg->bd_addr.lap & 0x00ff00) >> 8), (msg->bd_addr.lap & 0x0000ff));
	
	g_bt_dialer_reconn_flag = MMI_TRUE;
	g_bt_dialer_reconn_accu_time = 0;
	return MMI_FALSE;
}
void mmi_bt_dialer_auto_reconn_first_start_check()
{
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIALER_AUTO_RECONN_STATUS, 0, g_bt_dialer_reconn_flag, g_bt_dialer_reconn_accu_time/1000);
	if (MMI_TRUE == g_bt_dialer_reconn_flag && 0 == g_bt_dialer_reconn_accu_time)
	{
		if (IsMyTimerExist(BT_DIALER_AUTO_RECONN_TIMER))
		{
			StopTimer(BT_DIALER_AUTO_RECONN_TIMER);
			mmi_bt_dialer_auto_reconn_hdlr();
		}
		else
		{
			StartTimer(BT_DIALER_AUTO_RECONN_TIMER, 500, mmi_bt_dialer_auto_reconn_hdlr);
		}
	}
}

void mmi_bt_dialer_auto_reconn_hdlr(void)
{
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIALER_AUTO_RECONN, g_bt_dialer_reconn_flag, g_bt_dialer_reconn_accu_time/1000);

	g_bt_dialer_reconn_accu_time += g_bt_dialer_reconn_freq;
	if (g_bt_dialer_reconn_accu_time > g_bt_dialer_reconn_duration)
	{
		g_bt_dialer_reconn_flag = MMI_FALSE;
	}
	
	if (g_bt_dialer_reconn_flag == MMI_FALSE)
	{
		g_bt_dialer_reconn_accu_time = 0;
		StopTimer(BT_DIALER_AUTO_RECONN_TIMER);
		return;
	}
	mmi_bt_dialer_auto_reconn_start();
}

void mmi_bt_dialer_auto_reconn_start(void)
{
	srv_bt_cm_bt_addr default_remote_addr;	   

	mmi_bt_dialer_get_connected_dev_addr(&default_remote_addr);
	g_mmi_bt_scr_cntx.main_gid = mmi_frm_group_get_active_id();
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_AUTO_CASE); 
	memcpy(&(g_mmi_bt_scr_cntx.conn_dev_add), &default_remote_addr, sizeof(srv_bt_cm_bt_addr));
	MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_BT_CONN_DIALER_AUTO_RECONN, g_bt_dialer_reconn_flag, g_bt_dialer_reconn_accu_time/1000);

	StartTimer(BT_DIALER_AUTO_RECONN_TIMER,g_bt_dialer_reconn_freq, mmi_bt_dialer_auto_reconn_hdlr);
	mmi_bt_dialor_connect(&default_remote_addr);
}
#endif

void mmi_bt_entry_connecting_time_out_hdlr(void)
{
	mmi_bt_entry_connecting( mmi_frm_group_get_active_id());

}

#ifdef __MMI_BT_ACL_TIMEOUT_DISCONNECT_NOTIFY__
/*****************************************************************************
 * FUNCTION
 *  mmi_btdialer_app_acl_timeout_discon_hdlr
 * DESCRIPTION
 *  bt acl disconncet timeout event handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_bt_dialer_acl_timeout_discon_hdlr()
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
		
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	MMI_ID parent_id = mmi_frm_group_get_active_id();
	
	/* check the SCR_BT_CONNECTING screen is exist or not */
	if(mmi_frm_scrn_is_present(parent_id, SCR_BT_CONNECTING, MMI_FRM_NODE_ALL_FLAG))
	{
	    mmi_frm_scrn_close(parent_id, SCR_BT_CONNECTING);
	}
	
    if(mmi_bt_dialer_app_is_connected())
	{
	mmi_frm_nmgr_popup(
			            MMI_SCENARIO_ID_HIGHEST_SCRN,
					    MMI_EVENT_WARNING,
					    (WCHAR*)GetString(STR_BT_TIMEOUT_DISCON_ED));
	}
						
	return MMI_RET_OK;
}
#endif /*__MMI_BT_ACL_TIMEOUT_DISCONNECT_NOTIFY__*/

void mmi_bt_dialer_enhanced_init()
{
	SetProtocolEventHandler(mmi_bt_dialer_connect_time_out_hdlr, MSG_ID_BT_ACL_CONN_PAGE_TO);
#ifdef __MMI_BT_DIALER_AUTO_RECONN_SUPPORT__
		mmi_frm_set_protocol_event_handler(MSG_ID_BT_ACL_DISCONN_SUPER_TO, (PsIntFuncPtr)mmi_bt_dialer_disconn_excpt_hdlr, MMI_TRUE);
#endif
}
MMI_BOOL mmi_bt_dialer_get_headset_flag()
{
	return g_mmi_bt_dialer_headset_flag;
kal_prompt_trace(MOD_MMI,"[BTCONN]get g_mmi_bt_dialer_headset_flag = %d", g_mmi_bt_dialer_headset_flag);

}
void mmi_bt_dialer_set_headset_flag(MMI_BOOL flag)
{
	g_mmi_bt_dialer_headset_flag = flag;
kal_prompt_trace(MOD_MMI,"[BTCONN]set g_mmi_bt_dialer_headset_flag = %d", g_mmi_bt_dialer_headset_flag);

}
#endif
#endif
