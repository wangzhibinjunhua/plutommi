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
 * BTMMIAVRCP.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is for Bluetooth AVRCP MMI application
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
//#include "MMI_include.h"
#include "MMI_features.h"
#if (defined(__MMI_AVRCP_SUPPORT__) || defined(__MMI_AVRCP_CT_SUPPORT__))
/***************************************************************************** 
* Included files
*****************************************************************************/
//#include "ProtocolEvents.h"
#if defined(__MMI_TOUCH_SCREEN__)
#endif
/* Trace Header Files */

/* avrcp header files */
#include "bt_avrcp_struct.h"
#include "bt_avrcp.h"
#include "bt_adp_avrcp.h"
#include "BtcmSrvGprot.h"
#include "BTMMIAVRCPGProt.h"

#ifdef __MMI_A2DP_SUPPORT__
//#include "av_bt.h"
#endif

#include "mmi_rp_srv_avrcp_def.h"

#include "AvrcpSrv.h"
#include "AvrcpSrvGprot.h"
#include "A2dpSrv.h"

#include "MMIDataType.h"
#include "kal_general_types.h"
#include "mmi_conn_app_trc.h"
#include "DebugInitDef_Int.h"
#include "kal_trace.h"
#include "kal_public_api.h"
#include "stack_msgs.h"
#include "mmi_frm_events_gprot.h"
#include "stack_config.h"
#include "TimerEvents.h"
#include "wgui_categories_list.h"
#include "mmi_frm_timer_gprot.h"

/***************************************************************************** 
* External Variable
*****************************************************************************/

/***************************************************************************** 
* Globol Variable
*****************************************************************************/
/*
* Target global context, use channel 0
* Controller global context, use channel 1
*/
#ifndef __BT_SPEAKER_SUPPORT__
static const srv_bt_cm_profile_struct g_avrcp_tg_prof = {
    SRV_BT_CM_AV_REMOTE_CONTROL_TARGET_UUID,
    srv_avrcp_activate_tg_req,
    srv_avrcp_deactivate_tg_req,
    srv_avrcp_disconnect_tg_req,
};
#endif /*__BT_SPEAKER_SUPPORT__*/

static const srv_bt_cm_profile_struct g_avrcp_ct_prof = {
    SRV_BT_CM_AV_REMOTE_CONTROL_UUID,
    srv_avrcp_activate_ct_req,
    srv_avrcp_deactivate_ct_req,
    srv_avrcp_disconnect_ct_req
};

static const srv_bt_cm_profile_struct g_avrcp_tg_ct_prof = {
    SRV_BT_CM_AV_REMOTE_CONTROL_UUID,
    srv_avrcp_activate_tg_ct_req,
    srv_avrcp_deactivate_tg_ct_req,
    srv_avrcp_disconnect_tg_ct_req
};

static mmi_avrcp_cntx_struct g_mmi_avrcp_cntx[BT_AVRCP_MAX_CHANNEL] = { 0 };    /* MAUI_03482031 */
static srv_avrcp_connect_ind_struct g_srv_avrcp_conn_ind_cntx;
static S32 g_srv_avrcp_role = -1;

#define BT_AVRCP_MAX_CALLBACK_NUM 2
static AVRCP_SRV_CMD_CALLBACK g_mmi_avrcp_cmd_func_ptr_list[BT_AVRCP_MAX_CALLBACK_NUM]; /* at most 2 func ptr */
static AVRCP_SRV_CONNECT_NOTIFY_A2DP_CALLBACK g_srv_avrcp_conn_notify_a2dp_ptr = NULL;
static S32 g_mmi_avrcp_cmd_func_ptr_count = 0 ; /* at most 2 func ptr */
static MMI_BOOL g_mmi_avrcp_disconnect_from_av_bt = MMI_FALSE; /* indicate if it is disconnect from a2dp actuvely disconnection*/

static U8 g_mmi_avrcp_last_pressed_cmd = 0xff; /* last pressed command, 0xff is a non spec command value to identify there is no command */
static U8 g_mmi_avrcp_pressed_cmd_count = 0 ;  /* to accumulate total pressed cmd numer with the same av/c command */
static MMI_BOOL g_mmi_avrcp_frm_blocked = MMI_FALSE ;  /* framework keypad / touch blocked */

#if defined(__BT_SPEAKER_SUPPORT__) || defined(__MMI_AVRCP_CT_SUPPORT__)
static AVRCP_SRV_CMD_CNF_CALLBACK g_mmi_avrcp_cmd_cnf_ptr;
static void srv_avrcp_sink_timer_callback(U16 op_code, U8 command_type, BOOL key_press);
static void srv_avrcp_ct_set_cmd_frame_cnf_hdlr(AVRCP_SRV_CMD_CNF_CALLBACK callback_func);
extern void srv_avrcp_sink_send_cmd_frame(S32 cmd_frame);
#endif /*__BT_SPEAKER_SUPPORT__,__MMI_AVRCP_CT_SUPPORT__*/

#ifdef __MMI_EM_BT_AVRCP_CONNECT_TG_ACTIVELY__
static MMI_BOOL g_mmi_avrcp_actively_connect_tg = MMI_FALSE;
#endif
#ifdef  SRV_A2DP_SINK_BT_AVRCP_CONNECT_CT_ACTIVELY__
static MMI_BOOL g_mmi_avrcp_actively_connect_ct = MMI_FALSE;
#endif

#ifdef __MMI_BT_AVRCP_V13__
void mmi_dummy_srv_avrcp_register_event(srv_avrcp_event_enum event_id,srv_avrcp_result_union result);
void srv_avrcp_sdp_query_req(U8 connect_id);
#endif

/***************************************************************************** 
* External Functions
*****************************************************************************/

/***************************************************************************** 
* Functions
*****************************************************************************/

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_cmd_hdlr
 * DESCRIPTION
 *  This function is to get the latest register cmd hdlr ptr
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static AVRCP_SRV_CMD_CALLBACK srv_avrcp_get_cmd_hdlr_func_ptr(void)
{
    S32 i = g_mmi_avrcp_cmd_func_ptr_count;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_GET_CMD_HDLR_FUNC_HDLR, i);

    if (i == 0)
    {
        return NULL;
    }

    ASSERT(i <= BT_AVRCP_MAX_CALLBACK_NUM);

    return g_mmi_avrcp_cmd_func_ptr_list[i - 1];
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_init
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_INIT);

    /* MAUI_03482031 clear cm conn */
    for (i = 0; i < BT_AVRCP_MAX_CHANNEL; i++)
    {
        if (g_mmi_avrcp_cntx[i].cmgr_id > 0);
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_INIT_CLEAR_CONN, i, g_mmi_avrcp_cntx[i].cmgr_id);
            srv_bt_cm_stop_conn(g_mmi_avrcp_cntx[i].cmgr_id);
            g_mmi_avrcp_cntx[i].cmgr_id = 0;
        }
    }
    
    srv_avrcp_init_event_handler();
    #ifdef __MMI_BT_AVRCP_V13__
        srv_avrcpv13_init_event_handler();
    #endif

#ifdef __BT_DIALER_SUPPORT__
    srv_bt_cm_profile_register(&g_avrcp_tg_ct_prof);
#else
    #ifndef __BT_SPEAKER_SUPPORT__
    srv_bt_cm_profile_register(&g_avrcp_tg_prof);
    #else
    srv_bt_cm_profile_register(&g_avrcp_ct_prof);
    #endif //__BT_SPEAKER_SUPPORT__
#endif

    for (i = 0; i < BT_AVRCP_MAX_CHANNEL; i++)
    {
        memset(&g_mmi_avrcp_cntx[i], 0, sizeof(g_mmi_avrcp_cntx[i]));
        MMI_AVRCP_STATE_TRANS(i, SRV_AVRCP_IDLE);
        g_mmi_avrcp_cntx[i].is_timer_on = 0;
        g_mmi_avrcp_cntx[i].cmd_frame = 0;        
        
    #ifdef __MMI_BT_AVRCP_V13__
        g_mmi_avrcp_cntx[i].intermediate_attr_state = SRV_AVRCP_LIST_PLAYER_INITIAL;
    #endif
        /*03466127 */
        g_mmi_avrcp_cntx[i].connect_id = 0xFF;
    }

    /* init conn ind context */
    /* MAUI_03477134 */
    memset(&g_srv_avrcp_conn_ind_cntx, 0, sizeof(srv_avrcp_connect_ind_struct));
    g_srv_avrcp_conn_ind_cntx.connect_id = 0xFF;
    
    #ifdef __BT_SPEAKER_SUPPORT__
        srv_a2dp_sink_reg_cb_err_evts(srv_avrcp_sink_send_cmd_frame);
    #endif
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_init_event_handler
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_init_event_handler(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_INIT_EVENT_HDLR);

    SetProtocolEventHandler(srv_avrcp_activate_cnf_hdlr, MSG_ID_BT_AVRCP_ACTIVATE_CNF);
    SetProtocolEventHandler(srv_avrcp_deactivate_cnf_hdlr, MSG_ID_BT_AVRCP_DEACTIVATE_CNF);
    SetProtocolEventHandler(srv_avrcp_connect_cnf_hdlr, MSG_ID_BT_AVRCP_CONNECT_CNF);
    SetProtocolEventHandler(srv_avrcp_connect_ind_hdlr, MSG_ID_BT_AVRCP_CONNECT_IND);
    SetProtocolEventHandler(srv_avrcp_disconnect_cnf_hdlr, MSG_ID_BT_AVRCP_DISCONNECT_CNF);
    SetProtocolEventHandler(srv_avrcp_disconnect_ind_hdlr, MSG_ID_BT_AVRCP_DISCONNECT_IND);

    SetProtocolEventHandler(srv_avrcp_cmd_frame_cnf_hdlr, MSG_ID_BT_AVRCP_CMD_FRAME_CNF);
    SetProtocolEventHandler(srv_avrcp_cmd_frame_ind_hdlr, MSG_ID_BT_AVRCP_CMD_FRAME_IND);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_profile_id
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  role
 * RETURNS
 *  void
 *****************************************************************************/
static U32 srv_avrcp_get_profile_id(U8 role)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 profile_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __BT_DIALER_SUPPORT__
    profile_id = SRV_BT_CM_AV_REMOTE_CONTROL_UUID;
#else
    if (role == BT_AVRCP_CT)
    {
        profile_id = SRV_BT_CM_AV_REMOTE_CONTROL_UUID;
    }
    else
    {
        profile_id = SRV_BT_CM_AV_REMOTE_CONTROL_TARGET_UUID;
    }
#endif

    return profile_id;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_activate_tg_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_activate_tg_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_activate_req(BT_AVRCP_TG);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_activate_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_activate_ct_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_activate_req(BT_AVRCP_CT);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_activate_tg_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_activate_tg_ct_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_activate_req(BT_AVRCP_TG_CT);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_find_channel_by_connect_id
 * DESCRIPTION
 *  This function is to find channel by connect id
 * PARAMETERS
 *  connect_id     :   [IN]      connect id
 * RETURNS
 *  S32
 *****************************************************************************/
