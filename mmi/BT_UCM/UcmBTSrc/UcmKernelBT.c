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
 *  UcmKernelBT.c
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
 *============================================================================
 ****************************************************************************/
#include "MMI_features.h"

#ifdef __MMI_BT_DIALER_SUPPORT__
#include "mdi_audio.h"
#include "ProfilesSrvGprot.h"
#include "BootupSrvGprot.h"  /* srv_bootup_is_booting */
#include "app_usedetails.h" /* applib_ss_string_parsing */

#include "mmi_rp_app_ucmbt_def.h"
#ifdef __MMI_TELEPHONY_SUPPORT__
#include "mmi_rp_app_ucm_def.h"
#endif /* __MMI_TELEPHONY_SUPPORT__ */
#include "Resource_audio.h"
#include "string.h"
#include "kal_general_types.h"
#include "MMIDataType.h"
#include "GlobalResDef.h"
#include "MMI_common_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_trace.h"
#include "custom_srv_prof_defs.h"
#include "mmi_frm_timer_gprot.h"
#include "mmi_frm_mem_gprot.h"
#include "GpioSrvGprot.h"
#include "kal_public_api.h"
#include "Unicodexdcl.h"
#include "sim_common_enums.h"
#include "ps_public_enum.h"
#include "fs_type.h"
#include "fs_func.h"
#include "fs_errcode.h"
#include "mmi_frm_nvram_gprot.h"
#include "custom_mmi_default_value.h"
#include "nvram_common_defs.h"
#include "GlobalConstants.h"
#include "CustDataRes.h"
#include "SimCtrlSrvGprot.h"

#include "BtcmSrvGprot.h"
#include "BTDialerSrvGprot.h"


#include "UcmProtBT.h"
#include "UcmGProtBT.h"

#include "UcmSrvGprot.h"
#include "BthScoPathSrvGProt.h"
#include "UcmCoreProt.h"
#include "DateTimeGprot.h" // for mmi_ucm_on_time_change_hdlr_bt
#ifdef __MMI_UCM_BT_CALL_RECORDER__
#include "USBsrvGprot.h"
#endif /* __MMI_UCM_BT_CALL_RECORDER__ */

int srv_hd;
mmi_ucm_call_state_cntx_struct g_ucm_call_state[SRV_UCM_BT_MAX_CALL];
mmi_ucm_call_info_cntx_struct g_ucm_call_state_temp[SRV_UCM_BT_MAX_CALL];
U8 g_num_calls;
U8 g_num_cur_calls;

#ifdef __MMI_UCM_BT_CALL_RECORDER__
MYTIME g_ucm_bt_start_record_time;//Maintain time duration of the record call
#endif
extern void mmi_ucm_call_scenario_control(void);
static S32 mmi_ucm_get_free_call_index(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 idx;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (idx = 0; idx < SRV_UCM_BT_MAX_CALL; idx++)
    {
        if (g_ucm_call_state[idx].call_id == 0)
        {
            return idx;
        }
    }
    return (-1);
}

