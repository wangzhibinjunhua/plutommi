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
 *  UcmUiBTl.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM kernel source file
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_features.h"
#ifdef __MMI_BT_DIALER_SUPPORT__

#include "CommonScreens.h"
#include "UcmGProtBT.h"
#include "UcmProtBT.h"
#ifdef __MMI_TELEPHONY_SUPPORT__
#include "mmi_rp_app_ucm_def.h"
#endif /* __MMI_TELEPHONY_SUPPORT__ */
#include "mmi_rp_app_ucmbt_def.h"
#include "Gpiosrvgprot.h"
#include "ProfilesSrvGprot.h"
#include "mdi_datatype.h"
#include "mdi_audio.h" /* MMI_EVENT_SUCCESS. in which include custom_events_notify.h */
#include "CallSetSrvGprot.h"
#include "CallSetGprot.h"
#include "app_str.h" /* app_ucs2_itoa */
#include "UMGProt.h" /* mmi_um_entry_main_message_menu_with_check */

#include "PhbCuiGprot.h"
#include "CalllogGprot.h"
#include "SmsCuiGprot.h"
/*[UCM3.0] todo it's not good to use prot.h */
#include "PowerOnChargerProt.h" /* IS_LOW_BATTERY */  /* O */
#include "IdleGprot.h"
#include "VolumeHandler.h" /* SetKeyPadVolUp */
#include "SatAppGprot.h"
#include "wgui_categories.h"
#include "mmi_rp_app_alarm_def.h" /* GRP_ID_ALM_IND */
#include "Resource_audio.h"
#include "NwInfoSrvGprot.h" /* srv_nw_info_get_protocol */

#include "Menucuigprot.h"
#include "mmi_rp_menu_misc_def.h"
#include "MMIDataType.h"
#include "GlobalConstants.h"
#include "kal_general_types.h"
#include "MMI_common_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_trace.h"
#include "mmi_common_app_trc.h"
#include "wgui_categories_CM.h"
#include "custom_srv_prof_defs.h"
#include "custom_led_patterns.h"
#include "mmi_frm_timer_gprot.h"
#include "mmi_frm_scenario_gprot.h"
#include "AlertScreen.h"
#include "mmi_frm_events_gprot.h"
#include "gui_data_types.h"
#include "string.h"
#include "Unicodexdcl.h"
#include "mmi_res_range_def.h"
#include "mmi_frm_mem_gprot.h"
#include "PhbSrvGprot.h"
#include "custom_mmi_default_value.h"
#include "GlobalResDef.h"
#include "PhoneBookGprot.h"
#include "ps_public_enum.h"
#include "device.h"
#include "gui_typedef.h"
#include "wgui_categories_util.h"
#include "CustDataRes.h"
#include "custom_events_notify.h"
#include "kal_public_api.h"
#include "mmi_frm_history_gprot.h"
#include "mmi_frm_input_gprot.h"
#include "wgui_inputs.h"
#include "mmi_frm_gprot.h"
#include "CustMenuRes.h"
#include "wgui_categories_list.h"
#include "mmi_rp_app_uiframework_def.h"
#include "NetSetSrvGprot.h"
#include "NetSetAppGprot.h"
#include "wgui_categories_multimedia.h"
#include "mmi_rp_app_phonebook_def.h"
#include "mmi_rp_srv_phb_def.h"
#include "gui.h"
#include "wgui_touch_screen.h"
#include "wgui.h"
#include "wgui_categories_popup.h"
#include "wgui_fixed_menus.h"
#include "stdio.h"
#include "mmi_frm_nvram_gprot.h"
#include "FileMgrSrvGProt.h"
#include "mmi_rp_file_type_def.h"
#include "FileMgrType.h"
#include "fs_type.h"
#include "drm_def.h"
#include "fs_errcode.h"
#include "drm_errcode.h"
#include "gdi_const.h"
#include "gdi_include.h"
#include "CommonScreensResDef.h"
#include "SimCtrlSrvGprot.h"

#include "mmi_rp_app_mainmenu_def.h"


#include "CharBatSrvGprot.h"

#include "SSCStringTable.h"
#include "MainMenuProt.h"
#include "mmi_frm_utility_gprot.h"   /* For MMI_SIM_TOTAL & MMI_SIM_ALL */
#include "SensorSrvGport.h"
#include "ScrLockerGprot.h"
#include "Vsrv_ncenter.h"
#include "DateTimeType.h"
#include "mmi_frm_app_launcher_gprot.h"
#include "mmi_frm_mem_gprot.h"
#include "ProfilesSrvGprot.h"


#include "BtcmSrvGprot.h"
#include "BTDialerSrvGprot.h"
#include "Conversions.h"  // for mmi_chset_utf8_to_ucs2_string
#include "custom_ecc.h"
#include "csmcc_enums.h"

#define __MMI_BT_BQB_TEST__ 1

/* ==================================================================================== */
/* =============Initialization========================================================= */
/* ==================================================================================== */
void mmi_ucm_handle_incall_option_bt(mmi_id owner_gid);
void mmi_ucm_set_loud_speaker_bt(void);
void mmi_ucm_call_scenario_control(void);
static void mmi_ucm_enter_dtmf_editor_bt(void);
static void mmi_ucm_pre_entry_dtmf_editor_bt(void);

#ifdef __BT_PBAP_CLIENT__
S32 mmi_ucm_get_remote_name_cb(srv_phb_pbapc_read_list_rsp_struct *list_rsp, void *user_data);
void mmi_ucm_destory_pbap_handle(SRV_PHB_PBAPC_HANDLE* handle)
{
    kal_prompt_trace(MOD_MMI, "[UCMBT] mmi_ucm_destory_pbap_handle, 1hdlr:%x", (*handle));
    if ((*handle) != NULL)
    {
        //srv_phb_pbapc_destory_handle((*handle));
        g_ucm_p_bt->del_pbapc_handle = (*handle);
        (*handle) = NULL;
    }
}
void mmi_ucm_get_remote_name(mmi_ucm_call_state_cntx_struct* call_state, srv_phb_pbap_storage_enum path)
{
    S32 ret = -1;
    srv_phb_pbapc_read_list_req_struct list_req;
    srv_phb_pbapc_read_list_req_ex_struct ex_req;
    U8 num_length = strlen((CHAR*)call_state->num_uri);

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_GET_NAME,
    num_length,call_state->num_uri[0],call_state->num_uri[1],call_state->num_uri[2],call_state->num_uri[3]);

    call_state->pbapc_path = path;
    if (SRV_PHB_PBAP_STORAGE_SIM1_PB != path)
    {
        call_state->pbapc_handle= srv_phb_pbapc_create_handle(&ret);
    }
    else
    {
        ret = SRV_PHB_PBAPC_RET_OK;
    }
    if (ret == SRV_PHB_PBAPC_RET_OK && num_length != 0)
    {
        ex_req.entry_count = UCMBT_PBAPC_MAX_QUERY_COUNT;
        call_state->pbapc_query_count = 0;
        memset(call_state->pbapc_list_entry, 0, 
        sizeof(srv_phb_pbapc_list_entry_struct)*UCMBT_PBAPC_MAX_QUERY_COUNT);
        ex_req.list_entry = call_state->pbapc_list_entry;
        /* Req head */
        list_req.handle = call_state->pbapc_handle;
        list_req.storage = path;
        list_req.user_data = (void*)call_state;

        list_req.folder_name = NULL;
        list_req.query_attr = SRV_PHB_PBAP_ATTR_NUMBER;
        list_req.order = SRV_PHB_PBAP_SORT_ORDER_ALPHA;
        list_req.query_pattern = call_state->num_uri;
        list_req.query_length = num_length;
        list_req.query_count = UCMBT_PBAPC_MAX_QUERY_COUNT;
        list_req.query_offset = 0;
        list_req.list_req_ex = &ex_req;

        ret = srv_phb_pbapc_read_pse_list(&list_req, mmi_ucm_get_remote_name_cb);
    }
    else
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_GET_NAME_FAIL, ret);
        if (ret == SRV_PHB_PBAPC_RET_OK)
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_BT_GET_NAME_DESTORIED, 3);
            mmi_ucm_destory_pbap_handle(&call_state->pbapc_handle);
        }
    }
}

S32 mmi_ucm_get_remote_name_cb(srv_phb_pbapc_read_list_rsp_struct *list_rsp, void *user_data)
{
    mmi_ucm_call_state_cntx_struct* call_state = (mmi_ucm_call_state_cntx_struct*)user_data;

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL,
        TRC_MMI_UCM_BT_GET_NAME_CB,
        list_rsp->ret, list_rsp->is_list_valid, list_rsp->entry_count);

    if (list_rsp->ret == 0 
        && list_rsp->is_list_valid)
    {
        if (list_rsp->entry_count > 0 && g_num_calls != 0)
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_BT_GET_NAME_DESTORIED,0);
            mmi_ucm_destory_pbap_handle(&call_state->pbapc_handle);

            call_state->pbapc_query_count = list_rsp->entry_count;
            if (call_state->call_state & (srv_ucm_bt_call_state_enum)(SRV_UCM_BT_ACTIVE_STATE | SRV_UCM_BT_HOLD_STATE))
            {
                mmi_ucm_enter_in_call_bt();
            }
            else if (call_state->call_state & SRV_UCM_BT_INCOMING_STATE)
            {
                mmi_ucm_enter_incoming_call_bt();
            }
            else if (call_state->call_state & SRV_UCM_BT_OUTGOING_STATE)
            {
                mmi_ucm_enter_outgoing_call_bt();
            }
        }
        else if (SRV_PHB_PBAP_STORAGE_PHONE_PB == call_state->pbapc_path)
        {
            mmi_ucm_get_remote_name(call_state, SRV_PHB_PBAP_STORAGE_SIM1_PB);
        }
        else
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_BT_GET_NAME_DESTORIED,1);
            mmi_ucm_destory_pbap_handle(&call_state->pbapc_handle);
        }
    }
    else if (list_rsp->ret != 0 || g_num_calls == 0)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_BT_GET_NAME_DESTORIED,2);
        mmi_ucm_destory_pbap_handle(&call_state->pbapc_handle);
        call_state->pbapc_path = SRV_PHB_PBAP_STORAGE_NULL;
    }
    if (g_ucm_p_bt->del_pbapc_handle != NULL)
    {
        srv_phb_pbapc_destory_handle(g_ucm_p_bt->del_pbapc_handle);
        g_ucm_p_bt->del_pbapc_handle = NULL;
    }
    return 0;
}
#endif /* __BT_PBAP_CLIENT__ */

void mmi_ucm_query_remote_name(S32 index, U16* num_ucs2)
{
#ifdef __BT_PBAP_CLIENT__
    S32 i;
#endif /* __BT_PBAP_CLIENT__ */
    srv_phb_caller_info_struct phb_data;
    srv_phb_cm_number_struct phb_num;
    U8 ucs2_num[(MAX_CC_ADDR_LEN+1) * ENCODING_LENGTH];
#ifdef __MMI_TELEPHONY_SUPPORT__
    if (srv_ucm_is_emergency_number(SRV_UCM_VOICE_CALL_TYPE, g_ucm_call_state[index].num_uri))
    {
        memset(&phb_num, 0, sizeof(srv_phb_cm_number_struct));
        mmi_asc_n_to_ucs2((CHAR *)ucs2_num, (CHAR *)g_ucm_call_state[index].num_uri, MAX_CC_ADDR_LEN);
        phb_num.number = (PU16)ucs2_num;
        phb_num.sim_interface = mmi_frm_sim_to_index(MMI_SIM1);
        phb_num.call_type = ECC_SIM1_CALL;
        phb_num.is_mo_call = MMI_TRUE;
        srv_phb_get_caller_info_by_number(&phb_num, &phb_data);
        mmi_ucs2cpy((CHAR *)num_ucs2, (CHAR *)phb_data.name);
        return;
    }
#endif /* __MMI_TELEPHONY_SUPPORT__ */

#ifdef __BT_PBAP_CLIENT__
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_QUERY_REMOTE_NAME_BT, index,
    g_ucm_call_state[index].pbapc_is_query, g_ucm_call_state[index].pbapc_query_count);

    if (!g_ucm_call_state[index].pbapc_is_query)
    {
        mmi_asc_n_to_ucs2((CHAR*)num_ucs2, 
                    (CHAR*)g_ucm_call_state[index].num_uri, 
                    SRV_UCM_BT_MAX_NUM_URI_LEN);
        g_ucm_call_state[index].pbapc_path = SRV_PHB_PBAP_STORAGE_PHONE_PB;
        g_ucm_call_state[index].pbapc_is_query = MMI_TRUE;
        mmi_ucm_get_remote_name(&g_ucm_call_state[index], SRV_PHB_PBAP_STORAGE_PHONE_PB);
    }
    else
    {
        if (g_ucm_call_state[index].pbapc_query_count > 0)
        {
            for (i = 0; i < UCMBT_PBAPC_MAX_QUERY_COUNT; i++)
            {
                if (g_ucm_call_state[index].pbapc_list_entry[i].entry_index != 0)
                    {
                        if (g_ucm_call_state[index].pbapc_list_entry[i].entry_name[0] != '\0')
                        {
                            mmi_chset_utf8_to_ucs2_string((U8*)num_ucs2, 
                                        SRV_UCM_BT_MAX_NUM_URI_LEN*ENCODING_LENGTH,
                                        (U8*)g_ucm_call_state[index].pbapc_list_entry[i].entry_name);
                            break;
                        }
                    }
            }
            if (i == UCMBT_PBAPC_MAX_QUERY_COUNT)
            {
                mmi_asc_n_to_ucs2((CHAR*)num_ucs2, 
                        (CHAR*)g_ucm_call_state[index].num_uri, 
                        SRV_UCM_BT_MAX_NUM_URI_LEN);
            }
        }
        else
        {
            mmi_asc_n_to_ucs2((CHAR*)num_ucs2, 
                    (CHAR*)g_ucm_call_state[index].num_uri, 
                    SRV_UCM_BT_MAX_NUM_URI_LEN);
        }
    }
