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
 *  UCMInterfaceBT.c
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM exported APIs source file
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_features.h"

#if !defined(__MMI_TELEPHONY_SUPPORT__) && !defined(__MMI_BT_DIALER_SUPPORT__)
#include "GlobalResDef.h"
#include "UCMGProt.h"
#endif /* __MMI_TELEPHONY_SUPPORT__ */

#ifdef __MMI_BT_DIALER_SUPPORT__
//#include "mmi_rp_core_ucm_def.h"
#ifdef __MMI_TELEPHONY_SUPPORT__
#include "mmi_rp_app_ucm_def.h"
#endif /* __MMI_TELEPHONY_SUPPORT__ */
#include "mmi_rp_app_ucmbt_def.h"
#include "NwInfoSrvGprot.h" /* srv_nw_info_get_protocol */
#include "MMIDataType.h"
#include "kal_general_types.h"
#include "MMI_common_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_trace.h"
#include "mmi_common_app_trc.h"
#include "string.h"
#include "kal_public_api.h"
#include "CustDataRes.h"
#include "mmi_frm_events_gprot.h"
#include "GlobalResDef.h"
#include "gui_data_types.h"
#include "AlertScreen.h"
#include "Unicodexdcl.h"
#include "mmi_frm_scenario_gprot.h"
#include "CustMenuRes.h"
#include "wgui_categories_list.h"
#include "GlobalConstants.h"
#include "mmi_frm_input_gprot.h"
#include "NetSetSrvGprot.h"
#include "NetSetAppGprot.h"
#include "SimCtrlSrvGprot.h" /* srv_sim_ctrl_get_unavailable_cause */
#include "UcmGProtBT.h"
#include "UcmProtBT.h"


mmi_ucm_bt_cntx_struct g_mmi_ucm_cntx_bt;
mmi_ucm_bt_cntx_struct *g_ucm_p_bt = &g_mmi_ucm_cntx_bt;


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init_context_bt
 * DESCRIPTION
 *  Initialize UCM app context.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_init_context_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucm_clean_all_bt();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init
 * DESCRIPTION
 *  Initialize UCM application.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_init_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_INIT_BT);
    mmi_ucm_init_context_bt();
    /* once a service handler is obtained, it should not be handled again*/
    srv_hd = srv_bt_dialer_open();
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_INIT_BT_SERVICE_HANDLER,srv_hd);
    srv_bt_dialer_register_hf_notifier(srv_hd, mmi_ucm_bt_dialer_register_hf_event);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_entry_error_message_bt
 * DESCRIPTION
 *  Error message API for applications which operations are not allowed during in-call.
 * PARAMETERS
 * 
 * RETURNS
 * 
 *****************************************************************************/
void mmi_ucm_entry_error_message_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_popup_display_ext(STR_GLOBAL_CURRENTLY_NOT_AVAILABLE, MMI_EVENT_FAILURE, NULL);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_launch_set_para
 * DESCRIPTION
 *  
 * PARAMETERS
 *  num    [IN]
 *  callback    [IN]
 *  user_data    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_call_launch_set_para(U16* num, mmi_ucm_after_make_call_callback callback, void* user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (num != NULL)
    {
        MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_SET_PARA, callback, user_data);
        memcpy(g_ucm_p_bt->disp_dtmf, num, (MMI_UCM_DTMF_LEN+2)*sizeof(U16));
        g_ucm_p_bt->after_callback = callback;
        g_ucm_p_bt->after_callback_user_data.result = SRV_UCM_RESULT_OK;
        g_ucm_p_bt->after_callback_user_data.user_data = user_data;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_launch_bt
 * DESCRIPTION
 *  PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_call_launch_bt(void )
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
  
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    SetCenterSoftkeyFunction(UI_dummy_function, KEY_EVENT_UP);
    mmi_ucs2_to_asc( (CHAR *)g_ucm_p_bt->num_uri, (CHAR *)g_ucm_p_bt->disp_dtmf);
    memset(g_ucm_p_bt->disp_dtmf, 0, sizeof(g_ucm_p_bt->disp_dtmf));
    if (mmi_ucm_dial_option_bt((CHAR *)g_ucm_p_bt->num_uri))
    {
        mmi_ucm_enter_dialling_bt();
    }
    else
    {
        if (g_ucm_p_bt->after_callback != NULL)
        {
            MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_RELEASE_INVOKE_CALLBACK,g_ucm_p_bt->after_callback,g_ucm_p_bt->after_callback_user_data.user_data);
            g_ucm_p_bt->after_callback(&g_ucm_p_bt->after_callback_user_data);
            g_ucm_p_bt->after_callback = NULL;
        }
        mmi_frm_group_close(GRP_ID_UCM_MO_SELECT);
    }
}


