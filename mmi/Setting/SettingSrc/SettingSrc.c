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

/*******************************************************************************
 * Filename:
 * ---------
 * SettingSrc.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *============================================================================== 
 *******************************************************************************/

/**
 * Copyright Notice
 * ?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 * Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */
/***************** Settings Application implementation *********************/

/**************************************************************

   FILENAME : setting.c

   PURPOSE     : Settings application

   REMARKS     : nil

   AUTHOR      : Vanita Jain

   DATE     : 

**************************************************************/
#include "MMI_features.h"
#include "SettingDefs.h"
#include "settinggprots.h"
#include "SettingProt.h"
#include "PhoneSetupGprots.h"
#include "SoundEffect.h"
#ifdef SYNCML_DM_SUPPORT
#include "dmuigprot.h"
#endif
#include "mmi_rp_app_connectivity_mainmenu_def.h"
#ifdef __GPS_SUPPORT__
#include "mmi_rp_srv_gps_def.h"
#endif


#if 1
#if defined( __MMI_VERSION_INFO__) || defined(__MMI_WEARABLE_DEVICE_SETTING__)
#include "mmi_rp_app_setting_version_def.h"
#endif /*#if defined( __MMI_VERSION_INFO__) || defined(__MMI_WEARABLE_DEVICE_SETTING__)*/
#endif

#ifdef __MMI_TELEPHONY_SUPPORT__
#include "mmi_rp_app_netset_def.h"
#endif
#include "NwUsabSrvGprot.h"
#include "ModeSwitchSrvGprot.h"
#include "mmi_rp_app_phonebook_def.h"
#include "mmi_rp_srv_phb_def.h"
/* auto add by kw_check begin */
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "string.h"
#include "mmi_frm_history_gprot.h"
#include "CustMenuRes.h"
#include "GlobalConstants.h"
#include "mmi_frm_events_gprot.h"
#include "SettingResDef.h"
#include "mmi_rp_app_mainmenu_def.h"
#include "wgui_categories_util.h"
#include "GlobalResDef.h"
#include "wgui_fixed_menus.h"
#include "wgui_categories_list.h"
#include "CustDataRes.h"
#include "gui_data_types.h"
#include "mmi_rp_app_phonesetting_new_def.h"
#include "mmi_frm_nvram_gprot.h"
#include "nvram_common_defs.h"
#include "mmi_frm_mem_gprot.h"
#include "kal_public_api.h"
#include "Unicodexdcl.h"
#include "mmi_frm_scenario_gprot.h"
#include "wgui_categories_text_viewer.h"
/* auto add by kw_check end */

#include "GeneralSettingSrvGprot.h"
#include "mmi_frm_app_launcher_gprot.h"
#include "PhoneSetup.h"
#include "MMI_ap_dcm_config.h"
#include "IdleGProt.h"
#include "FactoryGprot.h"
#include "IdleFactory.h"
#include "SimCtrlSrvGprot.h"
#include "BTMMIScr.h"
#ifndef __MMI_SUPPORT_ASMV2__
	#include "ImageClipCui.h"
	#include "App_mem.h"
#endif

#if 1
#if defined( __MMI_VERSION_INFO__) || defined(__MMI_WEARABLE_DEVICE_SETTING__)	
#define MAX_VERSION_STRING_BUF         150//80
static CHAR *g_version_text_p = NULL;
static void EntrySettingVersion(void);
static void mmi_setting_entry_version_info_screen(void);
static void mmi_setting_exit_version_info_screen(void);
extern kal_char* release_verno(void);
extern kal_char* release_hw_ver(void);
extern kal_char* build_date_time(void);
#endif /*__MMI_VERSION_INFO__*/
#endif

#include "CallSetGprot.h" /* mmi_callset_call_setting_launch */

#if defined(__MMI_PREFER_INPUT_METHOD__)
extern void mmi_ime_settings_inputmethodsettings_highlight(void);
extern void InitPreferedInputMethod(void);
#endif /* defined(__MMI_PREFER_INPUT_METHOD__) */ 

#if defined(__MMI_WLAN_FEATURES__) && defined(__MMI_TELEPHONY_SUPPORT__)
extern void mmi_netset_init_pref_mode(void);
#endif

#ifdef __TCPIP__
extern MMI_BOOL mmi_dtcnt_main_menu_should_hide(void);
#endif

#ifdef __MMI_BT_SUPPORT__
extern MMI_BOOL mmi_bt_is_to_display_bt_menu(void);
#endif
#if 0
#if defined(__MMI_APHORISM__)
/* under construction !*/
#endif 
#endif 
static void mmi_setting_update_network_setting_menu(void);

static MMI_RET mmi_setting_app_launch_proc(mmi_event_struct *evt);
static void mmi_setting_app_launch(mmi_id app_id);


CHAR gHour[MAX_LENGTH * ENCODING_LENGTH];
CHAR gMinute[MAX_LENGTH * ENCODING_LENGTH];
CHAR gDate[MAX_LENGTH * ENCODING_LENGTH];
CHAR gMonth[MAX_LENGTH * ENCODING_LENGTH];
CHAR gYear[MAX_LENGTH_YEAR * ENCODING_LENGTH];

S32 gCurrentTimeFormat = 0;
S32 gCurrentDateFormat = 0;
#ifndef __MMI_PHNSET_SLIM__    
U8 WelcomeText[(MAX_SETTING_WELCOME_TEXT + 1) * ENCODING_LENGTH];
#endif
U8 gCurrentOnOff;