#else
    mmi_asc_n_to_ucs2((CHAR*)num_ucs2, 
        (CHAR*)g_ucm_call_state[index].num_uri, 
        SRV_UCM_BT_MAX_NUM_URI_LEN);
#endif // __BT_PBAP_CLIENT__
}
void mmi_ucm_in_call_end_key_bt(void)
{
	if (mmi_ucm_query_call_count_by_call_state_bt(
		SRV_UCM_BT_ACTIVE_STATE, NULL) > 0)
	{
		srv_bt_dialer_hangup_current_call(srv_hd);
	}
	else if (mmi_ucm_query_call_count_by_call_state_bt(
		SRV_UCM_BT_HOLD_STATE, NULL) > 0)
	{
		srv_bt_dialer_release_all_held_calls(srv_hd);
	}
}

U8 mmi_ucm_convert_dtmf_to_ascii_bt(U16 *digit)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (*digit)
    {
        case KEY_0:
        case KEY_1:
        case KEY_2:
        case KEY_3:
        case KEY_4:
        case KEY_5:
        case KEY_6:
        case KEY_7:
        case KEY_8:
        case KEY_9:
            return '0' + (*digit) - KEY_0;
        case KEY_STAR:
            return '*';
        case KEY_POUND:
            return '#';
        default:
            return KEY_INVALID;
    }

}

static void mmi_ucm_send_dtmf_action_bt(U16 keyCode)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 asc_digit;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	asc_digit = mmi_ucm_convert_dtmf_to_ascii_bt(&keyCode);
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SEND_DTMF, asc_digit);
    if((asc_digit == (U8)'*')
        || (asc_digit == (U8)'#')
        || ((asc_digit >= (U8)'0') && (asc_digit <= (U8)'9')))
    {
    	srv_bt_dialer_send_generate_dtmf_tone_req(srv_hd,asc_digit);
    }
}

static void mmi_ucm_send_dtmf_by_key(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 keyCode = 0, keyType = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    GetkeyInfo(&keyCode, &keyType);

    if (MMI_FALSE == wgui_inputs_dialer_is_dialer_keys(keyCode))
    {
        return;
    }

    /* For first spec digit keycode like '*' to disable highlight */
    mmi_frm_send_incomplete_key_event_to_new_screen(MMI_TRUE);
	mmi_ucm_send_dtmf_action_bt(keyCode);
	mmi_ucm_pre_entry_dtmf_editor_bt();
	wgui_inputs_dialer_display_char(keyCode);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_enter_call_end
 * DESCRIPTION
 *  Enter call end popup screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_enter_call_end_bt(mmi_ucm_bt_call_end_struct *call_end_p)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	MMI_BOOL is_need_accept = MMI_FALSE;
	if (g_ucm_p_bt->is_end_all_action && g_num_calls == 0)
	{
		is_need_accept = g_ucm_p_bt->is_need_accept;
		mmi_ucm_clean_all_bt();
		g_ucm_p_bt->is_need_accept = is_need_accept;
		mmi_ucm_delete_all_screen_bt();
	}
	if(mmi_frm_scrn_is_present(GRP_ID_UCM_BT_CALL_END, SCR_ID_UCM_BT_CALL_END, MMI_FRM_NODE_ALL_FLAG))
	{
		mmi_frm_scrn_close(GRP_ID_UCM_BT_CALL_END, SCR_ID_UCM_BT_CALL_END);
	}
	if (mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
	{
		mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
	}
	mmi_ucm_sg_create_bt(GRP_ID_ROOT, GRP_ID_UCM_BT_CALL_END);

    mmi_frm_scrn_first_enter(
        GRP_ID_UCM_BT_CALL_END, SCR_ID_UCM_BT_CALL_END, 
        (FuncPtr)mmi_ucm_entry_call_end_bt, 
        (void*)call_end_p);
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_end_timeout_handler
 * DESCRIPTION
 *  ucm call end timeout handler
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_call_end_timeout_handler_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_CALL_END_TIMEOT_HANDLER, g_num_calls, g_ucm_p_bt->is_end_all_action, g_ucm_p_bt->is_need_accept);
	
    StopTimer(UCM_NOTIFY_DURATION_TIMER_BT);
	mmi_ucm_call_scenario_control();

	if (srv_ucm_is_any_call())
	{
		g_ucm_p_bt->is_need_send_evt = MMI_TRUE;
	}
	else
	{
		g_ucm_p_bt->is_need_send_evt = MMI_TRUE;
		mmi_ucm_send_update_clog_evt_bt();
	}
	
	if (g_ucm_p_bt->is_need_accept && g_num_calls == 0)
	{
		mmi_ucm_end_btdialer_and_accept_option_bt();
	}
	if (g_num_calls == 0 && !g_ucm_p_bt->is_end_all_action)
	{
		mmi_ucm_clean_all_bt();
	}
	mmi_frm_group_close(GRP_ID_UCM_BT_CALL_END);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_call_end
 * DESCRIPTION
 *  show call end popup
 * PARAMETERS
 *   call_end:          [IN]    call end info structure
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_entry_call_end_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 MessageString[MMI_UCM_END_TEXT_LEN_BT];
    U8 newline[4] = { '\n', '\0', '\0', '\0' }; /* \n */
    CHAR TimeString[32];
    S32 str_len = 0;
    U16 img_id = 0;
    mmi_ucm_bt_call_end_struct *call_end_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_CALL_END_BT);
	
    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_BT_CALL_END,
                    (FuncPtr)mmi_ucm_exit_call_end_bt,
                    (FuncPtr)mmi_ucm_entry_call_end_bt,
                    MMI_FRM_FG_ONLY_SCRN))
    {
        return;
    }
    

    call_end_p = (mmi_ucm_bt_call_end_struct*)mmi_frm_scrn_get_user_data(scr_info->group_id, SCR_ID_UCM_BT_CALL_END);

    img_id = call_end_p->image_id;

    mmi_ucs2ncpy((CHAR*)MessageString, (CHAR*)call_end_p->disp_msg, MMI_UCM_END_TEXT_LEN_BT);
    
    if ((call_end_p->call_duration.nDay + 
        call_end_p->call_duration.nHour +  
        call_end_p->call_duration.nMin + 
        call_end_p->call_duration.nSec) != 0)
    {
        duration_string(
            (UI_time*) & (call_end_p->call_duration),
            (UI_string_type) TimeString,
            DT_ACTIVE_CALL_SCREEN);

        str_len = mmi_ucs2strlen((CHAR*)MessageString);
        if ((MMI_UCM_END_TEXT_LEN_BT - str_len) > mmi_ucs2strlen((CHAR*)newline))
        {
            mmi_ucs2ncat((CHAR*)MessageString, (CHAR*)newline, (MMI_UCM_END_TEXT_LEN_BT - str_len));
        }
        str_len = mmi_ucs2strlen((CHAR*)MessageString);

        if ((MMI_UCM_END_TEXT_LEN_BT - str_len) > mmi_ucs2strlen((CHAR*)TimeString))
        {
            mmi_ucs2ncat((CHAR*)MessageString, (CHAR*)TimeString, (MMI_UCM_END_TEXT_LEN_BT - str_len));
        }
    }
	SetKeyHandler(mmi_frm_scrn_close_active_id, KEY_END, KEY_EVENT_DOWN);
    ShowCategory63Screen((U8*) MessageString, img_id, NULL);
	srv_backlight_turn_on(SRV_BACKLIGHT_SHORT_TIME);
	mmi_frm_scrn_set_leave_proc(GRP_ID_UCM_BT_CALL_END, SCR_ID_UCM_BT_CALL_END, (mmi_proc_func) mmi_ucm_call_end_screen_delete_proc_bt); 
      
    StartTimer(UCM_NOTIFY_DURATION_TIMER_BT, MMI_UCM_NOTIFY_TIMEOUT_BT, mmi_ucm_call_end_timeout_handler_bt);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_end_screen_delete_proc
 * DESCRIPTION
 *  This function is a leave proc for cal end screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_call_end_screen_delete_proc_bt(mmi_event_struct *evt)
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
        {
            mmi_scenario_evt_struct *scenario_evt = (mmi_scenario_evt_struct*)evt;
            mmi_ucm_bt_call_end_struct *call_end_p = (mmi_ucm_bt_call_end_struct *)mmi_frm_scrn_get_user_data(scenario_evt->targ_group, scenario_evt->targ_scrn); 
                      /* free memory */
			if(call_end_p->disp_msg != NULL)
			{
				OslMfree(call_end_p->disp_msg);
				call_end_p->disp_msg = NULL;
			}
			if(call_end_p != NULL)
			{
	            OslMfree(call_end_p);
				call_end_p = NULL;
			}
        }
        break;
    }
    return MMI_RET_OK;
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_release_ind_bt
 * DESCRIPTION
 *  This function is a leave proc for cal end screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/

void mmi_ucm_release_ind_bt(void)
{

    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ucm_bt_call_end_struct *call_end_p; /* free mem when screen deinit */
    U16 *call_end_message = OslMalloc(sizeof(U16) * (SRV_UCM_BT_MAX_ERR_MSG_LEN + 1)); /* free mem when screen deinit */
    MYTIME currnt_time = {0};
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_IND_BT, g_num_calls, g_ucm_p_bt->release_call_info.call_state);
    g_ucm_p_bt->disconnecting = MMI_FALSE;
#ifdef __MMI_FTE_SUPPORT__	
    mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_RELEASE_EVENT);
#endif
    mmi_ucm_stop_incoming_ringtone_bt();

    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_CALL_STATE_ALL, NULL) == 0)
    {
        if (mdi_audio_get_audio_mode() == AUD_MODE_LOUDSPK)
        {
            srv_speech_disable_hand_free();
        }
        if (srv_speech_is_phone_mute() == MMI_TRUE)
        {
            srv_speech_unmute_phone();
        }
    }

#ifdef __MMI_UCM_BT_CALL_RECORDER__
    if (mmi_ucm_query_call_count_by_call_state_bt(
		SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) == 0)
    {
       if (mdi_audio_is_recording())
        {
            mmi_ucm_end_record_option_bt();
        } 

	}
#endif /*__MMI_UCM_BT_CALL_RECORDER__*/
    call_end_p = OslMalloc(sizeof(mmi_ucm_bt_call_end_struct)); 

    DTGetRTCTime(&currnt_time);

    GetTimeDifference(&currnt_time, &g_ucm_p_bt->release_call_info.start_time, &(call_end_p->call_duration));

    if(g_ucm_p_bt->release_call_info.call_state & 
        (srv_ucm_bt_call_state_enum)(SRV_UCM_BT_OUTGOING_STATE | SRV_UCM_BT_INCOMING_STATE))// If no active call, call duration is 0
    {
        memset(&call_end_p->call_duration , 0 , sizeof(MYTIME));
    }
    mmi_ucs2ncpy((CHAR*)call_end_message, (CHAR*)GetString(STR_ID_UCM_BT_CALL_ENDED), MMI_UCM_END_TEXT_LEN_BT);
    call_end_p->disp_msg = call_end_message;
 
    mmi_ucm_tab_highlight_bt();

    if (g_ucm_p_bt->after_callback != NULL)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
        g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
        g_ucm_p_bt->after_callback = NULL;
    }
    mmi_ucm_enter_call_end_bt(call_end_p);
    mmi_ucm_go_back_screen_check_bt();
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_exit_call_end
 * DESCRIPTION
 *  This just stops timer which was started in the entry function.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_exit_call_end_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_EXIT_CALL_END_BT);
    StopTimer(UCM_NOTIFY_DURATION_TIMER_BT);
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED,NULL) > 0
          && !mmi_frm_group_is_present(GRP_ID_UCM_BT_INCALL))
    {
        mmi_ucm_call_scenario_control();
        mmi_ucm_enter_in_call_bt();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_exit_incoming_call
 * DESCRIPTION
 *  Exit function for incoming call
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_exit_incoming_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef  __MMI_FTE_SUPPORT__
	StopTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT);