static void mmi_ucm_error_cnf_hdlr_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_prompt_trace(MOD_MMI, "[UCMBT] error cnf hdlr");
    mmi_popup_display_ext(STR_GLOBAL_ERROR, MMI_EVENT_FAILURE, NULL);
    mmi_ucm_stop_incoming_ringtone_bt();
    if (g_ucm_p_bt->after_callback != NULL)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,
        g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
        g_ucm_p_bt->after_callback_user_data.result = SRV_UCM_RESULT_UNSPECIFIED_ERROR;
        g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
        g_ucm_p_bt->after_callback = NULL;
    }
    mmi_ucm_delete_all_screen_bt();
    mmi_ucm_clean_all_bt();
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_bt_dialer_register_hf_event
 * DESCRIPTION
 *  To handle events send from BT dialler
 * PARAMETERS
 *  srv_bt_dialer_notify_event_struct
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_bt_dialer_register_hf_event(int srv_hd, srv_bt_dialer_notify_event_struct notify)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    static int count = 0;
    S32 num_len;
    mmi_ucm_bt_action_enum result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!srv_bt_cm_is_profile_connected(SRV_BT_CM_HSP_CONNECTION))
    {
        return;
    }

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_HDLR, notify.event_id);

    switch(notify.event_id)
    {
        case SRV_BT_DIALER_EVT_ID_AT_CALL_ID:
        {
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_VGS_IND:
        {
            // just for TC/HF/RSV/BV-03-I
            if (srv_bt_cm_get_bqb_test_flag())
            {
                SetDefaultVolumeKeyHandlers();
                EntryScrSetKeyPadVolumeLevel();
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_INDICATOR_EVENT:
        {
            // when bt dialer connect, it will send this evt, but no call related operation, no need to handle it.
            if (g_num_calls == 0
                && ((notify.result.event.indicator == SRV_BT_DIALER_CIEV_CALL_INDICATION
                && notify.result.event.value == SRV_BT_DIALER_CALL_NOT_ACTIVE)
                || (notify.result.event.indicator == SRV_BT_DIALER_CIEV_CALL_SETUP_INDICATION
                && notify.result.event.value == SRV_BT_DIALER_CALL_SETUP_COMPLETE)))
            {
                // Callsetup == 1, but CLCC no call list, then receive calsetup == 0
                // should close related screen group.
                if(mmi_frm_group_is_present(GRP_ID_UCM_BT_MO))
                {
                    mmi_frm_group_close(GRP_ID_UCM_BT_MO);
                }
                if(mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
                {
                    mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
                }
                if (g_ucm_p_bt->after_callback != NULL)
                {
                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,
                    g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
                    g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
                    g_ucm_p_bt->after_callback = NULL;
                }
                return;
            }
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_IND_INDICATOR,
                notify.result.event.indicator, notify.result.event.value);
            if (notify.result.event.indicator == SRV_BT_DIALER_CIEV_CALL_SETUP_INDICATION)
            {
                if (notify.result.event.value == SRV_BT_DIALER_CALL_INCOMING_CALL)
                {
                    if (IsMyTimerExist(UCM_MO_PROCESSING_TIMER_BT))
                    {
                        StopTimer(UCM_MO_PROCESSING_TIMER_BT);
                    }
                    // auto reject
                    if (srv_ucm_is_incoming_call() || srv_ucm_is_outgoing_call())
                    {
                        g_ucm_p_bt->is_hide_screen = MMI_TRUE;
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SET_HIDE_SCRN, 0);
                        return;
                    }
                    else
                    {
                        g_ucm_p_bt->is_hide_screen = MMI_FALSE;
                    }
                    if (g_num_calls == 0)
                    {
                        if (!mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
                        {
                            mmi_frm_group_create_ex(GRP_ID_ROOT, GRP_ID_UCM_MO_SELECT, NULL, NULL, MMI_FRM_NODE_NONE_FLAG);
                        }
                        g_ucm_p_bt->is_setup = MMI_TRUE;
                        srv_bt_dialer_list_current_calls(srv_hd);
                        return;
                    }
                }
                else if (notify.result.event.value == SRV_BT_DIALER_CALL_OUTGOING_CALL_INITIATED)
                {
                    if (IsMyTimerExist(UCM_MO_PROCESSING_TIMER_BT))
                    {
                        StopTimer(UCM_MO_PROCESSING_TIMER_BT);
                    }
                    // auto reject
                    if (srv_ucm_is_any_call())
                    {
                        g_ucm_p_bt->is_hide_screen = MMI_TRUE;
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SET_HIDE_SCRN, 1);
                        return;
                    }
                    else
                    {
                        g_ucm_p_bt->is_hide_screen = MMI_FALSE;
                        g_ucm_p_bt->is_setup = MMI_TRUE;
                        if (!mmi_frm_group_is_present(GRP_ID_UCM_MO_SELECT))
                        {
                            mmi_frm_group_create_ex(GRP_ID_ROOT, GRP_ID_UCM_MO_SELECT, NULL, NULL, MMI_FRM_NODE_NONE_FLAG);
                        }
                    }
                }
                else if (notify.result.event.value == SRV_BT_DIALER_CALL_REMOTE_ALERT)
                {
                    // do nothing
                    if (g_ucm_p_bt->is_setup)
                    {
                        return;
                    }
                    g_ucm_p_bt->is_setup = MMI_TRUE;
                }
            }
        }
        case SRV_BT_DIALER_EVT_ID_AT_CALL_WAIT_NOTIFY:
        case SRV_BT_DIALER_EVT_ID_AT_CALL_HOLD:
        {
            if (notify.event_id == SRV_BT_DIALER_EVT_ID_AT_CALL_HOLD)
            {
                if (g_ucm_p_bt->is_end_all_action && notify.result.held_ind.held == SRV_BT_DIALER_NO_CALL_HELD)
                {
                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_GET_LIST, notify.event_id);
                    srv_bt_dialer_list_current_calls(srv_hd);

                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_END_ALL, 1);
                    srv_bt_dialer_hangup_current_call(srv_hd);
                    return;
                }
            }
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_GET_LIST, notify.event_id);
            srv_bt_dialer_list_current_calls(srv_hd);
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_HANGUP_ACTIVE_CALLS_RSP:
        {
            if (notify.result.error_code.error != SRV_BT_DIALER_ATCME_SUCCESS)
            {
                mmi_ucm_error_cnf_hdlr_bt();
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_ATA_CMD_RSP:
        {
            if (notify.result.error_code.error == SRV_BT_DIALER_ATCME_SUCCESS)
            {
                if (mmi_ucm_get_call_count_bt() == 1)
                {
                    // Initialized by FP
                    srv_bt_dialer_set_incoming_call_ans_status(MMI_TRUE);
                }
                mmi_ucm_stop_incoming_ringtone_bt();
            }
            else
            {
                mmi_ucm_error_cnf_hdlr_bt();
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_HOLD_ACTION_RSP:
        {
            if (notify.result.error_code.error != SRV_BT_DIALER_ATCME_SUCCESS)
            {
                mmi_ucm_error_cnf_hdlr_bt();
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_IN_BAND_RING_TONE:
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_IND_RING_TONE, notify.result.inBandRing.enabled);
            // enabled == FALSE, should play default incoming tone.
            if (!notify.result.inBandRing.enabled)
            {
                g_ucm_p_bt->is_ring = MMI_TRUE;
                if (!g_ucm_p_bt->ucm_ringtone 
                    && mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE,NULL) > 0)
                {
                    if (srv_ucm_query_group_count(
                        SRV_UCM_CALL_STATE_CONNECTED,
                        SRV_UCM_VOICE_CALL_TYPE_ALL,
                        MMI_FALSE,
                        NULL) > 0)
                    {
                        mmi_ucm_play_incoming_ringtone_bt(MMI_TRUE);
                    }
                    else
                    {
                        mmi_ucm_play_incoming_ringtone_bt(MMI_FALSE);
                    }
                }
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_DIAL_CMD_RSP:
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_IND_CMD_RSP, notify.result.error_code.error);
            if(notify.result.error_code.error != SRV_BT_DIALER_ATCME_SUCCESS)
            {
                mmi_ucm_error_cnf_hdlr_bt();
            }
            else
            {
                if (mmi_ucm_get_call_count_bt() == 0)
                {
                    // Initialized by FP
                    srv_bt_dialer_set_incoming_call_ans_status(MMI_TRUE);
                }
            }
        }
        break;
        case SRV_BT_DIALER_EVT_ID_AT_LIST_CURRENT_CALLS:
        {
            if (SRV_BT_DIALER_ATCME_SUCCESS != notify.result.currentCalls.error)
            {
                mmi_ucm_error_cnf_hdlr_bt();
                break;
            }

            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_IND_LIST_CALLS,
                count, notify.result.currentCalls.index,
                notify.result.currentCalls.number[0], 
                notify.result.currentCalls.number[1],
                notify.result.currentCalls.number[2], 
                notify.result.currentCalls.number[3]);

            if (notify.result.currentCalls.index == 0)
            {
                g_num_cur_calls = count;
                count = 0;
                result = mmi_ucm_sync_call_list(g_ucm_call_state, g_ucm_call_state_temp);
                // GSM is still exist, don't show any screens. (FP local active -> SP incoming -> SP answer)
                if (result == MMI_UCM_BT_ACTION_UPDATE && srv_ucm_is_any_call())
                {
                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SET_HIDE_SCRN, 2);
                    g_ucm_p_bt->is_hide_screen = MMI_TRUE;
                    mmi_ucm_delete_all_screen_bt();
                    return;
                }
                // 1. GSM is still exist, don't show any screens. (FP local active -> SP incoming -> SP answer)
                // 2. disconnecting, don't update.
                if (g_ucm_p_bt->is_hide_screen)
                {
                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_HIDE_SCRN);
                    return;
                }
                switch(result)
                {
                    case MMI_UCM_BT_ACTION_ADD_MO:
                    {
                        mmi_ucm_call_scenario_control();
                        mmi_ucm_enter_outgoing_call_bt();
                    }
                    break;
                    case MMI_UCM_BT_ACTION_ADD_MT:
                    {
                        mmi_ucm_call_scenario_control();
                        mmi_ucm_enter_incoming_call_bt();
                        mmi_ucm_play_incoming_ringtone_bt(MMI_FALSE);
                    }
                    break;
                    case MMI_UCM_BT_ACTION_DELETE:
                    {
                        mmi_ucm_release_ind_bt();
                    }
                    break;
                    case MMI_UCM_BT_ACTION_UPDATE:
                    {
                        mmi_ucm_call_scenario_control();
                        mmi_ucm_enter_in_call_bt();
                    }
                    break;
                    default:
                        break;
                }
            }
            else if (notify.result.currentCalls.index != 255 && count < SRV_UCM_BT_MAX_CALL)
            {
                g_ucm_call_state_temp[count].call_id = notify.result.currentCalls.index;
                g_ucm_call_state_temp[count].call_state = 
                mmi_ucm_call_state_type_btsrv_to_app_bt(notify.result.currentCalls.state);
                num_len = (strlen((CHAR*)notify.result.currentCalls.number) >= SRV_UCM_BT_MAX_NUM_URI_LEN)?
                    SRV_UCM_BT_MAX_NUM_URI_LEN: 
                    (strlen((CHAR*)notify.result.currentCalls.number)+1);
                memcpy(g_ucm_call_state_temp[count].num_uri,
                    notify.result.currentCalls.number,
                    num_len);
                if (num_len == SRV_UCM_BT_MAX_NUM_URI_LEN)
                {
                    g_ucm_call_state_temp[count].num_uri[SRV_UCM_BT_MAX_NUM_URI_LEN] = '\0';
                }
                MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_EVT_IND_LIST_CALLS_ADD,
                    notify.result.currentCalls.index-1, g_ucm_call_state_temp[count].call_state,
                    g_ucm_call_state_temp[count].num_uri[0],
                    g_ucm_call_state_temp[count].num_uri[1],
                    g_ucm_call_state_temp[count].num_uri[2]);
                g_ucm_call_state_temp[count].dir = notify.result.currentCalls.dir;
                g_ucm_call_state_temp[count].mode = notify.result.currentCalls.mode;
                g_ucm_call_state_temp[count].multiParty= notify.result.currentCalls.multiParty;
                count++;
                }
        }
        break;
    }
}