#ifdef __MMI_FTE_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_auto_lock_state_bt
 * DESCRIPTION
 *  get auto lock state
 * PARAMETERS
 *  void
 * RETURNS
 *  Auto lock state
 *****************************************************************************/
mmi_ucm_bt_auto_lock_state_enum mmi_ucm_get_auto_lock_state_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return g_ucm_p_bt->auto_lock_state;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_auto_lock_fsm_hdlr_bt
 * DESCRIPTION
 *  a FSM fpr auto lock mechanism. it will base on trigger event and original state and current existed calls situation
 *  to decide the next lock state
 * PARAMETERS
 *  event:     [IN] trigger event
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_auto_lock_fsm_hdlr_bt(mmi_ucm_bt_auto_lock_trigger_event_enum event)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ucm_bt_auto_lock_state_enum orig_state = g_ucm_p_bt->auto_lock_state;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_FMS_HDLR, event, orig_state);

    switch(event)
    {
        case MMI_UCM_BT_AL_OUTGOING_EVENT:
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                case  MMI_UCM_BT_WTL_STATE:     
                case  MMI_UCM_BT_LOCK_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_LOCK_STATE;
                }
                break;
                
                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break;       
        
        case  MMI_UCM_BT_AL_INCOMING_EVENT:
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE; /* Todo: phone device lock status */
                }
                break;
                
                case  MMI_UCM_BT_WTL_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE;
                }
                break;

                case  MMI_UCM_BT_LOCK_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_LOCK_STATE;
                }
                break;
                
                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break; 

        case  MMI_UCM_BT_AL_CONNECT_EVENT:
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                case  MMI_UCM_BT_WTL_STATE:
                case  MMI_UCM_BT_LOCK_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_LOCK_STATE;
                }
                break;

                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break;     

        case  MMI_UCM_BT_AL_RELEASE_EVENT:
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                {
                    if (0 == g_num_calls)
                    {
                        g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE;
                    }
                    else
                    {
                        if (mmi_ucm_query_call_count_by_call_state_bt(
                            SRV_UCM_BT_INCOMING_STATE, NULL) == 0)
                        {
                            g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_WTL_STATE;
                        }
                    }
                }
                break;
                
                case  MMI_UCM_BT_WTL_STATE:
                {
                    if (0 == g_num_calls)
                    {
                        g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE;
                    }
                }
                break;

                case  MMI_UCM_BT_LOCK_STATE:
                {
                    if (0 == g_num_calls)
                    {
                        g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE;
                    }
                    else 
                    {
                        /* Keep orig state if any call exist */                      
                    }
                }
                break;
                
                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break; 

        /* User press unlock key on call screen to unlock */
        case  MMI_UCM_BT_AL_UNLOCK_EVENT: 
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                case  MMI_UCM_BT_WTL_STATE:     
                {

                }
                break;
               
                case  MMI_UCM_BT_LOCK_STATE:
                {
                    if (mmi_ucm_query_call_count_by_call_state_bt(
                        SRV_UCM_BT_INCOMING_STATE, NULL) > 0)
                    {
                        g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_UNLOCK_STATE;
                    }
                    else
                    {
                        g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_WTL_STATE;
                    }
                }
                break;

                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break; 

        case  MMI_UCM_BT_AL_WTL_TIMEOUT_EVENT:
        {
            switch (orig_state)
            {
                case  MMI_UCM_BT_UNLOCK_STATE:
                case  MMI_UCM_BT_LOCK_STATE:
                case  MMI_UCM_BT_WTL_STATE:
                {
                    g_ucm_p_bt->auto_lock_state =  MMI_UCM_BT_LOCK_STATE;
                }
                break;
                
                default:
                {
                    MMI_ASSERT(0);
                }
                break;
            }
        }
        break;
        default:
        {
            MMI_ASSERT(0);
        }
        break;
    }    
    MMI_TRACE(MMI_COMMON_TRC_G5_CALL, TRC_MMI_UCM_BT_FTE_FMS_RESULT, g_ucm_p_bt->auto_lock_state);
}

#endif /* __MMI_FTE_SUPPORT__ */
#endif /* __MMI_BT_DIALER_SUPPORT__ */


