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
 *  UcmSrvIntInterface.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM service internal interface
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "MMI_features.h"
#ifdef __MMI_TELEPHONY_SUPPORT__

#include "MMI_common_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_trace.h"
#include "mmi_common_app_trc.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "MMIDataType.h"
#include "string.h"
#include "UcmSrvGprot.h"
#include "UcmSrvIntProt.h"
#include "UcmSrvProt.h"
#include "GCallSrvProt.h"
#include "Unicodexdcl.h"

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_int_act_request
 * DESCRIPTION
 *  General function for sending action request to call service
 * PARAMETERS
 *  op_code         [IN]            Action op-code
 *  first_ptr       [IN]            First call, usually the current active call
 *  other_ptr       [IN]            Other call, valid for multiple call operation
 *  dial_ptr        [IN]            Dial information, valid for DIAL, DEFLECT and TRANSFER 
 * RETURNS
 *  void
 *****************************************************************************/
void srv_ucm_int_act_request(srv_ucm_int_act_opcode_enum int_op_code, srv_ucm_id_info_struct *first, srv_ucm_id_info_struct *other)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_ucm_act_opcode_enum op_code = SRV_UCM_NO_ACT;
    srv_ucm_dial_act_req_struct dial_req;
    srv_ucm_single_call_act_req_struct single_call_req;
    srv_ucm_single_group_act_req_struct single_group_req;
    srv_ucm_multiple_group_act_req_struct multiple_group_req;
#if (defined(__MMI_UCM_DEFLECT__) || defined(__MMI_UCM_TRANSFER__))
    srv_ucm_cd_or_ct_act_req_struct dt_ct_req;
#endif
#ifdef __MMI_UCM_ECT__
    srv_ucm_ect_act_req_struct ect_req;
#endif
    srv_ucm_int_act_rsp_callback_func_ptr rsp_callback = srv_ucm_int_act_rsp_hdlr;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    if ((int_op_code != SRV_UCM_INT_FORCE_RELEASE_ACT) &&
        (int_op_code != SRV_UCM_INT_AUTO_REJECT_ACT))
    {
        op_code = srv_ucm_query_act_op(int_op_code);
    }

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_SRV_UCM_INT_ACT_REQUEST, first->call_type, int_op_code);    

    switch (int_op_code)
    {
        case SRV_UCM_INT_DIAL_ACT:

            /* Send action start notify */
            memset(&dial_req, 0, sizeof(srv_ucm_dial_act_req_struct));
            dial_req.call_type = g_ucm_srv_p->dial_info.dial_type;
            dial_req.is_ip_dial = g_ucm_srv_p->dial_info.is_ip_dial;
            dial_req.module_id = g_ucm_srv_p->dial_info.module_id;
            dial_req.phb_data = g_ucm_srv_p->dial_info.phb_data;
            mmi_asc_n_to_ucs2((CHAR *)dial_req.num_uri, (CHAR*)g_ucm_srv_p->dial_info.num_uri, SRV_UCM_MAX_NUM_URI_LEN);
            srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&dial_req);
            
            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                     first->call_type,
                     int_op_code,
                     (void *)&dial_req,
                     &g_ucm_srv_p->call_misc.at_info,
                     (void *)g_ucm_srv_p->call_misc.user_data,
                     rsp_callback);
            break;

        case SRV_UCM_INT_ACCEPT_ACT:
        case SRV_UCM_INT_SPLIT_ACT:
        case SRV_UCM_INT_END_SINGLE_ACT:
        case SRV_UCM_INT_FORCE_RELEASE_ACT:
        case SRV_UCM_INT_AUTO_REJECT_ACT:
    #if (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__))
        case SRV_UCM_INT_VT_FALLTO_VOICE_ACT:
    #endif /* (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__)) */

            memcpy(&single_call_req.action_uid, first, sizeof(srv_ucm_id_info_struct));

            /* Send action start notify */
            if (((int_op_code != SRV_UCM_INT_END_SINGLE_ACT) &&
                (int_op_code != SRV_UCM_INT_FORCE_RELEASE_ACT) &&
                (int_op_code != SRV_UCM_INT_AUTO_REJECT_ACT)) ||
                ((int_op_code == SRV_UCM_INT_END_SINGLE_ACT) &&
                (g_ucm_srv_p->call_misc.is_pending_end_act == MMI_FALSE) &&
                (g_ucm_srv_p->call_misc.end_processing_count == 0)))
            {
                srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&single_call_req);
            }

            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    (void *)&single_call_req,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;

        case SRV_UCM_INT_HOLD_ACT:
        case SRV_UCM_INT_RETRIEVE_ACT:
        case SRV_UCM_INT_END_CONFERENCE_ACT:

            srv_ucm_set_single_group_data(
                       &single_group_req,
                       first->call_type,
                       first->group_id);

            /* Send action start notify */
            if ((int_op_code != SRV_UCM_INT_END_CONFERENCE_ACT) ||
                ((int_op_code == SRV_UCM_INT_END_CONFERENCE_ACT) && (g_ucm_srv_p->call_misc.is_pending_end_act == MMI_FALSE)))
            {
                srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&single_group_req);
            }

            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    (void *)&single_group_req,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;

        case SRV_UCM_INT_SWAP_ACT:
        case SRV_UCM_INT_CONFERENCE_ACT:

            srv_ucm_set_multiple_group_data(
                   &multiple_group_req,
                   first->call_type,
                   first->group_id,
                   other->call_type,
                   other->group_id);

            /* Send action start notify */
            srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&multiple_group_req);
            
            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    (void *)&multiple_group_req,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;

    #ifdef __MMI_UCM_DEFLECT__
        case SRV_UCM_INT_DEFLECT_ACT:
    #endif /* __MMI_UCM_DEFLECT__ */
    #ifdef __MMI_UCM_TRANSFER__
        case SRV_UCM_INT_TRANSFER_ACT:
    #endif /* __MMI_UCM_TRANSFER__ */

        #if (defined(__MMI_UCM_DEFLECT__) || defined(__MMI_UCM_TRANSFER__))
            /* Send action start notify */
            memset(&dt_ct_req, 0, sizeof(srv_ucm_cd_or_ct_act_req_struct));
            memcpy(&dt_ct_req.action_uid, first, sizeof(srv_ucm_id_info_struct));
            mmi_asc_n_to_ucs2((CHAR*)dt_ct_req.num_uri, (CHAR*)g_ucm_srv_p->dial_info.num_uri, SRV_UCM_MAX_NUM_URI_LEN);
            srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&dt_ct_req);
            
            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    (void *)&dt_ct_req,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;
        #endif /* (defined(__MMI_UCM_DEFLECT__) || defined(__MMI_UCM_TRANSFER__)) */

    #ifdef __MMI_UCM_ECT__
        case SRV_UCM_INT_EXPLICIT_CALL_TRANSFER_ACT:

            /* Send action start notify */
            memset(&ect_req, 0, sizeof(srv_ucm_ect_act_req_struct));
            ect_req.first_group = first->group_id;
            ect_req.first_call_type = first->call_type;
            ect_req.second_group = other->group_id;
            ect_req.second_call_type = other->call_type;
            srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, (void *)&ect_req);

            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    (void *)&ect_req,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;
    #endif /* __MMI_UCM_ECT__ */

        case SRV_UCM_INT_END_ALL_ACT:

            /* Send action start notify */
            if (g_ucm_srv_p->call_misc.is_pending_end_act == MMI_FALSE)
            { 
                srv_ucm_send_act_notify(g_ucm_srv_p->call_misc.curr_action, op_code, SRV_UCM_ACT_NOTIFY_TYPE_START, NULL);
            }

            /* Send action request to call service */
            srv_gcall_cmhdlr_act_req(
                    first->call_type,
                    int_op_code,
                    NULL,
                    &g_ucm_srv_p->call_misc.at_info,
                    NULL,
                    rsp_callback);
            break;
    
        default:
            MMI_ASSERT(0); /* not valid op_code */
            break;
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_ucm_int_act_rsp_hdlr
 * DESCRIPTION
 *  UCM service action response handler
 * PARAMETERS
 *  op_code:         [IN]            Operation code
 *  call_type:       [IN]            Call type
 *  rsp_struct:      [IN]            Response structure
 *  user_data:       [IN]            User data
 * RETURNS
 *  void
 *****************************************************************************/