static S32 srv_avrcp_find_channel_by_connect_id(U8 connect_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_avrcp_cntx_struct *cntx_ptr = NULL;
    U32 i = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    for (i = 0; i < BT_AVRCP_MAX_CHANNEL; ++i)
    {
        cntx_ptr = &g_mmi_avrcp_cntx[i]; 
        
        if (cntx_ptr->connect_id == connect_id)
        {
            return i;
        }
    }    

    return -1;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_find_channel_by_connect_id
 * DESCRIPTION
 *  This function is to find channel by device addr
 * PARAMETERS
 *  bt_addr     :   [IN]      device addr
 * RETURNS
 *  S32
 *****************************************************************************/
static S32 srv_avrcp_find_channel_by_device_addr(bt_avrcp_dev_addr_struct *bt_addr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_avrcp_cntx_struct *cntx_ptr = NULL;
    U32 i = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    for (i = 0; i < BT_AVRCP_MAX_CHANNEL; ++i)
    {
        cntx_ptr = &g_mmi_avrcp_cntx[i]; 
        
        if (cntx_ptr->device_addr.lap == bt_addr->lap &&
            cntx_ptr->device_addr.nap == bt_addr->nap &&
            cntx_ptr->device_addr.uap == bt_addr->uap)
        {
            return i;
        }
    }    

    return -1;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_find_channel_by_role
 * DESCRIPTION
 *  This function is to find channel by role
 * PARAMETERS
 *  bt_addr     :   [IN]      device addr
 * RETURNS
 *  S32
 *****************************************************************************/
static S32 srv_avrcp_find_channel_by_role(U8 role)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_avrcp_cntx_struct *cntx_ptr = NULL;
    U32 i = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    for (i = 0; i < BT_AVRCP_MAX_CHANNEL; ++i)
    {
        cntx_ptr = &g_mmi_avrcp_cntx[i]; 
        
        if (cntx_ptr->avrcp_role == role)
        {
            return i;
        }
    }    

    return -1;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_activate_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  avrcp_role      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_activate_req(U8 avrcp_role)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_ACTIVATE_REQ);
    
    MMI_AVRCP_LOG_STATE(BT_AVRCP_TG);
    MMI_AVRCP_LOG_STATE(BT_AVRCP_CT);

    MMI_AVRCP_ASSERT(avrcp_role == BT_AVRCP_TG || 
                     avrcp_role == BT_AVRCP_CT || 
                     avrcp_role == BT_AVRCP_TG_CT);

    if ((MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) != SRV_AVRCP_IDLE) ||
        (MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) != SRV_AVRCP_IDLE))
    {
        return;
    }

    g_mmi_avrcp_cntx[BT_AVRCP_TG].avrcp_role = BT_AVRCP_TG;    
    g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_role = BT_AVRCP_CT;

    /* Currently two channels, use role value as channel number */
    bt_avrcp_send_activate_req(MOD_MMI, avrcp_role);

    MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_ACTIVATING);    
    MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_ACTIVATING);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_activate_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_activate_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_activate_cnf_struct *msg_p = (bt_avrcp_activate_cnf_struct*) msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_ACTIVATE_CNF_HDLR);

    if (msg_p->result == BT_AVRCP_RESULT_SUCCESS)
    {
        if (MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_ACTIVATING)
        {
            MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_ACTIVATED);

            if (g_mmi_avrcp_cntx[BT_AVRCP_TG].avrcp_role == BT_AVRCP_TG)
            {
                //srv_bt_cm_activate_cnf_hdler(SRV_BT_CM_AV_REMOTE_CONTROL_TARGET_UUID);
                srv_bt_cm_activate_cnf_hdler(srv_avrcp_get_profile_id(BT_AVRCP_TG));
            }
        }

        if (MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_ACTIVATING)
        {
            MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_ACTIVATED);

            if (g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_role == BT_AVRCP_CT)
            {
                //srv_bt_cm_activate_cnf_hdler(SRV_BT_CM_AV_REMOTE_CONTROL_UUID);
                srv_bt_cm_activate_cnf_hdler(srv_avrcp_get_profile_id(BT_AVRCP_CT));
            }
        }
    }
    else /* Should not activate fail*/
    {
        MMI_AVRCP_ASSERT(0);
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_deactivate_tg_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_deactivate_tg_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_deactivate_req(BT_AVRCP_TG);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_deactivate_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_deactivate_ct_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_deactivate_req(BT_AVRCP_CT);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_deactivate_tg_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_deactivate_tg_ct_req(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_deactivate_req(BT_AVRCP_TG_CT);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_deactivate_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_deactivate_req(U8 avrcp_chnl)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DEACTIVATE_REQ);

    MMI_AVRCP_LOG_STATE(BT_AVRCP_TG);
    MMI_AVRCP_LOG_STATE(BT_AVRCP_CT);

    /* TG */
    if (MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_ACTIVATED ||
        MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_CONNECTING)
    {
        bt_avrcp_send_deactivate_req(MOD_MMI);
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_DEACTIVATING);
    }
    /* If in connected state, need to disconnect in advance */
    else if (MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_CONNECTED)
    {
        bt_avrcp_send_disconnect_req(MOD_MMI, g_mmi_avrcp_cntx[BT_AVRCP_TG].connect_id);
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_DEACTIVATING);
    }
    /* Wait connect / disconnect response to deactivate AVRCP */
    else if (MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_DISCONNECTING ||
             MMI_AVRCP_CTX(BT_AVRCP_TG, avrcp_state) == SRV_AVRCP_CONNECTING)
    {
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_DEACTIVATING);
    }

    /* CT */
    if (MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_ACTIVATED ||
        MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_ACTIVATING)
    {
        bt_avrcp_send_deactivate_req(MOD_MMI);
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_DEACTIVATING);
    }
    /* If in connected state, need to disconnect in advance */
    else if (MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_CONNECTED)
    {
        bt_avrcp_send_disconnect_req(MOD_MMI, g_mmi_avrcp_cntx[BT_AVRCP_CT].connect_id);
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_DEACTIVATING);
    }
    /* Wait connect / disconnect response to deactivate AVRCP */
    else if (MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_DISCONNECTING ||
             MMI_AVRCP_CTX(BT_AVRCP_CT, avrcp_state) == SRV_AVRCP_CONNECTING)
    {
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_DEACTIVATING);
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_deactivate_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_deactivate_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_deactivate_cnf_struct *msg_p = (bt_avrcp_deactivate_cnf_struct*) msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DEACTIVATE_CNF_HDLR, msg_p->result);

    if (msg_p->result == BT_AVRCP_RESULT_SUCCESS)
    {
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_TG, SRV_AVRCP_IDLE);
        MMI_AVRCP_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_IDLE);

        if (g_mmi_avrcp_cntx[BT_AVRCP_TG].avrcp_role == BT_AVRCP_TG)
        {
            //srv_bt_cm_deactivate_cnf_hdler(SRV_BT_CM_AV_REMOTE_CONTROL_TARGET_UUID);
            srv_bt_cm_deactivate_cnf_hdler(srv_avrcp_get_profile_id(BT_AVRCP_TG));
        }

        if (g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_role == BT_AVRCP_CT)
        {
            //srv_bt_cm_deactivate_cnf_hdler(SRV_BT_CM_AV_REMOTE_CONTROL_UUID);
            srv_bt_cm_deactivate_cnf_hdler(srv_avrcp_get_profile_id(BT_AVRCP_CT));
        }
    }
    /* MAUI_03477996 */
    else
    {
        /* Should not deactivate fail */
        //MMI_AVRCP_ASSERT(0);
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_tg_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_tg_req(srv_bt_cm_bt_addr dev_addr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_connect_req(BT_AVRCP_TG, dev_addr);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_ct_req(srv_bt_cm_bt_addr dev_addr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_avrcp_connect_req(BT_AVRCP_CT, dev_addr);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  dev_addr        [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_req(U8 role, srv_bt_cm_bt_addr dev_addr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_dev_addr_struct bt_addr;
    U32 profile_id = 0;
    S32 cmgr_id;
    S32 chnl_num = srv_avrcp_find_channel_by_role(role);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CONNECT_REQ, role, chnl_num, g_srv_avrcp_conn_ind_cntx.connect_id);   
    MMI_AVRCP_ASSERT(chnl_num >= 0 && chnl_num < BT_AVRCP_MAX_CHANNEL);  
    MMI_AVRCP_LOG_STATE(chnl_num);

    /* MAUI_03458213 [BT Dialer v2.2][1] Assert fail: Caller Address: 0xf0592c4a Line: 2620 - MMI File: plutommi\Service\AvrcpSrv\AvrcpSrv.c
       if connected, reconnect request will lead cnf hdlr again and clear connect_id to 0 */
    if (g_mmi_avrcp_cntx[chnl_num].avrcp_state == SRV_AVRCP_CONNECTING || 
        g_mmi_avrcp_cntx[chnl_num].avrcp_state == SRV_AVRCP_CONNECTED || 
        g_srv_avrcp_conn_ind_cntx.connect_id != 0xFF)
    {
        return;
    }
    
    profile_id = srv_avrcp_get_profile_id(role);
    cmgr_id = srv_bt_cm_start_conn(MMI_FALSE, profile_id, &dev_addr, NULL);
    g_mmi_avrcp_cntx[chnl_num].cmgr_id = cmgr_id;
   
    bt_addr.lap = dev_addr.lap;
    bt_addr.uap = dev_addr.uap;
    bt_addr.nap = dev_addr.nap;

    g_mmi_avrcp_cntx[chnl_num].device_addr = bt_addr;
    bt_avrcp_send_connect_req(MOD_MMI, &bt_addr, role);

    MMI_AVRCP_STATE_TRANS(chnl_num, SRV_AVRCP_CONNECTING);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_notify_a2dp
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  is_connected     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
static void srv_avrcp_notify_a2dp_connect_result(MMI_BOOL is_connected)
{
    if (g_srv_avrcp_conn_notify_a2dp_ptr)
    {
        (*g_srv_avrcp_conn_notify_a2dp_ptr)(is_connected);
        g_srv_avrcp_conn_notify_a2dp_ptr = NULL;
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_connect_cnf_struct *msg_p = (bt_avrcp_connect_cnf_struct*)msg;
    S32 avrcp_chnl;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* can only get channel num by device addr */
    avrcp_chnl = srv_avrcp_find_channel_by_device_addr(&(msg_p->device_addr));

    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_CONNECT_CNF_HDLR, 
              msg_p->result, 
              avrcp_chnl);
    
    /* MAUI_03477996 */
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }

    switch (MMI_AVRCP_CTX(avrcp_chnl, avrcp_state))
    {
        case SRV_AVRCP_CONNECTING:
        {
            /* Change state when connect success */
            if (msg_p->result == BT_AVRCP_RESULT_SUCCESS)
            {
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id = msg_p->connect_id;
                
                MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_CONNECTED);
                g_mmi_avrcp_last_pressed_cmd = 0xff;
                g_mmi_avrcp_pressed_cmd_count = 0;
                srv_bt_cm_connect_ind(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
                #ifdef __BT_SPEAKER_SUPPORT__
                srv_avrcp_ct_set_cmd_frame_cnf_hdlr((AVRCP_SRV_CMD_CNF_CALLBACK)srv_avrcp_sink_timer_callback);
                #endif //__BT_SPEAKER_SUPPORT__

                #ifdef __MMI_BT_AVRCP_V13__
                g_mmi_avrcp_cntx[avrcp_chnl].event = 0;
                
                /* must open dev after connect cnf, or connect id will be invalid */
                if (g_mmi_avrcp_cntx[avrcp_chnl].version >= SRV_AVRCP_VERSION_V13)
                {
                    srv_avrcp_open_dev(BT_AVRCP_CT);
                }
                
                #endif /*__MMI_BT_AVRCP_V13__*/
            }
            /* Connect fail */
            else
            {
                /*03466127 */
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id = 0xFF;
                
                MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_ACTIVATED);
                srv_bt_cm_stop_conn(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
                g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id = 0;
            }

            /* notify a2dp avrcp connect has finished */
            srv_avrcp_notify_a2dp_connect_result(g_mmi_avrcp_cntx[avrcp_chnl].avrcp_state == SRV_AVRCP_CONNECTED);
            break;
        }
        
        case SRV_AVRCP_DISCONNECTING:
        {
            break;
        }

        case SRV_AVRCP_DEACTIVATING:
        {
            bt_avrcp_send_deactivate_req(MOD_MMI);
            break;
        }

        default:
        {
            MMI_AVRCP_LOG_STATE_ERR(avrcp_chnl);
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_a2dp_role
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  role     [?]     
 * RETURNS
 *  S32
 *****************************************************************************/
static S32 srv_avrcp_get_a2dp_role(U8 role)
{
    switch (role)
    {
        case BT_A2DP_SINK:
        {
            return BT_AVRCP_CT;
        }

        case BT_A2DP_SOURCE:
        {
            return BT_AVRCP_TG;
        }

        default:
        {
            return -1;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_ind_hdlr_int
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  role     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_ind_hdlr_int(S32 role, srv_avrcp_connect_ind_struct *conn_ind_struct)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 avrcp_chnl;
    U32 profile_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_CONNECT_IND_HDLR_INT, 
              role, 
              -1, 
              conn_ind_struct->connect_id);

    /* error role handle */
    do
    {
        /* remember avrcp role */
        g_srv_avrcp_role = role;
        
        if (role == -1)
        {
            /* a2dp callback wrong role, avrcp should be error state */
            /* MAUI_03477134 */
            if (conn_ind_struct->connect_id != 0xFF)
            {
                /* disconnect avrcp channel */
                bt_avrcp_send_disconnect_req(MOD_MMI, conn_ind_struct->connect_id);

                /* notify a2dp error */
                srv_avrcp_notify_a2dp_connect_result(MMI_FALSE);

                break;
            }
            /* not ind connect */
            else
            {
                return;
            }        
        }
        
        avrcp_chnl = srv_avrcp_find_channel_by_role((U8)role);
        MMI_TRACE(MMI_CONN_TRC_G7_BT, 
                  MMI_AVRCP_TRC_CONNECT_IND_HDLR_INT, 
                  role, 
                  avrcp_chnl, 
                  conn_ind_struct->connect_id);

        MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
        
        switch (MMI_AVRCP_CTX(avrcp_chnl, avrcp_state))
        {
            case SRV_AVRCP_ACTIVATED:
            case SRV_AVRCP_CONNECTING:
            {
                g_mmi_avrcp_cntx[avrcp_chnl].device_addr = conn_ind_struct->device_addr;
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id = conn_ind_struct->connect_id;
                MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_CONNECTED);
                g_mmi_avrcp_last_pressed_cmd = 0xff;
                g_mmi_avrcp_pressed_cmd_count = 0;

                profile_id = srv_avrcp_get_profile_id(role);

                /* stop conn to reset cm state to idle */
                if (g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id > 0)
                {
                    srv_bt_cm_stop_conn(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
                    g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id = 0;
                }
                
                g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id = srv_bt_cm_start_conn(MMI_TRUE, profile_id, (srv_bt_cm_bt_addr*)&conn_ind_struct->device_addr, NULL);

                srv_bt_cm_connect_ind(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
                #ifdef __BT_SPEAKER_SUPPORT__
                srv_avrcp_ct_set_cmd_frame_cnf_hdlr((AVRCP_SRV_CMD_CNF_CALLBACK)srv_avrcp_sink_timer_callback);
                #endif //__BT_SPEAKER_SUPPORT__
                
                #ifdef __MMI_BT_AVRCP_V13__
                g_mmi_avrcp_cntx[avrcp_chnl].event = 0;
                srv_avrcp_sdp_query_req(conn_ind_struct->connect_id);
                #endif //__MMI_BT_AVRCP_V13__

                /* notify a2dp avrcp connect has finished */
                srv_avrcp_notify_a2dp_connect_result(g_mmi_avrcp_cntx[avrcp_chnl].avrcp_state == SRV_AVRCP_CONNECTED);
                
                break;
            }
            
            default:
            {
                MMI_AVRCP_LOG_STATE_ERR(avrcp_chnl);
                break;
            }
        }
    } while(0);
    
    /* reset ind connect context */
    memset(conn_ind_struct, 0, sizeof(srv_avrcp_connect_ind_struct));
    /* MAUI_03477134 */
    conn_ind_struct->connect_id = 0xFF;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_ind_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_connect_ind_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_connect_ind_struct *msg_p = (bt_avrcp_connect_ind_struct*)msg;
    S32 role;
    srv_bt_cm_bt_addr bt_addr;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    bt_addr.lap = msg_p->device_addr.lap;
    bt_addr.nap = msg_p->device_addr.nap;
    bt_addr.uap = msg_p->device_addr.uap;

    // MAUI_03493598
    #ifdef __BT_SPEAKER_SUPPORT__
        role = srv_avrcp_get_a2dp_role(srv_a2dp_get_role(&bt_addr));
    #else
        role = BT_AVRCP_TG;
    #endif
    
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CONNECT_IND_HDLR, msg_p->connect_id, role);
    g_srv_avrcp_conn_ind_cntx.connect_id = msg_p->connect_id;
    g_srv_avrcp_conn_ind_cntx.device_addr = msg_p->device_addr;
    
    /* role has confirmed, directly call ind process */
    if (role == BT_AVRCP_CT || role == BT_AVRCP_TG)
    {
        srv_avrcp_connect_ind_hdlr_int((U8)role, &g_srv_avrcp_conn_ind_cntx);
    } 
    /* else wait for ad2p to certain avrcp role */
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_from_a2dp
 * DESCRIPTION
 *  to set the flag of disconnect avrcp from av_bt, 
 *  so that we can judge if we shall inform cm for disconnect ind or cnf
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_from_a2dp(MMI_BOOL set)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DISCONNECT_FROM_AVBT,g_mmi_avrcp_disconnect_from_av_bt,set);

    g_mmi_avrcp_disconnect_from_av_bt = set;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_tg_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_tg_req(U32 cmgr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 avrcp_chnl = srv_avrcp_find_channel_by_role(BT_AVRCP_TG);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DISCONNECT_TG_REQ, avrcp_chnl);
    
    /* MAUI_03481964 */
    g_srv_avrcp_role = BT_AVRCP_TG;
    
    srv_avrcp_disconnect_req(
        avrcp_chnl, 
        *((srv_bt_cm_bt_addr *)&g_mmi_avrcp_cntx[avrcp_chnl].device_addr),
        cmgr_id);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_ct_req(U32 cmgr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 avrcp_chnl = srv_avrcp_find_channel_by_role(BT_AVRCP_CT);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DISCONNECT_CT_REQ, avrcp_chnl);

    /* MAUI_03481964 */
    g_srv_avrcp_role = BT_AVRCP_CT;
    
    srv_avrcp_disconnect_req(
        avrcp_chnl, 
        *((srv_bt_cm_bt_addr *)&g_mmi_avrcp_cntx[avrcp_chnl].device_addr),
        cmgr_id);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_tg_ct_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_tg_ct_req(U32 cmgr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 role = g_srv_avrcp_role;
    S32 avrcp_chnl = srv_avrcp_find_channel_by_role(role);

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DISCONNECT_TG_CT_REQ, role, avrcp_chnl);

    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
   
    srv_avrcp_disconnect_req(
        avrcp_chnl, 
        *((srv_bt_cm_bt_addr *)&g_mmi_avrcp_cntx[avrcp_chnl].device_addr),
        cmgr_id);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  dev_addr        [IN]  
 *  connect_id      [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_req(U8 avrcp_chnl, srv_bt_cm_bt_addr dev_addr, U32 cmgr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
    
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_DISCONNECT_REQ, 
              avrcp_chnl,
              g_mmi_avrcp_cntx[avrcp_chnl].connect_id);
    
    MMI_AVRCP_LOG_STATE(avrcp_chnl);

    if (MMI_AVRCP_CTX(avrcp_chnl,avrcp_state) == SRV_AVRCP_CONNECTED ||
        MMI_AVRCP_CTX(avrcp_chnl,avrcp_state) == SRV_AVRCP_CONNECTING)
    {
        /* MAUI_03477996 */
        if (g_mmi_avrcp_cntx[avrcp_chnl].connect_id != 0xFF)
        {
            /* MAUI_03481964 */
            g_srv_avrcp_role = avrcp_chnl;
            
            bt_avrcp_send_disconnect_req(MOD_MMI, g_mmi_avrcp_cntx[avrcp_chnl].connect_id);
            MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_DISCONNECTING);
        }
    }
    else
    {
        srv_avrcp_disconnect_from_a2dp(MMI_FALSE);
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_disconnect_cnf_struct *msg_p = (bt_avrcp_disconnect_cnf_struct*) msg;
    S32 avrcp_chnl;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_DISCONNECT_CNF_HDLR, 
              msg_p->connect_id, 
              avrcp_chnl,
              g_srv_avrcp_role);

    /* MAUI_03481964 */
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        if (g_srv_avrcp_role < 0 || g_srv_avrcp_role >= BT_AVRCP_MAX_CHANNEL)
        {
            return;
        }

        avrcp_chnl = g_srv_avrcp_role;
    }

    //if (msg_p->result != BT_AVRCP_RESULT_SUCCESS)
    //{
    //    return;
    //}  
    //MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
    
    srv_avrcp_disconnect_from_a2dp(MMI_FALSE);

    switch (MMI_AVRCP_CTX(avrcp_chnl, avrcp_state))
    {
        case SRV_AVRCP_DISCONNECTING:
        {
            /* MAUI_03477134 */
            g_mmi_avrcp_cntx[avrcp_chnl].connect_id = 0xFF;
            
            MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_ACTIVATED);

            srv_bt_cm_stop_conn(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
            g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id = 0;
            #ifdef __MMI_BT_AVRCP_V13__
                srv_avrcp_close_dev(BT_AVRCP_CT);
            #endif
            break;
        }

        case SRV_AVRCP_DEACTIVATING:
        {
            bt_avrcp_send_deactivate_req(MOD_MMI);
            break;
        }

        default:
        {
            MMI_AVRCP_LOG_STATE_ERR(avrcp_chnl);
            break;
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_ind_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_disconnect_ind_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_disconnect_ind_struct *msg_p = (bt_avrcp_disconnect_ind_struct*)msg;
    S32 avrcp_chnl;
    AVRCP_SRV_CMD_CALLBACK func_ptr;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_DISCONNECT_IND_HDLR, msg_p->connect_id, avrcp_chnl);

    /* reset ind connect context */
    /* MAUI_03477134 */
    if (g_srv_avrcp_conn_ind_cntx.connect_id != 0xFF)
    {
        memset(&g_srv_avrcp_conn_ind_cntx, 0, sizeof(srv_avrcp_connect_ind_struct));
        g_srv_avrcp_conn_ind_cntx.connect_id = 0xFF;
    }
    
    /* [MAUI_03457845] BT reset will lead init flow, profile will send disconnect ind
        but chnl is unknown after init flow */
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
    
    srv_avrcp_disconnect_from_a2dp(MMI_FALSE);

    /* Change to activated state if not in idle state */
    if (MMI_AVRCP_CTX(avrcp_chnl, avrcp_state) > SRV_AVRCP_IDLE)
    {
        /* MAUI_03477134 */
        g_mmi_avrcp_cntx[avrcp_chnl].connect_id = 0xFF;
        
        srv_bt_cm_stop_conn(g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id);
        g_mmi_avrcp_cntx[avrcp_chnl].cmgr_id = 0;

        MMI_AVRCP_STATE_TRANS(avrcp_chnl, SRV_AVRCP_ACTIVATED);

        /*to handle the button down cancel action*/
        if ((func_ptr = srv_avrcp_get_cmd_hdlr_func_ptr()) != NULL && g_mmi_avrcp_last_pressed_cmd != 0xff)
        {
            func_ptr(g_mmi_avrcp_last_pressed_cmd, (srv_avrcp_key_events)MMI_AVRCP_KEY_CANCELED);
            g_mmi_avrcp_last_pressed_cmd = 0xff;
            g_mmi_avrcp_pressed_cmd_count = 0;
        }        
    }
    
    #ifdef __MMI_BT_AVRCP_V13__
    srv_avrcp_close_dev(BT_AVRCP_CT);
    #endif
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_cmd_frame_req
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_cmd_frame_req(U8 avrcp_chnl, U8 op_code, U8 op_id, U8 key_down)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 ctype = 0;
    U8 subunit_type = 0;
    U8 subunit_id = 0;
    U8 send_data[BT_AVRCP_MAX_CMD_FRAME_SIZE];
    U16 length = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CMD_FRAME_REQ);
    MMI_AVRCP_LOG_STATE(avrcp_chnl);

    if (MMI_AVRCP_CTX(avrcp_chnl, avrcp_state) != SRV_AVRCP_CONNECTED)
    {
        return;
    }

    switch (op_code)
    {
        case BT_AVRCP_OP_UNIT_INFO:
            ctype = BT_AVRCP_CR_STATUS;
            subunit_type = BT_AVRCP_SUBUNIT_TYPE_UNIT_INFO;
            subunit_id = BT_AVRCP_SUBUNIT_ID_UNIT_INFO;
            send_data[0] = BT_AVRCP_OP_UNIT_INFO;
            send_data[1] = 0xFF;
            send_data[2] = 0xFF;
            send_data[3] = 0xFF;
            send_data[4] = 0xFF;
            send_data[5] = 0xFF; 
            length = 6;
            
        break;

        case BT_AVRCP_OP_SUBUNIT_INFO:
            ctype = BT_AVRCP_CR_STATUS;
            subunit_type = BT_AVRCP_SUBUNIT_TYPE_SUBUNIT_INFO; 
            subunit_id = BT_AVRCP_SUBUNIT_ID_SUBUNIT_INFO;
            send_data[0] = BT_AVRCP_OP_SUBUNIT_INFO;
            send_data[1] = 0x07;
            send_data[2] = 0xFF;
            send_data[3] = 0xFF;
            send_data[4] = 0xFF;
            send_data[5] = 0xFF; 
            length = 6; 
            
        break;

        case BT_AVRCP_OP_PASS_THROUGH:
            ctype = BT_AVRCP_CR_CONTROL;
            subunit_type = BT_AVRCP_SUBUNIT_TYPE_PASS_THROUGH;            
            subunit_id = BT_AVRCP_SUBUNIT_ID_PASS_THROUGH;
            send_data[0] = BT_AVRCP_OP_PASS_THROUGH;

            if (key_down) /* down */
            {
                send_data[1] = op_id;
            }
            else /* up */
            {
                send_data[1] = op_id | 0x80;          
            }

            send_data[2] = 0;
            length = 3 ;
        break;

        case BT_AVRCP_OP_VENDOR:
        default:
            /*not support now*/
        return;
    }
        

    bt_avrcp_send_cmd_frame_req(MOD_MMI,
                                g_mmi_avrcp_cntx[avrcp_chnl].connect_id,
                                0, /* Not used */
                                ctype,
                                subunit_type,
                                subunit_id,
                                length,
                                &send_data[0]);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_cmd_frame_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_cmd_frame_cnf_hdlr(AVRCP_SRV_CMD_CNF_CALLBACK callback_func)
{
#ifdef __MMI_AVRCP_CT_SUPPORT__
    g_mmi_avrcp_cmd_cnf_ptr = callback_func;
#endif
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_cmd_frame_cnf_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_cmd_frame_cnf_hdlr(void *msg)
{
#if defined(__BT_SPEAKER_SUPPORT__) || defined (__MMI_AVRCP_CT_SUPPORT__)
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_cmd_frame_cnf_struct *msg_p = (bt_avrcp_cmd_frame_cnf_struct*) msg;
    U16 cmd_type = 0;
    S32 avrcp_chnl;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CMD_FRAME_CNF_HDLR, msg_p->connect_id, avrcp_chnl);

    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
    
    //MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
    MMI_AVRCP_LOG_STATE(avrcp_chnl);

    cmd_type = srv_avrcp_util_check_cmd_type(
                msg_p->c_type,
                msg_p->subunit_type,
                msg_p->subunit_id,
                msg_p->data_len,
                msg_p->frame_data);
                
    switch (cmd_type)
    {
        case BT_AVRCP_OP_UNIT_INFO:
        {
            if (g_mmi_avrcp_cmd_cnf_ptr != NULL)
            {
                g_mmi_avrcp_cmd_cnf_ptr(BT_AVRCP_OP_UNIT_INFO, 0, (MMI_BOOL)0);
            }
            
            break;
        }

        case BT_AVRCP_OP_SUBUNIT_INFO:
        {
            if (g_mmi_avrcp_cmd_cnf_ptr != NULL)
            {
                g_mmi_avrcp_cmd_cnf_ptr(BT_AVRCP_OP_SUBUNIT_INFO, 0, (MMI_BOOL)0);
            }
            
            break;
        }

        case BT_AVRCP_OP_PASS_THROUGH:
        {
            if (g_mmi_avrcp_cmd_cnf_ptr != NULL)
            {
                if (g_mmi_avrcp_cntx[BT_AVRCP_CT].is_timer_on)
                {
                    g_mmi_avrcp_cmd_cnf_ptr(BT_AVRCP_OP_PASS_THROUGH, (U16)(msg_p->frame_data[1] & 0x7f), (MMI_BOOL)(msg_p->frame_data[1] & 0x80));
                }
            }
            
            break;
        }

        default:
        {
            break;
        }
    }
#endif /* __MMI_AVRCP_CT_SUPPORT__ */
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_cmd_frame_ind_hdlr
 * DESCRIPTION
 *  This function is to
 * PARAMETERS
 *  msg     [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_cmd_frame_ind_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_cmd_frame_ind_struct *msg_p = (bt_avrcp_cmd_frame_ind_struct*)msg;
    AVRCP_SRV_CMD_CALLBACK func_ptr;
    U16 cmd_type = 0;
    U8 send_len;
    U8 send_data[6];
    U8 type_result = BT_AVRCP_CR_NOT_IMPLEMENT;
    S32 avrcp_chnl;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_CMD_FRAME_IND_HDLR, 
              g_mmi_avrcp_frm_blocked,
              msg_p->connect_id,
              avrcp_chnl);
    
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
    
    //MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);   
    MMI_AVRCP_LOG_STATE(avrcp_chnl);

    cmd_type = srv_avrcp_util_check_cmd_type(
                msg_p->c_type,
                msg_p->subunit_type,
                msg_p->subunit_id,
                msg_p->data_len,
                msg_p->frame_data);

#ifdef __MMI_A2DP_SUPPORT__
    srv_a2dp_check_and_restart_disc_timer();
#endif

    switch (cmd_type)
    {
        case BT_AVRCP_OP_UNIT_INFO:
        {
            send_data[0] = BT_AVRCP_OP_UNIT_INFO;
            send_data[1] = 0x07;
            send_data[2] = 0x48;
            send_data[3] = 0xFF;
            send_data[4] = 0xFF;
            send_data[5] = 0xFF;
            send_len = 6;

            bt_avrcp_send_cmd_frame_ind_res(
                MOD_MMI,
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id,                
                msg_p->seq_id,
                msg_p->profile_id,
                BT_AVRCP_CR_STABLE,
                BT_AVRCP_SUBUNIT_TYPE_UNIT_INFO,
                BT_AVRCP_SUBUNIT_ID_UNIT_INFO,
                send_len,
                send_data);
            break;
        }

        case BT_AVRCP_OP_SUBUNIT_INFO:
        {
            send_data[0] = BT_AVRCP_OP_SUBUNIT_INFO;
            send_data[1] = 0x07;
            send_data[2] = 0x48;
            send_data[3] = 0xFF;
            send_data[4] = 0xFF;
            send_data[5] = 0xFF;
            send_len = 6;

            bt_avrcp_send_cmd_frame_ind_res(
                MOD_MMI,
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id,                
                msg_p->seq_id,
                msg_p->profile_id,
                BT_AVRCP_CR_STABLE,
                BT_AVRCP_SUBUNIT_TYPE_SUBUNIT_INFO,
                BT_AVRCP_SUBUNIT_ID_SUBUNIT_INFO,
                send_len,
                send_data);
            break;
        }

        case BT_AVRCP_OP_PASS_THROUGH:
        {
            type_result = SRV_AVRCP_CR_ACCEPT;
            
            if ((func_ptr = srv_avrcp_get_cmd_hdlr_func_ptr()) != NULL && !g_mmi_avrcp_frm_blocked)
            {
                U8 command = msg_p->frame_data[1] & 0x7f ;
                if ((msg_p->frame_data[1] & 0x80) == 0)
                {
                    /*key pressed*/

                    /* receive another pressed cmd while previous */
                    /* pressed command has not released yet,      */
                    /* 1. auto relase previous command first      */
                    /* 2. pass current pressed cmd                */
                    if ((g_mmi_avrcp_last_pressed_cmd != 0xff) && (g_mmi_avrcp_last_pressed_cmd != command))
                    {
                        srv_avrcp_auto_release_cmd();
                        g_mmi_avrcp_last_pressed_cmd = command ;
                        g_mmi_avrcp_pressed_cmd_count = 1 ;
                        type_result = func_ptr(command, (srv_avrcp_key_events)MMI_AVRCP_KEY_DOWN);
                        StartTimer(BT_AVRCP_AUTO_RELEASE_TIMER, 2000, (FuncPtr)srv_avrcp_auto_release_cmd);
                    }
                    /* receive the same pressed cmd, */
                    /* 1. restart timer              */
                    /* 2. pass longpress or repeat   */
                    else if (g_mmi_avrcp_last_pressed_cmd == command)
                    {
                        StartTimer(BT_AVRCP_AUTO_RELEASE_TIMER, 2000, (FuncPtr)srv_avrcp_auto_release_cmd);
                        g_mmi_avrcp_pressed_cmd_count ++;
                        
                        if (g_mmi_avrcp_pressed_cmd_count > 2)
                        {
                            type_result = func_ptr(command, (srv_avrcp_key_events)MMI_AVRCP_KEY_REPEAT);
                        }
                        else
                        {
                            type_result = func_ptr(command, (srv_avrcp_key_events)MMI_AVRCP_KEY_LONGPRESS);
                        }

                        if (type_result == MMI_AVRCP_CR_REJECT)
                        {
                            g_mmi_avrcp_pressed_cmd_count -- ;
                        }
                    }
                    /* first time receive pressed cmd */
                    else
                    {
                        g_mmi_avrcp_last_pressed_cmd = command ;
                        g_mmi_avrcp_pressed_cmd_count = 1 ;
                        type_result = func_ptr(command, (srv_avrcp_key_events)MMI_AVRCP_KEY_DOWN);
                        StartTimer(BT_AVRCP_AUTO_RELEASE_TIMER, 2000, (FuncPtr)srv_avrcp_auto_release_cmd);
                    }
                }
                else if (g_mmi_avrcp_last_pressed_cmd == command)
                {
                    /*key released and matched key pressed command*/
                    /*reset previous pressed command to oxff*/
                    StopTimer(BT_AVRCP_AUTO_RELEASE_TIMER);
                    g_mmi_avrcp_last_pressed_cmd = 0xff ;
                    g_mmi_avrcp_pressed_cmd_count = 0 ;
                    type_result = func_ptr(command, (srv_avrcp_key_events)MMI_AVRCP_KEY_UP);
                }
                else
                {
                    /*key released but key pressed command not matched*/
                    type_result = MMI_AVRCP_CR_REJECT ;
                }
            }

        #ifndef __MMI_AVRCP_TEST__
            bt_avrcp_send_cmd_frame_ind_res(
                MOD_MMI,
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id,                
                msg_p->seq_id,
                msg_p->profile_id,
                type_result,
                msg_p->subunit_type,
                msg_p->subunit_id,
                msg_p->data_len,
                msg_p->frame_data);
        #endif
            break;
        }

        case BT_AVRCP_OP_VENDOR:
        {
            type_result = SRV_AVRCP_CR_ACCEPT;

            msg_p->frame_data[1] = 0x00;
            msg_p->frame_data[2] = 0x19;
            msg_p->frame_data[3] = 0x58;

            msg_p->frame_data[5] = 0x00;    // packet type
            msg_p->frame_data[6] = 0x00;    // parameter length
            msg_p->frame_data[7] = 0x01;    // parameter length
            msg_p->frame_data[8] = 0x00;    // error code: invalid cmd
            msg_p->data_len = 9;            // opcode: 1 + company id: 3 + pdu id: 1 + packet type: 1 + len: 2 + error code: 1

            bt_avrcp_send_cmd_frame_ind_res(
                MOD_MMI,
                g_mmi_avrcp_cntx[avrcp_chnl].connect_id,
                msg_p->seq_id,
                msg_p->profile_id,
                type_result,
                msg_p->subunit_type,
                msg_p->subunit_id,
                msg_p->data_len,
                msg_p->frame_data);
            break;
        }

        default:
        {
            // TODO: Error Trace Here.
            break;
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_util_check_cmd_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  c_type              [IN]        
 *  subunit_type        [IN]        
 *  subunit_id          [IN]        
 *  data_len            [IN]        
 *  frame_data          [?]         
 * RETURNS
 *  
 *****************************************************************************/
U16 srv_avrcp_util_check_cmd_type(U8 c_type, U8 subunit_type, U8 subunit_id, U16 data_len, U8 *frame_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (data_len > 0)
    {
        /* check if pass through command */
        if ((subunit_type == BT_AVRCP_SUBUNIT_TYPE_PASS_THROUGH) &&
            (subunit_id == BT_AVRCP_SUBUNIT_ID_PASS_THROUGH) && 
            (frame_data[0] == BT_AVRCP_OP_PASS_THROUGH))
        {
            return BT_AVRCP_OP_PASS_THROUGH;
        }

        /* check if unit info command */
        if ((subunit_type == BT_AVRCP_SUBUNIT_TYPE_UNIT_INFO) &&
            (subunit_id == BT_AVRCP_SUBUNIT_ID_UNIT_INFO) && 
            (frame_data[0] == BT_AVRCP_OP_UNIT_INFO))
        {
            return BT_AVRCP_OP_UNIT_INFO;
        }

        /* check if unit info command */
        if ((subunit_type == BT_AVRCP_SUBUNIT_TYPE_SUBUNIT_INFO) &&
            (subunit_id == BT_AVRCP_SUBUNIT_ID_SUBUNIT_INFO) && 
            (frame_data[0] == BT_AVRCP_OP_SUBUNIT_INFO))
        {
            return BT_AVRCP_OP_SUBUNIT_INFO;
        }

        /* check if unit info command */
        if ((subunit_type == BT_AVRCP_SUBUNIT_TYPE_PASS_THROUGH) &&
            (subunit_id == BT_AVRCP_SUBUNIT_ID_PASS_THROUGH) && 
            (frame_data[0] == BT_AVRCP_OP_VENDOR))
        {
            return BT_AVRCP_OP_VENDOR;
        }
    }

    return 0;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_cmd_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  callback_func       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_cmd_hdlr(AVRCP_SRV_CMD_CALLBACK callback_func)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Already registered */
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_SET_CMD_HDLR);
    
    for (i = 0; i < BT_AVRCP_MAX_CALLBACK_NUM; i++)
    {
        if (g_mmi_avrcp_cmd_func_ptr_list[i] == callback_func)
        {
            return;
        }
    }
    
    ASSERT(g_mmi_avrcp_cmd_func_ptr_count < BT_AVRCP_MAX_CALLBACK_NUM);

    g_mmi_avrcp_cmd_func_ptr_list[g_mmi_avrcp_cmd_func_ptr_count++] = callback_func;
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_SET_CMD_HDLR1,g_mmi_avrcp_cmd_func_ptr_count);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_connect_notify_a2dp_hdlr
 * DESCRIPTION
 *  To set avrcp connect notify a2dp hdlr
 * PARAMETERS
 *  callback_func   : [IN] callback function
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_connect_notify_a2dp_hdlr(AVRCP_SRV_CONNECT_NOTIFY_A2DP_CALLBACK callback_func)
{
    g_srv_avrcp_conn_notify_a2dp_ptr = callback_func;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_clear_connect_notify_a2dp_hdlr
 * DESCRIPTION
 *  To clear avrcp connect notify a2dp hdlr
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_clear_connect_notify_a2dp_hdlr(void)
{
    g_srv_avrcp_conn_notify_a2dp_ptr = NULL;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_role_callback
 * DESCRIPTION
 *  set role callback
 * PARAMETERS
 *  role   :    [IN]   role
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_role_callback(U8 role)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* not ind connect */
    /* MAUI_03477134 */
    if (g_srv_avrcp_conn_ind_cntx.connect_id == 0xFF)
    {
        g_srv_avrcp_role = role;
        return;
    }
    
    srv_avrcp_connect_ind_hdlr_int(srv_avrcp_get_a2dp_role(role), &g_srv_avrcp_conn_ind_cntx);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_clear_cmd_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_clear_cmd_hdlr(AVRCP_SRV_CMD_CALLBACK callback_func)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CLEAR_CMD_HDLR,g_mmi_avrcp_cmd_func_ptr_count);
    
    for (i = 0; i < BT_AVRCP_MAX_CALLBACK_NUM; i++)
    {
        if (g_mmi_avrcp_cmd_func_ptr_list[i] == callback_func)
        {
            g_mmi_avrcp_cmd_func_ptr_list[i] = NULL;
            g_mmi_avrcp_cmd_func_ptr_count--;
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CLEAR_CMD_HDLR1,g_mmi_avrcp_cmd_func_ptr_count);            
        }
    }

    if (g_mmi_avrcp_cmd_func_ptr_list[0] == NULL && g_mmi_avrcp_cmd_func_ptr_list[1] != NULL)
    {
       g_mmi_avrcp_cmd_func_ptr_list[0] = g_mmi_avrcp_cmd_func_ptr_list[1];
       g_mmi_avrcp_cmd_func_ptr_list[1] = NULL;
    }

    ASSERT(g_mmi_avrcp_cmd_func_ptr_count >= 0);
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_auto_release_cmd
 * DESCRIPTION
 *  automatically pass a released command to application
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_auto_release_cmd(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    AVRCP_SRV_CMD_CALLBACK func_ptr;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AUTO_RELEASE1);

    if ((func_ptr = srv_avrcp_get_cmd_hdlr_func_ptr()) != NULL && g_mmi_avrcp_last_pressed_cmd != 0xff)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AUTO_RELEASE2);
        func_ptr(g_mmi_avrcp_last_pressed_cmd, (srv_avrcp_key_events)MMI_AVRCP_KEY_UP);
        g_mmi_avrcp_last_pressed_cmd = 0xff ;
        g_mmi_avrcp_pressed_cmd_count = 0;
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_frm_sync_calllback
 * DESCRIPTION
 *  for framework to callback if keypad / touch is triggered.
 * PARAMETERS
 *  BOOL    [IN] is keypad / touch blocked by target
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_frm_sync_calllback(MMI_BOOL is_blocked)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    AVRCP_SRV_CMD_CALLBACK func_ptr;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_FRAMEWORK_BLOCK, is_blocked);

    g_mmi_avrcp_frm_blocked = is_blocked;
    
    /* if blocked                                            */
    /* 1. cancel previous key down cmd                       */
    /* 2. pass key up cmd for previous longpress, repeat cmd */
    if (is_blocked && (func_ptr = srv_avrcp_get_cmd_hdlr_func_ptr()) != NULL && g_mmi_avrcp_last_pressed_cmd != 0xff)
    {
        if (g_mmi_avrcp_pressed_cmd_count == 1)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_FRAMEWORK_SYNC1);
            func_ptr(g_mmi_avrcp_last_pressed_cmd, (srv_avrcp_key_events)MMI_AVRCP_KEY_CANCELED);
        }
        else
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_FRAMEWORK_SYNC2);
            func_ptr(g_mmi_avrcp_last_pressed_cmd, (srv_avrcp_key_events)MMI_AVRCP_KEY_UP);
        }
        
        StopTimer(BT_AVRCP_AUTO_RELEASE_TIMER);
        g_mmi_avrcp_last_pressed_cmd = 0xff;
        g_mmi_avrcp_pressed_cmd_count = 0;
    }
    
}

#ifdef __MMI_BT_AVRCP_V13__

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_check_version_capability
 * DESCRIPTION
 *  
 * PARAMETERS
 *  role
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_BOOL srv_avrcp_check_version_capability(U8 avrcp_chnl)
{
    if (g_mmi_avrcp_cntx[avrcp_chnl].avrcp_state != SRV_AVRCP_CONNECTED)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AVRCP_NOT_CONNECTED);
        return MMI_FALSE;
    }

    if (g_mmi_avrcp_cntx[avrcp_chnl].version < SRV_AVRCP_VERSION_V13)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AVRCP_VERSION_MISMATCH, g_mmi_avrcp_cntx[avrcp_chnl].version);
        return MMI_FALSE;
    }
    else
    {
        return MMI_TRUE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_attr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_register_result_notifier(srv_avrcp_notify_event cb_ptr)
{
    U8 local_role = BT_AVRCP_CT;
    
    if (cb_ptr)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_NOTIFIER_REGISTERED, local_role);
        g_mmi_avrcp_cntx[local_role].app_notify_callback= cb_ptr;
        return SRV_AVRCP_RESULT_CMD_SUCCESS;
    }
    
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_NOTIFIER_REG_FAIL, local_role);
    return SRV_AVRCP_NOTIFICATION_CALLBACK_NULL;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_sdp_query_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_sdp_query_req(U8 connect_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_sdp_query_req_struct* msg_p;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AVRCP_SDP_QUERY_REQ, local_role, connect_id);

    msg_p = (bt_avrcp_sdp_query_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_sdp_query_req_struct));
    msg_p->connect_id = connect_id;
    msg_p->local_role = local_role;
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_SDP_QUERY_REQ, msg_p, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_sdp_query_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_sdp_query_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 result; 
    S32 avrcp_chnl = 0;
    bt_avrcp_sdp_query_cnf_struct *msg_p = (bt_avrcp_sdp_query_cnf_struct*)msg;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_AVRCP_SDP_QUERY_CNF, 
              msg_p->result, 
              msg_p->connect_id, 
              msg_p->version,
              avrcp_chnl);
    
    if (avrcp_chnl < 0 || avrcp_chnl >= BT_AVRCP_MAX_CHANNEL)
    {
        return;
    }
    
    //MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
    
    result = msg_p->result;
    
    if (result == (U16)SRV_AVRCP_RESULT_SUCCESS)
    {
        g_mmi_avrcp_cntx[avrcp_chnl].version = msg_p->version;
        g_mmi_avrcp_cntx[avrcp_chnl].remote_supported_features = msg_p->remote_support_feature;
    }
    
    if (g_mmi_avrcp_cntx[avrcp_chnl].version >= SRV_AVRCP_VERSION_V13)
    {
        srv_avrcp_open_dev(BT_AVRCP_CT);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_version_indication_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_version_indication_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 result; 
    S32 avrcp_chnl = 0;
    bt_avrcp_version_ind_struct *msg_p = (bt_avrcp_version_ind_struct*)msg;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_device_addr(&msg_p->device_addr);
    MMI_TRACE(MMI_CONN_TRC_G7_BT,
              MMI_AVRCP_TRC_AVRCP_VERSION_IND_HDLR,
              msg_p->result,
              msg_p->version,
              avrcp_chnl);    
    
    result = msg_p->result;
    
    if (result == (U16)SRV_AVRCP_RESULT_SUCCESS)
    {
        MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
        g_mmi_avrcp_cntx[avrcp_chnl].version = msg_p->version;
        g_mmi_avrcp_cntx[avrcp_chnl].remote_supported_features = msg_p->remote_support_feature;
    }   
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_attr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_list_player_app_attr_req()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_list_playerapp_attribute_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/ 
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ATTR_REQ, local_role);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_list_playerapp_attribute_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_list_playerapp_attribute_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 0x01;
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_LIST_PLAYERAPP_ATTRIBUTE_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_check_result
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_BOOL srv_avrcp_check_result(U16 result, U8 error_code, U8 event_id, srv_avrcp_result_union final_result)
{
    if (result != (U16)SRV_AVRCP_RESULT_SUCCESS)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_AVRCP_RESULT, result, error_code);
        MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, final_result);
        return MMI_FALSE;
    }
    else
    {
        return MMI_TRUE;
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_attr_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_list_player_app_attr_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    U16 result;
    U8  error_code;
    S32 avrcp_chnl = 0;
    U8  event_id = 0;
    srv_avrcp_result_union attribute_list;
    bt_avrcp_list_playerapp_attribute_cnf_struct* msg_p = (bt_avrcp_list_playerapp_attribute_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    event_id = SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT;        
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT,
              MMI_AVRCP_TRC_AVRCP_APP_ATTR_CNF_HDLR,
              msg_p->connect_id,
              avrcp_chnl);

    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ATTR_CNF_HDLR, msg_p->result, msg_p->error_code);
    MMI_AVRCPV13_RESULT(attribute_list.supported_attr_list_result, result, error_code);

    do
    {
        if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, attribute_list))
        {
            break;
        }

        MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
        
        g_mmi_avrcp_cntx[avrcp_chnl].attr_count = msg_p->count;
        attribute_list.supported_attr_list_result.attr_count = msg_p->count;
        
        while (i < msg_p->count)
        {
            g_mmi_avrcp_cntx[avrcp_chnl].attribute_id[i] = msg_p->attribute_ids[i];
            g_mmi_avrcp_cntx[avrcp_chnl].supported_attr_val[i].attribute_id = msg_p->attribute_ids[i];
            attribute_list.supported_attr_list_result.supported_attr_list[i] = (srv_avrcp_player_app_settings_attr_enum)msg_p->attribute_ids[i];
            i++;
        }
        
        MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, attribute_list);
    } while(0);
    
    srv_avrcp_get_supported_attr_val_req();
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_list_player_app_value_req(srv_avrcp_player_app_settings_attr_enum attr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    bt_avrcp_list_playerapp_value_req_struct* msg_p;
    U8 local_role = BT_AVRCP_CT;

    /*----------------------------------------------------------------*/
    /* Code body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_VAL_REQ, local_role, attr_id);
    
    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }
   
    if (srv_avrcp_check_attribute_support_status_req(attr_id) == MMI_FALSE)
    {
        return SRV_AVRCP_ATTRIBUTE_NOT_SUPPORTED;
    }

    msg_p = (bt_avrcp_list_playerapp_value_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_list_playerapp_value_req_struct));

    g_mmi_avrcp_cntx[local_role].attr_id = (U8)attr_id;
        
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->attribute_id= (U8)attr_id;
    msg_p->seq_id = 0x02;
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_LIST_PLAYERAPP_VALUE_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_value_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_list_player_app_value_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    U16 result = 0; 
    U8  error_code = 0;
    U8  pos = 255;
    S32 avrcp_chnl = 0;
    U8  attr_count;
    U8  attr_val_count;
    U8  event_id;
    srv_avrcp_result_union attribute_values;
    bt_avrcp_list_playerapp_value_cnf_struct *msg_p = (bt_avrcp_list_playerapp_value_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_VAL_CNF_HDLR, msg_p->result, msg_p->error_code);
    event_id = SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT;
    result = msg_p->result;
    error_code = msg_p->error_code;
    attr_val_count = msg_p->count;

    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT,
              MMI_AVRCP_TRC_AVRCP_APP_VALUE_CNF_HDLR,
              msg_p->connect_id,
              avrcp_chnl);
    MMI_AVRCPV13_RESULT(attribute_values.supp_attr_val_list, result, error_code);

    do
    {
        if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, attribute_values))
        {
            break;
        }
    
        attr_count = g_mmi_avrcp_cntx[avrcp_chnl].attr_count;
        MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
        
        while (i < attr_count)
        {
            if (g_mmi_avrcp_cntx[avrcp_chnl].attribute_id[i] == g_mmi_avrcp_cntx[avrcp_chnl].attr_id)
            {
                pos = i;
                break;
            }
            
            i++;
        }

        if (pos == 255)
        {
            break;
        }
        
        g_mmi_avrcp_cntx[avrcp_chnl].supported_attr_val[pos].attr_val_count = msg_p->count;
        g_mmi_avrcp_cntx[avrcp_chnl].supported_attr_val[pos].attribute_id= g_mmi_avrcp_cntx[avrcp_chnl].attr_id;

        attribute_values.supp_attr_val_list.attr_val_count = attr_val_count;
        attribute_values.supp_attr_val_list.attribute_id = (srv_avrcp_player_app_settings_attr_enum)g_mmi_avrcp_cntx[avrcp_chnl].attr_id;

        i = 0;
        
        do
        {
            g_mmi_avrcp_cntx[avrcp_chnl].supported_attr_val[pos].attr_values[i] = msg_p->attribute_values[i];
            attribute_values.supp_attr_val_list.attr_values[i] = msg_p->attribute_values[i];
        } while (i++ < attr_val_count);
    
        MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, attribute_values); 
    } while(0);
    
    srv_avrcp_get_supported_attr_val_req();
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_curr_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_curr_player_app_value_req()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_get_curplayerapp_value_req_struct* msg_p;   

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_CURR_PLAYER_APP_VAL_REQ, local_role);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_get_curplayerapp_value_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_get_curplayerapp_value_req_struct));
    msg_p->count = g_mmi_avrcp_cntx[local_role].attr_count;
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 0x03;
    
    while (i < SRV_AVRCP_MAX_ATTR_NUM)
    {
        msg_p->attribute_ids[i] = g_mmi_avrcp_cntx[local_role].attribute_id[i];
        i++;
    }

    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_GET_CURPLAYERAPP_VALUE_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_curr_player_app_value_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_curr_player_app_value_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    S32 avrcp_chnl = 0;
    U16 result; 
    U8 error_code;
    srv_avrcp_result_union attribute_values;
    bt_avrcp_get_curplayerapp_value_cnf_struct* msg_p = (bt_avrcp_get_curplayerapp_value_cnf_struct*)msg;
    U8 event_id = SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_CURR_APP_VAL_CNF_HDLR,
              msg_p->result,
              msg_p->error_code,
              msg_p->connect_id,
              avrcp_chnl);
    
    MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
    
    result = msg_p->result;
    error_code = msg_p->error_code;
    g_mmi_avrcp_cntx[avrcp_chnl].attr_count = msg_p->count;
    
    attribute_values.curr_attr_list_result.count = msg_p->count;
    
    MMI_AVRCPV13_RESULT(attribute_values.curr_attr_list_result, result, error_code);
    
    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, attribute_values))
    {
        return;
    }
    
    while (i < SRV_AVRCP_MAX_ATTR_NUM)
    {
        attribute_values.curr_attr_list_result.curr_attr_list[i].attribute_id = (srv_avrcp_player_app_settings_attr_enum)msg_p->attribute_ids[i];
        attribute_values.curr_attr_list_result.curr_attr_list[i].attr_values= msg_p->attribute_values[i];
        i++;
    }
    
    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, attribute_values);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_set_player_app_value_req(U8 attr_values[])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_set_playerapp_value_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_APP_SET_PLAYER_APP_VALUE);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_set_playerapp_value_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_set_playerapp_value_req_struct));
    msg_p->count = g_mmi_avrcp_cntx[local_role].attr_count;
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 0x04;

    while (i < g_mmi_avrcp_cntx[local_role].attr_count)
    {
        msg_p->attribute_ids[i] = g_mmi_avrcp_cntx[local_role].attribute_id[i];
        msg_p->values[i] = attr_values[i];
        i++;
    }
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_SET_PLAYERAPP_VALUE_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_player_app_value_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_player_app_value_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 event_id = 0;
    U8 error_code;
    U16 result;
    srv_avrcp_result_union set_player_settings_result;
    bt_avrcp_set_playerapp_value_cnf_struct* msg_p = (bt_avrcp_set_playerapp_value_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_APP_SET_PLAYER_APP_RESULT);
    result = msg_p->result;
    error_code = msg_p->error_code;
    event_id = SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT;
    
    MMI_AVRCPV13_RESULT(set_player_settings_result.result_cnf, result, error_code);

    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, set_player_settings_result))
    {
        return;
    }

    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, set_player_settings_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_attr_txt_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_player_app_attr_txt_req()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_get_playerapp_attributetext_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_APP_GET_PLAYER_APP_ATTR_TXT);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_get_playerapp_attributetext_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_get_playerapp_attributetext_req_struct));
    msg_p->count = g_mmi_avrcp_cntx[local_role].attr_count;
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 0x05;
    
    while (i < g_mmi_avrcp_cntx[local_role].attr_count)
    {
        msg_p->attribute_ids[i] = g_mmi_avrcp_cntx[local_role].attribute_id[i];
        i++;
    }
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_GET_PLAYERAPP_ATTRIBUTETEXT_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_attr_txt_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_player_app_attr_txt_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                  */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    U8 error_code;
    U8 event_id = 0;
    U16 result;
    srv_avrcp_result_union result_cnf;
    bt_avrcp_get_playerapp_attributetext_cnf_struct* msg_p = (bt_avrcp_get_playerapp_attributetext_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_APP_GET_PLAYER_APP_ATTR_CNF_HDLR);
    event_id = SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT;

    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_AVRCPV13_RESULT(result_cnf.attr_txt_result, result, error_code);
    
    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, result_cnf))
    {
        return;
    }
    
    result_cnf.attr_txt_result.count = msg_p->count;
    
    while (i < (msg_p->count))
    {
        result_cnf.attr_txt_result.attr_txt[i].attribute_id = (srv_avrcp_player_app_settings_attr_enum)msg_p->attribute_id[i];
        result_cnf.attr_txt_result.charset[i] = msg_p->charset[i];
        result_cnf.attr_txt_result.attr_txt[i].attr_str = (U8 *)OslMalloc(SRV_AVRCP_MAX_ATTRIBUTE_STRING_SIZE);
        memset((void *)result_cnf.attr_txt_result.attr_txt[i].attr_str,
               0,
               SRV_AVRCP_MAX_ATTRIBUTE_STRING_SIZE);
        memcpy((void *)result_cnf.attr_txt_result.attr_txt[i].attr_str,
               (void *)msg_p->attribute_string[i],
               sizeof(msg_p->attribute_string[i]));
        i++;
    }

    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, result_cnf);

    for (i = 0; i < (msg_p->count); i++)
    {
        OslMfree(result_cnf.attr_txt_result.attr_txt[i].attr_str);
    }
}


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_value_txt_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_player_app_value_txt_req(srv_avrcp_player_app_settings_attr_enum attr_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_get_playerapp_valuetext_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_VAL_TXT_REQ);    

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }
    
    if (srv_avrcp_check_attribute_support_status_req(attr_id) == MMI_FALSE)
    {
        return SRV_AVRCP_ATTRIBUTE_NOT_SUPPORTED;
    }

    msg_p = (bt_avrcp_get_playerapp_valuetext_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_get_playerapp_valuetext_req_struct));
    msg_p->count = g_mmi_avrcp_cntx[local_role].supported_attr_val[attr_id].attr_val_count;
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->attribute_id= attr_id;
    msg_p->seq_id = 0x06;
    
    while(i < msg_p->count)
    {
        msg_p->value_ids[i] = g_mmi_avrcp_cntx[local_role].supported_attr_val[attr_id].attr_values[i];
        i++;
    }
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_GET_PLAYERAPP_VALUETEXT_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_value_txt_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_player_app_value_txt_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    S32 avrcp_chnl = 0;
    U8 event_id= 0;
    U8 error_code;
    U16 result;
    srv_avrcp_result_union val_txt_result;
    bt_avrcp_get_playerapp_valuetext_cnf_struct *msg_p = (bt_avrcp_get_playerapp_valuetext_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    avrcp_chnl = srv_avrcp_find_channel_by_connect_id(msg_p->connect_id);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              MMI_AVRCP_TRC_PLAYER_APP_VAL_TXT_CNF_HDLR, 
              msg_p->connect_id, 
              avrcp_chnl);
    
    event_id = SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT;

    MMI_AVRCP_ASSERT(avrcp_chnl >= 0 && avrcp_chnl < BT_AVRCP_MAX_CHANNEL);
    
    result = msg_p->result;
    error_code = msg_p->error_code;
    
    MMI_AVRCPV13_RESULT(val_txt_result.val_txt_result, result, error_code);

    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, val_txt_result))
    {
        return;
    }
    
    val_txt_result.val_txt_result.attr_id = (srv_avrcp_player_app_settings_attr_enum)msg_p->attribute_id;
    val_txt_result.val_txt_result.count = g_mmi_avrcp_cntx[avrcp_chnl].attr_count;
    
    while (i < (msg_p->count))
    {
        val_txt_result.val_txt_result.value_txt[i].value_id = msg_p->value_ids[i];
        val_txt_result.val_txt_result.value_txt[i].charset = msg_p->charset[i];
        memset((void *)val_txt_result.val_txt_result.value_txt[i].value_str,
                0,
                SRV_AVRCP_MAX_ATTRIBUTE_STRING_SIZE);
        memcpy((void *)val_txt_result.val_txt_result.value_txt[i].value_str,
                (void *)msg_p->value_string[i],
                sizeof((void *)msg_p->value_string[i]));
        i++;
    }
    
    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, val_txt_result);

    for (i = 0; i < msg_p->count; i++)
    {
        OslMfree(val_txt_result.val_txt_result.value_txt[i].value_str);
    }
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_displayable_charset_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_inform_displayable_charset_req(U16 charset[])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_inform_display_charset_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_INFORM_CHARSET);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_inform_display_charset_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_inform_display_charset_req_struct));
    msg_p->count = g_mmi_avrcp_cntx[local_role].attr_count;
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 0x07;
    
    while (i < g_mmi_avrcp_cntx[local_role].attr_count)
    {
        g_mmi_avrcp_cntx[local_role].charset[i] = charset[i];
        msg_p->charset_ids[i] = g_mmi_avrcp_cntx[local_role].charset[i];
        i++;
    }
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_INFORM_DISPLAY_CHARSET_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_displayable_charset_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_inform_displayable_charset_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 error_code;
    U8 event_id = 0;
    U16 result;
    srv_avrcp_result_union cnf_result;
    bt_avrcp_inform_display_charset_cnf_struct *msg_p = (bt_avrcp_inform_display_charset_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_INFORM_CHARSET_CNF_HDLR);
    event_id = SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT;
    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_AVRCPV13_RESULT(cnf_result.result_cnf, result, error_code);
    
    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, cnf_result))
    {
        return;
    }
    
    MMI_AVRCP_APP_NOTIFY_CALLBACK((srv_avrcp_event_enum)event_id, cnf_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_battery_status_of_ct_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_inform_battery_status_of_ct_req(srv_avrcp_battery_status_enum battery_status)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_inform_battery_statusofct_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_INFORM_BATT_STATUS);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_inform_battery_statusofct_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_inform_battery_statusofct_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->battery_status = battery_status;
    msg_p->seq_id = 0x08;
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_INFORM_BATTERY_STATUSOFCT_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_battery_status_of_ct_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_inform_battery_status_of_ct_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 error_code;
    U8 event_id = SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT;
    U16 result;
    srv_avrcp_result_union cnf_result;
    bt_avrcp_inform_battery_statusofct_cnf_struct *msg_p = (bt_avrcp_inform_battery_statusofct_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_INFORM_BATT_STATUS_CNF_HDLR);
    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_AVRCPV13_RESULT(cnf_result.result_cnf, result, error_code);

    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, cnf_result))
    {
        return;
    }

    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, cnf_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_element_attr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_element_attr_req(srv_avrcp_media_attr_enum attr_ids[])
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    S32 i = 0;
    bt_avrcp_get_element_attributes_req_struct* msg_p;    

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ELEM_ATTR_REQ);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_get_element_attributes_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_get_element_attributes_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    g_mmi_avrcp_cntx[local_role].elem_count = SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM - 1; /* [MAUI_03462722] spec support max 7 */
    msg_p->count = SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM - 1; /* [MAUI_03462722] spec support max 7 */
    msg_p->seq_id = 0x09;
    
    memset(msg_p->identifier, 0, SRV_AVRCP_MAX_IDENTIFIER_COUNT);
    
    while (i < SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM)
    {
        msg_p->attributes[i] = attr_ids[i];
        i++;
    }
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_GET_ELEMENT_ATTRIBUTES_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_element_attr_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_element_attr_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 error_code;
    U8 *str_ptr = NULL;
    U8 *tmp_ptr = NULL;
    U8 event_id = SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT;
    U16 result;
    S32 i = 0;
    srv_avrcp_result_union get_elem_result;
    bt_avrcp_get_element_attributes_cnf_struct *msg_p = (bt_avrcp_get_element_attributes_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ELEM_ATTR_CNF_HDLR);
    
    result = msg_p->result;
    error_code = msg_p->error_code;
    
    MMI_AVRCPV13_RESULT(get_elem_result.attr_txt_result, result, error_code);

    do
    {
        if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, get_elem_result))
        {
            break;
        }

        get_elem_result.elem_attr.result = (srv_avrcp_result_enum)msg_p->result;
        get_elem_result.elem_attr.error_code = (srv_avrcp_error_code_enum)msg_p->error_code;
        get_elem_result.elem_attr.count = msg_p->count;
        
        str_ptr = msg_p->element_data;
        
        for (i = 0; i < (msg_p->count); i++)
        {
            get_elem_result.elem_attr.elements[i].elem_id= (srv_avrcp_media_attr_enum)msg_p->elements[i].attribute_id;
            get_elem_result.elem_attr.elements[i].charset = msg_p->elements[i].charset;
            
            get_elem_result.elem_attr.elements[i].element_data = (U8 *)OslMalloc(SRV_AVRCP_ELEM_DATA_SIZE);
            memset(get_elem_result.elem_attr.elements[i].element_data, 0, SRV_AVRCP_ELEM_DATA_SIZE);

            tmp_ptr = str_ptr + msg_p->elements[i].value_text_offset; 
            strcpy((char*)get_elem_result.elem_attr.elements[i].element_data, (char*)tmp_ptr);
        }
        
        MMI_AVRCP_APP_NOTIFY_CALLBACK((srv_avrcp_event_enum)event_id,get_elem_result);
        
        for (i = 0; i < msg_p->count; i++)
        {
            OslMfree(get_elem_result.elem_attr.elements[i].element_data);
        }
    } while(0);
    
    srv_avrcp_open_dev(BT_AVRCP_CT);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_play_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_play_status_req()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_get_playerstatus_req_struct* msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_GET_PLAY_STATUS);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_get_playerstatus_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_get_playerstatus_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 10;
    
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_GET_PLAYERSTATUS_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_play_status_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_play_status_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 error_code;
    U8    event_id = SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT;
    U16 result;
    srv_avrcp_result_union play_status_result;
    bt_avrcp_get_playerstatus_cnf_struct *msg_p = (bt_avrcp_get_playerstatus_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_GET_PLAY_STATUS_CNF_HDLR);
    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_AVRCPV13_RESULT(play_status_result.play_status, result, error_code);

    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, play_status_result))
    {
        return;
    }
    
    play_status_result.play_status.play_status = (srv_avrcp_play_status_enum)msg_p->play_status;;
    play_status_result.play_status.song_len = msg_p->song_length;
    play_status_result.play_status.song_pos = msg_p->song_position;
    
    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id,play_status_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_register_notification_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_register_notification_req(U8 event_id, U32 playback_interval)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_register_notification_req_struct *msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_REG_NOTIFY_REQ);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_register_notification_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_register_notification_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->event_id = event_id;
    
    if (event_id & SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED)
    {
        msg_p->playback_interval = playback_interval;
    }
    
    msg_p->seq_id = 11;
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_REGISTER_NOTIFICATION_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_register_notification_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_register_notification_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    U8 error_code;
    U8 event_id = SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT;
    U16 result;
    srv_avrcp_result_union reg_notity_result;
    bt_avrcp_register_notification_cnf_struct *msg_p = (bt_avrcp_register_notification_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_REG_NOTIFY_CNF_HDLR);
    result = msg_p->result;
    error_code = msg_p->error_code;
    
    MMI_AVRCPV13_RESULT(reg_notity_result.reg_notification_event, result, error_code);
    
    if (result != (U16)SRV_AVRCP_RESULT_SUCCESS)    
    {                                            
        MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_RE_REG_NOTIFY_CNF_HDLR);
        MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id,reg_notity_result);        
        srv_avrcp_register_events_notification_req(reg_notity_result);
        return;                                                    
    }
    
    reg_notity_result.reg_notification_event.event_id = (srv_avrcp_metadata_trasnfer_events)msg_p->event_id;
    reg_notity_result.reg_notification_event.is_interim = (srv_avrcp_reg_notify_enum)msg_p->is_interim;
    
    switch (msg_p->event_id)
    {
        case SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED:
        {
            reg_notity_result.reg_notification_event.playback_status = (srv_avrcp_play_status_enum)msg_p->status;
            break;
        }
        
        case SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED:
        {
            reg_notity_result.reg_notification_event.system_status = (srv_avrcp_system_status_enum)msg_p->status;
            break;
        }
        
        case SRV_AVRCP_EVENT_BATT_STATUS_CHANGED:
        {
            reg_notity_result.reg_notification_event.batt_status = (srv_avrcp_battery_status_enum)msg_p->status;
            break;
        }
    }
    
    reg_notity_result.reg_notification_event.count= msg_p->count;
    reg_notity_result.reg_notification_event.song_pos = msg_p->pos;
    
    while (i < SRV_AVRCP_MAX_ATTR_NUM)
    {
        reg_notity_result.reg_notification_event.attr_id[i]  = (srv_avrcp_player_app_settings_attr_enum)msg_p->attribute_id[i];
        reg_notity_result.reg_notification_event.attr_val[i] = msg_p->attribute_value[i];
        i++;
    }

    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id,reg_notity_result);
    srv_avrcp_register_events_notification_req(reg_notity_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_abort_continueing_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_abort_continueing_req()
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 local_role = BT_AVRCP_CT;
    bt_avrcp_abort_continueresponse_req_struct *msg_p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ABORT_REQ);

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }

    msg_p = (bt_avrcp_abort_continueresponse_req_struct*)OslConstructDataPtr(sizeof(bt_avrcp_abort_continueresponse_req_struct));
    msg_p->connect_id = g_mmi_avrcp_cntx[local_role].connect_id;
    msg_p->seq_id = 12;
    send_avrcp_msg_to_bt(MOD_MMI, (kal_uint16)MSG_ID_BT_AVRCP_ABORT_CONTINUERESPONSE_REQ, msg_p, NULL);    

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_abort_continueing_cnf_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_abort_continueing_cnf_hdlr(void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 error_code;
    U16 result;
    U8 event_id = SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT;
    srv_avrcp_result_union abort_cont_result;
    bt_avrcp_abort_continueresponse_cnf_struct *msg_p = (bt_avrcp_abort_continueresponse_cnf_struct*)msg;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_ABORT_CNF_HDLR);
    result = msg_p->result;
    error_code = msg_p->error_code;

    MMI_AVRCPV13_RESULT(abort_cont_result.result_cnf, result, error_code);

    if (MMI_FALSE == srv_avrcp_check_result(result, error_code, event_id, abort_cont_result))
    {
        return;
    }

    MMI_AVRCP_APP_NOTIFY_CALLBACK(event_id, abort_cont_result);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_elements_attr_request
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_elements_attr_request()
{
    S32 i = 0;
    srv_avrcp_media_attr_enum elem_id = SRV_AVRCP_MEDIA_TITLE;
    srv_avrcp_media_attr_enum attr_id[SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM];
    
    for (i = 0; i < (SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM-1); i++)
    {
        attr_id[i] = elem_id++;
    }
    
    attr_id[SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM-1] = SRV_AVRCP_MEDIA_ATTR_UNDEFINED;
    srv_avrcp_get_element_attr_req(attr_id);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_check_attribute_support_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_avrcp_check_attribute_support_status_req(srv_avrcp_player_app_settings_attr_enum attribute_id)
{
    S32 i = 0;
    U8 local_role = BT_AVRCP_CT;
    
    for (i = 0; i < (g_mmi_avrcp_cntx[local_role].attr_count); i++)
    {
        if (attribute_id == g_mmi_avrcp_cntx[local_role].attribute_id[i])
        {
            return MMI_TRUE;
        }
    }
    
    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_check_attribute_support_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_supported_attr_req(U8 supported_attr[])
{
    U8 attr_count;
    U8 local_role;
    S32 i = 0;;
    local_role = BT_AVRCP_CT;
    attr_count = g_mmi_avrcp_cntx[local_role].attr_count;
    
    for (i = 0; i < attr_count; i++)
    {
        supported_attr[i] = g_mmi_avrcp_cntx[local_role].supported_attr_val[i].attribute_id;
    }

    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_attribute_supported_values_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_get_attribute_supported_values_req(srv_avrcp_player_app_settings_attr_enum attr_id ,U8 attr_val[],U8 *count)
{
    U8 local_role;
    U8 attr_count;

    S32 i = 0;
    S32 pos = -1;
    
    local_role = BT_AVRCP_CT;
    attr_count = g_mmi_avrcp_cntx[local_role].attr_count;

    do
    {
        for (i = 0; i < attr_count; i++)
        {
            if (g_mmi_avrcp_cntx[local_role].attribute_id[i] == attr_id)
            {
                pos = i;
                *count = g_mmi_avrcp_cntx[local_role].supported_attr_val[pos].attr_val_count;
            }
        }
        
        if (pos == -1)
        {
            break;
        }
        
        memset(attr_val,0,SRV_AVRCP_MAX_ATTR_VAL_NUM);
        
        for (i = 0; i < (g_mmi_avrcp_cntx[local_role].supported_attr_val[pos].attr_val_count); i++)
        {
            attr_val[i] = g_mmi_avrcp_cntx[local_role].supported_attr_val[pos].attr_values[i];
        }
        
        return SRV_AVRCP_RESULT_CMD_SUCCESS;
    } while(0);

    return SRV_AVRCP_ATTRIBUTE_NOT_SUPPORTED;    
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_unmask_reg_notification_event_id
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
U8 srv_avrcp_unmask_reg_notification_event_id(srv_avrcp_metadata_trasnfer_events event_id, S16 playback_interval)
{
    U16 tmp_val = 0;
    intermediate_result result;
    U8 local_role = BT_AVRCP_CT;
    tmp_val = (S32)calculate_pow(2, event_id);
    
    if (g_mmi_avrcp_cntx[local_role].event_ids & event_id)
    {
        return SRV_AVRCP_NOTIFICATION_ALREADY_REGISTERED;
    }
    
    if (event_id < 8)
    {
        g_mmi_avrcp_cntx[local_role].event_ids = g_mmi_avrcp_cntx[local_role].event_ids | (S32)calculate_pow(2, event_id);
    }
    
    if (playback_interval != -1)
    {
        g_mmi_avrcp_cntx[local_role].playback_interval = playback_interval;
    }
    
    if (tmp_val & event_id)
    {
        result = (intermediate_result)srv_avrcp_register_notification_req(event_id,(g_mmi_avrcp_cntx[local_role].playback_interval));
    }
    else
    {
        return SRV_AVRCP_ATTRIBUTE_NOT_SUPPORTED;
    }

    return (U8)result;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_playerapp_value_txt_equalizer_setting_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_playerapp_value_txt_equalizer_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER;
    srv_avrcp_get_player_app_value_txt_req(equliazer_settings);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_playerapp_value_txt_repeat_setting_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_playerapp_value_txt_repeat_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE;
    srv_avrcp_get_player_app_value_txt_req(equliazer_settings);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_playerapp_value_txt_shuffle_setting_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_playerapp_value_txt_shuffle_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE;
    srv_avrcp_get_player_app_value_txt_req(equliazer_settings);
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_playerapp_value_txt_scan_setting_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_get_playerapp_value_txt_scan_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE;
    srv_avrcp_get_player_app_value_txt_req(equliazer_settings);
}


void srv_avrcpv13_init_event_handler()
{
    SetProtocolEventHandler(srv_avrcp_sdp_query_cnf_hdlr, MSG_ID_BT_AVRCP_SDP_QUERY_CNF);
    SetProtocolEventHandler(srv_avrcp_version_indication_hdlr, MSG_ID_BT_AVRCP_VERSION_IND);
    SetProtocolEventHandler(srv_avrcp_list_player_app_attr_cnf_hdlr, MSG_ID_BT_AVRCP_LIST_PLAYERAPP_ATTRIBUTE_CNF);
    SetProtocolEventHandler(srv_avrcp_list_player_app_value_cnf_hdlr, MSG_ID_BT_AVRCP_LIST_PLAYERAPP_VALUE_CNF);
    SetProtocolEventHandler(srv_avrcp_curr_player_app_value_cnf_hdlr, MSG_ID_BT_AVRCP_GET_CURPLAYERAPP_VALUE_CNF);
    SetProtocolEventHandler(srv_avrcp_set_player_app_value_cnf_hdlr, MSG_ID_BT_AVRCP_SET_PLAYERAPP_VALUE_CNF);
    SetProtocolEventHandler(srv_avrcp_get_player_app_attr_txt_cnf_hdlr, MSG_ID_BT_AVRCP_GET_PLAYERAPP_ATTRIBUTETEXT_CNF);
    SetProtocolEventHandler(srv_avrcp_get_player_app_value_txt_cnf_hdlr, MSG_ID_BT_AVRCP_GET_PLAYERAPP_VALUETEXT_CNF);
    SetProtocolEventHandler(srv_avrcp_inform_displayable_charset_cnf_hdlr, MSG_ID_BT_AVRCP_INFORM_DISPLAY_CHARSET_CNF);
    SetProtocolEventHandler(srv_avrcp_inform_battery_status_of_ct_cnf_hdlr, MSG_ID_BT_AVRCP_INFORM_BATTERY_STATUSOFCT_CNF);
    SetProtocolEventHandler(srv_avrcp_get_element_attr_cnf_hdlr, MSG_ID_BT_AVRCP_GET_ELEMENT_ATTRIBUTES_CNF);
    SetProtocolEventHandler(srv_avrcp_get_play_status_cnf_hdlr, MSG_ID_BT_AVRCP_GET_PLAYERSTATUS_CNF);
    SetProtocolEventHandler(srv_avrcp_register_notification_cnf_hdlr, MSG_ID_BT_AVRCP_REGISTER_NOTIFICATION_CNF);
    SetProtocolEventHandler(srv_avrcp_abort_continueing_cnf_hdlr, MSG_ID_BT_AVRCP_ABORT_CONTINUERESPONSE_CNF);
}

U8 srv_avrcp_open_dev(U8 local_role)
{
    srv_avrcp_result_union reg_notity_result;
    
    g_mmi_avrcp_cntx[local_role].playback_interval = -1;
    g_mmi_avrcp_cntx[local_role].event_ids = (S32)calculate_pow(2,SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED) | 
                                             (S32)calculate_pow(2,SRV_AVRCP_EVENT_TRACK_CHANGED) |
                                             (S32)calculate_pow(2,SRV_AVRCP_EVENT_TRACK_REACHED_END) |
                                             (S32)calculate_pow(2,SRV_AVRCP_EVENT_TRACK_REACHED_START) |
                                             (S32)calculate_pow(2,SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED) |
                                             (S32)calculate_pow(2,SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED);
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_OPEN_DEV);
    //srv_avrcp_register_result_notifier(mmi_dummy_srv_avrcp_register_event); //to be removed

    switch (g_mmi_avrcp_cntx[local_role].intermediate_attr_state)
    {
        case SRV_AVRCP_LIST_PLAYER_INITIAL:
        {
            #ifdef __MMI_BT_DIALER_SUPPORT__
            BT_Music_app_emit_event(EVT_ID_BT_MUSIC_AVRCP_CONNECTED_EVENT_ID,NULL);
            #endif
            srv_avrcp_get_supported_attr_val_req();
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_GET_ELEM_ATTR:
        {
            srv_avrcp_get_elements_attr_request();
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(BT_AVRCP_CT,SRV_AVRCP_LIST_PLAYER_REGISTER_NOTIFY);
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_REGISTER_NOTIFY:
        {
            srv_avrcp_register_events_notification_req(reg_notity_result);
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(BT_AVRCP_CT,SRV_AVRCP_LIST_PLAYER_UNDEFINED);
            break;
        }
    }
    
    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

U8 srv_avrcp_close_dev(U8 local_role)
{
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_CLOSE_DEV);
    MMI_AVRCP_INTER_ATTR_STATE_TRANS(BT_AVRCP_CT, SRV_AVRCP_LIST_PLAYER_INITIAL);
    g_mmi_avrcp_cntx[local_role].event = 1;
    
    #ifdef __MMI_BT_DIALER_SUPPORT__
    BT_Music_app_emit_event(EVT_ID_BT_MUSIC_AVRCP_DISCONNECTED_EVENT_ID, NULL);
    #endif
    
    return SRV_AVRCP_RESULT_CMD_SUCCESS;
}

void srv_avrcp_register_events_notification_req(srv_avrcp_result_union reg_notity_result)
{
    static MMI_BOOL is_play_status_final_result = MMI_FALSE;
    U8 local_role = BT_AVRCP_CT;
    U8 playback_interval = g_mmi_avrcp_cntx[local_role].playback_interval;
    U16 tmp_val = 0;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_PLAYER_APP_REG_NOTIFY_ALL);
    
    if ((g_mmi_avrcp_cntx[local_role].event != 1) && 
        (reg_notity_result.reg_notification_event.is_interim == 0x00) &&
        (reg_notity_result.reg_notification_event.result == SRV_AVRCP_RESULT_SUCCESS))
    {
        is_play_status_final_result = MMI_TRUE;
        srv_avrcp_register_notification_req(reg_notity_result.reg_notification_event.event_id, playback_interval);
        return;
    }
    
    g_mmi_avrcp_cntx[local_role].event++;
    tmp_val = (S32)calculate_pow(2, g_mmi_avrcp_cntx[local_role].event);
    
    if ((tmp_val & g_mmi_avrcp_cntx[local_role].event_ids) &&
        (g_mmi_avrcp_cntx[local_role].event) < SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM)
    {
        srv_avrcp_register_notification_req(g_mmi_avrcp_cntx[local_role].event, playback_interval);
        return;
    }
    
    if (is_play_status_final_result == MMI_TRUE)
    {
        switch (reg_notity_result.reg_notification_event.event_id)
        {
            case SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED:
            case SRV_AVRCP_EVENT_TRACK_CHANGED:
            case SRV_AVRCP_EVENT_TRACK_REACHED_END:
            case SRV_AVRCP_EVENT_TRACK_REACHED_START:
            {
                is_play_status_final_result = MMI_FALSE;
                srv_avrcp_get_elements_attr_request();
                break;
            }
        }
    }  
}

void srv_avrcp_get_playerapp_equalizer_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER;
    srv_avrcp_list_player_app_value_req(equliazer_settings);
}


void srv_avrcp_get_playerapp_repeat_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE;
    srv_avrcp_list_player_app_value_req(equliazer_settings);
}

void srv_avrcp_get_playerapp_shuffle_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE;
    srv_avrcp_list_player_app_value_req(equliazer_settings);
}

void srv_avrcp_get_playerapp_scan_setting_req()
{
    srv_avrcp_player_app_settings_attr_enum equliazer_settings;

    equliazer_settings = SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE;
    srv_avrcp_list_player_app_value_req(equliazer_settings);
}


U8 srv_avrcp_get_supported_attr_val_req()
{
    U8 local_role = BT_AVRCP_CT;
    U8 state;

    if (MMI_FALSE == srv_avrcp_check_version_capability(local_role))
    {
        return SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY;
    }
    
    if (SRV_AVRCP_LIST_PLAYER_INITIAL == g_mmi_avrcp_cntx[local_role].intermediate_attr_state)
    {
        MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_ATTR);
    }
    
    state = g_mmi_avrcp_cntx[local_role].intermediate_attr_state;

    switch (state)
    {
        case SRV_AVRCP_LIST_PLAYER_ATTR:
        {
            srv_avrcp_list_player_app_attr_req();
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_ATTR_VAL_EQUALIZER);
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_ATTR_VAL_EQUALIZER:
        {
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_ATTR_VAL_REPEAT);
            
            if (srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER) != MMI_TRUE)
            {
                srv_avrcp_get_supported_attr_val_req();
                break;
            }
            
            srv_avrcp_get_playerapp_equalizer_setting_req();
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_ATTR_VAL_REPEAT:
        {
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_ATTR_VAL_SHUFFLE);

            if (srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE) != MMI_TRUE)
            {
                srv_avrcp_get_supported_attr_val_req();
                break;
            }
            
            srv_avrcp_get_playerapp_repeat_setting_req();
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_ATTR_VAL_SHUFFLE:
        {
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_ATTR_VAL_SCAN);

            if (srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE) != MMI_TRUE)
            {
                srv_avrcp_get_supported_attr_val_req();
                break;
            }
            
            srv_avrcp_get_playerapp_shuffle_setting_req();
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_ATTR_VAL_SCAN:
        {
            MMI_AVRCP_INTER_ATTR_STATE_TRANS(local_role,SRV_AVRCP_LIST_PLAYER_REGISTER_NOTIFY);

            if (srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE) != MMI_TRUE)
            {
                srv_avrcp_get_supported_attr_val_req();
                break;
            }
            
            srv_avrcp_get_playerapp_scan_setting_req();
            break;
        }
        
        case SRV_AVRCP_LIST_PLAYER_REGISTER_NOTIFY:
        {
            g_mmi_avrcp_cntx[local_role].event = 0;
            srv_avrcp_open_dev(BT_AVRCP_CT);
            break;
        }
    }
    
    return 0;
}

