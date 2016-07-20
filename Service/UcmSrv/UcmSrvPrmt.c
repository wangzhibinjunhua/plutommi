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
 *  UcmSrvPrmt.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM service permit functions
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
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
#ifdef __MMI_TELEPHONY_SUPPORT__

#include "kal_public_api.h"
#include "DebugInitDef_Int.h"
#include "kal_general_types.h"
#include "string.h"
#include "MMIDataType.h"
#include "Unicodexdcl.h"
#include "wgui_categories_list.h"
#ifdef __MMI_UCM_REJECT_BY_SMS__
#include "CallSetSrvGprot.h" /* srv_callset_reject_by_sms_get_mode */
#endif /* __MMI_UCM_REJECT_BY_SMS__ */
#include "CharBatSrvGprot.h" /* srv_charbat_check_if_mo_allow */
#ifdef __MMI_BG_SOUND_EFFECT__
#include "BgSoundSrvGprot.h" /* srv_bgsnd_common_get_mo_bgs_permit_state */
#endif

#ifdef __MMI_BT_SUPPORT__
#include "BtcmSrvGprot.h"
#endif /* __MMI_BT_SUPPORT__ */
#ifdef __CTM_SUPPORT__
#include "CtmSrvGprot.h"
#endif /* __CTM_SUPPORT__ */
#include "UcmSrvGprot.h"
#include "UcmSrvIntProt.h"
#include "UcmSrvProt.h"
#ifdef __MMI_VOIP__
#include "VoIPGProt.h"
#include "VoIPProt.h"
#endif /* __MMI_VOIP__ */
#ifdef __DM_LAWMO_SUPPORT__
#include "DmSrvGprot.h"
#endif /* __DM_LAWMO_SUPPORT__ */
#include "SmsSrvGProt.h" /* SRV_SMS_MAX_ADDR_LEN */
#include "BootupSrvGprot.h"
#include "ModeSwitchSrvGprot.h"
#ifdef __MMI_HFP_SUPPORT__
#include "BthfSrvGprot.h"
#endif /*__MMI_HFP_SUPPORT__*/

#ifdef __MMI_BT_DIALER_SUPPORT__
#include "UCMProtBT.h"
#endif /* __MMI_BT_DIALER_SUPPORT__ */
#include "GCallSrvProt.h"
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_is_same_sim
 * DESCRIPTION
 *
 * PARAMETERS
 *  act_op:          [IN]        Action op-code
 *  ptr:             [IN]        Data pointer
 * RETURNS
 *  srv_ucm_result_enum
 *****************************************************************************/
MMI_BOOL srv_ucm_is_same_sim(srv_ucm_call_type_enum call_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 index;
	srv_ucm_call_type_enum type[] = {SRV_UCM_SIM1_CALL_TYPE_ALL
								#if (MMI_MAX_SIM_NUM >= 2)
									 ,SRV_UCM_SIM2_CALL_TYPE_ALL
								#if (MMI_MAX_SIM_NUM >= 3)
									 ,SRV_UCM_SIM3_CALL_TYPE_ALL
								#if (MMI_MAX_SIM_NUM == 4)
									 ,SRV_UCM_SIM4_CALL_TYPE_ALL
								#endif /* (MMI_MAX_SIM_NUM == 4) */
								#endif /* (MMI_MAX_SIM_NUM >= 3) */
								#endif /* (MMI_MAX_SIM_NUM >= 2) */
									};
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    for (index = 0; index < MMI_MAX_SIM_NUM ; index++)
    {
    	if ((type[index] & call_type) == call_type)
		{
			return MMI_TRUE;
		}
    }
	return MMI_FALSE;
}
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_act_permit
 * DESCRIPTION
 *  The function to query if the action is permitted
 *  For SRV_UCM_DIAL_ACT, SRV_UCM_DEFLECT_ACT and SRV_UCM_TRANSFER_ACT,
 *  number won't be considered because number is dynamically input by user
 * PARAMETERS
 *  act_op:          [IN]        Action op-code
 *  ptr:             [IN]        Data pointer
 * RETURNS
 *  srv_ucm_result_enum
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_query_act_permit(srv_ucm_act_opcode_enum act_op, void *ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_SRV_UCM_ACT_REQUEST_QUERY_START, act_op);

    switch (act_op)
    {
        case SRV_UCM_DIAL_ACT:
            result = srv_ucm_dial_act_permit(ptr);
            break;

        case SRV_UCM_ACCEPT_ACT:
            result = srv_ucm_accept_act_permit(ptr);
            break;

        case SRV_UCM_HOLD_ACT:
            result = srv_ucm_hold_act_permit(ptr);
            break;

        case SRV_UCM_RETRIEVE_ACT:
            result = srv_ucm_retrieve_act_permit(ptr);
            break;

        case SRV_UCM_SWAP_ACT:
            result = srv_ucm_swap_act_permit(ptr);
            break;

        case SRV_UCM_CONFERENCE_ACT:
            result = srv_ucm_conference_act_permit(ptr);
            break;

        case SRV_UCM_SPLIT_ACT:
            result = srv_ucm_split_act_permit(ptr);
            break;

    #ifdef __MMI_UCM_DEFLECT__
        case SRV_UCM_DEFLECT_ACT:
            result = srv_ucm_deflect_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_DEFLECT__ */

    #ifdef __MMI_UCM_TRANSFER__
        case SRV_UCM_TRANSFER_ACT:
            result = srv_ucm_transfer_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_TRANSFER__ */

    #ifdef __MMI_UCM_ECT__
        case SRV_UCM_EXPLICIT_CALL_TRANSFER_ACT:
            result = srv_ucm_ect_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_ECT__ */

        case SRV_UCM_END_SINGLE_ACT:
            result = srv_ucm_end_single_act_permit(ptr);
            break;

        case SRV_UCM_END_CONFERENCE_ACT:
            result = srv_ucm_end_conference_act_permit(ptr);
            break;

        case SRV_UCM_END_ALL_ACT:
            result = srv_ucm_end_all_act_permit();
            break;

    #ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE__
        case SRV_UCM_END_ALL_ACTIVE_ACT:
            result = srv_ucm_end_all_active_act_permit();
            break;
    #endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE__ */

    #ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_HELD__
        case SRV_UCM_END_ALL_HELD_ACT:
            result = srv_ucm_end_all_held_act_permit();
            break;
    #endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_HELD__ */

        case SRV_UCM_END_ALL_PROCESSING_ACT:
            result = srv_ucm_end_all_processing_act_permit();
            break;

    #ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_DIAL__
        case SRV_UCM_END_ALL_AND_DIAL_ACT:
            result = srv_ucm_end_all_and_dial_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_DIAL__ */

    #ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_ACCEPT__
        case SRV_UCM_END_ALL_AND_ACCEPT_ACT:
            result = srv_ucm_end_all_and_accept_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_ACCEPT__ */

    #ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE_AND_RETRIEVE__
        case SRV_UCM_END_ALL_ACTIVE_AND_RETRIEVE_ACT:
            result = srv_ucm_end_all_active_and_retrieve_act_permit(ptr);
            break;
    #endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE_AND_RETRIEVE__ */

        case SRV_UCM_END_ALL_ACTIVE_AND_ACCEPT_ACT:
            result = srv_ucm_end_all_active_and_accept_act_permit(ptr);
            break;

        case SRV_UCM_HOLD_AND_DIAL_ACT:
            result = srv_ucm_hold_and_dial_act_permit(ptr);
            break;

        case SRV_UCM_HOLD_AND_ACCEPT_ACT:
            result = srv_ucm_hold_and_accept_act_permit(ptr);
            break;

        case SRV_UCM_START_DTMF_ACT:
            result = srv_ucm_start_dtmf_act_permit(ptr);
            break;

        case SRV_UCM_STOP_DTMF_ACT:
            result = srv_ucm_stop_dtmf_act_permit();
            break;

        case SRV_UCM_SEND_DTMF_DIGITS_ACT:
            result = srv_ucm_send_dtmf_digits_act_permit(ptr);
            break;

    #if (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__))
        case SRV_UCM_VT_FALLTO_VOICE_ACT:
            result = srv_ucm_vt_fallto_voice_act_permit(ptr);
            break;
    #endif /* (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__)) */

        default:
            MMI_ASSERT(0); /* not valid op_code */
            break;
    }

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_SRV_UCM_ACT_REQUEST_QUERY_RESULT, act_op, result);

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_dial_common_permit
 * DESCRIPTION
 *  void
 * PARAMETERS
 *  void 
 * RETURNS
 *  SRV_UCM_RESULT_OK means the dial action is allowed to perform
 *  Other value(error cause) means the dial action is not allowed to perform now
 *****************************************************************************/