void srv_ucm_int_act_rsp_hdlr(srv_ucm_call_type_enum call_type, srv_ucm_int_act_opcode_enum int_op_code, void *rsp_struct, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_SRV_UCM_INT_ACT_RESPONSE, call_type, int_op_code);  

    if ((g_ucm_srv_p->call_misc.curr_action == SRV_UCM_NO_ACT) ||
        (g_ucm_srv_p->call_misc.end_processing_count > 0))
    {
        /* No action is performing or during end all processing */
        return;
    }

    switch (int_op_code)
    {
        case SRV_UCM_INT_DIAL_ACT:
            srv_ucm_dial_act_rsp(rsp_struct);
            break;
        case SRV_UCM_INT_ACCEPT_ACT:
            srv_ucm_accept_act_rsp(rsp_struct);
            break;
        case SRV_UCM_INT_HOLD_ACT:
        case SRV_UCM_INT_SPLIT_ACT:
        case SRV_UCM_INT_RETRIEVE_ACT:
        case SRV_UCM_INT_CONFERENCE_ACT:
    #ifdef __MMI_UCM_DEFLECT__
        case SRV_UCM_INT_DEFLECT_ACT:
    #endif /* __MMI_UCM_DEFLECT__ */
    #ifdef __MMI_UCM_TRANSFER__
        case SRV_UCM_INT_TRANSFER_ACT:
    #endif /* __MMI_UCM_TRANSFER__ */
    #ifdef __MMI_UCM_ECT__
        case SRV_UCM_INT_EXPLICIT_CALL_TRANSFER_ACT:
    #endif /* __MMI_UCM_ECT__ */
    #if (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__))
        case SRV_UCM_INT_VT_FALLTO_VOICE_ACT:
    #endif /* (defined(__OP01__) && defined(__MMI_VIDEO_TELEPHONY__)) */
            srv_ucm_act_rsp(int_op_code, rsp_struct);
            break;
        case SRV_UCM_INT_SWAP_ACT:
            srv_ucm_swap_act_rsp(rsp_struct);
            break;
        case SRV_UCM_INT_END_SINGLE_ACT:
        case SRV_UCM_INT_END_CONFERENCE_ACT:
        case SRV_UCM_INT_END_ALL_ACT:
            srv_ucm_end_act_rsp(int_op_code, rsp_struct);
            break;
        default:
            MMI_ASSERT(0); /* not valid op_code */
            break;
    }
}
#endif /* __MMI_TELEPHONY_SUPPORT__ */