#endif /* __MMI_FTE_SUPPORT__ */
	srv_backlight_turn_off();
}

void mmi_ucm_exit_outgoing_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef  __MMI_FTE_SUPPORT__
	StopTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT);
#endif /* __MMI_FTE_SUPPORT__ */
}

void mmi_ucm_exit_in_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef  __MMI_FTE_SUPPORT__
	StopTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT);
#endif /* __MMI_FTE_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_tab_jump_bt
 * DESCRIPTION
 *  Jump to tab based on index for Category403.
 * PARAMETERS
 *  index       [IN]        Current highlight tab
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_tab_jump_bt(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 group_count;
    S32 group_index[SRV_UCM_BT_MAX_CALL];
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    group_count = mmi_ucm_query_group_count_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, group_index);

    g_ucm_p_bt->hilite_tab = group_index[index];

    g_ucm_p_bt->hilite_index  = 0;

    if(group_count > 0)
    {
        mmi_ucm_enter_in_call_bt();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_tab_prev
 * DESCRIPTION
 *  Move to previous tab for Category403.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_tab_prev_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 group_index[SRV_UCM_BT_MAX_CALL];
    S32 group_count;
    U32 i, j;  
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_ucm_p_bt->hilite_index = 0;

    group_count = mmi_ucm_query_group_count_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, group_index);
    kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] tab_prev, hilite_tab:%d, count:%d", g_ucm_p_bt->hilite_tab, group_count);

    if (group_count == 1 && group_index[0] > 0)
    {
        g_ucm_p_bt->hilite_tab = group_index[0];
    #ifdef __MMI_BTD_BOX_UI_STYLE__
        /* volume control, should transfer repeat key to in call screen */
        mmi_frm_send_incomplete_key_event_to_new_screen(MMI_TRUE);
    #endif /* __MMI_BTD_BOX_UI_STYLE__ */
        mmi_ucm_enter_in_call_bt();
        return;
    }
    else if (group_count > 1)
    {
        kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] tab_prev, idx[0]:%d, idx[1]:%d, idx[2]:%d",
                     group_index[0], group_index[1], group_index[2]);
        if (g_ucm_p_bt->hilite_tab == group_index[0])
        {
            g_ucm_p_bt->hilite_tab = group_index[1];
        }
        else if (g_ucm_p_bt->hilite_tab == group_index[1])
        {
            g_ucm_p_bt->hilite_tab = group_index[0];
        }
    #ifdef __MMI_BTD_BOX_UI_STYLE__
        /* volume control, should transfer repeat key to in call screen */
        mmi_frm_send_incomplete_key_event_to_new_screen(MMI_TRUE);
    #endif /* __MMI_BTD_BOX_UI_STYLE__ */
        mmi_ucm_enter_in_call_bt();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_tab_next
 * DESCRIPTION
 *  Move to next tab for Category403.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_tab_next_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
  
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucm_tab_prev_bt();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_tab_highlight
 * DESCRIPTION
 *  Adjust highlight tab for Category403.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_tab_highlight_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 group_index[SRV_UCM_BT_MAX_CALL];
    S32 group_count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_TAP_HIGHLIGH, g_num_calls, g_ucm_p_bt->hilite_tab);
    g_ucm_p_bt->hilite_index = 0;
    group_count = mmi_ucm_query_group_count_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, group_index);
    if (group_count > 1)
    {
        if (g_ucm_p_bt->hilite_tab == group_index[0])
        {
            g_ucm_p_bt->hilite_tab = group_index[1];
        }
        else if (g_ucm_p_bt->hilite_tab == group_index[1])
        {
            g_ucm_p_bt->hilite_tab = group_index[0];
        }
    }
    else if (group_count == 1)
    {
        g_ucm_p_bt->hilite_tab = group_index[0];
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_go_back_screen_check
 * DESCRIPTION
 *  Go back to screen based on current state.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_go_back_screen_check_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_GO_BACK_SCREEN_CHECK, g_num_calls);
    if (g_num_calls == 0)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_RESET_CALL_TABLE);
        memset(g_ucm_call_state, 0, SRV_UCM_BT_MAX_CALL*sizeof(mmi_ucm_call_state_cntx_struct));    
        memset(g_ucm_call_state_temp, 0, SRV_UCM_BT_MAX_CALL*sizeof(mmi_ucm_call_info_cntx_struct));
    }
    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_INCOMING_STATE, NULL) == 0
        && mmi_frm_group_is_present(GRP_ID_UCM_BT_MT))
    {
        mmi_frm_group_close(GRP_ID_UCM_BT_MT);
    }
    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_OUTGOING_STATE, NULL) == 0)
    {
        if (mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
        {
            mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
        }
        if (mmi_frm_group_is_present(GRP_ID_UCM_BT_MO))
        {
            mmi_frm_group_close(GRP_ID_UCM_BT_MO);
        }
    }
    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) == 0)
    {
        mmi_ucm_close_cui_bt(&g_ucm_p_bt->incall_opt_cui_id);
        if (mmi_frm_group_is_present(GRP_ID_UCM_BT_INCALL))
        {
            mmi_frm_group_close(GRP_ID_UCM_BT_INCALL);
        }
    }
    else
    {
        mmi_ucm_bt_close_processing_scrn();
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_in_call_screen_delete_proc
 * DESCRIPTION
 *  This function is a leave proc for in call screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_in_call_screen_delete_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_GOBACK_IN_END_KEY:
        case EVT_ID_SCRN_DELETE_REQ_IN_END_KEY:  
        case EVT_ID_SCRN_DELETE_REQ:
        {

        }
        break;

        case EVT_ID_SCRN_DEINIT:
        {
            /* delete all cui triggered by outgoing call scrn - here: option menu */             
            mmi_ucm_close_cui_bt(&g_ucm_p_bt->incall_opt_cui_id);
        }
        break;  
    }   
    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_outgoing_call_screen_delete_proc
 * DESCRIPTION
 *  This function is a leave proc for outgoing call screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_outgoing_call_screen_delete_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_GOBACK_IN_END_KEY:
        case EVT_ID_SCRN_DELETE_REQ_IN_END_KEY:  
        case EVT_ID_SCRN_DELETE_REQ:
        {
        }
        break;
        case EVT_ID_SCRN_DEINIT:
        {
            /* delete all cui triggered by outgoing call scrn - here: option menu */            
            mmi_ucm_close_cui_bt(&g_ucm_p_bt->outgoing_opt_cui_id);
        }
        break;
    }
    return MMI_RET_OK;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_incoming_call_screen_delete_proc
 * DESCRIPTION
 *  This function is a leave proc for incoming call screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_incoming_call_screen_delete_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_GOBACK_IN_END_KEY:
        case EVT_ID_SCRN_DELETE_REQ_IN_END_KEY:  
        case EVT_ID_SCRN_DELETE_REQ:
        {

        }
        break;

        case EVT_ID_SCRN_DEINIT:
        {
            /* delete all cui triggered by outgoing call scrn - here: option menu */
            mmi_ucm_close_cui_bt(&g_ucm_p_bt->incoming_opt_cui_id);
        }
        break;


    }
    
    return MMI_RET_OK;
}



/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_bt_end_call
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_ucm_outgoing_call_endkey_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    DisableRightSoftkey(STR_GLOBAL_ABORT, 0);
    mmi_frm_set_key_handler(UI_dummy_function, KEY_END, KEY_EVENT_DOWN);

    srv_bt_dialer_hangup_current_call(srv_hd);

}

void mmi_ucm_incoming_call_rsk_bt(void)
{
    kal_prompt_trace(MOD_MMI, "[UCMBT] incoming call endkey");
    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
    {
        DisableRightSoftkey(STR_ID_UCM_BT_REJECT, 0);
        DisableLeftSoftkey(STR_ID_UCM_BT_ANSWER, 0);

        if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0)
        {
            srv_bt_dialer_release_all_held_calls(srv_hd);
        }
        else
        {
            srv_bt_dialer_hangup_current_call(srv_hd);
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_bt_end_call
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

static void mmi_ucm_incoming_call_endkey_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] incoming_call_endkey");
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_ACTIVE_STATE, NULL) > 0)
	{
		srv_bt_dialer_release_all_active_calls(srv_hd, (S8)(-1));
	}
	else if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_HOLD_STATE, NULL) > 0)
	{
		srv_bt_dialer_release_all_held_calls(srv_hd);
	}
	else if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
	{
		srv_bt_dialer_hangup_current_call(srv_hd);
	}
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_incoming_call_sendkey
 * DESCRIPTION
 *  Handle SEND key in the incoming call screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_incoming_call_sendkey_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID active_group;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_is_any_call())
    {
        active_group = mmi_frm_group_get_active_id();
        mmi_ucm_end_and_accpet_confirm_bt(active_group);
    }
    else
    {
        DisableRightSoftkey(STR_ID_UCM_BT_REJECT, 0);
        DisableLeftSoftkey(STR_ID_UCM_BT_ANSWER, 0);
        mmi_ucm_answer_option_bt(); 
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_in_call_sendkey
 * DESCRIPTION
 *  Handle SEND key in the active call screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_in_call_sendkey_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 hiliteTab = g_ucm_p_bt->hilite_tab;
    S32 group_count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    group_count = mmi_ucm_query_group_count_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL);

    if (g_ucm_call_state[hiliteTab].call_state == SRV_UCM_BT_ACTIVE_STATE)
    {
        if (group_count > 1)
        {
            mmi_ucm_swap_action_bt();
        }
        else 
        {
            mmi_ucm_hold_action_bt();
        }
    }
    else if (g_ucm_call_state[hiliteTab].call_state == SRV_UCM_BT_HOLD_STATE)
    {
        if (group_count > 1) 
        {
            mmi_ucm_swap_action_bt();
        }
        else /* no active call exists */
        {
            mmi_ucm_retrieve_action_bt();
        }
    }
    else
    {
        mmi_ucm_entry_error_message_bt();
	}
}



/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_hold_action
 * DESCRIPTION
 *  execute hold single action if permit passes
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_hold_action_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    mmi_ucm_hold_option_bt();
	mmi_ucm_bt_pre_enter_processing_screen(GRP_ID_UCM_BT_INCALL);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_retrieve_action
 * DESCRIPTION
 *  execute retrieve single call action if permit passes
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_retrieve_action_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucm_retrieve_option_bt();
	mmi_ucm_bt_pre_enter_processing_screen(GRP_ID_UCM_BT_INCALL);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_swap_action
 * DESCRIPTION
 *  execute swap action if permit passes
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_swap_action_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	if (g_num_calls != 2)
	{
		return;
	}
	mmi_ucm_swap_option_bt();
	mmi_ucm_bt_pre_enter_processing_screen(GRP_ID_UCM_BT_INCALL);
}

MMI_BOOL mmi_ucm_is_ucm_sg_bt(MMI_ID check_sg_id)
{
    if ((GRP_ID_UCM_BT_INCALL == check_sg_id) ||
        (GRP_ID_UCM_BT_MT == check_sg_id) ||
        (GRP_ID_UCM_BT_MO == check_sg_id) ||
        (GRP_ID_UCM_BT_PRE_MO == check_sg_id) ||
        (GRP_ID_UCM_BT_CALL_END == check_sg_id))
    {
        return MMI_TRUE;
    }
    
    return MMI_FALSE;
}



/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_incall_option
 * DESCRIPTION
 *  Shows the incall option screen
 * PARAMETERS
 *  void
 * RETURNS*  void
 *****************************************************************************/
void mmi_ucm_entry_incall_option_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* mmi_ucm_incall_opt_proc_bt */
    /* create menu cui */
    g_ucm_p_bt->incall_opt_cui_id = cui_menu_create_and_run(
                            GRP_ID_UCM_BT_INCALL, 
                            CUI_MENU_SRC_TYPE_RESOURCE, 
                            CUI_MENU_TYPE_OPTION, 
                            MENU_ID_UCM_BT_INCALL_OPTION, 
                            MMI_FALSE, /* Use global resource */
                            NULL);
}



/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_set_sidekey
 * DESCRIPTION
 *  Handle side key for UCM call screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_set_sidekey_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/ 
    SetDefaultVolumeKeyHandlers();
    SetKeyHandler(SetKeyPadVolUp, KEY_VOL_UP, KEY_EVENT_UP);  /* O */
    SetKeyHandler(SetKeyPadVolMaxLongPress, KEY_VOL_UP, KEY_EVENT_LONG_PRESS);
    SetKeyHandler(MMI_dummy_function, KEY_VOL_UP, KEY_EVENT_REPEAT);
    SetKeyHandler(SetKeyPadVolDown, KEY_VOL_DOWN, KEY_EVENT_UP);  /* O */
    SetKeyHandler(SetKeyPadVolMinLongPress, KEY_VOL_DOWN, KEY_EVENT_LONG_PRESS);
    SetKeyHandler(MMI_dummy_function, KEY_VOL_UP, KEY_EVENT_REPEAT);