void mmi_ucm_call_scenario_control(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SNRIO_CTRL);

    /* Incoming call scenario */
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
    {
        if (!mmi_frm_is_scenario_started(MMI_SCENARIO_ID_UCM_INCOMING_CALL))
        {
            mmi_frm_start_scenario(MMI_SCENARIO_ID_UCM_INCOMING_CALL);
        }
    }
    else
    {
    	if (!srv_ucm_is_incoming_call()) // MAUI_03435769
        {
            mmi_frm_end_scenario(MMI_SCENARIO_ID_UCM_INCOMING_CALL);
        }
    }

    /* Outgoing call scenario */
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_OUTGOING_STATE, NULL) > 0)
    {
        if (!mmi_frm_is_scenario_started(MMI_SCENARIO_ID_UCM_OUTGOING_CALL))
        {
            mmi_frm_start_scenario(MMI_SCENARIO_ID_UCM_OUTGOING_CALL);
        }
    }
    else
    {
        mmi_frm_end_scenario(MMI_SCENARIO_ID_UCM_OUTGOING_CALL);
    }

    /* In call scenario */
    if ((mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_OUTGOING_STATE, NULL) == 0) &&
        (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) == 0) &&
        (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0))
    {
        if (!mmi_frm_is_scenario_started(MMI_SCENARIO_ID_IN_CALL))
        {
            mmi_frm_start_scenario(MMI_SCENARIO_ID_IN_CALL);
        }
    }
    else
    {
        mmi_frm_end_scenario(MMI_SCENARIO_ID_IN_CALL);
    }
}