U8 ssc_disable_flag = MMI_FALSE;    /* diamond, 2005/05/13 for SSC disable */


/*****************************************************************************
 * FUNCTION
 *  InitSettingApp
 * DESCRIPTION
 *  initialise Setting application.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void InitSettingApp(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if 0
/* under construction !*/
/* under construction !*/
#if defined(__MMI_PREFER_INPUT_METHOD__)
/* under construction !*/
#endif 
/* under construction !*/
/* under construction !*/
#endif /* 0 */
#ifndef __MMI_PHNSET_SLIM__    

    memset(WelcomeText, 0, (MAX_SETTING_WELCOME_TEXT + 1) * ENCODING_LENGTH);
#endif
    //InitNetworkSetupApp();	///xjdan
#ifdef __MMI_TIMEZONE_SETTING__
    PhnsetInitTimeNDate();
#endif
#if 0
#if ((defined(__MMI_OP01_MENU_9MATRIX__) || defined(__MMI_OP01_MENU_12MATRIX__)) && (defined(__IRDA_SUPPORT__) || defined(__MMI_BT_SUPPORT__)))
/* under construction !*/
#endif
#endif

#if defined(__MMI_WLAN_FEATURES__) && defined(__MMI_TELEPHONY_SUPPORT__)
	mmi_netset_init_pref_mode();
#endif

}
#ifdef __MMI_AP_DCM_SETTING__
#pragma arm section rodata = "DYNAMIC_CODE_SETTINGS_RODATA" , code = "DYNAMIC_CODE_SETTINGS_ROCODE"
#endif

#ifndef __MMI_APP_MANAGER_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  mmi_setting_hide_connectivity_menu
 * DESCRIPTION
 *  hide connectivity menu or not
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_setting_update_connectivity_menu()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if !defined(__MMI_FTE_SUPPORT__) || (defined (__WIFI_WIZARD_SUPPORT__) && defined (__MMI_WLAN_FEATURES__))
    if (
#ifdef __TCPIP__
        mmi_dtcnt_main_menu_should_hide() &&
#endif
#ifdef __MMI_BT_SUPPORT__
        !mmi_bt_is_to_display_bt_menu() &&
#endif
        1)
    {
        mmi_frm_hide_menu_item(MENU_ID_CONNECTIVITY);   /* need hide connectivity menu */
    }
    else
    {
        mmi_frm_unhide_menu_item(MENU_ID_CONNECTIVITY); /* need unhide connectivity menu */
    }
#endif /* #if !defined(__MMI_FTE_SUPPORT__) || (defined (__WIFI_WIZARD_SUPPORT__) && defined (__MMI_WLAN_FEATURES__)) */
}
#endif /* __MMI_APP_MANAGER_SUPPORT__ */

#ifdef __MMI_TELEPHONY_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  mmi_setting_update_network_setting_menu
 * DESCRIPTION
 *  Check if the network setting menu need to be hide 
 *  Fix MAUI_02442325
 * PARAMETERS
 *  
 * RETURNS
 *  static void
 *****************************************************************************/
static void mmi_setting_update_network_setting_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Hide menu when no SIM is usable (SIM not available or RF turned off) */
#ifdef __MMI_DYNAMIC_SIM_DYNAMIC_UI__
	if (srv_sim_ctrl_get_num_of_inserted() == 0 ||
		!srv_mode_switch_is_network_service_available())
#else /* __MMI_DYNAMIC_SIM_DYNAMIC_UI__ */
    if (!srv_nw_usab_get_one_usable_sim())
#endif /* __MMI_DYNAMIC_SIM_DYNAMIC_UI__ */
	{
	    mmi_frm_hide_menu_item(MENU_ID_NETSET_MAIN);
	}
    else
    {
        mmi_frm_unhide_menu_item(MENU_ID_NETSET_MAIN);
    }
#ifdef __MMI_DYNAMIC_SIM_DYNAMIC_UI__
	if (srv_sim_ctrl_get_num_of_inserted() <= 1 || 
		!srv_mode_switch_is_network_service_available())
    {
	#ifdef __MMI_BOOTUP_MODE_SEL_SUPPORT__        
		mmi_frm_hide_menu_item(MENU_ID_MODE_SWITCH_TYPE);
	#endif
		mmi_frm_hide_menu_item(MENU_ID_MODE_SWITCH_SETTING);
    }
    else
    {
	#ifdef __MMI_BOOTUP_MODE_SEL_SUPPORT__		  
		mmi_frm_unhide_menu_item(MENU_ID_MODE_SWITCH_TYPE);
	#endif
		mmi_frm_unhide_menu_item(MENU_ID_MODE_SWITCH_SETTING);
    }
#endif /* __MMI_DYNAMIC_SIM_DYNAMIC_UI__ */
}
#endif

static void mmi_setting_entry_main_menu_int(mmi_scrn_essential_struct *data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_CATEGORY_LIST_SLIM__
    S32 nNumofItem;
#endif
    U16 nStrItemList[MAX_SUB_MENUS];    /* Stores the strings id of submenus returned */
    //U16 nNumofItem;                     /* Stores no of children in the submenu */
    U8 *guiBuffer;              /* Buffer holding history data */
    U16 SettingsSubmenuImageList[MAX_SUB_MENUS];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!mmi_frm_scrn_enter(GRP_ID_SETTING_MAIN_MENU, SCR9000_SETTINGS, NULL, (FuncPtr)mmi_setting_entry_main_menu_int, MMI_FRM_UNKNOW_SCRN))
    {
        return;
    }

    /* 2 Get current screen to gui buffer  for history purposes */
    guiBuffer = mmi_frm_scrn_get_gui_buf(GRP_ID_SETTING_MAIN_MENU, SCR9000_SETTINGS);
	#ifdef __GPS_SUPPORT__
	mmi_frm_hide_menu_item(MENU_ID_GPS_SETTING);
	#endif