S32 calculate_pow(S32 base, S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i, ret = 1;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 0; i < index; i++)
    {
        ret = ret * base;
    }
    return ret;
}

//#define TEST_CODE

#ifdef TEST_CODE
U8  mmi_srv_avrcp_proc_inject_string(U8 index, kal_uint8* string)
{
    U8 event_ids;
    S32 pos = 0;
    U16    charset[4];
    U16    attribute_ids[4];
    U8    values[4];
    S32 count= 2;
    U8    attr_id ;
    U8 attr_val[4];
    U8 count1 = 0;
    srv_avrcp_result_union reg_notity_result;
    S32 i = 0;
    srv_avrcp_player_app_settings_attr_enum supported_attr[4];
    MMI_BOOL check_status = MMI_FALSE;
    
    charset[0] = 0x02;
    charset[1] = 0x00;
    charset[2] = 0x00;
    charset[3] = 0x00;
    attribute_ids[0] = 0x02;
    attribute_ids[1] = 0x03;
    values[0] = 0x02;
    values[1] = 0x01;
    values[2] = 0x03;
    values[3] = 0x02;
    event_ids = SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED | 
                SRV_AVRCP_EVENT_TRACK_CHANGED |
                SRV_AVRCP_EVENT_TRACK_REACHED_END |
                SRV_AVRCP_EVENT_TRACK_REACHED_START |
                SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED |
                SRV_AVRCP_EVENT_BATT_STATUS_CHANGED |
                SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED |
                SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED;
    pos = 2;

    switch (index)
    {
        case 26:    
            i = (S32)calculate_pow(2,4) | (S32)calculate_pow(2,3);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"test:%d",i);
        case 25:
            srv_avrcp_register_result_notifier(mmi_dummy_srv_avrcp_register_event);
            break;
        case 0:
            srv_avrcp_list_player_app_attr_req();
            break;
        case 1:
            srv_avrcp_list_player_app_value_req(SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE);
            break;
        case 2:
            srv_avrcp_list_player_app_value_req(SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE);
            break;
        case 3:
            srv_avrcp_get_supported_attr_req(supported_attr);
            for (i=0;i<4;i++)
                kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"attr:%d",supported_attr[i]);
            break;
        case 4:
            check_status = srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"check_status:%d",check_status); 
            check_status = srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"check_status:%d",check_status); 
            check_status = srv_avrcp_check_attribute_support_status_req(SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"check_status:%d",check_status); 
            break;
        case 5:
            attr_id = SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE;
            check_status = srv_avrcp_get_attribute_supported_values_req(attr_id ,attr_val,&count1);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"result:%d",check_status);
            if (SRV_AVRCP_RESULT_CMD_SUCCESS != check_status)
                break;
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"count:%d",count1);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"attr_id:%d",attr_id);
            for (i=0;i<(count1);i++)
                kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"attr_value[%d]:%d",i,attr_val[i]);
            break;
        case 6:
            srv_avrcp_get_curr_player_app_value_req();
            break;
        case 7:
            srv_avrcp_set_player_app_value_req(values);
            break;
        case 8:
            srv_avrcp_get_player_app_attr_txt_req();
            break;
        case 9:
            srv_avrcp_get_playerapp_value_txt_equalizer_setting_req();
            break;
        case 10:
            srv_avrcp_get_playerapp_value_txt_repeat_setting_req();
            break;
        case 11:
            srv_avrcp_get_playerapp_value_txt_shuffle_setting_req();
            break;
        case 12:
            srv_avrcp_get_playerapp_value_txt_scan_setting_req();
            break;
        case 13:
            srv_avrcp_inform_displayable_charset_req(charset);
            break;
        case 14:
            srv_avrcp_inform_battery_status_of_ct_req(SRV_AVRCP_BATTERY_STATUS_CRITICAL);
            break;
        case 15:
            srv_avrcp_get_elements_attr_request();
            break;
        case 16:
            srv_avrcp_get_play_status_req();
            break;
        case 17:
            srv_avrcp_abort_continueing_req();
            break;
        case 18:
            srv_avrcp_unmask_reg_notification_event_id(SRV_AVRCP_EVENT_TRACK_REACHED_END,-1);
            break;
        case 19:
            check_status = srv_avrcp_unmask_reg_notification_event_id(SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED,-1);
            kal_wap_trace(MOD_MMI_CONN_APP,TRACE_GROUP_7,"check_status:%d",check_status);
            break;
        case 20:
            srv_avrcp_open_dev(BT_AVRCP_CT);
            break;
        case 21:
            srv_avrcp_get_supported_attr_val_req();
            break;
        case 22:
            srv_avrcp_register_events_notification_req(reg_notity_result);
            break;
    }
    return 0;
}