mmi_ucm_bt_action_enum mmi_ucm_sync_call_list(mmi_ucm_call_state_cntx_struct* call_state_cntx,
                                                      mmi_ucm_call_info_cntx_struct* call_info)
{
    S32 num_len;
    S32 i, j;
    S32 call_index = 0;
    MMI_BOOL is_find;
    mmi_ucm_bt_action_enum result = MMI_UCM_BT_ACTION_NONE;

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_CALL_LIST, g_num_cur_calls,g_num_calls);
    memset(&g_ucm_p_bt->release_call_info, 0, sizeof(mmi_ucm_call_state_cntx_struct));
    if (g_num_cur_calls == g_num_calls) // update
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE);

        // no call exist, don't update.
        if (g_num_cur_calls == 0)
        {
            return MMI_UCM_BT_ACTION_NONE;
        }

        for (i = 0; i < SRV_UCM_BT_MAX_CALL; i++)
        {
            for (j = 0; j < g_num_cur_calls; j++)
            {
                if (call_state_cntx[i].call_id == call_info[j].call_id)
                {
                    call_state_cntx[i].dir = call_info[j].dir;
                    call_state_cntx[i].mode = call_info[j].mode;
                    call_state_cntx[i].multiParty = call_info[j].multiParty;
                    if (call_state_cntx[i].call_state != call_info[j].call_state)
                    {
                        // call connect, record the start time
                        if ((call_state_cntx[i].call_state & (srv_ucm_bt_call_state_enum)(SRV_UCM_BT_OUTGOING_STATE | SRV_UCM_BT_INCOMING_STATE))
                            && (call_info[j].call_state & SRV_UCM_BT_CALL_STATE_CONNECTED))
                        {
                            DTGetRTCTime(&(call_state_cntx[i].start_time));
                            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_TIME, i);
                            // active call should be highlight.
                            g_ucm_p_bt->hilite_tab = i;
                        }
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_STATE,
                                   i, call_state_cntx[i].call_state, j, call_info[j].call_state);
                        call_state_cntx[i].call_state = call_info[j].call_state;
                        result = MMI_UCM_BT_ACTION_UPDATE;
                    }
                    // call number is changed.
                    if (strcmp((CHAR*)call_state_cntx[i].num_uri, (CHAR*)call_info[j].num_uri) != 0)
                    {
                        num_len = (strlen((CHAR*)call_info[j].num_uri) >= SRV_UCM_BT_MAX_NUM_URI_LEN) ? 
                                    SRV_UCM_BT_MAX_NUM_URI_LEN: 
                                    (strlen((CHAR*)call_info[j].num_uri)+1);
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_OLD,
                                    i, call_state_cntx[i].num_uri[0], 
                                    call_state_cntx[i].num_uri[1],
                                    call_state_cntx[i].num_uri[2]);
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_NEW,
                                    j, call_info[j].num_uri[0], 
                                    call_info[j].num_uri[1],
                                    call_info[j].num_uri[2], num_len);
                        memcpy(call_state_cntx[i].num_uri, call_info[j].num_uri, num_len);
                        DTGetRTCTime(&(call_state_cntx[i].start_time));
                    #ifdef __BT_PBAP_CLIENT__
                        call_state_cntx[i].pbapc_is_query = MMI_FALSE;
                    #endif /* __BT_PBAP_CLIENT__ */
                        result = MMI_UCM_BT_ACTION_UPDATE;
                    }
                }
            }
        }
        if (g_ucm_p_bt->is_need_update) // hold fail
        {
                g_ucm_p_bt->is_need_update = MMI_FALSE;
                result = MMI_UCM_BT_ACTION_UPDATE;
        }
        if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
        {
            result = MMI_UCM_BT_ACTION_ADD_MT;
        }
        else if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_OUTGOING_STATE, NULL) > 0)
        {
            result = MMI_UCM_BT_ACTION_ADD_MO;
        }
    }
    else if (g_num_cur_calls < g_num_calls) // decrease
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_DECREASE);
        for (i = 0; i < SRV_UCM_BT_MAX_CALL; i++)
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_DECREASE_SINGLE,
                     i, call_state_cntx[i].call_state, 
                     call_state_cntx[i].num_uri[0],
                     call_state_cntx[i].num_uri[1],
                     call_state_cntx[i].num_uri[2]);
            if (g_num_cur_calls == 0)
            {
                if (call_state_cntx[i].call_id != 0)
                {
                    is_find = MMI_TRUE;
                    call_index = i;
                    break;
                }
                else
                {
                    continue;
                }
            }
            for(j = 0; j < g_num_cur_calls; j++)
            {
                if (call_state_cntx[i].call_id == 0)
                {
                    break;
                }
                if (call_state_cntx[i].call_id == call_info[j].call_id)
                {
                    if (call_state_cntx[i].call_state != call_info[j].call_state)
                    {
                        if (call_state_cntx[i].call_state & (srv_ucm_bt_call_state_enum)(SRV_UCM_BT_INCOMING_STATE|SRV_UCM_BT_OUTGOING_STATE))
                        {
                            DTGetRTCTime(&(call_state_cntx[i].start_time));
                            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_TIME, i);
                        }
                        call_state_cntx[i].call_state = call_info[j].call_state;
                    }
                    // call number is changed.
                    if (strcmp((CHAR*)call_state_cntx[i].num_uri, (CHAR*)call_info[j].num_uri) != 0)
                    {
                        num_len = (strlen((CHAR*)call_info[j].num_uri) >= SRV_UCM_BT_MAX_NUM_URI_LEN) ? 
                                    SRV_UCM_BT_MAX_NUM_URI_LEN: (strlen((CHAR*)call_info[j].num_uri)+1);
                        memcpy(call_state_cntx[i].num_uri, call_info[j].num_uri, num_len);
                        DTGetRTCTime(&(call_state_cntx[i].start_time));
                        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_TIME, i);
                        call_state_cntx[i].call_state = call_info[j].call_state;
                    #ifdef __BT_PBAP_CLIENT__
                        call_state_cntx[i].pbapc_is_query = MMI_FALSE;
                    #endif /* __BT_PBAP_CLIENT__ */
                    }
                    break;
                }
            }
            if (j == g_num_cur_calls)
            {
                kal_prompt_trace(MOD_MMI, "[UCMBT] sync find");
                is_find = MMI_TRUE;
                call_index = i;
            }
        }
        if (is_find)
        {
            memcpy(&g_ucm_p_bt->release_call_info, &call_state_cntx[call_index], sizeof(mmi_ucm_call_state_cntx_struct));
        #ifdef __BT_PBAP_CLIENT__
            mmi_ucm_destory_pbap_handle(&call_state_cntx[call_index].pbapc_handle);
        #endif /* __BT_PBAP_CLIENT__ */
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_DECREASE_DEL,
                  call_index, call_state_cntx[call_index].call_state,
                  call_state_cntx[call_index].num_uri[0],
                  call_state_cntx[call_index].num_uri[1],
                  call_state_cntx[call_index].num_uri[2]);
            memset(&call_state_cntx[call_index], 0, sizeof(mmi_ucm_call_state_cntx_struct));
            result = MMI_UCM_BT_ACTION_DELETE;
        }
    }
    else // increase (g_num_cur_calls > g_num_calls)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_INCREASE);
        for (i = 0; i < g_num_cur_calls; i++)
        {
            for (j = 0; j < SRV_UCM_BT_MAX_CALL; j++)
            {
                if (call_state_cntx[j].call_id == call_info[i].call_id)
                {
                    break;
                }
            }
            if (j == SRV_UCM_BT_MAX_CALL)
            {
                call_index = mmi_ucm_get_free_call_index();
                if (call_index == -1)
                {
                    return MMI_UCM_BT_ACTION_NONE;
                }
                call_state_cntx[call_index].call_id = call_info[i].call_id;
                call_state_cntx[call_index].call_state = call_info[i].call_state;
                call_state_cntx[call_index].dir = call_info[i].dir;
                call_state_cntx[call_index].mode = call_info[i].mode;
                call_state_cntx[call_index].multiParty = call_info[i].multiParty;
                num_len = (strlen((CHAR*)call_info[i].num_uri) >= SRV_UCM_BT_MAX_NUM_URI_LEN) ? 
                                    SRV_UCM_BT_MAX_NUM_URI_LEN: 
                                    (strlen((CHAR*)call_info[i].num_uri)+1);
                memcpy(call_state_cntx[call_index].num_uri, call_info[i].num_uri, num_len);
                if (call_info[i].call_state & SRV_UCM_BT_CALL_STATE_CONNECTED)
                {
                    DTGetRTCTime(&(call_state_cntx[call_index].start_time));
                    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_UPDATE_TIME, call_index);
                    result = MMI_UCM_BT_ACTION_UPDATE;
                }
                else if (call_info[i].call_state & SRV_UCM_BT_OUTGOING_STATE)
                {
                    result = MMI_UCM_BT_ACTION_ADD_MO;
                }
                else if (call_info[i].call_state & SRV_UCM_BT_INCOMING_STATE)
                {
                    result = MMI_UCM_BT_ACTION_ADD_MT;
                }
                MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_INCREASE_CALL_INFO,
                          i , call_info[i].call_state, call_info[i].num_uri[0],
                          call_info[i].num_uri[1], call_info[i].num_uri[2]);
                MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_INCREASE_CALL_STATE,
                          i , call_state_cntx[i].call_state, call_state_cntx[i].num_uri[0],
                          call_state_cntx[i].num_uri[1], call_state_cntx[i].num_uri[2]);
            }
        }
    }
    if (g_num_calls != 0 && g_num_cur_calls == 0)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SEND_ALL_CALL_END, g_num_calls, g_num_cur_calls);
        // Reset the initial state
        g_ucm_p_bt->is_setup = MMI_FALSE;
        srv_bt_dialer_set_incoming_call_ans_status(MMI_FALSE);
    }
    g_num_calls = g_num_cur_calls;
    g_num_cur_calls = 0;
    memset(call_info, 0, SRV_UCM_BT_MAX_CALL*sizeof(mmi_ucm_call_info_cntx_struct));
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SYNC_RESULT,result);
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_dial_option
 * DESCRIPTION
 *  Check if dial action can be executed or not.
 * PARAMETERS
 *  exec_act_flag          [IN]       execute this action if permit result is SRV_UCM_RESULT_OK    
 * RETURNS
 *  SRV_UCM_RESULT_OK means dial action can be executed
 *****************************************************************************/
MMI_BOOL mmi_ucm_dial_option_bt(CHAR *num_uri)
{    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code	                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_DIAL_OPTION);
	if (srv_ucm_is_any_call())
    {
    	mmi_ucm_entry_error_message_bt();
    	return MMI_FALSE;
    }
	if((num_uri == NULL )|| (strlen(num_uri) == 0) || (num_uri[0] == '*') || (num_uri[0] == '#') )
    {
    	mmi_ucm_entry_error_message_bt();
    	return MMI_FALSE;
    }
	num_uri[strlen(num_uri)]='\0';
	strcpy((CHAR*)g_ucm_p_bt->num_uri,(CHAR*)num_uri);
	if (srv_bt_dialer_send_dial_req(srv_hd, num_uri) == SRV_BT_DIALER_FAILURE)
    {
    	mmi_ucm_entry_error_message_bt();
    	return MMI_FALSE;
    }
	return MMI_TRUE;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_answer_option_bt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * 
 *****************************************************************************/