#ifdef __MMI_BTD_BOX_UI_STYLE__
    SetKeyHandler(SetKeyPadVolUp, KEY_UP_ARROW, KEY_LONG_PRESS);
    SetKeyHandler(SetKeyPadVolUp, KEY_UP_ARROW, KEY_REPEAT);
    SetKeyHandler(SetKeyPadVolDown, KEY_DOWN_ARROW, KEY_REPEAT);
    SetKeyHandler(SetKeyPadVolDown, KEY_DOWN_ARROW, KEY_LONG_PRESS);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/

}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_bt_deint
 * DESCRIPTION
 *  Releases all call components
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/

void mmi_ucm_bt_deint(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/ 
    mmi_ucm_stop_incoming_ringtone_bt();
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) != 0)
    {
        if (mdi_audio_get_audio_mode() == AUD_MODE_LOUDSPK)
        {
            srv_speech_disable_hand_free();
        }
        if (srv_speech_is_phone_mute() == MMI_TRUE)
        {
            srv_speech_unmute_phone();
        }
    }
    if (g_ucm_p_bt->after_callback != NULL)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,
        g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
        g_ucm_p_bt->after_callback_user_data.result = SRV_UCM_RESULT_UNSPECIFIED_ERROR;
        g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
        g_ucm_p_bt->after_callback = NULL;
    }
#ifdef __MMI_UCM_BT_CALL_RECORDER__
    if (mdi_audio_is_recording())
    {
        mmi_ucm_end_record_option_bt();
    }
#endif /* __MMI_UCM_BT_CALL_RECORDER__ */
    mmi_ucm_init_context_bt();
    mmi_ucm_delete_all_screen_bt();
    mmi_ucm_call_scenario_control();
#ifdef __MMI_TELEPHONY_SUPPORT__
    // Local incoming cal and BT in-calll, disconnect BT connection from SP side.
    if (srv_ucm_is_incoming_call())
    {
        mmi_ucm_play_incoming_tone();
    }
#endif /* __MMI_TELEPHONY_SUPPORT__ */
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_enter_incoming_call
 * DESCRIPTION
 *  Enter incoming call scrn
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_enter_incoming_call_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
	mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_INCOMING_EVENT);
#endif

	mmi_ucm_sg_create_bt(GRP_ID_ROOT, GRP_ID_UCM_BT_MT);
	
    if (mmi_frm_scrn_is_present(GRP_ID_UCM_BT_MT, SCR_ID_UCM_BT_INCOMING, MMI_FRM_NODE_ALL_FLAG))
    {
        mmi_frm_scrn_close(GRP_ID_UCM_BT_MT, SCR_ID_UCM_BT_INCOMING); /* ensure no two incoming call screens in the history */
    }
    
    mmi_frm_scrn_first_enter(
        GRP_ID_UCM_BT_MT, SCR_ID_UCM_BT_INCOMING, 
        (FuncPtr)mmi_ucm_entry_incoming_call_bt, 
        (void*)NULL);
}

static mmi_ucm_refresh_option_button_bt(void)
{
    show_softkey_background();
    redraw_left_softkey();
    redraw_right_softkey();
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_incoming_call
 * DESCRIPTION
 *  Shows the incoming call screen
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_entry_incoming_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8* guiBuffer = NULL;
    U16 notification_str_id = STR_ID_UCM_VOICE_INCOMING;
    U16 rsk_str = 0;
    U16 lsk_str = 0;
    MMI_BOOL is_play_now = MMI_FALSE;
	U16* num_ucs2 = NULL;
	S32 index[SRV_UCM_BT_MAX_CALL];

#if defined (__MMI_FTE_SUPPORT__) && !defined(__MMI_MAINLCD_320X240__)
	wgui_catcall_fte_iconbar_item_struct unlock_item;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_INCOMING_CALL_BT,
	g_num_calls, g_ucm_call_state[0].call_state, g_ucm_call_state[1].call_state);
    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_BT_INCOMING,
                    (FuncPtr)mmi_ucm_exit_incoming_call_bt,
                    (FuncPtr)mmi_ucm_entry_incoming_call_bt,
                    MMI_FRM_FULL_SCRN))
    {
        mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_BT_INCOMING, (mmi_proc_func)mmi_ucm_incoming_call_screen_delete_proc_bt);
        return;
    }

    guiBuffer = mmi_frm_scrn_get_gui_buf(scr_info->group_id, SCR_ID_UCM_BT_INCOMING);


    num_ucs2 = OslMalloc((SRV_UCM_BT_MAX_NUM_URI_LEN + 1)* ENCODING_LENGTH);
    memset(num_ucs2, 0, (SRV_UCM_BT_MAX_NUM_URI_LEN + 1) * ENCODING_LENGTH);

    mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, index);

    mmi_ucm_query_remote_name(index[0], num_ucs2);

    lsk_str = STR_ID_UCM_BT_ANSWER;
    rsk_str = STR_ID_UCM_BT_REJECT;
#ifdef __MMI_FTE_SUPPORT__
  #ifndef __MMI_MAINLCD_320X240__
	mmi_ucm_FTE_fill_unlock_item_bt(&unlock_item);
	wgui_catcall_fte_setup(0, 0, unlock_item, mmi_ucm_FTE_screen_touch_hdlr_bt);
	mmi_ucm_FTE_scrn_update_hdlr_by_lock_state_bt(mmi_ucm_get_auto_lock_state_bt());
  #endif
#endif

    ShowCategory17Screen(
            0,   /* title_id */
            lsk_str,                   /* left_softkey */
            0,                   /* left_softkey_icon */
            rsk_str,    /* right_softkey */
            0,                   /* right_softkey_icon */
            notification_str_id,                   /* NotificationStringId */ 
            (U8*)num_ucs2, /* NameOrNumber */
            NULL,                /* IP_Number */
            0,             /* line icon */
            IMG_ID_UCM_BT_INCOMING,     /*default_image_id */
            IMG_ID_UCM_BT_INCOMING,               /* resource_id */
            0,             /* resource_filename */
            WGUI_CATE_MOMT_RES_TYPE_IMAGE_ID,          /* resource_type */
            0,                   /* repeat_count, video/swflash only, repeat_count, 0 = infinite */
            0,        /* is_visaul_update, video/swflash only, update to LCM or not */
            0,      /* is_video_aud, video/swflash only, play video's audio */
            is_play_now,         /* is_play_aud_when_start */
            guiBuffer); 
    mmi_ucm_refresh_option_button_bt();
    SetLeftSoftkeyFunction(mmi_ucm_refresh_option_button_bt, KEY_EVENT_DOWN);
    SetLeftSoftkeyFunction(mmi_ucm_incoming_call_sendkey_bt, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_ucm_incoming_call_sendkey_bt, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_ucm_incoming_call_rsk_bt, KEY_EVENT_UP);
    SetKeyHandler(mmi_ucm_incoming_call_sendkey_bt, KEY_SEND, KEY_EVENT_DOWN);
    /* Let incoming call end key behavior will sync to general end key hdlr, but reject RSK and suppress keep in mmi_ucm_incoming_call_endkey */
    mmi_frm_set_key_handler(mmi_ucm_incoming_call_endkey_bt, KEY_END, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_UP, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_DOWN, KEY_EVENT_DOWN); 


#ifdef __MMI_BTD_BOX_UI_STYLE__
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_LONG_PRESS);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_REPEAT);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_REPEAT);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_LONG_PRESS);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/	
    mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_BT_INCOMING, (mmi_proc_func)mmi_ucm_incoming_call_screen_delete_proc_bt);
 
    if (!mmi_is_redrawing_bk_screens())
    {
        ClearKeyEvents();
        {
            srv_backlight_turn_on(SRV_BACKLIGHT_PERMANENT);
        }

        if (srv_charbat_is_low_battery())
        {
            ChgrPlayLowBatTone();
        }
    
    }
    OslMfree(num_ucs2);
#ifdef __BT_PBAP_CLIENT__
    if (g_ucm_call_state[index[0]].pbapc_is_query)
#endif // __BT_PBAP_CLIENT__
    {
        mmi_ucm_tab_highlight_bt();
    }   
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_enter_outgoing_call
 * DESCRIPTION
 *  Enter the call type selection screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_enter_outgoing_call_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
	mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_OUTGOING_EVENT);
#endif
	mmi_ucm_sg_create_bt(GRP_ID_ROOT, GRP_ID_UCM_BT_MO);

    if (mmi_frm_scrn_is_present(GRP_ID_UCM_BT_MO, SCR_ID_UCM_BT_OUTGOING, MMI_FRM_NODE_ALL_FLAG))
    {
        mmi_frm_scrn_close(GRP_ID_UCM_BT_MO, SCR_ID_UCM_BT_OUTGOING); /* ensure no two incoming call screens in the history */
    }
    
    mmi_frm_scrn_first_enter(
        GRP_ID_UCM_BT_MO, SCR_ID_UCM_BT_OUTGOING, 
        (FuncPtr)mmi_ucm_entry_outgoing_call_bt,
        (void*)NULL);
}

#ifdef __MMI_FTE_SUPPORT__



/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_unlock_hdlr
 * DESCRIPTION
 *  unlock call related screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_FTE_unlock_hdlr_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_UNLOCK_HDLR, mmi_ucm_get_auto_lock_state_bt());

    mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_UNLOCK_EVENT);

    /* Because the call screen does not change (lock=just redraw some region), so need updated and start timer */
    if (MMI_TRUE == mmi_ucm_FTE_is_lock_mechanism_applied_screens_bt())
    {
        if (MMI_UCM_BT_UNLOCK_STATE == mmi_ucm_get_auto_lock_state_bt())
        {
            wgui_catcall_fte_lock_screen(MMI_FALSE);
        }
        else if (MMI_UCM_BT_WTL_STATE == mmi_ucm_get_auto_lock_state_bt())
        {
            wgui_catcall_fte_lock_screen(MMI_FALSE);
            StartTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT, MMI_UCM_BT_FTE_AUTO_LOCK_TIMEOUT, mmi_ucm_FTE_auto_lock_timeout_hdlr_bt);        
        }
    }        
    else
    {
        /* unlock hdlr is impossible to called when not in lock screen, and lock screen only applied on MT/MO/INCALL */
        MMI_ASSERT(0);
    }
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_fill_unlock_item
 * DESCRIPTION
 *  fill lock item
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_FTE_fill_unlock_item_bt(wgui_catcall_fte_iconbar_item_struct *item)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    item->label = get_string(STR_ID_UCM_TOUCH_TO_UNLOCK);
    item->icon = NULL; 
    item->up = get_image(IMG_ID_UCM_LOCK_ICON_UP);            
    item->down = get_image(IMG_ID_UCM_LOCK_ICON_DOWN);
    item->disable = NULL;
    item->handler = mmi_ucm_FTE_unlock_hdlr_bt;

}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_auto_lock_timeout_hdlr
 * DESCRIPTION
 *  lock call related screen
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_FTE_auto_lock_timeout_hdlr_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_LOCK_TIME_OUT, mmi_ucm_get_auto_lock_state_bt());
	
    if (MMI_TRUE == mmi_ucm_FTE_is_lock_mechanism_applied_screens_bt())
    {
        mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_WTL_TIMEOUT_EVENT);
        /* Because the call screen does not change (lock=just redraw some region), so need updated and start timer */
        if (MMI_UCM_BT_LOCK_STATE == mmi_ucm_get_auto_lock_state_bt())
        {
            wgui_catcall_fte_lock_screen(MMI_TRUE);
        }
        else 
        {
           MMI_ASSERT(0);
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_screen_touch_hdlr
 * DESCRIPTION
 *  when the iconbar or SK button is pressend in call screen, this api will be called
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_FTE_screen_touch_hdlr_bt(MMI_BOOL is_touched)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_SCRN_TOUCH_HDLR, is_touched, mmi_ucm_get_auto_lock_state_bt());
    if (MMI_FALSE == mmi_ucm_FTE_is_lock_mechanism_applied_screens_bt())
    {   
        MMI_ASSERT(0);
    }
    
    if (is_touched)
    {
        StopTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT);
    }
    else
    {
        if (MMI_UCM_BT_WTL_STATE == mmi_ucm_get_auto_lock_state_bt())
        {
            StartTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT, MMI_UCM_BT_FTE_AUTO_LOCK_TIMEOUT, mmi_ucm_FTE_auto_lock_timeout_hdlr_bt);        
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_is_lock_mechanism_applied_screens
 * DESCRIPTION
 *  check if the current screen is applied lock mechanism.
 * PARAMETERS
 *  void
 * RETURNS
 *  return MMI_TRUE means the screen support lock mechanism
 *****************************************************************************/
MMI_BOOL mmi_ucm_FTE_is_lock_mechanism_applied_screens_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 current_scrnID = mmi_frm_scrn_get_active_id();
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if ((SCR_ID_UCM_BT_OUTGOING == current_scrnID) ||
        (SCR_ID_UCM_BT_INCOMING == current_scrnID) ||
        (SCR_ID_UCM_BT_IN_CALL == current_scrnID))
    {
        return MMI_TRUE;
    }
    return MMI_FALSE;      
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_FTE_scrn_update_hdlr_by_lock_state
 * DESCRIPTION
 *  to draw lock/unlock scrn and start autolock timer in call screen (MT/MO/INCALL) by given lock state
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_FTE_scrn_update_hdlr_by_lock_state_bt(mmi_ucm_bt_auto_lock_state_enum lock_state)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_SCRN_UPDATE_HDLR, lock_state);

    if (MMI_UCM_BT_LOCK_STATE == lock_state)
    {
        wgui_catcall_fte_lock_screen(MMI_TRUE);        
    }
    else if (MMI_UCM_BT_UNLOCK_STATE == lock_state)
    {
        wgui_catcall_fte_lock_screen(MMI_FALSE);
    }
    else if (MMI_UCM_BT_WTL_STATE == lock_state)
    {
        wgui_catcall_fte_lock_screen(MMI_FALSE);
        StartTimer(UCM_FTE_AUTO_LOCK_TIMER_ID_BT, MMI_UCM_BT_FTE_AUTO_LOCK_TIMEOUT, mmi_ucm_FTE_auto_lock_timeout_hdlr_bt);        
    }
}
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_outgoing_call
 * DESCRIPTION
 *  Shows the outgoing call screen
 *  This is invoked whenever the User requests for a outgoing call.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_entry_outgoing_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8* guiBuffer = NULL;
    U16 calling_str_id = STR_ID_UCM_BT_CALLING;
    U16 line_icon = 0;    
   	U16* num_ucs2 = NULL;
	S32 index[SRV_UCM_BT_MAX_CALL];