#ifndef __MMI_APP_MANAGER_SUPPORT__
    mmi_setting_update_connectivity_menu();
#else
  if(mmi_factory_get_favorite_type(mmi_idle_get_cfg_table()) == MMI_IDLE_TYPE_CLASSIC)
   {    
      #ifndef __MMI_MAINMENU_SPREAD_SUPPORT__
	    mmi_frm_unhide_menu_item(MENU_ID_CONNECTIVITY);
	  #else
	    mmi_frm_hide_menu_item(MENU_ID_CONNECTIVITY);	 /* need hide connectivity menu */
      #endif  
   }
  else
   {
       mmi_frm_hide_menu_item(MENU_ID_CONNECTIVITY); /* need unhide connectivity menu */ 
   }	
#endif /* #ifndef __MMI_APP_MANAGER_SUPPORT__ */

#ifdef __MMI_TELEPHONY_SUPPORT__
    mmi_setting_update_network_setting_menu();
#endif
    {
        /* 3. Retrieve no of child of menu item to be displayed */
        //nNumofItem = GetNumOfChild_Ext(MAIN_MENU_SETTINGS_MENUID);

        /* 4. Get attribute of menu to be displayed */
        /* nDispAttribute = GetDispAttributeOfItem(MAIN_MENU_SETTINGS_MENUID); */

        /* 5. Retrieve string ids in sequence of given menu item to be displayed */
        GetSequenceStringIds_Ext(MAIN_MENU_SETTINGS_MENUID, nStrItemList);

        /* micha0819 */
        GetSequenceImageIds_Ext(MAIN_MENU_SETTINGS_MENUID, SettingsSubmenuImageList);

        /* 6 Set current parent id */
        SetParentHandler(MAIN_MENU_SETTINGS_MENUID);
    }

    /* 7 Register highlight handler to be called in menu screen */
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);

    /* 8 Display Category1 Screen */

    /* MTK Leo add, mini_tab_bar */
#if 0
#ifdef __MMI_WGUI_MINI_TAB_BAR__
/* under construction !*/
#endif 
#endif 
    /* MTK Leo end */

    EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
#ifndef __MMI_PHNSET_SLIM__    
    wgui_list_menu_enable_access_by_shortcut();
#endif
/*
    ShowCategory15Screen(
        STR_GLOBAL_SETTINGS,
        IMG_SCR_SETTING_CAPTION,
        STR_GLOBAL_OK,
        IMG_GLOBAL_OK,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        nNumofItem,
        nStrItemList,
        SettingsSubmenuImageList,
        LIST_MENU,
        0,
        guiBuffer);
*/
#ifdef __MMI_CATEGORY_LIST_SLIM__
        nNumofItem = GetNumOfChild_Ext(MAIN_MENU_SETTINGS_MENUID);
        ShowCategory15Screen(
            STR_GLOBAL_SETTINGS,
            IMG_SCR_SETTING_CAPTION,
            STR_GLOBAL_OK,
            IMG_GLOBAL_OK,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            nNumofItem,
            nStrItemList,
            SettingsSubmenuImageList,
            LIST_MENU,
            0,
            guiBuffer);
#else
    ShowCategory155Screen(
        (UI_string_type)GetString(STR_GLOBAL_SETTINGS),
        (PU8)GetImage(IMG_SCR_SETTING_CAPTION),
        (UI_string_type)GetString(STR_GLOBAL_OK),
        (PU8)GetImage(IMG_GLOBAL_OK),
        (UI_string_type)GetString(STR_GLOBAL_BACK),
        (PU8)GetImage(IMG_GLOBAL_BACK),
        MAIN_MENU_SETTINGS_MENUID,
        SettingsSubmenuImageList,
        0,
        0,
        0,
        guiBuffer);        
    /* 9.Register function with right softkey */
    //SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
#endif    
}
//#ifndef __MMI_PHNSET_SLIM__    