int mmi_ucm_answer_option_bt()

{    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result;
    S32 con_call_count;
    /*----------------------------------------------------------------*/
    /* Code	                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SEND_ATA_REQ);
    con_call_count = mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL);
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
    {
        if (con_call_count == 0)
        {
            result = srv_bt_dialer_send_ata_req(srv_hd);
        }
        else if (con_call_count == 1)
        {
        /** Places all active calls (if any exist) on hold and accepts the other
                *  (held or waiting) call. If "call" is specified, places all active calls
                *  on hold except the specified call.
                */
            result = srv_bt_dialer_hold_all_active_calls(srv_hd, (S8)(-1));
        }
        else if (con_call_count > 1)
        {
        /** Releases all active calls (if any exist) and accepts the other
                *  (held or waiting) call. If "call" is specified, will release the
                *  specific call.
                */
            result = srv_bt_dialer_release_all_active_calls(srv_hd, (S8)(-1));
        }
    }
    return result;
}
void mmi_ucm_end_btdialer_and_accept_option_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables	                                              */
    /*----------------------------------------------------------------*/
	srv_ucm_single_call_act_req_struct check_act_req;
	srv_ucm_index_info_struct index_list[SRV_UCM_MAX_CALL];
	srv_ucm_call_info_struct* call_info;

 	if (0 == g_num_calls && g_ucm_p_bt->is_need_accept)
    {
    	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_ACT_END_AND_ACCEPT,0);
    	g_ucm_p_bt->is_need_accept = MMI_FALSE;
    	call_info = OslMalloc(sizeof(srv_ucm_call_info_struct));
    	if (srv_ucm_query_call_count(SRV_UCM_INCOMING_STATE, SRV_UCM_CALL_TYPE_ALL, index_list) != 1)
        {
        	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_ACT_END_AND_ACCEPT, 1);
        	OslMfree(call_info);
        	return;
        }
    
    	if (srv_ucm_query_call_data(index_list[0], call_info))
        {
        	memcpy(&check_act_req.action_uid, &call_info->uid_info, sizeof(srv_ucm_id_info_struct));
        	if (SRV_UCM_RESULT_OK == srv_ucm_query_act_permit(SRV_UCM_ACCEPT_ACT, &check_act_req))
            {
            	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_ACT_END_AND_ACCEPT, 2);
            	srv_ucm_act_request(SRV_UCM_ACCEPT_ACT, &check_act_req, NULL, NULL);
            }
        }
    	else
        {
        	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_ACT_END_AND_ACCEPT, 3);
        }
    	OslMfree(call_info);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_active_option_bt
 * DESCRIPTION
 *  Check if dial action can be executed or not.
 * PARAMETERS
 *  exec_act_flag          [IN]       execute this action if permit result is SRV_UCM_RESULT_OK    
 * RETURNS
 *  SRV_UCM_RESULT_OK means dial action can be executed
 *****************************************************************************/
int mmi_ucm_end_active_option_bt()

{    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	int result;

    /*----------------------------------------------------------------*/
    /* Code	                                      */
    /*----------------------------------------------------------------*/

	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_RELEASE_ALL_ACTIVE_CALLS);
	result = srv_bt_dialer_release_all_active_calls(srv_hd, (S8)(-1));
	return result;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_all_option_bt
 * DESCRIPTION
 *  
 * PARAMETERS
 * 
 * RETURNS
 *  
 *****************************************************************************/
int mmi_ucm_end_all_option_bt( )
{ 
    /*----------------------------------------------------------------*/
    /* Local Variables	                                              */
    /*----------------------------------------------------------------*/
    int result = SRV_BT_DIALER_FAILURE;
    /*----------------------------------------------------------------*/
    /* Code                                       */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_END_ALL, 0);
    result = srv_bt_dialer_release_all_held_calls(srv_hd);
    g_ucm_p_bt->is_end_all_action = MMI_TRUE;
    if (SRV_BT_DIALER_SUCCESS == result)
    {
        g_ucm_p_bt->disconnecting = MMI_TRUE;
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_option_bt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
int mmi_ucm_end_option_bt()
{    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    int result = SRV_BT_DIALER_FAILURE;

    /*----------------------------------------------------------------*/
    /* Code	                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_END_OPTION_BT,
    g_ucm_p_bt->hilite_tab, g_ucm_call_state[g_ucm_p_bt->hilite_tab].call_state);
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) == 1)
    {
        result = srv_bt_dialer_hangup_current_call(srv_hd);
    }
    else if(g_ucm_call_state[g_ucm_p_bt->hilite_tab].call_state == SRV_UCM_BT_HOLD_STATE)
    {
        result = srv_bt_dialer_release_all_held_calls(srv_hd);
    }
    else
    {
        result = srv_bt_dialer_release_all_active_calls(srv_hd, (S8)(-1));
    }
    if (SRV_BT_DIALER_SUCCESS == result)
    {
        g_ucm_p_bt->disconnecting = MMI_TRUE;
    }
    return result;
}

void mmi_ucm_in_call_endkey_bt(void)
{
#ifndef __MMI_BTD_BOX_UI_STYLE__
    U16 rsk = (mdi_audio_get_audio_mode() == AUD_MODE_LOUDSPK) ? (STR_ID_UCM_BT_HAND_HELD) : (STR_ID_UCM_BT_HAND_FREE);
#endif
    DisableLeftSoftkey(STR_GLOBAL_OPTIONS, 0);
#ifdef __MMI_BTD_BOX_UI_STYLE__
    DisableRightSoftkey(STR_ID_UCM_BT_END_CALL, 0);
#else
    DisableRightSoftkey(rsk, 0);
#endif /* __MMI_BTD_BOX_UI_STYLE__  */
    mmi_frm_set_key_handler(UI_dummy_function, KEY_END, KEY_EVENT_DOWN);
    mmi_ucm_end_option_bt();
}
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_option_bt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  
 *****************************************************************************/
int mmi_ucm_end_mt_option_bt()

{    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	int result;

    /*----------------------------------------------------------------*/
    /* Code	                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_END_MT_OPTION_BT);

	result = srv_bt_dialer_release_all_held_calls(srv_hd);

    return result;

}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_hold_option_bt
 * DESCRIPTION
 *  Check if hold single option can be displayed in the in-call option.
 * PARAMETERS
 *  exec_act_flag          [IN]       execute this action if permit result is SRV_UCM_RESULT_OK
 * RETURNS
 *  SRV_UCM_RESULT_OK means answer option should show;
 *  else the menu should be hidden. 
 *****************************************************************************/
int mmi_ucm_hold_option_bt( )
{
    /*----------------------------------------------------------------*/
    /* Local Variables	                                             */
    /*----------------------------------------------------------------*/
	int result;
    
    /*----------------------------------------------------------------*/
    /* Code	                                     */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_HOLD_OPTION_BT);

    result = srv_bt_dialer_hold_all_active_calls(srv_hd,(S8)(-1));
	return result;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_retrieve_single_option
 * DESCRIPTION
 *  Check if retrieve single option can be displayed in the in-call option.
 * PARAMETERS
 *  exec_act_flag          [IN]       execute this action if permit result is SRV_UCM_RESULT_OK   
 * RETURNS
 *  SRV_UCM_RESULT_OK means answer option should show;
 *  else the menu should be hidden.
 *****************************************************************************/
int mmi_ucm_retrieve_option_bt()
{
    /*----------------------------------------------------------------*/
    /* Local Variables	                                             */
    /*----------------------------------------------------------------*/
	int result;
    
    /*----------------------------------------------------------------*/
    /* Code	                                     */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_RETRIEVE_OPTION_BT);

   result = srv_bt_dialer_send_call_retrieve_req(srv_hd);
   return result;
}




/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_swap_option_bt
 * DESCRIPTION
 * 
 * PARAMETERS
 *  
 * RETURNS
 *  
 * 
 *****************************************************************************/
int mmi_ucm_swap_option_bt( )
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	int result;
    
    /*----------------------------------------------------------------*/
    /* Code	                                     */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SWAP_OPTION_BT);
	g_ucm_p_bt->is_fp_swap = MMI_TRUE;
	result = srv_bt_dialer_hold_all_active_calls(srv_hd,(S8)(-1));
	return result;
}

