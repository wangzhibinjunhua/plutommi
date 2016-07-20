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
*  Soundsetting.c
*
* Project:
* --------
*   Wearable devices
*
* Description:
* ------------
*   Profiles application (sound and volume settings) for wearable devices
*
* Author:
* -------
 * -------
*
*==============================================================================
*           HISTORY
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
 *
*
*
*------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
*==============================================================================
*******************************************************************************/

#include "MMI_include.h"

#if (!defined(__OP01_FWPBW__) && defined(__MMI_WEARABLE_DEVICE__))

#include "mmi_res_range_def.h"
#include "MMIDataType.h"
#include "GlobalResDef.h"

#include "MainMenuDef.h"
#include "menucuigprot.h"
#include "FileMgrGProt.h"
#include "Filemgrsrvgprot.h"
#include "UCMGProt.h"
#include "UcmSrvGprot.h"
#include "CommonScreens.h"
#include "inlinecuigprot.h"
#include "fseditorcuigprot.h"
#include "mdi_datatype.h"

#include "mdi_audio.h"
#include "DRM_gprot.h"
#include "bootupsrvgprot.h"
#include "custom_equipment.h"

#include "Gpiosrvgprot.h"

#include "ProfilesSrv.h"
#include "custom_srv_prof_defs.h"

#include "mmi_rp_app_profiles_def.h"
#include "Mmi_rp_srv_prof_def.h"

#include "ToneSelectorCuiGprot.h"
#include "ProfilesAppGprot.h"
#include "VolumeHandler.h"

#include "wgui_categories_util.h"

#include "resource_audio.h"

/***************************************************************************** 
 * Define
 *****************************************************************************/



/***************************************************************************** 
 * Typedef 
 *****************************************************************************/
typedef enum
{
    MMI_PROF_ENTRY_SOUND_SETTING,
    MMI_PROF_ENTRY_VOLUME_SETTING,
    MMI_PROF_ENTRY_TYPE_END
}mmi_prof_entry_type_enum;

typedef enum
{
    MMI_PROF_ALERT_TYPE_RING,           /* Ringing */
    MMI_PROF_ALERT_TYPE_VIB_ONLY,       /* Vibrate only */
    MMI_PROF_ALERT_TYPE_VIB_AND_RING,   /* Vibrate and ring */
    MMI_PROF_ALERT_TYPE_VIB_THEN_RING,  /* Vibrate then ring */
    MMI_PROF_ALERT_TYPE_SILENT,         /* Silent */
    MMI_PROF_ALERT_TYPE_NUM             /* End of enum */
}mmi_prof_alert_type_enum;

typedef enum
{
    MMI_PROF_TONE_ID_BEGIN      = AUD_ID_PROF_TONE_BEGIN + 1, 
    MMI_PROF_TONE_ID_END        = AUD_ID_PROF_TONE_END,
    MMI_PROF_TONE_ID_NUM        = MMI_PROF_TONE_ID_END - MMI_PROF_TONE_ID_BEGIN,
    MMI_PROF_RING_ID_BEGIN      = AUD_ID_PROF_RING_BEGIN + 1, 
    MMI_PROF_RING_ID_END        = AUD_ID_PROF_RING_END,
    MMI_PROF_RING_ID_NUM        = MMI_PROF_RING_ID_END - MMI_PROF_RING_ID_BEGIN,
    MMI_PROF_EXT_AUDIO_ID_BEGIN = AUD_ID_PROF_EXT_BEGIN + 1, 
    MMI_PROF_EXT_AUDIO_ID_END   = AUD_ID_PROF_EXT_END,
    MMI_PROF_EXT_AUDIO_ID_NUM   = MMI_PROF_EXT_AUDIO_ID_END - MMI_PROF_EXT_AUDIO_ID_BEGIN,
} mmi_prof_audio_id_enum;

typedef struct
{
    /* Sound Settings */
    U16 alert_type;
    U16 ring_tone;
    U16 msg_tone;

    /* Volume settings */
    U16 media_vol;
    U16 ring_vol;
    U16 msg_vol;
} profile_setting_struct;


typedef struct
{
    profile_setting_struct cur_setting;
    mmi_prof_entry_type_enum entry_type;
    U16 highlighted_item;
    U16 volume;
    U16 playing_audio_id;
    MMI_BOOL is_playing;
} profile_mem_struct;


/***************************************************************************** 
 * Local Variable
 *****************************************************************************/