static mmi_ret mmi_setting_main_menu_proc(mmi_event_struct *evt)
{
	switch (evt->evt_id)
		{
		   case EVT_ID_GROUP_DEINIT:
		   #ifdef __MMI_AP_DCM_SETTING__
				mmi_ap_post_dcm_unload_evt(DYNAMIC_CODE_COMPRESS_SETTINGS);
           #endif
			break;
		}
	
		return MMI_RET_OK;
}
//#endif
#ifdef __MMI_AP_DCM_SETTING__
#pragma arm section rodata , code
#endif
/*****************************************************************************
 * FUNCTION
 *  EntryScrSettingMenu
 * DESCRIPTION
 *  Entry screen for settings menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void EntryScrSettingMenu(void)
{
   /* mmi_frm_group_create(GRP_ID_ROOT, GRP_ID_SETTING_MAIN_MENU, mmi_setting_main_menu_proc, NULL);
    mmi_frm_group_enter(GRP_ID_SETTING_MAIN_MENU, MMI_FRM_NODE_SMART_CLOSE_FLAG);
    mmi_frm_scrn_first_enter(
        GRP_ID_SETTING_MAIN_MENU, 
        SCR9000_SETTINGS,
        (FuncPtr)mmi_setting_entry_main_menu_int,
        NULL);*/
 #ifdef __MMI_AP_DCM_SETTING__
       mmi_ap_send_dcm_load_evt(DYNAMIC_CODE_COMPRESS_SETTINGS);
  #endif     
 #ifdef __MMI_SUPPORT_ASMV2__ 
        mmi_frm_app_launch(
        	APP_SETTING_NEW, 
			0, 
			0, 
			mmi_setting_app_launch_proc, 
			NULL, 
			MMI_FRM_APP_NORMAL_LAUNCH);
 #else

	mmi_setting_app_launch(GRP_ID_ROOT);
 #endif
}
#ifdef __MMI_AP_DCM_SETTING__
#pragma arm section rodata = "DYNAMIC_CODE_SETTINGS_RODATA" , code = "DYNAMIC_CODE_SETTINGS_ROCODE"
#endif
/*****************************************************************************
 * FUNCTION
 *  mmi_setting_app_launch_proc
 * DESCRIPTION
 *  launch screen proc function for settings menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_RET mmi_setting_app_launch_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	MMI_ID app_id =	GET_APP_ID(evt);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	switch(evt->evt_id)
	{
		case EVT_ID_APP_ENTER:
         {
#if 0            
          #ifdef __MMI_AP_DCM_SETTING__
/* under construction !*/
/* under construction !*/
          #endif
#endif          
              mmi_setting_app_launch(app_id);
			  break;
         }      
        case EVT_ID_APP_DEINIT: 
         {
#if 0            
          #ifdef __MSZ_APP_DCM_SETTING__
/* under construction !*/
          #endif
#endif
#ifdef __MMI_AP_DCM_SETTING__
       mmi_ap_post_dcm_unload_evt(DYNAMIC_CODE_COMPRESS_SETTINGS);
#endif
              break;
         }
#ifndef __MMI_PHNSET_SLIM__			
		default:
			break;
#endif
	}
	return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_setting_app_launch
 * DESCRIPTION
 *  launch screen for settings menu
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
 static void mmi_setting_app_launch(mmi_id app_id)
{
	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifndef __MMI_PHNSET_SLIM__  
	mmi_frm_group_create_ex(app_id,
	                        GRP_ID_SETTING_MAIN_MENU,
	                        mmi_setting_main_menu_proc,
	                        NULL, 
	                        MMI_FRM_NODE_SMART_CLOSE_FLAG);
#else
	mmi_frm_group_create_ex(app_id,
	                        GRP_ID_SETTING_MAIN_MENU,
                            mmi_setting_main_menu_proc,
	                        NULL, 
	                        MMI_FRM_NODE_SMART_CLOSE_FLAG);
#endif
    mmi_frm_scrn_first_enter(
        GRP_ID_SETTING_MAIN_MENU, 
        SCR9000_SETTINGS,
        (FuncPtr)mmi_setting_entry_main_menu_int,
        NULL);
}
#ifdef __MMI_AP_DCM_SETTING__
#pragma arm section rodata , code
#endif
/*****************************************************************************
 * FUNCTION
 *  IsShowWelcomeScr1
 * DESCRIPTION
 *  API to return the status of Welcome Text Feature.
 * PARAMETERS
 *  void
 * RETURNS
 *  pBOOL
 *  
 *  Author            : Vanita Jain
 *****************************************************************************/
#ifndef __MMI_PHNSET_SLIM__    
MMI_BOOL IsShowWelcomeScr1(void)
{
    return MMI_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  GetWelcomeText
 * DESCRIPTION
 *  API to return the Welcome Text.
 * PARAMETERS
 *  void
 * RETURNS
 *  returns the welcome text string.
 *  
 *  Author            : Vanita Jain
 *****************************************************************************/
CHAR *GetWelcomeText(void)
{
    return NULL;
}
#endif

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
#endif /* defined(__MMI_APHORISM__) */ 


/*****************************************************************************
 * FUNCTION
 *  InitSettingBootup
 * DESCRIPTION
 *  Initialise seetings for Bootup
 *  
 *  This fn is used till NVRAM has been read.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void InitSettingBootup(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Contrast level setting at bootup */
    PhnsetMainLCDContrast(7);
    PhnsetSubLCDContrast(7);
}


/*****************************************************************************
 * FUNCTION
 *  InitSettingNVRAM
 * DESCRIPTION
 *  Initialise Settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void InitSettingNVRAM(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 data = 0;
    //S16 error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*init sound effect settings, this shall be done before set lang by nvram 
    since it might effect equalizer values*/
    //InitSoundEffect();

    /* Contrast level set to user value */
#ifndef __MMI_PHNSET_SLIM__    
    PhnsetRestoreToNvramContrast();
#endif
    srv_setting_init_language();

#if defined(__MMI_TOUCH_SCREEN__) || defined(__MMI_HANDWRITING_PAD__)
    PhnsetReadNvramCalibrationData();
#endif 

    /* diamond, 2005/05/13 for SSC disable */
    //ReadValue(NVRAM_SSC_DISABLE_FLAG, &data, DS_BYTE, &error);
	ReadValueSlim(NVRAM_SSC_DISABLE_FLAG, &data, DS_BYTE);
    if (data == 0xff)
    {
        data = 0;
        //WriteValue(NVRAM_SSC_DISABLE_FLAG, &data, DS_BYTE, &error);
		WriteValueSlim(NVRAM_SSC_DISABLE_FLAG, &data, DS_BYTE);
    }
    ssc_disable_flag = data;
    /* diamond, end */

    //ReadValue(NVRAM_SETTING_STATUS_DT_TIME, &data, DS_BYTE, &error);
	ReadValueSlim(NVRAM_SETTING_STATUS_DT_TIME, &data, DS_BYTE);
    if (data == 0xff)
    {
        data = 1;
        //WriteValue(NVRAM_SETTING_STATUS_DT_TIME, &data, DS_BYTE, &error);
		WriteValueSlim(NVRAM_SETTING_STATUS_DT_TIME, &data, DS_BYTE);
    }
    /* CurrentDtType = data; */
    PhnsetSetShowDTStatus(data);
}