#if defined( __MMI_FTE_SUPPORT__ ) && !defined(__MMI_MAINLCD_320X240__)
	wgui_catcall_fte_iconbar_item_struct unlock_item;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_OUTGOING_CALL_BT,
	g_num_calls, g_ucm_call_state[0].call_state, g_ucm_call_state[1].call_state);

    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_BT_OUTGOING,
                    (FuncPtr)mmi_ucm_exit_outgoing_call_bt,
                    (FuncPtr)mmi_ucm_entry_outgoing_call_bt,
                    MMI_FRM_FULL_SCRN))
    {
        mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_BT_OUTGOING, (mmi_proc_func)mmi_ucm_outgoing_call_screen_delete_proc_bt);
        return;
    }
	mmi_frm_group_close(GRP_ID_UCM_BT_MT);
    if (!mmi_is_redrawing_bk_screens())
    {
        ClearKeyEvents();
        {
            srv_backlight_turn_on(SRV_BACKLIGHT_SHORT_TIME);
        }
    }

    guiBuffer = mmi_frm_scrn_get_gui_buf(scr_info->group_id, SCR_ID_UCM_BT_OUTGOING);
    num_ucs2 = OslMalloc((SRV_UCM_BT_MAX_NUM_URI_LEN + 1)* ENCODING_LENGTH);
    memset(num_ucs2, 0, (SRV_UCM_BT_MAX_NUM_URI_LEN + 1) * ENCODING_LENGTH);

	mmi_ucm_query_call_count_by_call_state_bt(
		SRV_UCM_BT_OUTGOING_STATE, index);

	mmi_ucm_query_remote_name(index[0], num_ucs2);

   /* image info */

#ifdef __MMI_FTE_SUPPORT__
  #ifndef __MMI_MAINLCD_320X240__
   mmi_ucm_FTE_fill_unlock_item_bt(&unlock_item);
   wgui_catcall_fte_setup(0, 0, unlock_item, mmi_ucm_FTE_screen_touch_hdlr_bt);
   mmi_ucm_FTE_scrn_update_hdlr_by_lock_state_bt(mmi_ucm_get_auto_lock_state_bt());
  #endif
#endif
 
    ShowCategory17Screen(
            0,   /* title_id */ 
            0,        /* left_softkey */
            0,                   /* left_softkey_icon */
            STR_GLOBAL_ABORT,    /* right_softkey */
            0,                   /* right_softkey_icon */
            calling_str_id,                   /* NotificationStringId */ 
            (U8*)num_ucs2, /* NameOrNumber */
            0,                /* IP_Number */
            line_icon,             /* line icon */
            IMG_ID_UCM_BT_OUTGOING,     /*default_image_id */
            IMG_ID_UCM_BT_OUTGOING,               /* resource_id */
            0,             /* resource_filename */
            WGUI_CATE_MOMT_RES_TYPE_IMAGE_ID,          /* resource_type */
            0,                   /* repeat_count, video/swflash only, repeat_count, 0 = infinite */
            0,        /* is_visaul_update, video/swflash only, update to LCM or not */
            MMI_FALSE,          /* is_video_aud, video/swflash only, play video's audio */
            MMI_FALSE,         /* is_play_aud_when_start */
            guiBuffer);

    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_UP, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_DOWN, KEY_EVENT_DOWN); 


    SetRightSoftkeyFunction(mmi_ucm_outgoing_call_endkey_bt, KEY_EVENT_UP);
    mmi_frm_set_key_handler(mmi_ucm_outgoing_call_endkey_bt, KEY_END, KEY_EVENT_DOWN);
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_UP, KEY_EVENT_DOWN);
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_DOWN, KEY_EVENT_DOWN); 

#ifdef __MMI_BTD_BOX_UI_STYLE__
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_LONG_PRESS);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_REPEAT);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_LONG_PRESS);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_REPEAT);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/

    mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_BT_OUTGOING, (mmi_proc_func)mmi_ucm_outgoing_call_screen_delete_proc_bt);

    OslMfree(num_ucs2);

#ifdef __BT_PBAP_CLIENT__
	if (g_ucm_call_state[index[0]].pbapc_is_query)
#endif // __BT_PBAP_CLIENT__
	{
		mmi_ucm_tab_highlight_bt();
	}
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_enter_incoming_call
 * DESCRIPTION
 *  Enter incoming call scrn
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_enter_in_call_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_FTE_SUPPORT__
    MMI_ID curr_act_sg_id = mmi_frm_group_get_active_id();
    if (curr_act_sg_id != GRP_ID_UCM_BT_INCALL)
    {
        mmi_ucm_auto_lock_fsm_hdlr_bt(MMI_UCM_BT_AL_CONNECT_EVENT);
    }
#endif

    mmi_ucm_bt_close_processing_scrn();
 
    mmi_ucm_sg_create_bt(GRP_ID_ROOT, GRP_ID_UCM_BT_INCALL);

    if (mmi_frm_scrn_is_present(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_IN_CALL, MMI_FRM_NODE_ALL_FLAG))
    {
        mmi_frm_scrn_close(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_IN_CALL);
    }
    
    mmi_frm_scrn_first_enter(
        GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_IN_CALL, 
        (FuncPtr)mmi_ucm_entry_in_call_bt, 
        (void*)NULL);
}

#if defined(__MMI_FTE_SUPPORT__) && defined(__MMI_TOUCH_SCREEN__)
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_intuitive_cmd_cb_bt
 * DESCRIPTION
 *  In FTE, it should support intuitive command. do nothing when user touch call in incall list
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_intuitive_cmd_cb_bt(mmi_tap_type_enum tap_type, S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    return;  
}
#endif /* __MMI_FTE_SUPPORT__ && __MMI_TOUCH_SCREEN__*/
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_in_call
 * DESCRIPTION
 *  Entry function of in call screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_entry_in_call_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables												  */
    /*----------------------------------------------------------------*/
    U8 *gui_buffer = NULL;
    U8* title = NULL;
    U16 rsk_str = 0; 
    U16 lsk_str = 0;
    S32 curr_hilite_tab = 0, i;
    S32 hilite_tab_item = 0;
    U16 *num_ucs2;
    S32 group_index[SRV_UCM_BT_MAX_CALL];
    S32 group_count;
#if defined(__MMI_FTE_SUPPORT__) && !defined(__MMI_MAINLCD_320X240__)
    wgui_catcall_fte_iconbar_item_struct unlock_item;
#endif

	#ifdef __MMI_UCM_BT_CALL_RECORDER__
	MYTIME *start_record_time_p = NULL;
	U16 call_record_str_id = 0;
	#endif /*__MMI_UCM_BT_CALL_RECORDER__*/
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/

    mmi_ucm_go_back_screen_check_bt();

    if (mmi_ucm_query_call_count_by_call_state_bt(
        SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) == 0)
    {
        return;
    }

    if (!mmi_frm_scrn_enter(
            scr_info->group_id,
            SCR_ID_UCM_BT_IN_CALL,
            (FuncPtr)mmi_ucm_exit_in_call_bt,
            (FuncPtr)mmi_ucm_entry_in_call_bt,
            MMI_FRM_FULL_SCRN))
    {
        mmi_frm_scrn_set_leave_proc(
            GRP_ID_UCM_BT_INCALL, 
            SCR_ID_UCM_BT_IN_CALL, 
            (mmi_proc_func)mmi_ucm_in_call_screen_delete_proc_bt);
        return;
    }

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_INCALL_BT, g_num_calls, g_ucm_p_bt->hilite_tab);

    mmi_ucm_stop_incoming_ringtone_bt();

    num_ucs2 = OslMalloc((SRV_UCM_BT_MAX_NUM_URI_LEN + 1)* ENCODING_LENGTH);

    if (g_ucm_p_bt->is_fp_swap)
    {
        g_ucm_p_bt->is_fp_swap = MMI_FALSE;
        if (mmi_ucm_query_group_count_bt(SRV_UCM_BT_ACTIVE_STATE, group_index) > 0)
        {
            g_ucm_p_bt->hilite_tab = group_index[0];
        }
    }

    group_count = mmi_ucm_query_group_count_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, group_index);

    curr_hilite_tab = g_ucm_p_bt->hilite_tab;

    mmi_ucm_query_remote_name(curr_hilite_tab, num_ucs2);

    gui_buffer = mmi_frm_scrn_get_gui_buf(scr_info->group_id, SCR_ID_UCM_BT_IN_CALL);

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_ENTRY_INCALL_BT_NUMBERS,
        0, g_ucm_call_state[0].call_state,
        g_ucm_call_state[0].num_uri[0], 
        g_ucm_call_state[0].num_uri[1],
        g_ucm_call_state[0].num_uri[2]);

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_ENTRY_INCALL_BT_NUMBERS,
            1, g_ucm_call_state[1].call_state,
            g_ucm_call_state[1].num_uri[0],
            g_ucm_call_state[1].num_uri[1],
            g_ucm_call_state[1].num_uri[2]);

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL,TRC_MMI_UCM_ENTRY_INCALL_BT_NUMBERS,
            2, g_ucm_call_state[2].call_state,
            g_ucm_call_state[2].num_uri[0],
            g_ucm_call_state[2].num_uri[1],
            g_ucm_call_state[2].num_uri[2]);

    memset(MMI_tab_bar_items, 0, sizeof(tab_bar_item_type)* SRV_UCM_BT_MAX_CALL);
    for (i = 0; i < group_count; i++)
    {
        if (g_ucm_call_state[group_index[i]].call_state == SRV_UCM_BT_ACTIVE_STATE)
        {
            MMI_tab_bar_items[i].icon = get_image(IMG_ID_UCM_CALL_STATE_ACTIVE);
        }
        else if (g_ucm_call_state[group_index[i]].call_state == SRV_UCM_BT_HOLD_STATE)
        {
            MMI_tab_bar_items[i].icon = get_image(IMG_ID_UCM_CALL_STATE_HOLD);            
        }
        else
        {
        }

        MMI_tab_bar_items[i].text = NULL;
        MMI_tab_bar_items[i].flags = 0; /* no blink */
        if (group_index[i] == curr_hilite_tab)
        {
            hilite_tab_item = i;
        }
    }

    for (i = 0; i < g_num_calls; i++)
    {
        U32 char_num = ((MAX_SUB_MENU_SIZE / ENCODING_LENGTH) < SRV_UCM_BT_MAX_NUM_URI_LEN)?
                (MAX_SUB_MENU_SIZE / ENCODING_LENGTH): SRV_UCM_BT_MAX_NUM_URI_LEN;
        subMenuDataPtrs[i] = subMenuData[i];

        mmi_ucs2ncpy(
            (CHAR*)subMenuDataPtrs[i],
            (CHAR*)num_ucs2,
            char_num );
    }

    title = (U8*)GetString(mmi_ucm_get_call_type_string_id_bt(g_ucm_call_state[curr_hilite_tab].call_state));

    lsk_str = STR_GLOBAL_OPTIONS;

#ifndef __MMI_BTD_BOX_UI_STYLE__	
    rsk_str = (mdi_audio_get_audio_mode() == AUD_MODE_LOUDSPK) ? (STR_ID_UCM_BT_HAND_HELD) : (STR_ID_UCM_BT_HAND_FREE);