static void mmi_ucm_play_ringtone_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_play_req_struct play_req;
    /*----------------------------------------------------------------*/
    /* Code                                         */
    /*----------------------------------------------------------------*/
    // just for BQB TP/ICA/BV-05-I
    if (srv_bt_cm_get_bqb_test_flag() && srv_bt_dialer_get_bqb_bsir_enable() == 1)
    {
        if (srv_btsco_is_sco_open())
        {
            mdi_audio_bt_hfp_turn_off();
        }
    }

    srv_prof_play_req_struct_init(&play_req, SRV_PROF_TONE_INCOMING_CALL);

    srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_RING_VOL_LEVEL,&play_req.volume);
    play_req.aud_path = MDI_DEVICE_LOUDSPEAKER;
    srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_RING_TYPE, &play_req.play_style);
    srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_MT_CALL_TONE, &play_req.audio_id);
    play_req.callback = NULL;
    play_req.audio_type = SRV_PROF_AUDIO_STRING;
    srv_prof_play_tone_with_full_struct(&play_req);
}
static void mmi_ucm_play_tone_after_vibration_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                  */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    StopTimer(UCM_TONE_AFTER_VIBRATION_BT);
    srv_vibrator_off(); /* O */
    mmi_ucm_play_ringtone_bt();
}

void mmi_ucm_play_incoming_ringtone_bt(MMI_BOOL is_wait_call)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_alert_type_enum alert_type = SRV_PROF_ALERT_TYPE_INVALID;
    /*----------------------------------------------------------------*/
    /* Code                                         */
    /*----------------------------------------------------------------*/
    // if ringtone is playing or not receive RING_IND, don't allow to play.
    if (g_ucm_p_bt->ucm_ringtone || !g_ucm_p_bt->is_ring)
    {
        return;
    }
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_RING_TONE, is_wait_call);
    g_ucm_p_bt->ucm_ringtone = MMI_TRUE;
    g_ucm_p_bt->is_ring = MMI_FALSE;
    if (is_wait_call)
    {
        mmi_ucm_play_waitingtone_bt();
    }
    else
    {
        //g_ucm_p_bt->ucm_ringtone = MMI_FALSE;
        srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_ALERT_TYPE, &alert_type);
        switch(alert_type)
        {
            case SRV_PROF_ALERT_TYPE_RING:
            {
                mmi_ucm_play_ringtone_bt();
            }
            break;
            case SRV_PROF_ALERT_TYPE_VIB_ONLY:
            {
                srv_vibrator_on();
            }
            break;
            case SRV_PROF_ALERT_TYPE_VIB_AND_RING:
            {
                srv_vibrator_on();
                mmi_ucm_play_ringtone_bt();
            }
            break;
            case SRV_PROF_ALERT_TYPE_VIB_THEN_RING:
            {
                srv_vibrator_on();
                StartTimer(UCM_TONE_AFTER_VIBRATION_BT, MMI_UCM_VIB_THEN_RING_DURATION, mmi_ucm_play_tone_after_vibration_bt);
            }
            break;
            case SRV_PROF_ALERT_TYPE_SILENT:
            {
            }
            break;
            default:                
            break;
        }
    }
}

void mmi_ucm_play_waitingtone_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_ring_type_enum ring_type = SRV_PROF_RING_TYPE_ONCE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_RING_TYPE, &ring_type);

    srv_prof_play_tone_with_id(
            SRV_PROF_TONE_WAITING_CALL,
            TONE_CALL_WAITING,
            ring_type,
            NULL);
}


void mmi_ucm_stop_incoming_ringtone_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_prof_alert_type_enum alert_type = SRV_PROF_ALERT_TYPE_INVALID;
    /*----------------------------------------------------------------*/
    /* Code                                         */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_STOP_RING_TONE);

    if (!g_ucm_p_bt->ucm_ringtone)
    {
        return;
    }
    g_ucm_p_bt->ucm_ringtone = MMI_FALSE;

    srv_prof_get_current_profile_value(SRV_PROF_SETTINGS_ALERT_TYPE, &alert_type);

    switch(alert_type)
    {
        case SRV_PROF_ALERT_TYPE_RING:
        {
            srv_prof_stop_tone(SRV_PROF_TONE_INCOMING_CALL);
        }
        break;
        case SRV_PROF_ALERT_TYPE_VIB_ONLY:
        {
            srv_vibrator_off();
        }
        break;
        case SRV_PROF_ALERT_TYPE_VIB_AND_RING:
        {
            srv_vibrator_off();
            srv_prof_stop_tone(SRV_PROF_TONE_INCOMING_CALL);
        }
        break;
        case SRV_PROF_ALERT_TYPE_VIB_THEN_RING:
        {
            srv_vibrator_off();
            StopTimer(UCM_TONE_AFTER_VIBRATION_BT);
            srv_prof_stop_tone(SRV_PROF_TONE_INCOMING_CALL); 
        }
        break;
        case SRV_PROF_ALERT_TYPE_SILENT:
        {
        }
        break;
        default:                
        break;
    }

    // just for BQB TP/ICA/BV-05-I
    if (srv_bt_cm_get_bqb_test_flag() && srv_bt_dialer_get_bqb_bsir_enable() == 1)
    {
        if (srv_btsco_is_sco_open())
        {
            mdi_audio_bt_hfp_turn_on();
            srv_bt_dialer_reset_bqb_bsir_enable();
        }
    }
}