void mmi_dummy_srv_avrcp_register_event(srv_avrcp_event_enum notify_event_id,srv_avrcp_result_union result)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 0;
    S32 j = 0;
    S32 pos = 0;
    S32 attr_count;
    S32 attr_val_count;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    switch (notify_event_id)
    {
        case SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT");
            
            if (result.supported_attr_list_result.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            attr_count = result.supported_attr_list_result.attr_count;
            
            for (j = 0; j < attr_count; j++)
            {
                TRACE(result.supported_attr_list_result.supported_attr_list[j])
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT,id:%d",result.supp_attr_val_list.attribute_id);

            if (result.supp_attr_val_list.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            attr_val_count = result.supp_attr_val_list.attr_val_count;
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "val_count:%d",attr_val_count);
            
            for (j = 0; j < attr_val_count; j++)
            {
                TRACE(result.supp_attr_val_list.attr_values[j]);
            }
            
            break;
        }
        
        case  SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT");
            
            if (result.supported_attr_list_result.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.curr_attr_list_result.count);
            TRACE(result.curr_attr_list_result.error_code);
            TRACE(result.curr_attr_list_result.result);
            
            for (i = 0; i < result.curr_attr_list_result.count; i++)
            {
                TRACE(result.curr_attr_list_result.curr_attr_list[i].attribute_id);
                TRACE(result.curr_attr_list_result.curr_attr_list[i].attr_values);
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT");
            
            if (result.result_cnf.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.curr_attr_list_result.error_code);
            TRACE(result.curr_attr_list_result.result);
            break;
        }
        
        case SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT");
            
            if (result.attr_txt_result.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.attr_txt_result.count);
            TRACE(result.attr_txt_result.error_code);
            TRACE(result.attr_txt_result.result);
            TRACE(result.attr_txt_result.count);
            
            for (i = 0; i < result.attr_txt_result.count; i++)
            {
                TRACE(result.attr_txt_result.charset[i]);
                TRACE(result.attr_txt_result.attr_txt[i].attribute_id);
                TRACE_S(result.attr_txt_result.attr_txt[i].attr_str);
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT");
            
            if (result.val_txt_result.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.val_txt_result.count);
            TRACE(result.val_txt_result.attr_id);
            TRACE(result.val_txt_result.error_code);
            TRACE(result.val_txt_result.result);
            
            for (i = 0; i < result.val_txt_result.count; i++)
            {
                TRACE(result.val_txt_result.value_txt[result.val_txt_result.attr_id].charset);
                TRACE(result.val_txt_result.value_txt[result.val_txt_result.attr_id].value_id);
                TRACE_S(result.val_txt_result.value_txt[result.val_txt_result.attr_id].value_str);
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT");
            
            if (result.play_status.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.play_status.error_code);
            TRACE(result.play_status.play_status);
            TRACE(result.play_status.result);
            TRACE(result.play_status.song_len);
            TRACE(result.play_status.song_pos);
            break;
        }
        
        case SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT");
            
            if (result.elem_attr.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.elem_attr.count);
            TRACE(result.elem_attr.error_code);
            TRACE(result.elem_attr.result);
            
            for (i = 0; i < result.elem_attr.count; i++)
            {
                TRACE(result.elem_attr.elements[i].elem_id);
                TRACE(result.elem_attr.elements[i].charset);
                TRACE_S(result.elem_attr.elements[i].element_data);
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT");

            if (result.result_cnf.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.curr_attr_list_result.error_code);
            TRACE(result.curr_attr_list_result.result);
            break;
        }
        
        case SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7,"SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT");

            if (result.result_cnf.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.curr_attr_list_result.error_code);
            TRACE(result.curr_attr_list_result.result);
            break;
        }
        
        case SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT");
            
            if (result.reg_notification_event.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.reg_notification_event.is_interim);
            TRACE(result.reg_notification_event.event_id);
            TRACE(result.reg_notification_event.batt_status);
            TRACE(result.reg_notification_event.playback_status);
            TRACE(result.reg_notification_event.song_pos);
            TRACE(result.reg_notification_event.system_status);
            TRACE(result.reg_notification_event.count);
            
            for (i = 0; i < result.reg_notification_event.count; i++)
            {
                TRACE(result.reg_notification_event.attr_id[i]);
                TRACE(result.reg_notification_event.attr_val[i]);
            }
            
            break;
        }
        
        case SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT:
        {
            kal_wap_trace(MOD_MMI_CONN_APP, TRACE_GROUP_7, "SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT");
            
            if (result.result_cnf.result != SRV_AVRCP_RESULT_SUCCESS)
            {
                break;
            }
            
            TRACE(result.curr_attr_list_result.error_code);
            TRACE(result.curr_attr_list_result.result);
            break;
        }
    }
}
#endif //TEST CODE
#endif /*__MMI_BT_AVRCP_V13__*/