#else /*__MMI_BTD_BOX_UI_STYLE__*/
	rsk_str = STR_ID_UCM_BT_END_CALL;
#endif /*__MMI_BTD_BOX_UI_STYLE__*/
	
#ifdef __MMI_FTE_SUPPORT__
#ifndef __MMI_MAINLCD_320X240__	
    mmi_ucm_FTE_fill_unlock_item_bt(&unlock_item);
    wgui_catcall_fte_setup(0, 0, unlock_item, mmi_ucm_FTE_screen_touch_hdlr_bt);
    mmi_ucm_FTE_scrn_update_hdlr_by_lock_state_bt(mmi_ucm_get_auto_lock_state_bt());
#endif /*__MMI_MAINLCD_320X240__*/
#endif
	/* Multiple tabs*/
	
	
#ifdef __MMI_UCM_BT_CALL_RECORDER__
if(mdi_audio_is_recording())
  {
	call_record_str_id = (U16)STR_ID_UCM_RECORDING;
	start_record_time_p = &g_ucm_bt_start_record_time;
  }
     ShowCategory403Screen(
		title,
		0,
		lsk_str,
		0,
		rsk_str,
		0,
		(S8)group_count,
		(S8)hilite_tab_item,
		MMI_tab_bar_items,
		//&call_info->start_time,
		&g_ucm_call_state[curr_hilite_tab].start_time,
		0,
		start_record_time_p,//time
		0,  //icon
		call_record_str_id, //string
		subMenuDataPtrs,
		0,//call_icon,
		1,
		(U16)g_ucm_p_bt->hilite_index,
		gui_buffer);
#else /*__MMI_UCM_BT_CALL_RECORDER__*/
	ShowCategory403Screen(
		title,
		0,
		lsk_str,
		0,
		rsk_str,
		0,
		(S8)group_count,
		(S8)hilite_tab_item,
		MMI_tab_bar_items,
		//&call_info->start_time,
		&g_ucm_call_state[curr_hilite_tab].start_time,
		0,
		subMenuDataPtrs,
		0,//call_icon,
		1,
		(U16)g_ucm_p_bt->hilite_index,
		gui_buffer);
#endif /*__MMI_UCM_BT_CALL_RECORDER__*/

    #ifdef __MMI_TOUCH_SCREEN__
    wgui_register_list_item_selected_callback_all(UI_dummy_function);
    SetCategory403TabSelectCallback(mmi_ucm_tab_jump_bt);
    #endif /* __MMI_TOUCH_SCREEN__ */
    if (group_count > 1)
    {
        /* in new framework key design, won't translate long press and repeat to several down, therefore need to register for long press and repeat here */
	#ifndef __MMI_BTD_BOX_UI_STYLE__
        /* in new framework key design, won't translate long press and repeat to several down, therefore need to register for long press and repeat here */
        SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_LEFT_ARROW, KEY_LONG_PRESS); 
        SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_RIGHT_ARROW, KEY_LONG_PRESS); 
        SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_LEFT_ARROW, KEY_REPEAT); 
        SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_RIGHT_ARROW, KEY_REPEAT); 
        SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_LEFT_ARROW, KEY_EVENT_DOWN);   /* move to previous tab */
        SetKeyHandler(mmi_ucm_tab_next_bt, KEY_RIGHT_ARROW, KEY_EVENT_DOWN);  /* move to next tab */
	#else /*__MMI_BTD_BOX_UI_STYLE__*/
		SetKeyHandler(mmi_ucm_tab_prev_bt, KEY_UP_ARROW, KEY_EVENT_DOWN);   /* move to previous tab */
		SetKeyHandler(mmi_ucm_tab_next_bt, KEY_DOWN_ARROW, KEY_EVENT_DOWN);  /* move to next tab */
    #endif /*__MMI_BTD_BOX_UI_STYLE__*/
    }
#if defined(__MMI_FTE_SUPPORT__) && defined(__MMI_TOUCH_SCREEN__)
    /* intuitive cmd */
    wgui_register_tap_callback(mmi_ucm_intuitive_cmd_cb_bt);
#endif /* defined(__MMI_FTE_SUPPORT__) && defined(__MMI_TOUCH_SCREEN__) */

    RegisterHighlightHandler(mmi_ucm_highlight_in_call_item_bt);

    SetLeftSoftkeyFunction(mmi_ucm_entry_incall_option_bt, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_ucm_pre_entry_dtmf_editor_bt, KEY_EVENT_UP);

#ifndef __MMI_BTD_BOX_UI_STYLE__	
    SetRightSoftkeyFunction(mmi_ucm_set_loud_speaker_bt, KEY_EVENT_UP);
#else /*__MMI_BTD_BOX_UI_STYLE__*/
    SetRightSoftkeyFunction(mmi_ucm_in_call_endkey_bt, KEY_EVENT_UP);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/

    mmi_frm_set_key_handler(mmi_ucm_in_call_endkey_bt, KEY_END, KEY_EVENT_DOWN);

    if (g_ucm_p_bt->disconnecting)
    {
        DisableLeftSoftkey(lsk_str, 0);
        DisableRightSoftkey(rsk_str, 0);
        SetKeyHandler(UI_dummy_function, KEY_END, KEY_EVENT_DOWN);
        SetKeyHandler(UI_dummy_function, KEY_SEND, KEY_EVENT_DOWN);
    }

    if( g_ucm_call_state[curr_hilite_tab].call_state == SRV_UCM_BT_ACTIVE_STATE)
    {
        SetKeyHandler(mmi_ucm_hold_action_bt, KEY_SEND, KEY_EVENT_DOWN);
    }
    else
    {
        SetKeyHandler(mmi_ucm_retrieve_action_bt, KEY_SEND, KEY_EVENT_DOWN);
    }
    if(g_num_calls > 1)
    {
        SetKeyHandler(mmi_ucm_in_call_sendkey_bt, KEY_SEND, KEY_EVENT_DOWN);
    }

    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_UP, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_DOWN, KEY_EVENT_DOWN); 

#ifdef __MMI_BTD_BOX_UI_STYLE__
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_LONG_PRESS);
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_REPEAT);
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_LONG_PRESS);
	SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_REPEAT);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/
    SetGroupKeyHandler(
            mmi_ucm_send_dtmf_by_key,
            (U16*) PresentAllDialerKeys,
            TOTAL_DIALER_KEYS,
            KEY_EVENT_DOWN);
    mmi_frm_set_dial_key_tone_type(MMI_DIALER_KEY_TONE_DTMF);
    OslMfree(num_ucs2);

    mmi_frm_scrn_set_leave_proc(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_IN_CALL, (mmi_proc_func) mmi_ucm_in_call_screen_delete_proc_bt); 
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_call_type_string_id
 * DESCRIPTION
 *  get call type string id by call type
 * PARAMETERS
 *  void
 * RETURNS
 *  String id
 *****************************************************************************/
U16 mmi_ucm_get_call_type_string_id_bt(srv_ucm_bt_call_state_enum call_state)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 str_id = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

  
	if (call_state == SRV_UCM_BT_ACTIVE_STATE)
	{
		str_id = STR_ID_UCM_BT_ACTIVE;
	}
	else if (call_state == SRV_UCM_BT_HOLD_STATE)
	{
		str_id = STR_ID_UCM_BT_PAIRED_HOLD;
	}
    return str_id;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_highlight_in_call_item
 * DESCRIPTION
 *  Highlight index in the active call screen.
 * PARAMETERS
 *  index       [IN]        Current highlight index
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_highlight_in_call_item_bt(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_ucm_p_bt->hilite_index = index; // g_ucm_p_bt->call_misc.hilite_tab;
    wgui_cat403_set_duration(&(g_ucm_call_state[index].start_time));
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_delete_all_screen
 * DESCRIPTION
 *  delete all UCM screens in histroy
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_delete_all_screen_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_DELETE_ALL_SCREEN_BT);

    mmi_frm_group_close(GRP_ID_UCM_BT_MT);
    mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
    mmi_frm_group_close(GRP_ID_UCM_BT_MO);
    mmi_frm_group_close(GRP_ID_UCM_BT_INCALL);
    mmi_frm_group_close(GRP_ID_UCM_BT_CALL_END);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_close_cui
 * DESCRIPTION
 *  close cui
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_close_cui_bt(mmi_id *cui_id)
{
	if (GRP_ID_INVALID != *cui_id)
	{
		cui_menu_close(*cui_id);
		*cui_id = GRP_ID_INVALID;
	}
}
#ifdef __MMI_BT_BQB_TEST__
static void mmi_ucm_for_bqb_test_mode_end(void)
{
    if (srv_bt_cm_get_bqb_test_flag())
    {
        srv_bt_dialer_release_all_active_calls(srv_hd, 2);
    }
}
static void mmi_ucm_for_bqb_test_mode_hold(void)
{
    if (srv_bt_cm_get_bqb_test_flag())
    {
        srv_bt_dialer_hold_all_active_calls(srv_hd, 2);
    }
}
#endif /* __MMI_BT_BQB_TEST__ */
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_incall_sg_proc
 * DESCRIPTION
 *  This function is to handle the sg result sent from fw for incall
 * PARAMETERS
 *  mmi_event_struct:     [IN] Event structure passed by callback manager
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_incall_sg_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(evt->evt_id)
    {
        /* Menu CUI related events */
        case EVT_ID_CUI_MENU_LIST_ENTRY:
        case EVT_ID_CUI_MENU_LIST_EXIT:  
        case EVT_ID_CUI_MENU_ITEM_HILITE:    
        case EVT_ID_CUI_MENU_ITEM_SELECT:    
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            mmi_ucm_incall_opt_proc_bt(evt);
        }
        break;

        
        default:
        break;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_incall_opt_proc
 * DESCRIPTION
 *  The proc function of incall option
 *
 * PARAMETERS
 *  evt                     [IN]: event
 *  
 * RETURNS
 *  MMI_RET_OK: handle this event successfully
 *  Others: fail to handle this event
 *****************************************************************************/
mmi_ret mmi_ucm_incall_opt_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt = (cui_menu_event_struct *)evt;
    mmi_ret ret = MMI_RET_OK;
	MMI_BOOL act_is_executed = MMI_TRUE;
	MMI_BOOL show_pro_scrn = MMI_FALSE;
 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (menu_evt->evt_id)
    {
        case EVT_ID_CUI_MENU_LIST_ENTRY:
        {
            switch(menu_evt->parent_menu_id)
            {   
                /* 0 , non-leaf */
				case MENU_ID_UCM_BT_INCALL_OPTION:
				{
					mmi_ucm_handle_incall_option_bt(menu_evt->sender_id);
					SetKeyHandler(mmi_ucm_in_call_end_key_bt, KEY_END, KEY_EVENT_DOWN);
				}
				break;
                default:
                break;
            }  
        }
        break;
        case EVT_ID_CUI_MENU_ITEM_SELECT:
        {
            
            switch(menu_evt->highlighted_menu_id)
            {
   				case MENU_ID_UCM_BT_INCALL_OPTION_HOLD:
				{
					mmi_ucm_hold_option_bt();
					show_pro_scrn = MMI_TRUE;
				}
				break;
   				case MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE:
				{
					mmi_ucm_retrieve_option_bt();
					show_pro_scrn = MMI_TRUE;
				}
				break;
   				case MENU_ID_UCM_BT_INCALL_OPTION_SWAP:
				{
					mmi_ucm_swap_option_bt();
					show_pro_scrn = MMI_TRUE;
				}
				break;
				case MENU_ID_UCM_BT_INCALL_OPTION_DTMF:
				{
					mmi_ucm_pre_entry_dtmf_editor_bt();
				}
				break;
   				case MENU_ID_UCM_BT_INCALL_OPTION_MUTE:
				{
					srv_speech_mute_phone();
				}
				break;
   				case MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE:
				{
					srv_speech_unmute_phone();
				}
				break;
                case MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE:
                {
                    mmi_ucm_end_option_bt();
                }
                break;
                case MENU_ID_UCM_BT_INCALL_OPTION_END_ALL:
                {
                    mmi_ucm_end_all_option_bt(); 
                }
                break;
                case MENU_ID_UCM_BT_INCALL_OPTION_SWITCH_AUDIO_PATH:
                {
                    srv_bt_dialer_switch_audio_path_bt();
                }
                break;
		#ifdef __MMI_UCM_BT_CALL_RECORDER__
   		case MENU_ID_UCM_BT_INCALL_OPTION_RECODE:
		{
			
		 mmi_ucm_start_record_option_bt();
		}
		break;
		case MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE:
		{
		   mmi_ucm_end_record_option_bt();
		}
		break;
              #endif /*__MMI_UCM_BT_CALL_RECORDER__*/
            #ifdef __MMI_BT_BQB_TEST__
                case MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD:
                {
                    mmi_ucm_for_bqb_test_mode_hold();
                }
                break;
                case MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END:
                {
                    mmi_ucm_for_bqb_test_mode_end();
                }
                break;
            #endif /* __MMI_BT_BQB_TEST__ */

                default:
				{
					act_is_executed = MMI_FALSE;	
				}
                break;
            }

            if (act_is_executed)
            {
                mmi_ucm_close_cui_bt(&g_ucm_p_bt->incall_opt_cui_id);
            }
			if (show_pro_scrn)
			{
				mmi_ucm_bt_pre_enter_processing_screen(GRP_ID_UCM_BT_INCALL);
			}

        }
        break;

        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            if (menu_evt->sender_id == g_ucm_p_bt->incall_opt_cui_id)
            {
                g_ucm_p_bt->incall_opt_cui_id = GRP_ID_INVALID;
            }
            else if (menu_evt->sender_id == g_ucm_p_bt->in_call_dialer_opt_cui_id)
            {
                g_ucm_p_bt->in_call_dialer_opt_cui_id = GRP_ID_INVALID;
            }
            cui_menu_close(menu_evt->sender_id);
            return ret;
        }

        default:
        break;
    }

    /* mean option menu items which is provided by other applications */
    wgui_inputs_options_menu_handler(evt, GRP_ID_UCM_BT_INCALL);

    return ret;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_sg_create
 * DESCRIPTION
 *  create SG based on given sg id
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_ID mmi_ucm_sg_create_bt(MMI_ID parent_id, MMI_ID group_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID enter_return_id = GRP_ID_INVALID;
    mmi_proc_func proc = NULL;
    mmi_group_enter_flag flag = MMI_FRM_NODE_SMART_CLOSE_FLAG;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (MMI_FALSE == mmi_frm_group_is_present(group_id))
    {
        switch (group_id)
        {
            case GRP_ID_UCM_BT_MO:
            {   
                flag = MMI_FRM_NODE_NONE_FLAG;
            }
            break;

            case GRP_ID_UCM_BT_MT:
            {    
                flag = MMI_FRM_NODE_NONE_FLAG;
            }
            break;

            case GRP_ID_UCM_BT_INCALL:
            {
                proc = mmi_ucm_incall_sg_proc_bt;
                flag = MMI_FRM_NODE_NONE_FLAG;
            }
            break;

            case GRP_ID_UCM_BT_CALL_END:
            {
				flag = MMI_FRM_NODE_SMART_CLOSE_FLAG;
            }
            break;

            default: 
            {
                //MMI_ASSERT(0); 
            } 
            break; 
        }

        enter_return_id = mmi_frm_group_create_ex(parent_id, group_id, proc, NULL, flag);
    }
    return enter_return_id;
}