U8 mmi_ucm_get_call_count_bt(void)
{
	return g_num_calls;
}
S32 mmi_ucm_query_group_count_bt(srv_ucm_bt_call_state_enum call_state, S32* index)
{
    U32 i, call_count;
    MMI_BOOL is_multi = MMI_FALSE;
    if (index != NULL)
    {
        for (i = 0; i < SRV_UCM_BT_MAX_CALL; i++)
        {
            index[i] = -1;
        }
    }
    for (i = 0, call_count = 0; i < SRV_UCM_BT_MAX_CALL; i++)
    {
        if (call_state & g_ucm_call_state[i].call_state)
        {
            if (is_multi)
            {
                continue;
            }
            else if(g_ucm_call_state[i].multiParty)
            {
                is_multi = MMI_TRUE;
            }
            if (index != NULL)
            {
                index[call_count] = i;
            }
            call_count++;
        }
    }
    return call_count;
}
S32 mmi_ucm_query_call_count_by_call_state_bt(srv_ucm_bt_call_state_enum call_state, S32* index)
{
    U32 i, call_count;
    if (index != NULL)
    {
        for (i = 0; i < SRV_UCM_BT_MAX_CALL; i++)
        {
            index[i] = -1;
        }
    }
    for (i = 0, call_count = 0; i < SRV_UCM_BT_MAX_CALL; i++)
    {
        if (call_state & g_ucm_call_state[i].call_state)
        {
            if (index != NULL)
            {
                index[call_count] = i;
            }
            call_count++;
        }
    }
    return call_count;
}

srv_ucm_bt_call_state_enum mmi_ucm_call_state_type_btsrv_to_app_bt(srv_bt_dialer_AtCallState_enum btsrv_type)
{
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_STATE_MAP, btsrv_type);
	switch(btsrv_type)
    {
    	case SRV_BT_DIALER_ATCS_ACTIVE:
        	return SRV_UCM_BT_ACTIVE_STATE;
    	case SRV_BT_DIALER_ATCS_HELD:
        	return SRV_UCM_BT_HOLD_STATE;
    	case SRV_BT_DIALER_ATCS_DIALING:
    	case SRV_BT_DIALER_ATCS_ALERTING:
        	return SRV_UCM_BT_OUTGOING_STATE;
    	case SRV_BT_DIALER_ATCS_INCOMING:
    	case SRV_BT_DIALER_ATCS_WAITING:
        	return SRV_UCM_BT_INCOMING_STATE;
    	default:
        	return SRV_UCM_BT_BT_IDLE_STATE;
    }
}

void mmi_ucm_clean_all_bt(void)
{
#ifdef __BT_PBAP_CLIENT__
	S32 i;
    SRV_PHB_PBAPC_HANDLE del_pbapc_handle;
#endif /*  __BT_PBAP_CLIENT__ */
	MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_CLEAN_ALL);
#ifdef __BT_PBAP_CLIENT__
	for (i = 0; i < SRV_UCM_BT_MAX_CALL; i++)
    {
    	if (g_ucm_call_state[i].pbapc_handle)
        {
             mmi_ucm_destory_pbap_handle(&g_ucm_call_state[i].pbapc_handle);
        }
    }
    del_pbapc_handle = g_ucm_p_bt->del_pbapc_handle;
#endif /* __BT_PBAP_CLIENT__ */
	memset(g_ucm_p_bt, 0, sizeof(mmi_ucm_bt_cntx_struct));
	memset(g_ucm_call_state, 0, SRV_UCM_BT_MAX_CALL*sizeof(mmi_ucm_call_state_cntx_struct));
	memset(g_ucm_call_state_temp, 0, SRV_UCM_BT_MAX_CALL*sizeof(mmi_ucm_call_info_cntx_struct));
   #ifdef __MMI_UCM_BT_CALL_RECORDER__
	memset(&g_ucm_bt_start_record_time, 0, sizeof(MYTIME));
   #endif
	g_num_calls = 0;
#ifdef __BT_PBAP_CLIENT__
    g_ucm_p_bt->del_pbapc_handle = del_pbapc_handle;
#endif// __BT_PBAP_CLIENT__
}

MMI_BOOL mmi_ucm_get_hide_state_bt(void)
{
	return g_ucm_p_bt->is_hide_screen;
}

void mmi_ucm_set_hide_state_bt(MMI_BOOL new_hide_state)
{
	g_ucm_p_bt->is_hide_screen = new_hide_state;
}

static void mmi_ucm_headset_key_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables	                                              */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body	                                                  */
    /*----------------------------------------------------------------*/ 
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
    {
        mmi_ucm_incoming_call_sendkey_bt();
    }
    else if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_OUTGOING_STATE, NULL) > 0)
    {
        mmi_ucm_outgoing_call_endkey_bt();
    }
    else if (!srv_ucm_is_incoming_call() && !srv_ucm_is_outgoing_call() 
        && mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0)
    {
        mmi_ucm_end_option_bt();
    }
}

mmi_ret mmi_ucm_headset_key_hdlr_bt(mmi_event_struct* para)
{

    /*----------------------------------------------------------------*/
    /* Local Variables	                                              */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body	                                                  */
    /*----------------------------------------------------------------*/ 
    if (mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_ALL, NULL) > 0)
    {
        mmi_ucm_headset_key_bt();
        return MMI_RET_ERR;
    }
    return MMI_RET_OK;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_on_time_change_hdlr_bt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_ucm_on_time_change_hdlr_bt(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_datetimie_evt_struct* datetime_evt;
    S32 ret;
    S32 call_count;
    S32 call_index[SRV_UCM_BT_MAX_CALL];
    MYTIME diff_time;
    S32 i;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    call_count = mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, call_index);
    if (call_count > 0)
    {
        datetime_evt = (srv_datetimie_evt_struct*)evt;
        ret = CompareTime(datetime_evt->old_time, datetime_evt->new_time, NULL);
        kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] @@@@ old:%d,%d,%d,%d,%d,%d,%d",
                                             datetime_evt->old_time.nYear,
                                             datetime_evt->old_time.nMonth,
                                             datetime_evt->old_time.nDay,
                                             datetime_evt->old_time.nHour,
                                             datetime_evt->old_time.nMin,
                                             datetime_evt->old_time.nSec,
                                             datetime_evt->old_time.DayIndex);

        kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] @@@@ new:%d,%d,%d,%d,%d,%d,%d",
                                             datetime_evt->new_time.nYear,
                                             datetime_evt->new_time.nMonth,
                                             datetime_evt->new_time.nDay,
                                             datetime_evt->new_time.nHour,
                                             datetime_evt->new_time.nMin,
                                             datetime_evt->new_time.nSec,
                                             datetime_evt->new_time.DayIndex);

        if (ret == DT_TIME_LESS)
        {
            GetTimeDifference(&datetime_evt->new_time, &datetime_evt->old_time, &diff_time);
            kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] @@@@ ret:%d, diff:%d,%d,%d,%d,%d,%d,%d", ret, 
               diff_time.nYear,diff_time.nMonth, diff_time.nDay, diff_time.nHour, diff_time.nMin, diff_time.nSec, diff_time.DayIndex);
            for (i = 0; i < call_count; i++)
            {
                IncrementTime(g_ucm_call_state[call_index[i]].start_time,
                              diff_time,
                              &g_ucm_call_state[call_index[i]].start_time);
            }
        }
        else if (ret == DT_TIME_GREATER)
        {
            GetTimeDifference(&datetime_evt->old_time, &datetime_evt->new_time, &diff_time);
            kal_prompt_trace(MOD_MMI_COMMON_APP, "[UCMBT] @@@@ ret:%d, diff:%d,%d,%d", ret, diff_time.nHour, diff_time.nMin, diff_time.nSec);
            for (i = 0; i < call_count; i++)
            {
                DecrementTime(g_ucm_call_state[call_index[i]].start_time,
                              diff_time,
                              &g_ucm_call_state[call_index[i]].start_time);
            }
        }
        else
        {
            return MMI_RET_OK;
        }
        mmi_ucm_enter_in_call_bt();
    }
    return MMI_RET_OK;
}