static srv_ucm_result_enum srv_ucm_dial_common_permit(srv_ucm_call_type_enum call_type, srv_ucm_dial_act_req_struct* dial_info, MMI_BOOL end_all_permit)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_int_query_number_struct number;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(&number, 0, sizeof(srv_ucm_int_query_number_struct));
    mmi_ucs2_n_to_asc((CHAR *)&number.num_uri, (CHAR *)dial_info->num_uri, SRV_UCM_MAX_NUM_URI_LEN * ENCODING_LENGTH);
    number.module = dial_info->module_id;

    if (srv_charbat_check_if_mo_allow() == MMI_FALSE)
    {
        result = SRV_UCM_RESULT_LOW_BATTERY;
    }
    else if (srv_mode_switch_is_network_service_available() == MMI_FALSE)
    {
        result = SRV_UCM_RESULT_FLIGHT_MODE_PROHIBIT;
    }
    else if (strlen((CHAR *)number.num_uri) == 0)
    {
        result = SRV_UCM_RESULT_EMPTY_NUMBER;
    }
    else if (srv_gcall_cmhdlr_query(call_type, SRV_UCM_INT_NUMBER, (void *)&number) == MMI_FALSE)
    {
        result = SRV_UCM_RESULT_INVALID_NUMBER;
    }
    else if (!end_all_permit && srv_ucm_query_group_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_ALL, MMI_FALSE, NULL) >= SRV_UCM_MAX_GROUP)
    {
        /* No free group slot for the outgoing call */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
    else if (!end_all_permit && ((srv_ucm_query_call_count(SRV_UCM_OUTGOING_STATE, SRV_UCM_CALL_TYPE_ALL, NULL) != 0) ||
        (srv_ucm_query_call_count(SRV_UCM_INCOMING_STATE, SRV_UCM_CALL_TYPE_ALL, NULL) != 0)))
    {
        /* Already outgoing call or incoming call */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if ((srv_dm_lawmo_is_locked() == MMI_TRUE) &&
        ((srv_gcall_cmhdlr_query(call_type, SRV_UCM_INT_ECC_NUMBER, (void *)&number) == MMI_FALSE)))
    {
        /* When phone lock, only allowed to dial emergency call */
        return SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if ((call_type & SRV_UCM_DATA_CALL_TYPE) && (!srv_ucm_at_check()) &&
        (srv_ucm_query_call_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_ALL, NULL) > 0))
    {
        /* Data call can only be dialed from AT, and can't exist with other call types */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
    else if (call_type & SRV_UCM_CSD_CALL_TYPE_ALL)
    {
        /* doesn't support CSD call dialed from UCM srv */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
    /* by Call srv */
    if (result == SRV_UCM_RESULT_OK)
    {
        result = srv_gcall_cmhdlr_prmt(call_type, SRV_UCM_INT_DIAL_PRMT, dial_info);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_hold_common_permit
 * DESCRIPTION
 *  void
 * PARAMETERS
 *  void 
 * RETURNS
 *  SRV_UCM_RESULT_OK means the dial action is allowed to perform
 *  Other value(error cause) means the dial action is not allowed to perform now
 *****************************************************************************/
static srv_ucm_result_enum srv_ucm_hold_common_permit(srv_ucm_id_info_struct* uid)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    S32 group_index = 0, call_index = 0;
    srv_ucm_int_query_number_struct number;
    srv_ucm_single_group_act_req_struct hold_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_group_exist(uid->group_id, uid->call_type, SRV_UCM_ACTIVE_STATE) == MMI_FALSE)
    {
        /* The specified group is not active group */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (uid->call_type & (SRV_UCM_CALL_TYPE_DATA_CSD_ALL | SRV_UCM_VIDEO_CALL_TYPE_ALL))
    {
        /* Not allowed to hold csd call, data call or video call */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#ifdef __CTM_SUPPORT__
    else if (srv_ctm_is_connected() == MMI_TRUE)
    {
        /* Not allowed to hold call with ctm connected */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#endif /* __CTM_SUPPORT__ */
#ifdef __MMI_AUTO_ANSWER_MACHINE__
    else if (srv_ucm_autoam_get_state() == SRV_UCM_AUTOAM_STATE_START)
    {
        /* Not allowed to hold call with auto answer machine started */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#endif /* __MMI_AUTO_ANSWER_MACHINE__ */
    else
    {
        srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, SRV_UCM_CALL_TYPE_ALL, g_ucm_srv_p->call_misc.index_list);
        group_index = g_ucm_srv_p->call_misc.index_list[0].group_index;
        call_index = g_ucm_srv_p->call_misc.index_list[0].call_index;

        memset(&number, 0, sizeof(srv_ucm_int_query_number_struct));
        memcpy(&number.num_uri, &g_ucm_srv_p->call_list.group_info[group_index].call_info[call_index].remote_info.num_uri, SRV_UCM_MAX_NUM_URI_LEN); 
        number.module = g_ucm_srv_p->call_list.group_info[group_index].call_info[call_index].module_id;

        if (srv_gcall_cmhdlr_query(uid->call_type, SRV_UCM_INT_ECC_NUMBER, (void *)&number) == MMI_TRUE)
        {
            /* Not allowed to hold ermergency call */
            result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
        }
    }
    /* by Call srv */
    if (result == SRV_UCM_RESULT_OK)
    {
        hold_prmt.action_group = uid->group_id;
        hold_prmt.call_type = uid->call_type;
        result = srv_gcall_cmhdlr_prmt(uid->call_type, SRV_UCM_INT_HOLD_PRMT, &hold_prmt);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_common_permit
 * DESCRIPTION
 *  void
 * PARAMETERS
 *  void 
 * RETURNS
 *  SRV_UCM_RESULT_OK means the dial action is allowed to perform
 *  Other value(error cause) means the dial action is not allowed to perform now
 *****************************************************************************/
static srv_ucm_result_enum srv_ucm_end_all_common_permit(srv_ucm_call_state_enum call_state)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    S32 group, i = 0;
    S32 group_list[SRV_UCM_MAX_GROUP];
    //U16 gcall_result = SRV_GCALL_RESULT_OK;
    srv_ucm_single_call_act_req_struct single_call_prmt;
    srv_ucm_single_group_act_req_struct single_group_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    group = srv_ucm_query_group_count(call_state, SRV_UCM_CALL_TYPE_ALL, MMI_FALSE, group_list);

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (group == 0)
    {
        /* No call to end */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
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
#endif
    else
    {
        /* by Call srv */
        if(SRV_UCM_ACTIVE_STATE == call_state || SRV_UCM_HOLD_ACT == call_state)
        {
            do
            {
                if (g_ucm_srv_p->call_list.group_info[group_list[i]].num_call == 1)
                {
                    single_call_prmt.action_uid.call_type = g_ucm_srv_p->call_list.group_info[group_list[i]].call_type;
                    single_call_prmt.action_uid.group_id = g_ucm_srv_p->call_list.group_info[group_list[i]].group_id;
                    single_call_prmt.action_uid.call_id = g_ucm_srv_p->call_list.group_info[group_list[i]].call_info[0].call_id;
                    result = srv_gcall_cmhdlr_prmt(
                                 g_ucm_srv_p->call_list.group_info[group_list[i]].call_type,
                                 SRV_UCM_INT_END_SINGLE_PRMT,
                                 &single_call_prmt);
                }
                else
                {
                     single_group_prmt.action_group = g_ucm_srv_p->call_list.group_info[group_list[i]].group_id;
                     single_group_prmt.call_type = g_ucm_srv_p->call_list.group_info[group_list[i]].call_type;
                     result = srv_gcall_cmhdlr_prmt(
                                  g_ucm_srv_p->call_list.group_info[group_list[i]].call_type,
                                  SRV_UCM_INT_END_CONFERENCE_PRMT,
                                  &single_group_prmt);
                }
                i++;
            }while(i < group && call_state == SRV_UCM_HOLD_STATE && result == SRV_UCM_RESULT_OK);
        }
        else
        {
            result = srv_gcall_cmhdlr_prmt(
                         g_ucm_srv_p->call_list.group_info[group_list[i]].call_type,
                         SRV_UCM_INT_END_ALL_PRMT,
                         NULL);
        }
    }

    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_accept_common_permit
 * DESCRIPTION
 *  void
 * PARAMETERS
 *  void 
 * RETURNS
 *  SRV_UCM_RESULT_OK means the dial action is allowed to perform
 *  Other value(error cause) means the dial action is not allowed to perform now
 *****************************************************************************/
static srv_ucm_result_enum srv_ucm_accept_common_permit(srv_ucm_id_info_struct* uid, MMI_BOOL is_compond_op)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_call_act_req_struct act_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_query_call_exist(uid, SRV_UCM_INCOMING_STATE) == MMI_FALSE)
    {
        /* The specified call is not incoming call */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_ACCEPT;
    }
    else if ((uid->call_type & SRV_UCM_DATA_CALL_TYPE) && (!srv_ucm_at_check()))
    {
        /* Data call can only be accepted from AT */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_ACCEPT;
    }
    else
    {
        /* by Call srv */
        memcpy(&act_prmt.action_uid, uid, sizeof(srv_ucm_id_info_struct));
        if (is_compond_op)
        {
            result = srv_gcall_cmhdlr_prmt(uid->call_type, SRV_UCM_INT_ACCEPT_EXT_PRMT, &act_prmt);
        }
        else
        {
            result = srv_gcall_cmhdlr_prmt(uid->call_type, SRV_UCM_INT_ACCEPT_PRMT, &act_prmt);
        }
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_dial_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_DIAL_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_dial_act_req_struct 
 * RETURNS
 *  SRV_UCM_RESULT_OK means the dial action is allowed to perform
 *  Other value(error cause) means the dial action is not allowed to perform now
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_dial_act_permit(srv_ucm_dial_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/


    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, SRV_UCM_CALL_TYPE_ALL, NULL) != 0) &&
        ((ptr->module_id != SRV_UCM_MODULE_ORIGIN_SAT) || ((ptr->module_id == SRV_UCM_MODULE_ORIGIN_SAT) &&
        (srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, ptr->call_type, NULL) != srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, SRV_UCM_CALL_TYPE_ALL, NULL)))))
    {
        /* Can't dial directly when active call exists, should use SRV_UCM_HOLD_AND_DIAL_ACT or SRV_UCM_END_ALL_AND_DIAL_ACT */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
    }
	#ifdef __MMI_BT_DIALER_SUPPORT__
    else if (mmi_ucm_query_call_count_by_call_state_bt(
		(srv_ucm_bt_call_state_enum)(SRV_UCM_BT_INCOMING_STATE | SRV_UCM_BT_OUTGOING_STATE), NULL) > 0)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
	#endif /* __MMI_BT_DIALER_SUPPORT__ */
    else
    {
        result = srv_ucm_dial_common_permit(ptr->call_type, ptr, MMI_FALSE);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_accept_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_ACCEPT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_call_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the accept action is allowed to perform
 *  Other value(error cause) means the accept action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_accept_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct first_call;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&first_call, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, SRV_UCM_CALL_TYPE_ALL, NULL) != 0)
    {
        /* Can't accept directly when active call exists, should use SRV_UCM_HOLD_AND_ACCEPT_ACT or SRV_UCM_END_ALL_AND_ACCEPT_ACT */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_ACCEPT;
    }
    else
    {
        result = srv_ucm_accept_common_permit(&first_call, MMI_FALSE);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_hold_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_HOLD_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the hold action is allowed to perform
 *  Other value(error cause) means the hold action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_hold_act_permit(srv_ucm_single_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_id_info_struct first_call;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    srv_ucm_set_uid_info(&first_call,
                         ptr->action_group,
                         0,
                         ptr->call_type);

    return srv_ucm_hold_common_permit(&first_call);
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_retrieve_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_RETRIEVE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the retrieve action is allowed to perform
 *  Other value(error cause) means the retrieve action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_retrieve_act_permit(srv_ucm_single_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_group_act_req_struct act_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_call_count(SRV_UCM_ACTIVE_STATE, SRV_UCM_CALL_TYPE_ALL, NULL) > 0)
    {
        /* There already exists active call */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (srv_ucm_query_group_exist(ptr->action_group, ptr->call_type, SRV_UCM_HOLD_STATE) == MMI_FALSE)
    {
        /* The specified group is not held group */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        memcpy(&act_prmt, ptr, sizeof(srv_ucm_single_group_act_req_struct));
        return srv_gcall_cmhdlr_prmt(ptr->call_type, SRV_UCM_INT_RETRIEVE_PRMT, &act_prmt);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_swap_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_SWAP_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_multiple_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the swap action is allowed to perform
 *  Other value(error cause) means the swap action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_swap_act_permit(srv_ucm_multiple_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_group_act_req_struct single_group_prmt;
    srv_ucm_multiple_group_act_req_struct multiple_group_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_group_exist(ptr->active_group, ptr->active_call_type, SRV_UCM_ACTIVE_STATE) == MMI_FALSE) ||
        (srv_ucm_query_group_exist(ptr->other_group, ptr->other_call_type, SRV_UCM_HOLD_STATE) == MMI_FALSE))
    {
        /* The specified group is not active group and held group */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        if (!(ptr->active_call_type & ptr->other_call_type))
        {
            /* Different call types */
            single_group_prmt.action_group = ptr->active_group;
            single_group_prmt.call_type = ptr->active_call_type;
            result = srv_gcall_cmhdlr_prmt(ptr->active_call_type, SRV_UCM_INT_HOLD_PRMT, &single_group_prmt);
            if (result == SRV_UCM_RESULT_OK)
            {
                single_group_prmt.action_group = ptr->other_group;
                single_group_prmt.call_type = ptr->other_call_type;
                result = srv_gcall_cmhdlr_prmt(ptr->other_call_type, SRV_UCM_INT_RETRIEVE_EXT_PRMT, &single_group_prmt);
            }
        }
        else
        {
            memcpy(&multiple_group_prmt, ptr, sizeof(srv_ucm_multiple_group_act_req_struct));
            result = srv_gcall_cmhdlr_prmt(ptr->active_call_type, SRV_UCM_INT_SWAP_PRMT, &multiple_group_prmt);
        }
        return result;
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_conference_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_CONFERENCE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_multiple_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the conference action is allowed to perform
 *  Other value(error cause) means the conference action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_conference_act_permit(srv_ucm_multiple_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_multiple_group_act_req_struct multiple_group_prmt;
    S32 active_group_index = 0, held_group_index = 0, active_call_count = 0, held_call_count = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_ucm_query_group_index_by_group_id(ptr->active_group, ptr->active_call_type, &active_group_index);
    active_call_count = g_ucm_srv_p->call_list.group_info[active_group_index].num_call;
    srv_ucm_query_group_index_by_group_id(ptr->other_group, ptr->other_call_type, &held_group_index);
    held_call_count = g_ucm_srv_p->call_list.group_info[held_group_index].num_call;

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_group_exist(ptr->active_group, ptr->active_call_type, SRV_UCM_ACTIVE_STATE) == MMI_FALSE) ||
        (srv_ucm_query_group_exist(ptr->other_group, ptr->other_call_type, SRV_UCM_HOLD_STATE) == MMI_FALSE))
    {
        /* The specified group is not active group and held group */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (!(ptr->active_call_type & ptr->other_call_type))
    {
        /* Can't perform conference for different call types */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if ((active_call_count > 1) && (held_call_count > 1))
    {
        /* Two conference can't make conference */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if ((active_call_count + held_call_count) > SRV_UCM_MAX_CALL_IN_GROUP)
    {
        /* Exceed max call count in a group */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    
    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        memcpy(&multiple_group_prmt, ptr, sizeof(srv_ucm_multiple_group_act_req_struct));
        return srv_gcall_cmhdlr_prmt(ptr->active_call_type, SRV_UCM_INT_CONFERENCE_PRMT, &multiple_group_prmt);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_split_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_SPLIT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_call_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the split action is allowed to perform
 *  Other value(error cause) means the split action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_split_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_call_act_req_struct single_call_prmt;
    S32 group_index = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&single_call_prmt.action_uid, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    srv_ucm_query_group_index_by_group_id(single_call_prmt.action_uid.group_id, single_call_prmt.action_uid.call_type, &group_index);

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_group_exist(single_call_prmt.action_uid.group_id, single_call_prmt.action_uid.call_type, SRV_UCM_ACTIVE_STATE) == MMI_FALSE) ||
        (g_ucm_srv_p->call_list.group_info[group_index].num_call <= 1))
    {
        /* The specified call is not in active conference */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (g_ucm_srv_p->call_list.num_group == SRV_UCM_MAX_GROUP)
    {
        /* No free group slot */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        return srv_gcall_cmhdlr_prmt(ptr->action_uid.call_type, SRV_UCM_INT_SPLIT_PRMT, &single_call_prmt);
    }
}

#ifdef __MMI_UCM_DEFLECT__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_deflect_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_DEFLECT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_cd_or_ct_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the deflect action is allowed to perform
 *  Other value(error cause) means the deflect action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_deflect_act_permit(srv_ucm_cd_or_ct_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_cd_or_ct_act_req_struct act_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&act_prmt.action_uid, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_call_exist(&act_prmt.action_uid, SRV_UCM_INCOMING_STATE) == MMI_FALSE)
    {
        /* The specified call is not incoming call */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#endif /* __DM_LAWMO_SUPPORT__ */

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        mmi_ucs2_n_to_asc((CHAR *)act_prmt.num_uri, (CHAR *)ptr->num_uri, SRV_UCM_MAX_NUM_URI_LEN * ENCODING_LENGTH);
        return srv_gcall_cmhdlr_prmt(ptr->action_uid.call_type, SRV_UCM_INT_DEFLECT_PRMT, &act_prmt);
    }
}
#endif /* __MMI_UCM_DEFLECT__ */

#ifdef __MMI_UCM_TRANSFER__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_transfer_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_TRANSFER_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_cd_or_ct_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the transfer action is allowed to perform
 *  Other value(error cause) means the transfer action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_transfer_act_permit(srv_ucm_cd_or_ct_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct first_call;
    srv_ucm_dial_info_struct dial_info;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&first_call, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_call_exist(&first_call, SRV_UCM_CALL_STATE_ALL) == MMI_FALSE)
    {
        /* The specified call doesn't exist */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
#endif /* __DM_LAWMO_SUPPORT__ */

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        return SRV_UCM_RESULT_UNSPECIFIED_ERROR;
    }
}
#endif /* __MMI_UCM_TRANSFER__ */

#ifdef __MMI_UCM_ECT__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_ect_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_EXPLICIT_CALL_TRANSFER_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_ect_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the ect action is allowed to perform
 *  Other value(error cause) means the ect action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_ect_act_permit(srv_ucm_ect_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_ect_act_req_struct ect_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_group_exist(ptr->first_group, ptr->first_call_type, SRV_UCM_CALL_STATE_ALL) == MMI_FALSE) ||
        (srv_ucm_query_group_exist(ptr->second_group, ptr->second_call_type, SRV_UCM_CALL_STATE_ALL) == MMI_FALSE))
    {
        /* The specified calls don't exist */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        memcpy(&ect_prmt, ptr, sizeof(srv_ucm_ect_act_req_struct));
        return srv_gcall_cmhdlr_prmt(ptr->first_call_type, SRV_UCM_INT_EXPLICIT_CALL_TRANSFER_PRMT, &ect_prmt);
    }
}
#endif /* __MMI_UCM_ECT__ */

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_single_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_SINGLE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_call_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end single action is allowed to perform
 *  Other value(error cause) means the end single action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_single_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_call_act_req_struct single_act_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&single_act_prmt.action_uid, &ptr->action_uid, sizeof(srv_ucm_id_info_struct));

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    if (srv_ucm_query_call_exist(&single_act_prmt.action_uid, SRV_UCM_CALL_STATE_ALL) == MMI_FALSE)
    {
        /* The specified call doesn't exist */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        return srv_gcall_cmhdlr_prmt(ptr->action_uid.call_type, SRV_UCM_INT_END_SINGLE_PRMT, &single_act_prmt);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_conference_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_CONFERENCE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end conference action is allowed to perform
 *  Other value(error cause) means the end conference action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_conference_act_permit(srv_ucm_single_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_group_act_req_struct single_group_prmt;
    S32 group_index = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_ucm_query_group_index_by_group_id(ptr->action_group, ptr->call_type, &group_index);

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if ((srv_ucm_query_group_exist(ptr->action_group, ptr->call_type, SRV_UCM_CALL_STATE_ALL) == MMI_FALSE) ||
        (g_ucm_srv_p->call_list.group_info[group_index].num_call <= 1))
    {
        /* The specified group doesn't exist or not conference call */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        memcpy(&single_group_prmt, ptr, sizeof(srv_ucm_single_group_act_req_struct));
        return srv_gcall_cmhdlr_prmt(ptr->call_type, SRV_UCM_INT_END_CONFERENCE_PRMT, &single_group_prmt);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_ACT
 * PARAMETERS
 *  void
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all action is allowed to perform
 *  Other value(error cause) means the end all action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_act_permit()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
 
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    return srv_ucm_end_all_common_permit(SRV_UCM_CALL_STATE_ALL);
}

#ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_active_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_ACTIVE_ACT
 * PARAMETERS
 *  void
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all active action is allowed to perform
 *  Other value(error cause) means the end all active action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_active_act_permit()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    return srv_ucm_end_all_common_permit(SRV_UCM_ACTIVE_STATE);
}
#endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE__ */

#ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_HELD__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_held_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_HELD_ACT
 * PARAMETERS
 *  void
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all held action is allowed to perform
 *  Other value(error cause) means the end all held action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_held_act_permit()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return srv_ucm_end_all_common_permit(SRV_UCM_HOLD_STATE);
}
#endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_HELD__ */

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_processing_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_PROCESSING_ACT
 * PARAMETERS
 *  void
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all processing action is allowed to perform
 *  Other value(error cause) means the end all processing action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_processing_act_permit()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 group_index = 0, call_index = 0;
    MMI_BOOL dial_act_ongoing = MMI_FALSE;
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (srv_ucm_get_process_state(SRV_UCM_DO_PROCESS_STATE, g_ucm_srv_p->call_misc.index_list) > 0)
    {
        group_index = g_ucm_srv_p->call_misc.index_list[0].group_index;
        call_index = g_ucm_srv_p->call_misc.index_list[0].call_index;
        if (g_ucm_srv_p->call_list.group_info[group_index].call_info[call_index].act_type == SRV_UCM_DIAL_ACT)
        {
            dial_act_ongoing = MMI_TRUE;
        }
    }

    /* Only allowed when there is disconnecting calls or pending action except dial_ACT */
    if ((dial_act_ongoing == MMI_TRUE) ||
        ((srv_ucm_is_pending_action() == MMI_FALSE) &&
        (srv_ucm_query_disconnecting_call_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_ALL, NULL) == 0)))
    {
        /* No processing action */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    return result;
}

#ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_DIAL__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_and_dial_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_AND_DIAL_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_dial_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all and dial action is allowed to perform
 *  Other value(error cause) means the end all and dial action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_and_dial_act_permit(srv_ucm_dial_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    result = srv_ucm_end_all_common_permit(SRV_UCM_CALL_STATE_ALL);

    if (result == SRV_UCM_RESULT_OK)
    {
        result = srv_ucm_dial_common_permit(ptr->call_type, ptr, MMI_TRUE);
    }
    return result;
}
#endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_DIAL__ */

#ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_ACCEPT__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_and_accept_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_AND_ACCEPT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_call_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all and accept action is allowed to perform
 *  Other value(error cause) means the end all and accept action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_and_accept_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct incoming_call;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&incoming_call, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    result = srv_ucm_end_all_common_permit((srv_ucm_call_state_enum)(SRV_UCM_OUTGOING_STATE | SRV_UCM_CALL_STATE_CONNECTED));

    if (result == SRV_UCM_RESULT_OK)
    {    
        result = srv_ucm_accept_common_permit(&incoming_call, MMI_TRUE);
    }
    return result;
}
#endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_AND_ACCEPT__ */

#ifdef __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE_AND_RETRIEVE__
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_active_and_retrieve_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_ACTIVE_AND_RETRIEVE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all active and retrieve action is allowed to perform
 *  Other value(error cause) means the end all active and retrieve action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_active_and_retrieve_act_permit(srv_ucm_single_group_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_group_act_req_struct single_group_prmt;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    result = srv_ucm_end_all_common_permit(SRV_UCM_ACTIVE_STATE);

    if (result == SRV_UCM_RESULT_OK)
    {
        if (srv_ucm_query_group_exist(ptr->action_group, ptr->call_type, SRV_UCM_HOLD_STATE) == MMI_FALSE)
        {
            /* The specified group is not held group */
            result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
        }
        else
        {
            memcpy(&single_group_prmt, ptr, sizeof(srv_ucm_single_group_act_req_struct));
            result = srv_gcall_cmhdlr_prmt(ptr->call_type, SRV_UCM_INT_RETRIEVE_EXT_PRMT, &single_group_prmt);
        }
    }
    return result;
}
#endif /* __MMI_UCM_COMPOUND_ACTION_END_ALL_ACTIVE_AND_RETRIEVE__ */

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_end_all_active_and_accept_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_END_ALL_ACTIVE_AND_ACCEPT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_group_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the end all active and accept action is allowed to perform
 *  Other value(error cause) means the end all active and accept action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_end_all_active_and_accept_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct first_call;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&first_call, &ptr->action_uid, sizeof(srv_ucm_id_info_struct)); 

    result = srv_ucm_end_all_common_permit(SRV_UCM_ACTIVE_STATE);

    if (result == SRV_UCM_RESULT_OK)
    {
        result = srv_ucm_accept_common_permit(&first_call, MMI_TRUE);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_hold_and_dial_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_HOLD_AND_DIAL_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_hold_and_dial_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the hold and dial action is allowed to perform
 *  Other value(error cause) means the hold and dial action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_hold_and_dial_act_permit(srv_ucm_hold_and_dial_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct first_call;
    srv_ucm_dial_act_req_struct dial_info;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    dial_info.call_type = ptr->dial_call_type;
    dial_info.is_ip_dial = ptr->is_ip_dial;
    dial_info.module_id = ptr->module_id;
    memcpy(dial_info.num_uri, ptr->num_uri, sizeof (dial_info.num_uri));
    dial_info.phb_data = ptr->phb_data;

    srv_ucm_set_uid_info(&first_call,
                         ptr->active_group,
                         0,
                         ptr->active_call_type);

    result = srv_ucm_hold_common_permit(&first_call);

    if (result == SRV_UCM_RESULT_OK)
    {
        result = srv_ucm_dial_common_permit(ptr->dial_call_type, &dial_info, MMI_FALSE);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_hold_and_accept_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_HOLD_AND_ACCEPT_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_hold_and_accept_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the hold and accept action is allowed to perform
 *  Other value(error cause) means the hold and accept action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_hold_and_accept_act_permit(srv_ucm_hold_and_accept_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_id_info_struct first_call, incoming_call;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    srv_ucm_set_uid_info(&first_call,
                          ptr->active_group,
                          0,
                          ptr->active_call_type);

    memcpy(&incoming_call, &ptr->mt_call_uid, sizeof(srv_ucm_id_info_struct)); 

    result = srv_ucm_hold_common_permit(&first_call);

    if (result == SRV_UCM_RESULT_OK)
    {
        result = srv_ucm_accept_common_permit(&incoming_call, MMI_TRUE);
    }
    return result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_start_dtmf_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_START_DTMF_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_dtmf_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means start dtmf is allowed to perform
 *  Other value(error cause) means start dtmf is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_start_dtmf_act_permit(srv_ucm_dtmf_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    srv_ucm_query_call_count((srv_ucm_call_state_enum)(SRV_UCM_OUTGOING_STATE | SRV_UCM_ACTIVE_STATE), SRV_UCM_CALL_TYPE_ALL, g_ucm_srv_p->call_misc.index_list);

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (g_ucm_srv_p->call_misc.is_dtmf_start == MMI_TRUE)
    {
        /* Already sending stmf and not stop yet */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (g_ucm_srv_p->call_misc.is_speech == MMI_FALSE)
    {
        /* speech is off */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (srv_gcall_cmhdlr_query(g_ucm_srv_p->call_list.group_info[g_ucm_srv_p->call_misc.index_list[0].group_index].call_type, SRV_UCM_INT_DTMF_DIGIT, (void *)ptr) == MMI_FALSE)
    {
        /* Invalid digit */
        result = SRV_UCM_RESULT_INVALID_NUMBER;
    }

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  srv_ucm_send_dtmf_digits_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_SEND_DTMF_DIGITS_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_dtmf_digits_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means start dtmf is allowed to perform
 *  Other value(error cause) means start dtmf is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_send_dtmf_digits_act_permit(srv_ucm_dtmf_digits_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    S32 i = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    srv_ucm_query_call_count((srv_ucm_call_state_enum)(SRV_UCM_OUTGOING_STATE | SRV_UCM_ACTIVE_STATE), SRV_UCM_CALL_TYPE_ALL, g_ucm_srv_p->call_misc.index_list);

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (g_ucm_srv_p->call_misc.is_dtmf_start == MMI_TRUE)
    {
        /* Already sending stmf and not stop yet */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (g_ucm_srv_p->call_misc.is_speech == MMI_FALSE)
    {
        /* speech is off */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }
    else if (ptr->length > SRV_UCM_MAX_DTMF_STR_LEN)
    {
        /* Too long */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result == SRV_UCM_RESULT_OK)
    {
        for (i = 0; i < ptr->length; i++)
        {
            if (srv_gcall_cmhdlr_query(g_ucm_srv_p->call_list.group_info[g_ucm_srv_p->call_misc.index_list[0].group_index].call_type, 
                    SRV_UCM_INT_DTMF_DIGIT, (void *)&(ptr->dtmf_digits[i])) == MMI_FALSE)
            {
                /* Invalid digit */
                result = SRV_UCM_RESULT_INVALID_NUMBER;
            }
        }
    }

    return result;
}


/*****************************************************************************
 * FUNCTION
 *  srv_ucm_stop_dtmf_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_STOP_DTMF_ACT
 * PARAMETERS
 *  void
 * RETURNS
 *  SRV_UCM_RESULT_OK means stop dtmf is allowed to perform
 *  Other value(error cause) means stop dtmf is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_stop_dtmf_act_permit()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (g_ucm_srv_p->call_misc.is_dtmf_start == MMI_FALSE)
    {
        /* No dtmf is sending now */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    return result;
}

#if (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__))
/*****************************************************************************
 * FUNCTION
 *  srv_ucm_vt_fallto_voice_act_permit
 * DESCRIPTION
 *  Permit function of SRV_UCM_VT_FALLTO_VOICE_ACT
 * PARAMETERS
 *  ptr                 [IN]            srv_ucm_single_call_act_req_struct
 * RETURNS
 *  SRV_UCM_RESULT_OK means the vt fallback to voice action is allowed to perform
 *  Other value(error cause) means the action is not allowed to perform now 
 *****************************************************************************/
srv_ucm_result_enum srv_ucm_vt_fallto_voice_act_permit(srv_ucm_single_call_act_req_struct* ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_result_enum result = SRV_UCM_RESULT_OK;
    srv_ucm_single_call_act_req_struct single_call_prmt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memcpy(&single_call_prmt.action_uid, &ptr->action_uid, sizeof(srv_ucm_id_info_struct));
    memcpy(&single_call_prmt.at_info, &g_ucm_srv_p->call_misc.at_info, sizeof(srv_ucm_int_at_info_struct));

    if (srv_ucm_is_pending_action() == MMI_TRUE)
    {
        result = SRV_UCM_RESULT_UCM_BUSY;
    }
    else if (srv_ucm_query_call_exist(&single_call_prmt.action_uid, SRV_UCM_INCOMING_STATE) == MMI_FALSE)
    {
        /* The specified call is not incoming call */
        result = SRV_UCM_RESULT_NOT_ALLOWED_TO_ACCEPT;
    }
    else if (!((single_call_prmt.action_uid.call_type & SRV_UCM_VIDEO_CALL_TYPE_ALL) && 
             (srv_ucm_query_call_exist(&single_call_prmt.action_uid, SRV_UCM_INCOMING_STATE) == MMI_TRUE) &&
             (srv_ucm_query_call_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_ALL, NULL) == 1)))
    {
        /* Only incoming video call is allowed */
        result = SRV_UCM_RESULT_ACTION_NOT_ALLOWED;
    }

    if (result != SRV_UCM_RESULT_OK)
    {
        /* By UCM service */
        return result;
    }
    else
    {
        /* By call service */
        srv_gcall_prmt_vt_fallto_voice(&single_call_prmt);
    }
}
#endif /* (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__)) */

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_mute_permit
 * DESCRIPTION
 *  The function to query if Mute function is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_mute_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_index_info_struct index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    srv_ucm_query_index_by_id(&call_id, &index);
    
    if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_state & SRV_UCM_CALL_STATE_CONNECTED)
    {
        return MMI_TRUE;
    }

    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_loudspeaker_permit
 * DESCRIPTION
 *  The function to query if Loud Speaker is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_loudspeaker_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_index_info_struct index;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if (srv_ucm_query_index_by_id(&call_id, &index) == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    
    if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
#ifdef __MMI_BT_SUPPORT__
    else if (srv_bt_cm_is_incall_aud_swap2bt() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __MMI_BT_SUPPORT__ */
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */

    return MMI_TRUE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_sndrec_permit
 * DESCRIPTION
 *  The function to query if Sound Recorder is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_sndrec_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_SOUND_RECORDER__
    srv_ucm_index_info_struct index;
#endif
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_SOUND_RECORDER__
    if (srv_ucm_query_index_by_id(&call_id, &index) == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    else if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_state == SRV_UCM_ACTIVE_STATE)
    {
        return MMI_TRUE;
    }
#endif /* __MMI_SOUND_RECORDER__ */

    return MMI_FALSE;    
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_bgs_in_call_permit
 * DESCRIPTION
 *  The function to query if Background Sound during in call is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_TRUE means user is permitted to choose Background Sound during active/held call
 *  MMI_FALSE means user is not permitted to choose Background Sound during active/held call
 *****************************************************************************/
MMI_BOOL srv_ucm_query_bgs_in_call_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_BG_SOUND_EFFECT__
    srv_ucm_index_info_struct index;
#endif

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_BG_SOUND_EFFECT__
    if (srv_ucm_query_index_by_id(&call_id, &index) == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    else if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */
    else if ((g_ucm_srv_p->call_list.group_info[index.group_index].call_type & 
        (SRV_UCM_VOICE_CALL_TYPE_ALL | SRV_UCM_VOIP_CALL_TYPE)) &&
        (g_ucm_srv_p->call_list.group_info[index.group_index].call_state == SRV_UCM_ACTIVE_STATE) &&
        (g_ucm_srv_p->call_list.num_group == 1))
    {
        /* Only for one voice/voip active call */
        return MMI_TRUE;
    }
#endif /* __MMI_BG_SOUND_EFFECT__ */

    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_bgs_in_call_permit
 * DESCRIPTION
 *  The function to query if Background Sound during incoming call is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_TRUE means user is permitted to choose Background Sound during incoming call
 *  MMI_FALSE means user is not permitted to choose Background Sound during incoming call
 *****************************************************************************/
MMI_BOOL srv_ucm_query_bgs_incoming_call_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_BG_SOUND_EFFECT__
    srv_ucm_index_info_struct index;
#endif
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_BG_SOUND_EFFECT__
    if (srv_ucm_query_index_by_id(&call_id, &index) == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    else if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */
    else if ((g_ucm_srv_p->call_list.group_info[index.group_index].call_type & 
        (SRV_UCM_VOICE_CALL_TYPE_ALL | SRV_UCM_VOIP_CALL_TYPE)) &&
        (g_ucm_srv_p->call_list.group_info[index.group_index].call_state == SRV_UCM_INCOMING_STATE) &&
        (g_ucm_srv_p->call_list.num_group == 1))
    {
        /* Only for one voice/voip incoming call */
        return MMI_TRUE;
    }
#endif /* __MMI_BG_SOUND_EFFECT__ */

    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_bgs_outgoing_call_permit
 * DESCRIPTION
 *  The function to query if Background Sound before outgoing call is permitted
 * PARAMETERS
 *  call_type:       [IN]        Outgoing call type
 * RETURNS
 *  MMI_TRUE means user is permitted to choose Background Sound before making outgoing call
 *  MMI_FALSE means user is not permitted to choose Background Sound before making outgoing call
 *****************************************************************************/
MMI_BOOL srv_ucm_query_bgs_outgoing_call_permit(srv_ucm_call_type_enum call_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_BG_SOUND_EFFECT__
    if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
#ifdef __CTM_SUPPORT__
    else if (srv_callset_ctm_get_mode() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __CTM_SUPPORT__ */
    else if ((srv_bgsnd_common_get_mo_bgs_permit_state() == MMI_TRUE) &&
        (call_type & (SRV_UCM_VOICE_CALL_TYPE_ALL | SRV_UCM_VOIP_CALL_TYPE)) &&
        (srv_ucm_query_call_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_NO_CSD, NULL) == 0))
    {
        /* Only for one voice/voip outgoing call */
        return MMI_TRUE;
    }
#endif /* __MMI_BG_SOUND_EFFECT__ */

    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_switch_bt_audio_path_permit
 * DESCRIPTION
 *  The function to query if BT audio path switch function is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_switch_bt_audio_path_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_BT_SUPPORT__
    srv_ucm_index_info_struct index;
#endif
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_BT_SUPPORT__
    srv_ucm_query_index_by_id(&call_id, &index);

    if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
    else if (!(srv_bt_cm_is_profile_connected(SRV_BT_CM_HFP_CONNECTION) || srv_bt_cm_is_profile_connected(SRV_BT_CM_HSP_CONNECTION)))
    {
        return MMI_FALSE;
    }
    if (g_ucm_srv_p->call_misc.is_speech == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    return MMI_TRUE;
#else /* __MMI_BT_SUPPORT__ */
    return MMI_FALSE;
#endif /* __MMI_BT_SUPPORT__ */

}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_connect_last_bt_device_permit
 * DESCRIPTION
 *  The function to query if Connect Last BT Device is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_connect_last_bt_device_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_BT_SUPPORT__
    srv_ucm_index_info_struct index;
#endif
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_BT_SUPPORT__
    srv_ucm_query_index_by_id(&call_id, &index);

    if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if (g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_CALL_TYPE_DATA_CSD_ALL)
    {
        return MMI_FALSE;
    }
    else if ((srv_bt_cm_get_power_status() == SRV_BT_CM_POWER_OFF) ||
        #ifdef __MMI_HFP_SUPPORT__ 
            (srv_bthf_read_config(BTHF_CFG_DEF_DEVICE) == NULL) ||
        #endif /* __MMI_HFP_SUPPORT__ */
            MMI_FALSE)
    {
        return MMI_FALSE;
    }
    return MMI_TRUE;
#else /* __MMI_BT_SUPPORT__ */
    return MMI_FALSE;
#endif /* __MMI_BT_SUPPORT__ */

}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_connect_ctm_permit
 * DESCRIPTION
 *  The function to query if Connect CTM is permitted
 * PARAMETERS
 *  call_id:       [IN]        Call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_ucm_query_connect_ctm_permit(srv_ucm_id_info_struct call_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __CTM_SUPPORT__
    srv_ucm_index_info_struct index;
#endif /* __CTM_SUPPORT__ */
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __CTM_SUPPORT__
    if (srv_ucm_query_index_by_id(&call_id, &index) == MMI_FALSE)
    {
        return MMI_FALSE;
    }
    else if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if ((g_ucm_srv_p->call_list.group_info[index.group_index].call_type & SRV_UCM_VOICE_CALL_TYPE_ALL) &&
        (srv_ucm_query_call_count(SRV_UCM_CALL_STATE_ALL, SRV_UCM_CALL_TYPE_ALL, NULL) == 1) &&
        (srv_ctm_prmt_connect() == MMI_TRUE))
    {
        /* Only allowed to connect CTM for single active voice call */
        return MMI_TRUE;
    }
#endif /* __CTM_SUPPORT__ */
    
    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_query_reject_by_sms_permit
 * DESCRIPTION
 *  The function to query if reject by SMS is permitted
 * PARAMETERS
 *  mt_call_uid:     [IN]        MT call id
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_ucm_query_reject_by_sms_permit(srv_ucm_single_call_act_req_struct mt_call_uid)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_UCM_REJECT_BY_SMS__
    S32 group_index = 0;
    srv_ucm_single_call_act_req_struct single_call_req;
#endif /* __MMI_UCM_REJECT_BY_SMS__ */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

#ifdef __MMI_UCM_REJECT_BY_SMS__
    if (srv_ucm_query_call_exist(&mt_call_uid.action_uid, SRV_UCM_INCOMING_STATE) == 0)
    {
        /* It is not incoming call */
        return MMI_FALSE;
    }
    else if (srv_bootup_is_booting() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
    else if (srv_sms_is_sms_ready() == MMI_FALSE)
    {
        return MMI_FALSE;
    }
#ifdef __DM_LAWMO_SUPPORT__
    else if (srv_dm_lawmo_is_locked() == MMI_TRUE)
    {
        return MMI_FALSE;
    }
#endif /* __DM_LAWMO_SUPPORT__ */
    else if (srv_ucm_query_call_count(
                SRV_UCM_INCOMING_STATE, 
                (srv_ucm_call_type_enum)(SRV_UCM_VOICE_CALL_TYPE_ALL | SRV_UCM_VIDEO_CALL_TYPE_ALL), 
                g_ucm_srv_p->call_misc.index_list) == 0)
    {
        /* It is not voice call or video call */
        return MMI_FALSE;
    }
    srv_ucm_set_single_call_data(
           &single_call_req,
           mt_call_uid.action_uid.call_type,
           mt_call_uid.action_uid.group_id,
           mt_call_uid.action_uid.call_id);
    if (srv_ucm_end_single_act_permit(&single_call_req) != SRV_UCM_RESULT_OK)
    {
        /* End single call action is not allowed now */
        return MMI_FALSE;
    }

    group_index = g_ucm_srv_p->call_misc.index_list[0].group_index;

    if ((srv_callset_reject_by_sms_get_mode() == MMI_TRUE) &&
        (strlen((CHAR *)g_ucm_srv_p->call_list.group_info[group_index].call_info[0].remote_info.num_uri) > 0) &&
        (strlen((CHAR *)g_ucm_srv_p->call_list.group_info[group_index].call_info[0].remote_info.num_uri) <= SRV_SMS_MAX_ADDR_LEN))
    {
        return MMI_TRUE;
    }
#endif /* __MMI_UCM_REJECT_BY_SMS__ */

    return MMI_FALSE;
}

#endif /* __MMI_TELEPHONY_SUPPORT__ */