static void mmi_ucm_swap_processing_timeout_hdlr(void)
{
    StopTimer(UCM_MO_PROCESSING_TIMER_BT);
    if (mmi_frm_scrn_is_present(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_PROCESSING, MMI_FRM_NODE_ALL_FLAG))
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_GET_LIST, (-1));
        g_ucm_p_bt->is_need_update = MMI_TRUE;
        srv_bt_dialer_list_current_calls(srv_hd);
    }
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_set_processing_parameter
 * DESCRIPTION
 *  Set processing screen parameter.
 * PARAMETERS
 *  titleStr            [IN]        Title string
 *  bodyStr             [IN]        Body string
 *  animationImg        [IN]        Animation image
 *  lskStr              [IN]        LSK display string
 *  lskFunc             [IN]        LSK function pointer
 *  rskStr              [IN]        RSK display string
 *  rskFunc             [IN]        RSK function pointer
 *  sendFunc            [IN]        SEND key function pointer
 *  endFunc             [IN]        END key function pointer
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_set_processing_parameter(
        U16 titleStr,
        U16 bodyStr,
        U16 animationImg,
        U16 lskStr,
        FuncPtr lskFunc,
        U16 rskStr,
        FuncPtr rskFunc,
        FuncPtr sendFunc,
        FuncPtr endFunc)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_ucm_p_bt->proc_scr.title_string = titleStr;
    g_ucm_p_bt->proc_scr.body_string = bodyStr;
    g_ucm_p_bt->proc_scr.body_string_pointer = NULL;
    g_ucm_p_bt->proc_scr.animation_image = animationImg;
    g_ucm_p_bt->proc_scr.lsk_string = lskStr;
    g_ucm_p_bt->proc_scr.lsk_funcPtr = lskFunc;
    g_ucm_p_bt->proc_scr.rsk_string = rskStr;
    g_ucm_p_bt->proc_scr.rsk_funcPtr = rskFunc;
    g_ucm_p_bt->proc_scr.send_funcPtr = sendFunc;
    g_ucm_p_bt->proc_scr.end_funcPtr = endFunc;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_pre_enter_processing_screen
 * DESCRIPTION
 *  Initial parameter and enter processing screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_pre_enter_processing_screen(MMI_ID SG_id)
{

    mmi_ucm_bt_set_processing_parameter(
        0,//mmi_ucm_get_title_string_by_action(NULL),
        STR_ID_UCM_BT_PROCESSING,
        mmi_get_event_based_image(MMI_EVENT_PROGRESS),
        0,
        0,
        0,
        0,
        0,
        UI_dummy_function);

    mmi_ucm_bt_enter_processing_screen(SG_id);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_processing_screen_internal
 * DESCRIPTION
 *  General entry function of processing screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_enter_processing_screen(MMI_ID SG_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID inserted_SG_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_PROCESSING_SCRN_BT, SG_id);
	

    if (GRP_ID_UCM_BT_INCALL == SG_id)
    {
        inserted_SG_id = SG_id;
    }
    else
    {
        if (mmi_frm_group_is_present(GRP_ID_UCM_BT_INCALL))
        {
            inserted_SG_id = GRP_ID_UCM_BT_INCALL;
        }
        else
        {
            inserted_SG_id = GRP_ID_INVALID;
        }
    }

    if (GRP_ID_INVALID != inserted_SG_id)
    {
        mmi_ucm_bt_enter_processing_screen_internal(inserted_SG_id);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_close_processing_scrn
 * DESCRIPTION
 *  close processing scrn
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_close_processing_scrn(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (mmi_frm_scrn_is_present(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_PROCESSING, MMI_FRM_NODE_ALL_FLAG))
	{
	    mmi_frm_scrn_close(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_PROCESSING);
	}
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_enter_incoming_call
 * DESCRIPTION
 *  Enter incoming call scrn
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_enter_processing_screen_internal(MMI_ID SG_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /*  it is a limitation in FW to handle anti-blinking + hardware blt screen, 
        therefore need to add dummy screen here to prevent screen flash 
        ex. hold and accept, the MT screen disable blt because of caller video */
    if (SCR_ID_UCM_BT_PROCESSING == mmi_frm_scrn_get_active_id())
    {
        mmi_frm_display_dummy_screen_ex(mmi_frm_group_get_active_id(), SCR_ID_UCM_BT_DUMMY);
    }

    mmi_ucm_bt_close_processing_scrn(); /* delete old processing screen if exists */
    
 
    mmi_frm_scrn_first_enter(
        SG_id, SCR_ID_UCM_BT_PROCESSING, 
        (FuncPtr)mmi_ucm_bt_entry_processing_screen_internal, 
        (void*)NULL);

}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_processing_screen_internal
 * DESCRIPTION
 *  General entry function of processing screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_entry_processing_screen_internal(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *body_string_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/


    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_BT_PROCESSING,
                    NULL,
                    (FuncPtr)mmi_ucm_bt_entry_processing_screen_internal,
                    MMI_FRM_FULL_SCRN))
    {
        return;
    }


    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_ENTRY_PROCESSING_SCREEN);
    
    if (g_ucm_p_bt->proc_scr.body_string_pointer != NULL)
    {
        body_string_p = g_ucm_p_bt->proc_scr.body_string_pointer;
    }
    else
    {
        body_string_p = (U8*) GetString(g_ucm_p_bt->proc_scr.body_string);
    }
    
    ShowCategory66Screen(
        g_ucm_p_bt->proc_scr.title_string,
        0,
        g_ucm_p_bt->proc_scr.lsk_string,
        0,
        g_ucm_p_bt->proc_scr.rsk_string,
        0,
        body_string_p,
        g_ucm_p_bt->proc_scr.animation_image,
        NULL);
    
    mmi_frm_set_key_handler(g_ucm_p_bt->proc_scr.end_funcPtr, KEY_END, KEY_EVENT_DOWN);
    mmi_frm_scrn_set_leave_proc(
        scr_info->group_id, 
        SCR_ID_UCM_BT_PROCESSING, 
        (mmi_proc_func) mmi_ucm_bt_processing_screen_delete_proc);
    StartTimer(UCM_MO_PROCESSING_TIMER_BT, 6000, mmi_ucm_swap_processing_timeout_hdlr);
    
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_processing_screen_delete_proc
 * DESCRIPTION
 *  This function is a leave proc for processing screen
 * PARAMETERS
 *  evt     [IN]    MMI event structure
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
mmi_ret mmi_ucm_bt_processing_screen_delete_proc(mmi_event_struct *evt)
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
        {
            if (NULL != g_ucm_p_bt->proc_scr.body_string_pointer)
            {
                OslMfree(g_ucm_p_bt->proc_scr.body_string_pointer);
                g_ucm_p_bt->proc_scr.body_string_pointer = NULL;
            }
            if (IsMyTimerExist(UCM_MO_PROCESSING_TIMER_BT))
            {
                StopTimer(UCM_MO_PROCESSING_TIMER_BT);
            }
        }
        break;   

    }

    return MMI_RET_OK;
}

void mmi_ucm_end_and_accpet_confirm_bt(MMI_ID parent_id)
{
    mmi_frm_scrn_first_enter(
        parent_id, SCR_ID_UCM_END_AND_ACCEPT_CONFIRM, 
        (FuncPtr)mmi_ucm_end_and_accpet_entry_confirm_bt, 
        (void*)NULL);
}

void mmi_ucm_end_and_accpet_entry_confirm_bt(mmi_scrn_essential_struct* scr_info)
{
    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_END_AND_ACCEPT_CONFIRM,
                    NULL,
                    (FuncPtr)mmi_ucm_end_and_accpet_entry_confirm_bt,
                    MMI_FRM_FG_ONLY_SCRN))
    {
    
	    mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_END_AND_ACCEPT_CONFIRM, NULL);
        return;
    }
    ShowCategory165Screen(
        STR_GLOBAL_YES,
        IMG_GLOBAL_YES,
        STR_GLOBAL_NO,
        IMG_GLOBAL_NO,
        (WCHAR*) GetString(STR_ID_UCM_BT_CALL_WILL_BE_ENDED),
        mmi_get_event_based_image(MMI_EVENT_QUERY),
        NULL);
	
    SetLeftSoftkeyFunction(mmi_ucm_end_and_accpet_confirm_yes_hdlr_bt, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
	SetCenterSoftkeyFunction(mmi_ucm_end_and_accpet_confirm_yes_hdlr_bt, KEY_EVENT_UP);
    mmi_frm_scrn_set_leave_proc(scr_info->group_id, SCR_ID_UCM_END_AND_ACCEPT_CONFIRM, NULL);
}