static profile_mem_struct g_prof_mem;
static profile_mem_struct * g_prof_mem_p = &g_prof_mem;

extern S32 volume_level_UI;

/***************************************************************************** 
 * Local Function Declaration
 *****************************************************************************/
static void mmi_profiles_entry_setting(mmi_prof_entry_type_enum entry_type);
static mmi_ret mmi_prof_group_proc(mmi_event_struct* evt);
static void mmi_prof_menu_item_select(mmi_event_struct* evt);
static mmi_ret mmi_prof_setting_scrn_proc(mmi_event_struct *evt);
static void mmi_prof_setting_scrn_active(void* gui_buffer);
static void mmi_prof_setting_scrn_highlight_hdlr(S32 index);
static void mmi_prof_setting_scrn_tap_callback(mmi_tap_type_enum tap_type, S32 index);
extern S32 mmi_prof_setting_scrn_item_func_ptr(S32 start_indx, gui_iconlist_menu_item *menu_data, S32 num_item);
static void mmi_prof_setting_scrn_select_hdlr(void);
static U16 mmi_prof_get_string_id_from_audio_id(U16 audio_id);
static mmi_id mmi_prof_run_tone_selector(mmi_id parent_gid, U16 tone_filter, mmi_id str_id, mmi_id curr_audio_id);
static void mmi_prof_update_tone_setting(mmi_event_struct* evt);
static void mmi_prof_set_volume_level(void);
static void mmi_prof_preview_play_tone(void);
static void mmi_prof_vol_up_down(void);
static void mmi_prof_lsk_press_set_volume(void);
static void mmi_prof_exit_set_volume(void);
static void mmi_prof_preview_tone_callback(mdi_result result, void *user_data);
static void mmi_prof_preview_beep_tone(void);
static void mmi_prof_get_cur_settings(void);
static void mmi_prof_save_cur_settings(void);

/*****************************************************************************
 * Function Body
 *****************************************************************************/