#ifdef __MMI_EM_BT_AVRCP_CONNECT_TG_ACTIVELY__
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_actively_connect_tg_flag
 * DESCRIPTION
 *  get flag 
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_avrcp_get_actively_connect_tg_flag(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_GET_ACTIVELY_TG, g_mmi_avrcp_actively_connect_tg);

    return g_mmi_avrcp_actively_connect_tg;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_actively_connect_tg_flag
 * DESCRIPTION
 *  for em to set this flag
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_actively_connect_tg_flag(MMI_BOOL on_off)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_TRC_SET_ACTIVELY_TG, on_off);

    g_mmi_avrcp_actively_connect_tg = on_off;
}

#endif

#ifdef SRV_A2DP_SINK_BT_AVRCP_CONNECT_CT_ACTIVELY__
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_actively_connect_tg_flag
 * DESCRIPTION
 *  get flag 
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_avrcp_get_actively_connect_ct_flag(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    return g_mmi_avrcp_actively_connect_ct;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_actively_connect_tg_flag
 * DESCRIPTION
 *  for em to set this flag
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_set_actively_connect_ct_flag(MMI_BOOL on_off)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    g_mmi_avrcp_actively_connect_ct = on_off ;
}
#endif //SRV_A2DP_SINK_BT_AVRCP_CONNECT_CT_ACTIVELY__