#ifdef __MMI_UCM_BT_CALL_RECORDER__
/*****************************************************************************
 * FUNCTION
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURN VALUES
 *
 *****************************************************************************/
void mmi_ucm_start_record_option_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 result;
    WCHAR filepath[50];
    int record_disk;
    RTC_CTRL_GET_TIME_T   rtc_time;
    DCL_HANDLE rtc_handler;
    kal_uint8 count;
    FS_HANDLE handle;

    FS_DiskInfo disk_info;
    kal_uint64 disk_free_space;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Check if in mass storage mode*/
#ifdef __USB_IN_NORMAL_MODE__
    if (srv_usb_is_in_mass_storage_mode())
    {
        mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_NOT_AVAILABLE_IN_MASS_STORAGE_MODE),MMI_EVENT_FAILURE, NULL);
        return;
    }
#endif /*  __USB_IN_NORMAL_MODE__ */
    /* Check if memory card is inserted before record. */
    record_disk = FS_GetDrive(FS_DRIVE_V_REMOVABLE, 1, FS_NO_ALT_DRIVE);
    if(record_disk < FS_NO_ERROR)
    {
       mmi_popup_display((WCHAR*)(UI_string_type)GetString((U16)srv_fmgr_fs_error_get_string(record_disk)), MMI_EVENT_FAILURE, NULL);
       return;
    }
    result = FS_GetDevStatus((UINT)record_disk, FS_MOUNT_STATE_ENUM);
    if(result < FS_NO_ERROR)
    { 
       mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_INSERT_MEMORY_CARD), MMI_EVENT_FAILURE, NULL);
       return;
    }

    /* Check if has enough space before record. */
    kal_wsprintf(filepath, "%c:\\", record_disk);
    result = FS_GetDiskInfo((const WCHAR *)filepath, &disk_info, FS_DI_FREE_SPACE);
    if(result >= FS_NO_ERROR)
     {
        disk_free_space = disk_info.FreeClusters * disk_info.SectorsPerCluster * disk_info.BytesPerSector;
        if (disk_free_space <= 0)    /*  free space request. */
        {
          /* popup "Memory full" */
          mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_MEMORY_FULL), MMI_EVENT_FAILURE, NULL);
          return;
        } 
     }
    else
     {  
	mmi_popup_display((WCHAR*)(UI_string_type)GetString((U16)srv_fmgr_fs_error_get_string(result)), MMI_EVENT_FAILURE, NULL); 
	return;
     }
	 
    /* Check if destination folder exists before record. */
    kal_wsprintf((WCHAR*) filepath, "%c%w", record_disk, L":\\Record\\");
    result = srv_fmgr_fs_create_folder((const WCHAR *)filepath);
    if(result < FS_NO_ERROR)
    {
        return;
    }
	
    /* Get full path */
    rtc_handler = DclRTC_Open(DCL_RTC,FLAGS_NONE); 
    DclRTC_Control(rtc_handler, RTC_CMD_GET_TIME, (DCL_CTRL_DATA_T *) &rtc_time);
    DclRTC_Close(rtc_handler);

	for (count = 0; count < 100; count++)
	{
        kal_wsprintf(
            filepath,
            "%c%w%02d%02d%02d%02d%02d%02d.wav",
            FS_GetDrive(FS_DRIVE_V_REMOVABLE, 1, FS_NO_ALT_DRIVE),
            L":\\Record\\",
            rtc_time.u1Mon,
            rtc_time.u1Day,
            rtc_time.u1Hour,
            rtc_time.u1Min,
            rtc_time.u1Sec,
            count);  

        /* Check if filename duplicate */
       // handle = FS_Open(filepath, FS_READ_WRITE | FS_CREATE);
        handle = FS_Open(filepath, FS_READ_ONLY);
        if (handle >= FS_NO_ERROR)
        {
            FS_Close(handle);
            if(count == 99)
            {
                return;
            } 
       }
       else
       {
           break;
       }
     }

    /* start record */
    result = mdi_audio_start_record(
                filepath,
                MDI_FORMAT_WAV_DVI_ADPCM,                    
                MDI_AUDIO_REC_QUALITY_LOW,
                mmi_ucm_start_record_evt_hdlr_bt,
                NULL);
    kal_prompt_trace(MOD_MMI,"[ucmbt]start record reslut: %d", result);
    if (result == MDI_AUDIO_SUCCESS)
    {
       /* set state to record */
       DTGetRTCTime(&g_ucm_bt_start_record_time);
    }
    else
    {
      mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_FAILED), MMI_EVENT_FAILURE, NULL);
    }

}

/*****************************************************************************
 * FUNCTION
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURN VALUES
 *
 *****************************************************************************/
void mmi_ucm_end_record_option_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/   
	S32 result;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_prompt_trace(MOD_MMI,"[ucmbt]end record");
	result = mdi_audio_stop_record();
	kal_prompt_trace(MOD_MMI,"[ucmbt]end record reslut: %d", result);
	if (result == MDI_AUDIO_SUCCESS)
		{
		  memset(&g_ucm_bt_start_record_time, 0, sizeof(MYTIME));//to do free start record time
		  mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_SAVED), MMI_EVENT_SUCCESS, NULL);
		}
}

/*****************************************************************************
 * FUNCTION
 *
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURN VALUES
 *
 *****************************************************************************/
void mmi_ucm_start_record_evt_hdlr_bt(mdi_result result, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (result == MDI_AUDIO_DISC_FULL)
    {
    /* Restore audio recorder's state */
	//show error popup
	mmi_popup_display((WCHAR*)(UI_string_type)GetString(STR_GLOBAL_MEMORY_FULL), MMI_EVENT_FAILURE, NULL);

	}
}

#endif /* __MMI_UCM_BT_CALL_RECORDER__*/
#endif /* __MMI_UCM__ */