/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_launch_function
 * DESCRIPTION
 *  launch profile for fte
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
#ifdef __MMI_APP_MANAGER_SUPPORT__
MMI_ID mmi_profiles_launch_function(void *param, U32 param_size)
{
    /* For wearable do not support profiles */
    return GRP_ID_INVALID;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_app_filemgr_option_enabler
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_prof_app_filemgr_option_enabler(mmi_menu_id item_id, 
                                         const WCHAR* filepath, 
                                         const srv_fmgr_fileinfo_struct* fileinfo)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Do not support profile */
    mmi_frm_hide_menu_item(item_id);
    return;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_app_filemgr_option_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_prof_app_filemgr_option_hdlr(mmi_menu_id item_id, 
                                      const WCHAR* filepath, 
                                      const srv_fmgr_fileinfo_struct* fileinfo)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_activate_profile
 * DESCRIPTION
 *  Activate profile
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_TRUE: Successed
 *  MMI_FALSE: Failed
 *****************************************************************************/
MMI_BOOL mmi_prof_activate_profile(mmi_prof_id_enum profile_id, MMI_BOOL need_popup)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Do not support activating any profile for wearable devices */
    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_deactivate_silent_profile
 * DESCRIPTION
 *  Deactivate silent profile
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_TRUE: Successed
 *  MMI_FALSE: Failed
 *****************************************************************************/
MMI_BOOL mmi_prof_deactivate_silent_profile(MMI_BOOL need_popup)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Do not support activating any profile for wearable devices */
    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_get_profile_name
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
WCHAR * mmi_prof_get_profile_name(mmi_prof_id_enum profile_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Do not support profiles name for wearable devices */
    return NULL;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_app_mem_stop_callback
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_app_mem_stop_callback(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_group_close(GRP_ID_PROFILES);
    applib_mem_ap_notify_stop_finished(APPLIB_MEM_AP_ID_USER_PROF, KAL_TRUE);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_app_init
 * DESCRIPTION
 * app init function 
 * PARAMETERS
 *  mmi_event_struct *evt
 * RETURNS
 * mmi_ret
 *****************************************************************************/
mmi_ret mmi_prof_app_init(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    applib_mem_ap_register(APPLIB_MEM_AP_ID_USER_PROF,
        STR_ID_PROF_CAPTION, 
        GetRootTitleIcon(MAIN_MENU_PROFILES_MENUID),
        mmi_prof_app_mem_stop_callback);

    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_main_screen
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_profiles_entry_main_screen(void)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* For wearable do not support profiles */
    return;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_sound_settings_screen
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_profiles_entry_sound_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_profiles_entry_setting(MMI_PROF_ENTRY_SOUND_SETTING);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_sound_settings_screen
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_profiles_highlight_sound_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, 0);
    ChangeRightSoftkey(STR_GLOBAL_BACK, 0);

    SetLeftSoftkeyFunction(mmi_profiles_entry_sound_settings, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_profiles_entry_sound_settings, KEY_EVENT_UP);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_volume_settings_screen
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_profiles_entry_volume_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_profiles_entry_setting(MMI_PROF_ENTRY_VOLUME_SETTING);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_sound_settings_screen
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_profiles_highlight_volume_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, 0);
    ChangeRightSoftkey(STR_GLOBAL_BACK, 0);

    SetLeftSoftkeyFunction(mmi_profiles_entry_volume_settings, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_profiles_entry_volume_settings, KEY_EVENT_UP);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_profiles_entry_main
 * DESCRIPTION
 *  Entry function for main profile screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_profiles_entry_setting(mmi_prof_entry_type_enum entry_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP,MMI_PROF_TRC_ENTRY_PROFILE);

    if (srv_prof_get_activated_profile() != MMI_PROFILE_GENERAL)
    {
        /* Only general profile is supported in wearable devices */
        MMI_ASSERT(0);
    }

    g_prof_mem_p->entry_type = entry_type;

    /* Profiles App main group */
    mmi_frm_group_create_ex(GRP_ID_ROOT, GRP_ID_PROFILES, mmi_prof_group_proc, NULL, MMI_FRM_NODE_SMART_CLOSE_FLAG);

    /* Setting app main screen entry */
    mmi_frm_scrn_create(GRP_ID_PROFILES, SCR_ID_PROF_SETTING, mmi_prof_setting_scrn_proc, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_group_proc
 * DESCRIPTION
 *  The proc for profiles group
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_prof_group_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
        case EVT_ID_GROUP_DEINIT:
        {
        }
        break;

        /*************************Menu CUI event***************************/
        case EVT_ID_CUI_MENU_LIST_ENTRY:
        {
        }
        break;

        case EVT_ID_CUI_MENU_ITEM_SELECT:
        case EVT_ID_CUI_MENU_ITEM_TAP:
        case EVT_ID_CUI_MENU_ITEM_CSK_SELECT:
        {
            mmi_prof_menu_item_select(evt);
        }
        break;

        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            cui_menu_event_struct* menu_evt = (cui_menu_event_struct*)evt;
            cui_menu_close(menu_evt->sender_id);
        }
        break;

        case EVT_ID_CUI_MENU_ITEM_HILITE:
        {
        }
        break;

        /**********************Tone selector event*************************/
        case EVT_ID_CUI_TONE_SELECTOR_CLOSE_REQUEST:
        {
            cui_tone_selector_evt_struct * evt_cui = (cui_tone_selector_evt_struct *)evt;        
            cui_tone_selector_close(evt_cui->sender_id);
        }
        break;

        case EVT_ID_CUI_TONE_SELECTOR_RESULT:
        {
            mmi_prof_update_tone_setting(evt);
        }
        break;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_menu_item_select
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_menu_item_select(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct* menu_evt = (cui_menu_event_struct*)evt;
    MMI_BOOL close_menu_cui = MMI_TRUE;
    MMI_BOOL is_save_setting = MMI_TRUE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_PROF_TRC_MENU_ITEM_SELECTED, menu_evt->highlighted_menu_id);

    switch(menu_evt->highlighted_menu_id)
    {
        /*Alert type selection*/
        case MENU_ID_PROF_RING_ONLY:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_RING;
        }
		break;

        case MENU_ID_PROF_VIB_ONLY:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_VIB_ONLY;
        }
		break;

        case MENU_ID_PROF_VIB_AND_RING:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_VIB_AND_RING;
        }
        break;

        case MENU_ID_PROF_VIB_THEN_RING:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_VIB_THEN_RING;
        }
        break;

        case MENU_ID_PROF_SILENT:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_SILENT;
        }
        break;

        default:
        {
            close_menu_cui = MMI_FALSE;
        }
        break;
    }

    if (is_save_setting)
    {
        mmi_prof_save_cur_settings();
    }

    if (close_menu_cui)
    {
        cui_menu_close(menu_evt->sender_id);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_scrn_proc
 * DESCRIPTION
 *  The proc for profiles screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_prof_setting_scrn_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_SCRN_INIT:
        {
            break;
        }

        case EVT_ID_SCRN_ACTIVE:
        {
            mmi_frm_scrn_active_evt_struct* scrn_evt = (mmi_frm_scrn_active_evt_struct*)evt;
            /* Show the category on screen active */
            mmi_prof_setting_scrn_active(scrn_evt->gui_buffer);
            break;
        }

        case EVT_ID_WGUI_CSK_CLICK:
        {
            /* call the item select handler */
            mmi_prof_setting_scrn_select_hdlr();
            break;
        }

        case EVT_ID_WGUI_RSK_CLICK:
            break;

        default:
            break;
    }

    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_timed_profile_screen_active
 * DESCRIPTION
 *  screen active for timed profile time entry
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_setting_scrn_active(void* gui_buffer)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 item_num;
    U16 title_str_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_prof_get_cur_settings();

    if (g_prof_mem_p->entry_type == MMI_PROF_ENTRY_SOUND_SETTING)
    {
        item_num = GetNumOfChild_Ext(MENU_ID_PROF_SOUND_SETTING);
        title_str_id = STR_ID_PROF_SOUND_SETTING;
    }
    else
    {
        item_num = GetNumOfChild_Ext(MENU_ID_PROF_VOLUME_SETTING);
        title_str_id = STR_ID_PROF_VOLUME_SETTING;
    }

    if (gui_buffer == NULL)
    {
        g_prof_mem_p->highlighted_item = 0;
    }

    RegisterHighlightHandler(mmi_prof_setting_scrn_highlight_hdlr);

    wgui_swatch_two_line_menu_list_screen(
        GetString(title_str_id),
        NULL,
        NULL,
        NULL,
        NULL,
        item_num,
        mmi_prof_setting_scrn_item_func_ptr,
        g_prof_mem_p->highlighted_item,
        (U8*)gui_buffer);