#ifdef __BT_SPEAKER_SUPPORT__
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_sink_timer_callback
 * DESCRIPTION
 *  
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
static void srv_avrcp_sink_timer_callback(U16 op_code, U8 command_type, BOOL key_press)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_CT_TRC_CLEAR_CMD_FRAME, g_mmi_avrcp_cntx[BT_AVRCP_CT].cmd_frame); 

    if (g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_state != SRV_AVRCP_CONNECTED)
    {
        return;
    }
    
    srv_avrcp_cmd_frame_req(BT_AVRCP_CT, BT_AVRCP_OP_PASS_THROUGH, g_mmi_avrcp_cntx[BT_AVRCP_CT].cmd_frame,0);
    g_mmi_avrcp_cntx[BT_AVRCP_CT].is_timer_on = 0;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_sink_send_cmd_frame
 * DESCRIPTION
 *  
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void srv_avrcp_sink_send_cmd_frame(S32 cmd_frame)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_CT_TRC_SEND_CMD_FRAME, cmd_frame); 

    if (g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_state != SRV_AVRCP_CONNECTED)
    {
        return;
    }
    
    if (cmd_frame < 0)
    {
        return;
    }
    
    srv_avrcp_cmd_frame_req(BT_AVRCP_CT, BT_AVRCP_OP_PASS_THROUGH, cmd_frame, 1);
    g_mmi_avrcp_cntx[BT_AVRCP_CT].cmd_frame = (U32)cmd_frame;
    g_mmi_avrcp_cntx[BT_AVRCP_CT].is_timer_on = 1;
}

        
static void srv_avrcp_ct_set_cmd_frame_cnf_hdlr(AVRCP_SRV_CMD_CNF_CALLBACK callback_func)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_mmi_avrcp_cmd_cnf_ptr = callback_func;
}

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_is_avrcp_connected
 * DESCRIPTION
 *  
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_avrcp_is_avrcp_connected(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_CT_TRC_IS_CONN, g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_state);
    
    if (g_mmi_avrcp_cntx[BT_AVRCP_CT].avrcp_state == SRV_AVRCP_CONNECTED)
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
 *  srv_avrcp_is_avrcp_ct_ready_cmd
 * DESCRIPTION
 *  
 * PARAMETERS
 *  MMI_BOOL    [IN]
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_avrcp_is_avrcp_ct_ready_cmd(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_TRACE(MMI_CONN_TRC_G7_BT, MMI_AVRCP_CT_TRC_IS_CT_READY, g_mmi_avrcp_cntx[BT_AVRCP_CT].is_timer_on); 

    if (g_mmi_avrcp_cntx[BT_AVRCP_CT].is_timer_on == 0)
    {
        return MMI_TRUE;
    }
    else
    {
        return MMI_FALSE;
    }
}
#endif //__BT_SPEAKER_SUPPORT__
#endif /* (defined(__MMI_AVRCP_SUPPORT__) || defined(__MMI_AVRCP_CT_SUPPORT__)) */