/*****************************************************************************
 * FUNCTION
 *  GetSettingOptionsStatus
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void GetSettingOptionsStatus(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
}

#if 1
#if defined(__MMI_VERSION_INFO__) || defined(__MMI_WEARABLE_DEVICE_SETTING__)
/*****************************************************************************
 * FUNCTION
 *  HighlightVersionInfo
 * DESCRIPTION
 *  Setting version highlight handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void HighlightVersionInfo(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    SetLeftSoftkeyFunction(EntrySettingVersion, KEY_EVENT_UP);
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    SetCenterSoftkeyFunction(EntrySettingVersion, KEY_EVENT_UP);
    SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_entry_version_group_proc
 * DESCRIPTION
 *  enter version screen group proc
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_entry_version_group_proc(mmi_event_struct *param)
{
    return MMI_RET_OK;    
}

/*****************************************************************************
 * FUNCTION
 *  EntrySettingVersion
 * DESCRIPTION
 *  enter setting version group
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void EntrySettingVersion(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (mmi_frm_group_is_present(GRP_ID_SETTING_VERSION))
    {
        mmi_frm_group_close(GRP_ID_SETTING_VERSION);
    }
    mmi_frm_group_create_ex(GRP_ID_SETTING_MAIN_MENU, 
		GRP_ID_SETTING_VERSION, 
		mmi_entry_version_group_proc, 
		NULL, 
		MMI_FRM_NODE_SMART_CLOSE_FLAG);
    mmi_setting_entry_version_info_screen();
}

/*****************************************************************************
 * FUNCTION
 *  VersionUpdateItemData
 * DESCRIPTION
 *  get version info
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static S32 VersionUpdateItemData(S32 start_index, gui_iconlist_menu_item *menu_data, S32 num_items)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	U8 tempbuf[MAX_VERSION_STRING_BUF * 2];
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	memset(tempbuf, 0, sizeof(tempbuf));
	mmi_asc_to_ucs2((CHAR*) tempbuf, (CHAR*) release_verno());
	mmi_ucs2cpy((CHAR*)menu_data[0].item_list[0], GetString(STR_ID_SETTING_VERSION_INFO_SW));
	mmi_ucs2cpy((CHAR*)menu_data[0].item_list[1], (CHAR*) tempbuf);
	
	memset(tempbuf, 0, sizeof(tempbuf));
	mmi_asc_to_ucs2((CHAR*) tempbuf, (CHAR*) build_date_time());
	mmi_ucs2cpy((CHAR*)menu_data[1].item_list[0], GetString(STR_ID_SETTING_VERSION_INFO_TIME));
	mmi_ucs2cpy((CHAR*)menu_data[1].item_list[1], (CHAR*) tempbuf);

	return num_items;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_setting_entry_version_info_screen
 * DESCRIPTION
 *  enter version info screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_setting_entry_version_info_screen(void)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *guiBuffer;
//#ifdef __MMI_WEARABLE_DEVICE_SETTING__
	//S32 item_num;
//#else /*__MMI_WEARABLE_DEVICE_SETTING__*/
	U8 tempbuf[MAX_VERSION_STRING_BUF * 2];
//#endif  /*__MMI_WEARABLE_DEVICE_SETTING__*/
 	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    if (!mmi_frm_scrn_enter(
		GRP_ID_SETTING_VERSION,
		SCR_ID_VERSION_INFO,
		mmi_setting_exit_version_info_screen,
		mmi_setting_entry_version_info_screen,
		MMI_FRM_UNKNOW_SCRN))
	{
		return;
	}
    guiBuffer = mmi_frm_scrn_get_gui_buf(GRP_ID_SETTING_VERSION, SCR_ID_VERSION_INFO);
   
//#ifdef __MMI_WEARABLE_DEVICE_SETTING__
/*
	item_num = 2;
	wgui_swatch_two_line_menu_list_screen(
		(PU8)GetString(STR_ID_SETTING_VERSION_INFO),
		NULL,
		NULL,
		NULL,
		NULL,
		item_num,
		VersionUpdateItemData,
		0,
		guiBuffer);
*/
//#else /*__MMI_WEARABLE_DEVICE_SETTING__*/
    g_version_text_p = (CHAR *) mmi_frm_scrmem_alloc(MAX_VERSION_STRING_BUF * 5);

    memset(g_version_text_p, 0, sizeof(g_version_text_p));
/*
    mmi_ucs2cpy((CHAR*) g_version_text_p, (const CHAR*)GetString(STR_ID_SETTING_VERSION_INFO_HW));
    mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");
    memset(tempbuf, 0, sizeof(tempbuf));
    mmi_asc_to_ucs2((CHAR*) tempbuf, (CHAR*) release_hw_ver());
    mmi_ucs2cat((CHAR*) g_version_text_p, (const CHAR*)tempbuf);
*/
   // mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");