#if defined(__MMI_FTE_SUPPORT__) && defined(__MMI_TOUCH_SCREEN__)
    wgui_register_tap_callback(mmi_prof_setting_scrn_tap_callback);
#endif

}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_setting_scrn_highlight_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_setting_scrn_highlight_hdlr(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_prof_mem_p->highlighted_item = index;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_mot_video_list_tap_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_setting_scrn_tap_callback(mmi_tap_type_enum tap_type, S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //if (tap_type == ENUM_TAP_ON_NONHIGHLIGHTED_ITEM)
    //{
    //    return;
    //}

    /* Open the corresponding setting */
    mmi_prof_setting_scrn_select_hdlr();
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_get_cur_settings
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern S32 mmi_prof_setting_scrn_item_func_ptr(S32 start_indx, gui_iconlist_menu_item *menu_data, S32 num_item)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 i, count = 0;
    U16 nStrItemList[3];

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_prof_mem_p->entry_type == MMI_PROF_ENTRY_SOUND_SETTING)
    {
        GetSequenceStringIds_Ext(MENU_ID_PROF_SOUND_SETTING, nStrItemList);
    }
    else
    {
        GetSequenceStringIds_Ext(MENU_ID_PROF_VOLUME_SETTING, nStrItemList);
    }

    for (i = start_indx; count < num_item; i++, count++)
    {
        /* set the caption */
        mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[0], GetString(nStrItemList[i]), MAX_SUBMENU_CHARACTERS);

        /* set the selected values */
        if (g_prof_mem_p->entry_type == MMI_PROF_ENTRY_SOUND_SETTING)
        {
            switch (i + MENU_ID_PROF_SNDSET_ALERT_TYPE)
            {
                case MENU_ID_PROF_SNDSET_ALERT_TYPE:
                {
                    if (g_prof_mem_p->cur_setting.alert_type != MMI_PROF_ALERT_TYPE_SILENT)
                    {
                        mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(g_prof_mem_p->cur_setting.alert_type + STR_ID_PROF_RING_ONLY), MAX_SUBMENU_CHARACTERS);
                    }
                    else
                    {
                        mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(STR_GLOBAL_MUTE), MAX_SUBMENU_CHARACTERS);
                    }
                }
                break;

                case MENU_ID_PROF_SNDSET_RING_TONE:
                {
                    mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(mmi_prof_get_string_id_from_audio_id((U16)g_prof_mem_p->cur_setting.ring_tone)), MAX_SUBMENU_CHARACTERS);
                }
                break;

                case MENU_ID_PROF_SNDSET_MSG_TONE:
                {
                    mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(mmi_prof_get_string_id_from_audio_id((U16)g_prof_mem_p->cur_setting.msg_tone)), MAX_SUBMENU_CHARACTERS);
                }
                break;

                default:
                    break;
            }
        }
        else
        {
            switch (i + MENU_ID_PROF_VOLSET_MEDIA_VOL)
            {
                case MENU_ID_PROF_VOLSET_MEDIA_VOL:
                {
                    mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(STR_GLOBAL_0 + g_prof_mem_p->cur_setting.media_vol), MAX_SUBMENU_CHARACTERS);
                }
                break;

                case MENU_ID_PROF_VOLSET_RING_VOL:
                {
                    mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(STR_GLOBAL_0 + g_prof_mem_p->cur_setting.ring_vol), MAX_SUBMENU_CHARACTERS);
                }
                break;

                case MENU_ID_PROF_VOLSET_MSG_VOL:
                {
                    mmi_ucs2ncpy((CHAR*)menu_data[i].item_list[1], GetString(STR_GLOBAL_0 + g_prof_mem_p->cur_setting.msg_vol), MAX_SUBMENU_CHARACTERS);
                }
                break;

                default:
                    break;
            }
        }
    }

    return num_item;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_entry_customize_option_scrn
 * DESCRIPTION
 *  Activates the Highlighted profile
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_setting_scrn_select_hdlr(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_menu_id  root_menu_id = 0;
    mmi_menu_id  menu_id = 0;
    U16  str_id = 0;
    U16  tone_id = 0;
    /* flag =0 means need to create menu; 
         * flag =1 means need to create tone list
         * flag =2 means need to create ring list  
         * flag =3 means need to create volume bar
         */
    U32 flag = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_prof_mem_p->entry_type == MMI_PROF_ENTRY_SOUND_SETTING)
    {
        switch (g_prof_mem_p->highlighted_item + MENU_ID_PROF_SNDSET_ALERT_TYPE)
        {
            case MENU_ID_PROF_SNDSET_ALERT_TYPE:
            {
                root_menu_id = MENU_ID_PROF_ALERT_TYPE;
                menu_id = (mmi_menu_id)(g_prof_mem_p->cur_setting.alert_type + MENU_ID_PROF_RING_ONLY);
                flag = 0;
            }
            break;

            case MENU_ID_PROF_SNDSET_RING_TONE:
            {
                str_id = STR_ID_PROF_RING_TONE;
                tone_id = g_prof_mem_p->cur_setting.ring_tone;
                flag = 2;
            }
            break;

            case MENU_ID_PROF_SNDSET_MSG_TONE:
            {
                str_id = STR_ID_PROF_NOTIFICATION_TONE;
                tone_id = g_prof_mem_p->cur_setting.msg_tone;
                flag = 1;
            }
            break;

            default:
                break;
        }
    }
    else
    {
        switch (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL)
        {
            case MENU_ID_PROF_VOLSET_MEDIA_VOL:
            {
                g_prof_mem_p->volume = g_prof_mem_p->cur_setting.media_vol;
                flag = 3;
            }
            break;

            case MENU_ID_PROF_VOLSET_RING_VOL:
            {
                g_prof_mem_p->volume = g_prof_mem_p->cur_setting.ring_vol;
                flag = 3;
            }
            break;

            case MENU_ID_PROF_VOLSET_MSG_VOL:
            {
                g_prof_mem_p->volume = g_prof_mem_p->cur_setting.msg_vol;
                flag = 3;
            }
            break;

            default:
                break;
        }
    }

    if (flag == 0)
    {
        /* Show the menu items */
        mmi_id menu_gid;
        menu_gid = cui_menu_create(
                        GRP_ID_PROFILES, 
                        CUI_MENU_SRC_TYPE_RESOURCE, 
                        CUI_MENU_TYPE_APPSUB, 
                        root_menu_id, 
                        MMI_TRUE, 
                        NULL);
        if (menu_gid != GRP_ID_INVALID)
        {
            cui_menu_set_currlist_highlighted_id(menu_gid, menu_id);
            cui_menu_set_default_title_image_by_id(menu_gid, GetRootTitleIcon(MAIN_MENU_PROFILES_MENUID));
            cui_menu_run(menu_gid);
        }    
    }
    else if (flag == 1)
    {
        /* Show the tone list */
        U16 filter = 0;
        CUI_TONE_SELECTOR_FILTER_SET(filter, CUI_TONE_SELECTOR_FILTER_TONE);
        mmi_prof_run_tone_selector(GRP_ID_PROFILES, filter, str_id, tone_id);
    }
    else if (flag == 2)
    {
        /* Show the ring tone list */
        U16 filter = 0;
        CUI_TONE_SELECTOR_FILTER_SET(filter, CUI_TONE_SELECTOR_FILTER_RING);
        mmi_prof_run_tone_selector(GRP_ID_PROFILES, filter, str_id, tone_id);
    }
    else if (flag == 3)
    {
        /* Show the volume bar */
        mmi_prof_set_volume_level();
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_get_string_id_from_audio_id
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static U16 mmi_prof_get_string_id_from_audio_id(U16 audio_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (audio_id == 0)
    {
        return STR_GLOBAL_SILENT;
    }

    return srv_prof_get_string_id_from_srv_audio_id(audio_id);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_run_tone_selector
 * DESCRIPTION
 *  run tone selector CUI
 * PARAMETERS
 *  
 * RETURNS
 *  tone selector CUI group id
 *****************************************************************************/
static mmi_id mmi_prof_run_tone_selector(mmi_id parent_gid, U16 tone_filter, mmi_id str_id, mmi_id curr_audio_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_id ts_gid;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((ts_gid = cui_tone_selector_create(parent_gid)) != GRP_ID_INVALID)
    {
        cui_tone_selector_set_filter(ts_gid, tone_filter);
        cui_tone_selector_set_title_id(ts_gid, str_id, GetRootTitleIcon(MAIN_MENU_PROFILES_MENUID));
        cui_tone_selector_set_highlight_tone(ts_gid, curr_audio_id);
        cui_tone_selector_run(ts_gid);
        return ts_gid;
    }
    else
    {
        return GRP_ID_INVALID;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_menu_item_select
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_update_tone_setting(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_tone_selector_evt_struct * evt_cui = (cui_tone_selector_evt_struct *)evt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (g_prof_mem_p->highlighted_item + MENU_ID_PROF_SNDSET_ALERT_TYPE)
    {
        case MENU_ID_PROF_SNDSET_RING_TONE:
        {
            g_prof_mem_p->cur_setting.ring_tone = evt_cui->selected_tone;
        }
        break;

        case MENU_ID_PROF_SNDSET_MSG_TONE:
        {
            g_prof_mem_p->cur_setting.msg_tone = evt_cui->selected_tone;
        }
        break;
    }

    mmi_prof_save_cur_settings();
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_set_volume_level
 * DESCRIPTION
 *  Set all volume screen handler functions and call the general entry screen of volume level.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_set_volume_level(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 init_vol;
    VOLUMEHANDLER_TYPE volume_type;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* If mute bit is set remove it */
    if (MDI_AUD_VOL_IS_MUTE_LEVEL(g_prof_mem_p->volume))
    {
        init_vol = g_prof_mem_p->volume & 0x0F;
    }
    else
    {
        init_vol = g_prof_mem_p->volume;
    }

    /* If highlighted item is not media volume */
    if (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL != MENU_ID_PROF_VOLSET_MEDIA_VOL)
    {
        StartTimer(TIMER_PROFILES_TONE_PLAY, 100, mmi_prof_preview_play_tone);
        /* When Message or Ring volume items */
        volume_type = VOLUMEHANDLER_RING_TONE;
    }
    else
    {
        /* In case of media volume let beep play */
        volume_type = VOLUMEHANDLER_KEY_TONE;
    }

    /* Set the handlers and call the volume category screen entry functions */
    SetVolumeKeyHandlerFunctions(
                mmi_prof_vol_up_down,
                mmi_prof_vol_up_down,
                mmi_prof_vol_up_down,
                mmi_prof_vol_up_down,
                0,
                &init_vol,
                STR_GLOBAL_OK,
                0,
                mmi_prof_lsk_press_set_volume,
                NULL,
                0,
                mmi_prof_exit_set_volume,
                1,
                (VOLUMEHANDLER_TYPE)volume_type);

    EntryScrSetKeyPadVolumeLevel();
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_preview_play_tone
 * DESCRIPTION
 *  preview tone
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_preview_play_tone(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mdi_result result = MDI_AUDIO_FAIL;
    U16 audio_id;
    U8 audio_type;
    U32 audio_len;
    U8 *audio_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_PROF_TRC_PREVIEW_PLAY_TONE, g_prof_mem_p->volume);

    mdi_audio_suspend_background_play();
    StopTimer(TIMER_PROFILES_TONE_PLAY);

    switch (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL)
    {
        case MENU_ID_PROF_VOLSET_MEDIA_VOL:
        {
            // ?
        }
        break;

        case MENU_ID_PROF_VOLSET_RING_VOL:
        {
            audio_id = g_prof_mem_p->cur_setting.ring_tone;
        }
        break;

        case MENU_ID_PROF_VOLSET_MSG_VOL:
        {
            audio_id = g_prof_mem_p->cur_setting.msg_tone; 
        }
        break;

        default:
            break;
    }

    audio_data = get_audio(audio_id, &audio_type, &audio_len);

    if (audio_data != NULL)
    {
        result = mdi_audio_play_string_with_vol_path(
                        (void*)audio_data,
                        audio_len,
                        audio_type,
                        DEVICE_AUDIO_PLAY_INFINITE,
                        mmi_prof_preview_tone_callback,
                        NULL,
                        MDI_AUD_VOL_MUTE((U8)g_prof_mem_p->volume),
                        MDI_DEVICE_SPEAKER2);
    }

    if (result == MDI_AUDIO_SUCCESS)
    {
        g_prof_mem_p->is_playing = MMI_TRUE;
        g_prof_mem_p->playing_audio_id = audio_id;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_vol_down
 * DESCRIPTION
 *  .
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_vol_up_down(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 item_index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    StopTimer(KEY_VOL_TIMER_ID);

    g_prof_mem_p->volume = volume_level_UI;

    if (g_prof_mem_p->is_playing == MMI_TRUE)
    {
        mdi_audio_set_volume(VOL_TYPE_MEDIA, MDI_AUD_VOL_MUTE((U8)g_prof_mem_p->volume));
    }

    mmi_prof_preview_beep_tone();

    switch (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL)
    {
        case MENU_ID_PROF_VOLSET_MEDIA_VOL:
        {
            g_prof_mem_p->cur_setting.media_vol = g_prof_mem_p->volume;
        }
        break;

        case MENU_ID_PROF_VOLSET_RING_VOL:
        {
            g_prof_mem_p->cur_setting.ring_vol = g_prof_mem_p->volume;
        }
        break;

        case MENU_ID_PROF_VOLSET_MSG_VOL:
        {
            g_prof_mem_p->cur_setting.msg_vol = g_prof_mem_p->volume;
        }
        break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_lsk_press_set_volume
 * DESCRIPTION
 *  close the volume setting screen when lsk press also save the settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_lsk_press_set_volume(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    StopTimer(KEY_VOL_TIMER_ID);

    /* Stop the preview tones */
    if (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL != MENU_ID_PROF_VOLSET_MEDIA_VOL)
    {
        mdi_audio_stop_file();
        mdi_audio_stop_string();
        mdi_audio_resume_background_play();
    }

    /* Save the current settings */
    mmi_prof_save_cur_settings();

    /* Exit the volume handler screen */
    if (SCR_KEY_TONE_VOLUME == mmi_frm_scrn_get_active_id())
    {
        mmi_frm_scrn_close_active_id();
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_exit_set_volume
 * DESCRIPTION
 *  When screen exit just stop the preview tone and not save setting
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_exit_set_volume(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    StopTimer(KEY_VOL_TIMER_ID);

    /* Stop the preview tones */
    if (g_prof_mem_p->highlighted_item + MENU_ID_PROF_VOLSET_MEDIA_VOL != MENU_ID_PROF_VOLSET_MEDIA_VOL)
    {
        mdi_audio_stop_file();
        mdi_audio_stop_string();
        mdi_audio_resume_background_play();
    }

    /* Exit the volume handler screen */
    if (SCR_KEY_TONE_VOLUME == mmi_frm_scrn_get_active_id())
    {
        mmi_frm_scrn_close_active_id();
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_preview_tone_callback
 * DESCRIPTION
 *  play default tone callback
 * PARAMETERS
 *  MDI result
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_preview_tone_callback(mdi_result result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_PROF_TRC_PLAY_CALLBACK, result);

    if (result == MDI_AUDIO_TERMINATED)
    {
        g_prof_mem_p->is_playing = MMI_FALSE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_preview_beep_tone
 * DESCRIPTION
 *  preview tone
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_preview_beep_tone(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 audio_id = TONE_KEY_NORMAL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_MEDIA_TRC_G2_APP, MMI_PROF_TRC_PREVIEW_KEY_TONE, g_prof_mem_p->volume);

    /* Check the condition whether to preview or not */
    if (g_prof_mem_p->volume == 0)
    {
        return;
    }

    mdi_audio_play_id_with_vol_path(
            audio_id, 
            DEVICE_AUDIO_PLAY_ONCE,
            MDI_AUD_VOL_MUTE(g_prof_mem_p->volume),
            MDI_DEVICE_SPEAKER2);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_get_cur_settings
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_get_cur_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_setting_struct settings;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_prof_get_profile_values((srv_prof_internal_profile_enum)MMI_PROFILE_GENERAL, &settings);

    /* Save the current settings in App format */
    /* Alert type */
    switch (settings.alert_type)
    {
        case SRV_PROF_ALERT_TYPE_RING:
        case SRV_PROF_ALERT_TYPE_VIB_ONLY:
        case SRV_PROF_ALERT_TYPE_VIB_AND_RING:
        case SRV_PROF_ALERT_TYPE_VIB_THEN_RING:
        case SRV_PROF_ALERT_TYPE_SILENT:
        {
            g_prof_mem_p->cur_setting.alert_type = settings.alert_type - 1 + MMI_PROF_ALERT_TYPE_RING;
            break;
        }
        default:
        {
            g_prof_mem_p->cur_setting.alert_type = MMI_PROF_ALERT_TYPE_RING;
            break;
        }
    }

    /* Ring tone */
    g_prof_mem_p->cur_setting.ring_tone = settings.mt_call_tone[0];

    /* Msg tone */
    g_prof_mem_p->cur_setting.msg_tone = settings.sms_tone[0];

    /* Media vol */
#ifdef __MMI_UNIQUE_MEDIA_VOL__
    g_prof_mem_p->cur_setting.media_vol = settings.media_vol;
#else
    // TODO: need to implement own NVRAM to save media vol
    g_prof_mem_p->cur_setting.media_vol = 0;
#endif

    /* Ring volume */
    g_prof_mem_p->cur_setting.ring_vol = settings.ring_vol;

    /* Msg volume */
    g_prof_mem_p->cur_setting.msg_vol = settings.msg_vol;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_prof_save_cur_settings
 * DESCRIPTION
 *  Save settings
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_prof_save_cur_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_setting_struct settings;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*get old settings, if some old settings have not changed, save it as original*/
    srv_prof_get_profile_values((srv_prof_internal_profile_enum)MMI_PROFILE_GENERAL, &settings);

    /* Alert type */
    switch (g_prof_mem_p->cur_setting.alert_type)
    {
        case MMI_PROF_ALERT_TYPE_RING:
        case MMI_PROF_ALERT_TYPE_VIB_ONLY:
        case MMI_PROF_ALERT_TYPE_VIB_AND_RING:
        case MMI_PROF_ALERT_TYPE_VIB_THEN_RING:
        case MMI_PROF_ALERT_TYPE_SILENT:
        {
            settings.alert_type = (srv_prof_alert_type_enum)(g_prof_mem_p->cur_setting.alert_type + SRV_PROF_ALERT_TYPE_RING);
            break;
        }
        default:
        {
            settings.alert_type = SRV_PROF_ALERT_TYPE_RING;
            break;
        }
    }

    /* Ring tone */
    settings.mt_call_tone[0] = g_prof_mem_p->cur_setting.ring_tone;

    /* Msg tone */
    settings.sms_tone[0] = g_prof_mem_p->cur_setting.msg_tone;

    /* Media vol */
#ifdef __MMI_UNIQUE_MEDIA_VOL__
    settings.media_vol = g_prof_mem_p->cur_setting.media_vol;
#else
    // TODO: need to implement own NVRAM to save media vol
#endif

    /* Ring volume */
    settings.ring_vol = g_prof_mem_p->cur_setting.ring_vol;

    /* Msg volume */
    settings.msg_vol = g_prof_mem_p->cur_setting.msg_vol;

    srv_prof_set_profile_values((srv_prof_internal_profile_enum)MMI_PROFILE_GENERAL, &settings);
}


#endif