void mmi_ucm_end_and_accpet_confirm_yes_hdlr_bt(void)
{
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CONFIRM_YES, 0);
	if (!srv_ucm_is_incoming_call())
	{
		MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CONFIRM_YES, 1);
		if (SRV_UCM_RESULT_OK == srv_ucm_query_act_permit(SRV_UCM_END_ALL_ACT, NULL))
	    {
    	    srv_ucm_act_request(SRV_UCM_END_ALL_ACT, NULL, NULL, mmi_ucm_act_callback_bt);
			mmi_frm_scrn_close_active_id();
	    }
	}
	else
	{
		g_ucm_p_bt->is_need_accept = MMI_TRUE;
		if (g_num_calls == 1)
		{
			MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CONFIRM_YES, 2);
			mmi_ucm_end_option_bt();
		}
		else if (g_num_calls == 2)
		{
			MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CONFIRM_YES, 3);
			mmi_ucm_end_all_option_bt();
		}
		else if (g_num_calls == 0)
		{
			MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CONFIRM_YES, 4);
			mmi_ucm_end_btdialer_and_accept_option_bt();
		}
		mmi_frm_scrn_close_active_id();
	}
}
mmi_ret mmi_ucm_act_callback_bt(mmi_event_struct *event)
{
	srv_ucm_act_result_evt_struct *act_result = (srv_ucm_act_result_evt_struct *) event;
	
	if (EVT_ID_SRV_UCM_ACTION_RESULT == event->evt_id)
	{
		if (SRV_UCM_END_ALL_ACT == act_result->act_op)
		{
			mmi_ucm_answer_option_bt();
		}
	}
	else
	{
		MMI_ASSERT(0);
	}
	return MMI_RET_OK;
}
void mmi_ucm_enter_dialling_bt(void)
{
#ifdef __MMI_TELEPHONY_SUPPORT__
	if (mmi_frm_scrn_is_present(GRP_ID_UCM_MO_SELECT, SCR_ID_UCM_BT_DIALLING, MMI_FRM_NODE_ALL_FLAG))
	{    
		mmi_frm_scrn_close(GRP_ID_UCM_MO_SELECT, SCR_ID_UCM_BT_DIALLING);
	} 
#else
	mmi_frm_group_create_ex(GRP_ID_ROOT, 
		GRP_ID_UCM_MO_SELECT, 
		NULL, 
		NULL, 
		MMI_FRM_NODE_NONE_FLAG);
#endif /* __MMI_TELEPHONY_SUPPORT__ */
	mmi_frm_scrn_first_enter(
		GRP_ID_UCM_MO_SELECT, SCR_ID_UCM_BT_DIALLING, 
		(FuncPtr)mmi_ucm_entry_dialling_bt, 
		(void*)NULL);
}
void mmi_ucm_go_back_BT_call_screen_bt(void)
{
	if (!srv_ucm_is_any_call() && mmi_ucm_get_hide_state_bt())
	{
		if (mmi_ucm_query_call_count_by_call_state_bt(
			SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
		{
			mmi_ucm_set_hide_state_bt(MMI_FALSE);
			mmi_ucm_enter_incoming_call_bt();
		}
		else if (mmi_ucm_query_call_count_by_call_state_bt(
			SRV_UCM_BT_OUTGOING_STATE, NULL) > 0)
		{
			mmi_ucm_set_hide_state_bt(MMI_FALSE);
			mmi_ucm_enter_outgoing_call_bt();
		}
		else if (mmi_ucm_query_call_count_by_call_state_bt(
			SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0)
		{
			mmi_ucm_set_hide_state_bt(MMI_FALSE);
			mmi_ucm_enter_in_call_bt();
		}
	}
}

static void mmi_ucm_mo_processing_timeout_hdlr(void)
{
    StopTimer(UCM_MO_PROCESSING_TIMER_BT);
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_ALL, NULL) == 0
        &&  mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
    {
        mmi_popup_display_ext(STR_GLOBAL_CURRENTLY_NOT_AVAILABLE, MMI_EVENT_FAILURE, NULL);
        mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
        if (g_ucm_p_bt->after_callback != NULL)
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,
            g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
            g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
            g_ucm_p_bt->after_callback = NULL;
        }
    }
}

void mmi_ucm_entry_dialling_bt(mmi_scrn_essential_struct* scr_info)
{
    if (!mmi_frm_scrn_enter(
                scr_info->group_id,
                SCR_ID_UCM_BT_DIALLING,
                NULL,
                (FuncPtr)mmi_ucm_entry_dialling_bt,
                MMI_FRM_FULL_SCRN))
    {
        mmi_frm_scrn_set_leave_proc(
                GRP_ID_UCM_MO_SELECT, 
                SCR_ID_UCM_BT_DIALLING, 
                NULL);
        return;
    }

    ShowCategory66Screen(NULL,NULL,NULL,NULL,NULL,NULL,
        (PU8)GetString(STR_ID_UCM_BT_PROCESSING),
        mmi_get_event_based_image(MMI_EVENT_PROGRESS),
        NULL);
    StartTimer(UCM_MO_PROCESSING_TIMER_BT, MMI_UCM_MO_PROCESSING_TIMEOUT_BT, mmi_ucm_mo_processing_timeout_hdlr);
    SetKeyHandler(UI_dummy_function, KEY_END, KEY_EVENT_DOWN);
}
void mmi_ucm_handle_incall_option_bt(mmi_id owner_gid)
{
	S32 hold_call_count = mmi_ucm_query_call_count_by_call_state_bt(
							SRV_UCM_BT_HOLD_STATE, 
							NULL);
	S32 active_call_count = mmi_ucm_query_call_count_by_call_state_bt(
							SRV_UCM_BT_ACTIVE_STATE, 
							NULL);
	MMI_BOOL is_end_single = MMI_FALSE;
	MMI_BOOL is_end_all = MMI_FALSE;
	MMI_BOOL is_DTMF = MMI_FALSE;
	kal_prompt_trace(MOD_MMI, "[UCMBT] set item, hold:%d, active:%d",hold_call_count,active_call_count);
	if (hold_call_count == 0 && active_call_count > 0) // acitve call only
	{
		is_end_single = MMI_TRUE;
		is_DTMF = MMI_TRUE;
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_HOLD, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_HOLD, MMI_TRUE);
	}

#ifdef __MMI_UCM_BT_CALL_RECORDER__
	if (hold_call_count > 0 || active_call_count > 0) // Both acitve and hold call
	{
          if(mdi_audio_is_recording())
          {/*Unrecord*/
	    cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_RECODE, MMI_TRUE);
	    cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE, MMI_FALSE);  
          }
 	 else
	 {/*Record*/
	   cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_RECODE, MMI_FALSE);
	   cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE, MMI_TRUE);
	 }
	}
       else
	{
           cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_RECODE, MMI_TRUE);
	   cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE, MMI_TRUE);  
	}
#endif /*__MMI_UCM_BT_CALL_RECORDER__*/
	if (hold_call_count > 0 && active_call_count == 0) // hold call only
	{
		is_end_single = MMI_TRUE;
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE, MMI_TRUE);
	}

	if (hold_call_count > 0 && active_call_count > 0) // swap
	{
		is_end_all = MMI_TRUE;
		is_end_single = MMI_TRUE;
		is_DTMF = MMI_TRUE;
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_SWAP, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_SWAP, MMI_TRUE);
	}

    if (hold_call_count > 0 || active_call_count > 0)
    {
		if(srv_speech_is_phone_mute())
		{/*Unmute*/
			cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_MUTE, MMI_TRUE);
			cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE, MMI_FALSE);
		}
		else
		{/*Mute*/
        	cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_MUTE, MMI_FALSE);
			cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE, MMI_TRUE);
		}
    }
    else
    {
        cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_MUTE, MMI_TRUE);
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE, MMI_TRUE);  
    }

	if (is_end_single)
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE, MMI_TRUE);
	}

	if (is_end_all)
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_END_ALL, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_END_ALL, MMI_TRUE);
	}
	if (is_DTMF)
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_DTMF, MMI_FALSE);
	}
	else
	{
		cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_DTMF, MMI_TRUE);
	}
    if (srv_bt_cm_get_bqb_test_flag())
    {
        cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD, MMI_FALSE);
        cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END, MMI_FALSE);
    }
    else
    {
        cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD, MMI_TRUE);
        cui_menu_set_item_hidden(owner_gid, MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END, MMI_TRUE);
    }
}
void mmi_ucm_set_loud_speaker_bt(void)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	U16 str = 0;
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	if (mdi_audio_get_audio_mode() == AUD_MODE_LOUDSPK) /* O */
	{
		str = STR_ID_UCM_BT_HAND_FREE;
		srv_speech_disable_hand_free();
	}
	else
	{
		str = STR_ID_UCM_BT_HAND_HELD;
		srv_speech_enable_hand_free();
	}

	if (mmi_ucm_query_call_count_by_call_state_bt(
		SRV_UCM_BT_OUTGOING_STATE, 
		NULL) > 0)
	{
		ChangeLeftSoftkey(str, 0);
	}
	else
	{
		ChangeRightSoftkey(str, 0);
	}
}
void mmi_ucm_send_update_clog_evt_bt(void)
{
	mmi_event_struct evt;

	if (g_ucm_p_bt->is_need_send_evt
		&& g_num_calls == 0)
	{
		MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SEND_CLOG_EVT, 0);
		g_ucm_p_bt->is_need_send_evt = MMI_FALSE;
	    MMI_FRM_INIT_EVENT(&evt, EVT_ID_UCM_BT_CALL_END);
	    MMI_FRM_CB_EMIT_EVENT(&evt);
	}
}
static void mmi_ucm_delete_dtmf_editor_screen_bt(void)
{
    mmi_frm_scrn_close(GRP_ID_UCM_BT_INCALL, SCR_ID_UCM_BT_DTMF_EDITOR);
}

mmi_ret mmi_ucm_dtmf_editor_key_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_frm_key_evt_struct *key_evt = (mmi_frm_key_evt_struct *)(evt);
    U8 key_code = key_evt->key_code;
    U8 key_type = key_evt->key_type;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (key_evt->evt_id)
    {
        case EVT_ID_PRE_KEY:
        {
            if (wgui_inputs_dialer_is_dialer_keys(key_code) == MMI_TRUE)
            {
                if (key_type == KEY_EVENT_DOWN)
                {
                     mmi_ucm_send_dtmf_action_bt(key_code);
                }
            }
            break;
        }
    }
    return MMI_RET_OK;
}

static void mmi_ucm_entry_dtmf_editor_bt(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *guiBuffer = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!mmi_frm_scrn_enter(
                    scr_info->group_id,
                    SCR_ID_UCM_BT_DTMF_EDITOR,
                    (FuncPtr)NULL,
                    (FuncPtr)mmi_ucm_entry_dtmf_editor_bt,
                    MMI_FRM_FULL_SCRN))
    {
        return;
    }

    mmi_frm_scrn_set_key_proc(GRP_ID_ROOT, SCR_ID_UCM_BT_DTMF_EDITOR, mmi_ucm_dtmf_editor_key_proc_bt);
    
    guiBuffer = mmi_frm_scrn_get_gui_buf(scr_info->group_id, SCR_ID_UCM_BT_DTMF_EDITOR);

#if defined(__MMI_TOUCH_SCREEN__) && defined (__MMI_TOUCH_DIAL_SCREEN_WITH_FUNCTION__)
    SetDialingKeypadCallHandler(NULL);
    SetDialingKeypadPhonebookHandler(NULL);
#endif /* __MMI_TOUCH_SCREEN__ */

    ShowCategory16Screen(
        0,
        0,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        (U8*)g_ucm_p_bt->disp_dtmf,
        (MMI_UCM_DTMF_LEN + 1),
        guiBuffer);

    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_UP, KEY_EVENT_DOWN);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_VOL_DOWN, KEY_EVENT_DOWN); 
#ifdef __MMI_BTD_BOX_UI_STYLE__
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_LONG_PRESS);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_UP_ARROW, KEY_REPEAT);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_REPEAT);
    SetKeyHandler(mmi_ucm_set_sidekey_bt, KEY_DOWN_ARROW, KEY_LONG_PRESS);
#endif /*__MMI_BTD_BOX_UI_STYLE__*/

    SetCategory16RightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP); 
    mmi_frm_set_dial_key_tone_type(MMI_DIALER_KEY_TONE_DTMF);
    mmi_frm_set_key_handler(mmi_ucm_end_option_bt, KEY_END, KEY_EVENT_DOWN);
}

static void mmi_ucm_enter_dtmf_editor_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_id dialer_parent_gid = mmi_frm_group_get_active_id();
    dialer_parent_gid = mmi_frm_group_get_top_parent_group_id(dialer_parent_gid);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (GRP_ID_UCM_BT_INCALL == dialer_parent_gid)
    {
        mmi_frm_scrn_first_enter(
            dialer_parent_gid, SCR_ID_UCM_BT_DTMF_EDITOR, 
            (FuncPtr)mmi_ucm_entry_dtmf_editor_bt, 
            (void*)NULL);

    }
    else
    {
       /* because dtmf editor scrn is triggered by user touch key or select items, curr_active group must call scrn */
        MMI_ASSERT(0);  
    }
}

static void mmi_ucm_pre_entry_dtmf_editor_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Avoid re-entry of DTMF editor */
    mmi_ucm_delete_dtmf_editor_screen_bt();    
    mmi_ucm_close_cui_bt(&g_ucm_p_bt->incall_opt_cui_id);
    memset(g_ucm_p_bt->disp_dtmf, 0, sizeof(g_ucm_p_bt->disp_dtmf));  
    mmi_ucm_enter_dtmf_editor_bt();
}

mmi_ret mmi_ucm_bk_call_key_proc_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_frm_key_evt_struct *key_evt = (mmi_frm_key_evt_struct *)evt;
    U8 key_code = key_evt->key_code;
    U8 key_type = key_evt->key_type;
    MMI_ID curr_act_sg_id = mmi_frm_group_get_active_id();
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ASSERT(key_evt->evt_id == EVT_ID_PRE_KEY_EVT_ROUTING);

	if (MMI_FALSE == mmi_ucm_is_ucm_sg_bt(curr_act_sg_id))
	{
		if (mmi_ucm_query_call_count_by_call_state_bt(
			SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0)
		{
			if (key_code == KEY_END && key_type == KEY_EVENT_DOWN)
			{
				if (srv_ucm_is_incoming_call() || g_ucm_p_bt->is_hide_screen)
				{
					return MMI_RET_OK;
				}
				mmi_ucm_in_call_end_key_bt();
				return MMI_RET_STOP_KEY_HANDLE;
			}
		}
	}
	return MMI_RET_OK;
}
#endif /* __MMI_BT_DIALER_SUPPORT__ */