//#ifdef __MMI_BT_SUPPORT__
//    mmi_bt_entry_about_for_setting((U16*)g_version_text_p);
//#endif
	mmi_ucs2cat((CHAR*) g_version_text_p, (const CHAR*)GetString(STR_ID_SETTING_VERSION_INFO_SW));
	mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");
	memset(tempbuf, 0, sizeof(tempbuf));
	mmi_asc_to_ucs2((CHAR*) tempbuf, (CHAR*) release_verno());
	mmi_ucs2cat((CHAR*) g_version_text_p, (const CHAR*)tempbuf);
	mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");

	mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");
	mmi_ucs2cat((CHAR*) g_version_text_p, (const CHAR*)GetString(STR_ID_SETTING_VERSION_INFO_TIME));
	mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");
	memset(tempbuf, 0, sizeof(tempbuf));
	mmi_asc_to_ucs2((CHAR*) tempbuf, (CHAR*) build_date_time());
	mmi_ucs2cat((CHAR*) g_version_text_p, (const CHAR*)tempbuf);
	mmi_ucs2cat((CHAR*) g_version_text_p, (CHAR*)L"\n");

    ShowCategory74Screen(
        STR_ID_SETTING_VERSION_INFO,
        GetRootTitleIcon(MENU_ID_SETTING_VERSION_INFO),
        0,
        0,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        (PU8) g_version_text_p,
        mmi_ucs2strlen(g_version_text_p),
        guiBuffer);

    SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
//#endif /*__MMI_WEARABLE_DEVICE_SETTING__*/
}

/*****************************************************************************
 * FUNCTION
 *  mmi_setting_exit_version_info_screen
 * DESCRIPTION
 *  free buffer when exit version info screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_setting_exit_version_info_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
   /*----------------------------------------------------------------*/
//#ifndef __MMI_WEARABLE_DEVICE_SETTING__

    if (g_version_text_p)
    {
        mmi_frm_scrmem_free(g_version_text_p);
    }
    g_version_text_p = NULL;
//#endif /*__MMI_WEARABLE_DEVICE_SETTING__*/
}

#endif /*defined(__MMI_VERSION_INFO__) || defined(__MMI_WEARABLE_DEVICE_SETTING__)*/

// mre app uninstall part
#if defined(__MMI_WEARABLE_DEVICE_SETTING__)
#include "AlertScreen.h"
#include "CommonScreensResDef.h"
#include "MenuCuiGprot.h"
#include "MREAppMgrSrvGprot.h"
#include "mmi_rp_app_setting_mreapps_def.h"
#include "BTNotiSrvGprot.h"

#define MMI_SETTING_MREE_CMD              "MREE"
#define MMI_SETTING_MRE_INSTALLER_SENDER  "mre_installer"

MMI_BOOL g_mre_uninstall_is_processing_flag = MMI_FALSE;


typedef void(*mmi_setting_mreApps_uninstall_cb) (MMI_BOOL ret);
 mmi_ret mmi_mre_apps_uninstall(mmi_event_struct *evt);

/*****************************************************************************
 * FUNCTION
 *  EntryMreappsConfirm
 * DESCRIPTION
 *  This function is left softkey handler for Yes to unintall all mre apps
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void EntryMreappsConfirm(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_confirm_property_struct confirm_arg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    mmi_confirm_property_init(&confirm_arg, CNFM_TYPE_YESNO);
    confirm_arg.callback = NULL;
    confirm_arg.parent_id = GRP_ID_SETTING_MREAPPS;
	confirm_arg.f_enter_history = 1;
    
    mmi_confirm_display_ext(
        STR_ID_SETTING_MREAPPS_QUERY,
		MMI_EVENT_QUERY,
        &confirm_arg);    
}

/*****************************************************************************
 * FUNCTION
 *  MreappsProcessingclose
 * DESCRIPTION
 *  This function is Entry function to close mre apps uninstall processing screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

void MreappsProcessingclose(MMI_BOOL ret)
{
	
	g_mre_uninstall_is_processing_flag = MMI_FALSE;
	if(ret)
		mmi_popup_display_simple_ext(STR_GLOBAL_DONE, MMI_EVENT_SUCCESS, GRP_ID_SETTING_MREAPPS_PROCESSING ,NULL);
	else
		mmi_popup_display_simple_ext(STR_GLOBAL_FAILED, MMI_EVENT_FAILURE, GRP_ID_SETTING_MREAPPS_PROCESSING ,NULL);
			
	mmi_frm_scrn_close(GRP_ID_SETTING_MREAPPS_PROCESSING, SCR_ID_SETTING_MREAPPS_PROCESSING);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_entry_MreApps_process_group_proc
 * DESCRIPTION
 *  enter uninstall mre apps processing screen group proc
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
 mmi_ret mmi_entry_MreApps_process_group_proc(mmi_event_struct *param)
{	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_ret ret = MMI_RET_OK;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (param->evt_id)
	{   
        case EVT_ID_GROUP_DEINIT:
        {
			g_mre_uninstall_is_processing_flag = MMI_FALSE;
            break;
        }
        case EVT_ID_TOUCHSCREEN_MOVE_RIGHT:
        {
            ret = MMI_RET_ERR;
            break;
        }
        default:
            break;
	}
    return ret;    
}



/*****************************************************************************
 * FUNCTION
 *  EntryMreappsProcessing
 * DESCRIPTION
 *  This function is Entry function to display mre apps uninstall processing screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void EntryMreappsProcessing(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/


    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* Call Exit Handler */    
	
    if (!mmi_frm_scrn_enter(GRP_ID_SETTING_MREAPPS_PROCESSING,
        SCR_ID_SETTING_MREAPPS_PROCESSING,
        NULL,//ExitMreappsProcessing,
        EntryMreappsProcessing,
        MMI_FRM_FULL_SCRN))
	{
		return;
    }
    ShowCategory66Screen(
        0,
        0,
        0,
        0,
        0,
        0,
	   	(PU8) GetString(STR_ID_SETTING_MREAPPS_UNINSTALL_PROCESS),
        0,
        NULL);

    /* clear all key handlers so as to restrict duplicate reqs */
    ClearInputEventHandler(MMI_DEVICE_ALL);

	SetKeyUpHandler(MMI_dummy_function, KEY_END);
	SetKeyDownHandler(MMI_dummy_function, KEY_END);
	SetKeyLongpressHandler(MMI_dummy_function, KEY_END);
}