#ifdef __MMI_UCM_BT_CALL_RECORDER__ 
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_is_in_call_bt
 * DESCRIPTION
 *  Initialize UCM app context.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_ucm_is_in_call_bt(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_BOOL is_in_call= MMI_FALSE;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(mmi_ucm_query_call_count_by_call_state_bt(SRV_UCM_BT_CALL_STATE_CONNECTED, NULL) > 0)
    {
        is_in_call = MMI_TRUE;
    }
    return is_in_call;
}
#endif/* __MMI_UCM_BT_CALL_RECORDER__*/


/* Dummy Function */
#ifndef __MMI_TELEPHONY_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init
 * DESCRIPTION
 *  Initialize UCM app context.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_end_key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_end_key(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_marker_scrn_id
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  U16
 *****************************************************************************/
U16 mmi_ucm_get_marker_scrn_id(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return GRP_ID_INVALID;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_handle_sendkeys_for_call
 * DESCRIPTION
 *  
 * PARAMETERS
 *  newCallFunc    [IN]
 *  keyevent    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_handle_sendkeys_for_call(FuncPtr newCallFunc, mmi_key_types_enum keyevent)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(keyevent)
    {
        case KEY_EVENT_UP:
            SetKeyUpHandler(newCallFunc, KEY_SEND);
            break;
        case KEY_EVENT_DOWN:
            SetKeyDownHandler(newCallFunc, KEY_SEND);
            break;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_show_aoc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL mmi_ucm_get_show_aoc(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return MMI_FALSE;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_app_make_call
 * DESCRIPTION
 *  
 * PARAMETERS
 *  call_type    [IN]
 *  num_uri    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_app_make_call(mmi_ucm_call_type_enum call_type, U8 *num_uri)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ucm_make_call_para_struct make_call_para;
        
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_ucm_init_call_para(&make_call_para);  
    make_call_para.dial_type = (srv_ucm_call_type_enum)call_type;
    make_call_para.ucs2_num_uri = (U16*)num_uri;
    mmi_ucm_call_launch(0, &make_call_para);
    return;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_get_error_info
 * DESCRIPTION
 *  
 * PARAMETERS
 *  error_result    [IN]
 *  popup_type    [IN]
 * RETURNS
 *  MMI_STR_ID
 *****************************************************************************/
MMI_STR_ID mmi_ucm_get_error_info(S32 error_result, mmi_event_notify_enum* popup_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    *popup_type = MMI_EVENT_FAILURE;
    return STR_GLOBAL_CURRENTLY_NOT_AVAILABLE_IN_CALL;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init_call_para_for_sendkey
 * DESCRIPTION
 *  
 * PARAMETERS
 *  make_call_para    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_init_call_para_for_sendkey(mmi_ucm_make_call_para_struct *make_call_para)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(make_call_para, 0, sizeof(mmi_ucm_make_call_para_struct));
    return;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_init_call_para
 * DESCRIPTION
 * initialize make call parameter. The default value is for common use 
 * PARAMETERS
 *  make_call_para:            [IN]      Make call parameter.
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_ucm_init_call_para(mmi_ucm_make_call_para_struct *make_call_para)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(make_call_para, 0, sizeof(mmi_ucm_make_call_para_struct));   
    make_call_para->dial_type = SRV_UCM_CALL_TYPE_NO_DATA_CSD;
    return;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_ucm_call_launch
 * DESCRIPTION
 *  
 * PARAMETERS
 *  caller_gid    [IN]
 *  make_call_para    [IN]
 * RETURNS
 *  U16
 *****************************************************************************/
U16 mmi_ucm_call_launch(U16 caller_gid, mmi_ucm_make_call_para_struct *make_call_para)
{
#ifdef __MMI_BT_DIALER_SUPPORT__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ucm_after_make_call_cb_struct make_call_cb;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (srv_bt_cm_is_profile_connected(SRV_BT_CM_HSP_CONNECTION))
    {
        mmi_ucm_call_launch_set_para(make_call_para->ucs2_num_uri, 
                                    make_call_para->adv_para.after_make_call_callback,
                                    make_call_para->adv_para.after_callback_user_data);
        mmi_ucm_call_launch_bt();
    }
    else
    {
        mmi_popup_display_ext(STR_GLOBAL_CURRENTLY_NOT_AVAILABLE, MMI_EVENT_FAILURE, NULL);
        if (make_call_para->adv_para.after_make_call_callback != NULL)
        {
            make_call_cb.result = SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL;
            make_call_cb.user_data = make_call_para->adv_para.after_callback_user_data;
            make_call_para->adv_para.after_make_call_callback(&make_call_cb);
        }
    }
#endif /* __MMI_BT_DIALER_SUPPORT__ */

    return GRP_ID_INVALID;
}
#endif /* __MMI_TELEPHONY_SUPPORT__ */