/*****************************************************************************
 * FUNCTION
 *  EntryMreappsProcessinggroup
 * DESCRIPTION
 *  This function is Entry function to display mre apps uninstall processing screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void EntryMreappsProcessinggroup(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/


    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	mmi_frm_group_create_ex(GRP_ID_SETTING_MREAPPS, 
		GRP_ID_SETTING_MREAPPS_PROCESSING, 
		mmi_entry_MreApps_process_group_proc, 
		NULL, 
		MMI_FRM_NODE_SMART_CLOSE_FLAG);
	mmi_frm_scrn_first_enter(
		GRP_ID_SETTING_MREAPPS_PROCESSING,
		SCR_ID_SETTING_MREAPPS_PROCESSING,
		(FuncPtr) EntryMreappsProcessing,
		NULL);

}

/*****************************************************************************
 * FUNCTION
 *  mmi_mre_apps_uninstall
 * DESCRIPTION
 *  This function is to uninstall mre apps
 * PARAMETERS
 *          
 * RETURNS
 *  0 : fail
 *  1 : success
 *****************************************************************************/
static mmi_ret mmi_mre_apps_uninstall(mmi_event_struct *evt)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	MMI_BOOL ret;
	srv_bt_cm_bt_addr *bt_addr;
	char cmd[32] = {0};
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE]mmi_mre_apps_uninstall");
	g_mre_uninstall_is_processing_flag = MMI_TRUE;
#ifdef __MMI_BT_NOTI_SRV__	
	bt_addr = &(((srv_bt_cm_dev_struct *)srv_bt_cm_get_linked_dev_info(0))->bd_addr);
#endif
	#ifndef __MMI_MRE_DISABLE_FMGR__
	ret = srv_mre_appmgr_app_uninstall_and_delete_app();
	#else
	ret = MMI_FALSE;
	#endif
	kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE]mmi_mre_apps_uninstall ret =%d", ret);
	sprintf(cmd, "%s 3", MMI_SETTING_MRE_INSTALLER_SENDER);

	
	kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE]mmi_mre_apps_uninstall cmd =%s", cmd);
#ifdef __MMI_BT_NOTI_SRV__
	srv_bt_noti_send_cmd_ext(
                    bt_addr, 
                    MMI_SETTING_MREE_CMD, 
                    cmd, 
                    strlen(cmd));
#endif	
	MreappsProcessingclose(ret);
	return (mmi_ret)ret;

}

/*****************************************************************************
 * FUNCTION
 *  MreappsStartUninstall
 * DESCRIPTION
 *  This function is left soft key function
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void MreappsStartUninstall(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_event_struct evt;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (mmi_frm_group_is_present(GRP_ID_SETTING_MREAPPS_PROCESSING))
    {
        mmi_frm_group_close(GRP_ID_SETTING_MREAPPS_PROCESSING);
    }

    EntryMreappsProcessinggroup();

 	MMI_FRM_INIT_EVENT(&evt, 0);
  	mmi_frm_post_event(&evt, mmi_mre_apps_uninstall, NULL);
}	

/*****************************************************************************
 * FUNCTION
 *  mmi_entry_MreApps_group_proc
 * DESCRIPTION
 *  enter uninstall mre apps screen group proc
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_entry_MreApps_group_proc(mmi_event_struct *param)
{	
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
 	cui_menu_event_struct *menu_evt = (cui_menu_event_struct*)param;
    U32 app_num = 0, clock_app_num = 0, drv_num = 0, total_num = 0, i = 0;
    mmi_app_package_name_struct *app_list_p = NULL;
    srv_mre_appmgr_installed_info_struct info = {0};
    U16 app_name_tmp[MMI_APP_NAME_MAX_LEN];
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (param->evt_id)
	{
		case EVT_ID_CUI_MENU_LIST_ENTRY:
		{
			cui_menu_set_default_title_by_id(menu_evt->sender_id, STR_ID_SETTING_MREAPPS, NULL);
			cui_menu_set_currlist_highlighted_id(menu_evt->sender_id, MENU_ID_SETTING_MREAPPS_UNINSTALL);
            clock_app_num = srv_mre_appmgr_get_app_num(SRV_APPMGR_INSTALLED_CLOCK_APP_FLAG_TYPE);
            app_num = srv_mre_appmgr_get_app_num(SRV_APPMGR_INSTALLED_APP_PACKAGE_FLAG_TYPE);
            drv_num = srv_mre_appmgr_get_app_num(SRV_APPMGR_INSTALLED_DRIVER_APP_FLAG_TYPE);
			kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] clock_app_num =%d, app_num = %d, drv_num = %d", clock_app_num, app_num, drv_num);
			if((total_num = clock_app_num + app_num + drv_num) > 0)
			{
                app_list_p = (mmi_app_package_name_struct *)mmi_malloc(total_num * sizeof(mmi_app_package_name_struct));
                if (app_list_p)
                {
                    if(clock_app_num>0)
                    {
					    srv_mre_appmgr_get_app_list(SRV_APPMGR_INSTALLED_CLOCK_APP_FLAG_TYPE, app_list_p, clock_app_num);
                    }
                    if(app_num>0)
                    {
					    srv_mre_appmgr_get_app_list(SRV_APPMGR_INSTALLED_APP_PACKAGE_FLAG_TYPE, app_list_p+(clock_app_num), app_num);
                    }					
                    if(drv_num>0)
                    {
                        srv_mre_appmgr_get_app_list(SRV_APPMGR_INSTALLED_DRIVER_APP_FLAG_TYPE, app_list_p+(clock_app_num+app_num), drv_num);
                    }
                    for(i = 0; i < total_num; i++)
                    {
                        mmi_chset_convert(MMI_CHSET_UTF8, MMI_CHSET_UCS2, (char *)(app_list_p[i]), (char *)app_name_tmp, MMI_APP_NAME_MAX_LEN*2); 
                        if (srv_mre_appmgr_get_installed_info(app_name_tmp,&info))
                        {
						kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] app_type =%d ", info.app_type );
                            if (!(info.app_type & SRV_MRE_APPMGR_APP_TYPE_ROM) || 
                               (info.updated_app_path[0] != 0) || (info.updated_app_path[1] != 0))
                            {
                                cui_menu_set_item_disabled(menu_evt->sender_id, MENU_ID_SETTING_MREAPPS_UNINSTALL, MMI_FALSE);
								kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] MMI_FALSE");
                                break;
                            }
                        }
                    }
                    if (i == total_num)
                    {
                    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] MMI_TRUE");
				cui_menu_set_item_disabled(menu_evt->sender_id, MENU_ID_SETTING_MREAPPS_UNINSTALL, MMI_TRUE);
			}
                    mmi_mfree(app_list_p);
                }
			else
			{
				 kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] MMI_FALSE else");
				cui_menu_set_item_disabled(menu_evt->sender_id, MENU_ID_SETTING_MREAPPS_UNINSTALL, MMI_FALSE);
                }
			}
			else
			{
			kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_4,"[SETTINGMRE] MMI_TRUE else");
				cui_menu_set_item_disabled(menu_evt->sender_id, MENU_ID_SETTING_MREAPPS_UNINSTALL, MMI_TRUE);
			}	
		
		}
		break;
		case EVT_ID_CUI_MENU_ITEM_SELECT:
		case EVT_ID_CUI_MENU_ITEM_TAP:
		{
			if(menu_evt->highlighted_menu_id == MENU_ID_SETTING_MREAPPS_UNINSTALL)
			{
				EntryMreappsConfirm();
			}
			break;
		}		
		case EVT_ID_CUI_MENU_CLOSE_REQUEST:
		{
			cui_menu_close(menu_evt->sender_id);
			break;
		}
		case EVT_ID_ALERT_QUIT:
		{
	        mmi_alert_result_evt_struct *confirm_evt = (mmi_alert_result_evt_struct*)param;
	        switch (confirm_evt->result)
	    	{
	    	case MMI_ALERT_CNFM_YES:
	            MreappsStartUninstall();
	            break;
	            
	        case MMI_ALERT_CNFM_NO:    		
	            // mmi_frm_group_close(GRP_ID_SETTING_MREAPPS);
	            g_mre_uninstall_is_processing_flag = MMI_FALSE;
	    		break;
	            
	    	default:
	    		break;
	    	}
	        break;
	    }
    }
    return MMI_RET_OK;    
}

/*****************************************************************************
 * FUNCTION
 *  EntrySettingMreApps
 * DESCRIPTION
 *  enter setting uninstall mre apps group
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void EntrySettingMreApps(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (mmi_frm_group_is_present(GRP_ID_SETTING_MREAPPS))
    {
        mmi_frm_group_close(GRP_ID_SETTING_MREAPPS);
    }
	
    mmi_frm_group_create_ex(GRP_ID_SETTING_MAIN_MENU, 
		GRP_ID_SETTING_MREAPPS, 
		mmi_entry_MreApps_group_proc, 
		NULL, 
		MMI_FRM_NODE_SMART_CLOSE_FLAG);
    cui_menu_create_and_run(GRP_ID_SETTING_MREAPPS,
		CUI_MENU_SRC_TYPE_RESOURCE,
		CUI_MENU_TYPE_APPSUB,
		MENU_ID_SETTING_MREAPPS,
		MMI_FALSE,
		NULL);
}

/*****************************************************************************
 * FUNCTION
 *	HighlightMreApps
 * DESCRIPTION
 *	Setting uninstall mre apps highlight handler
 * PARAMETERS
 *	void
 * RETURNS
 *	void
 *****************************************************************************/
void HighlightMreApps(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
	ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
	SetLeftSoftkeyFunction(EntrySettingMreApps, KEY_EVENT_UP);
	ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
	SetCenterSoftkeyFunction(EntrySettingMreApps, KEY_EVENT_UP);
	SetRightSoftkeyFunction(GoBackHistory, KEY_EVENT_UP);
}
#else /*__MMI_WEARABLE_DEVICE_SETTING__*/
void HighlightMreApps(void)
{

}

#endif /*__MMI_WEARABLE_DEVICE_SETTING__*/
#endif
