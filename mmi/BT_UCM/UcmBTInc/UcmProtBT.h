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
 *  UCMProt.h
 *
 * Project:
 * -------- 
 *  MAUI
 *
 * Description:
 * ------------
 *  UCM app internal header file
 *
 * Author:
 * -------
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef UCM_BT_PROT_H
#define UCM_BT_PROT_H

/* Include files---------------------------------------------------------------------------- */

#include "MMI_features.h"
#include "mmi_res_range_def.h"
#include "MMIDataType.h"
#include "nvram_common_defs.h"
#include "wgui_categories_list.h"
#include "custom_mmi_default_value.h"
#include "UcmGprot.h"
#include "app_datetime.h"
#include "mmi_frm_scenario_gprot.h"
#include "mmi_frm_input_gprot.h"
#include "gui_data_types.h"
#include "mmi_frm_events_gprot.h"
#include "kal_general_types.h"
#include "gui_typedef.h"
#include "AlertScreen.h"
#include "BTDialerSrvGprot.h"
#include "wgui_categories_CM.h"
#include "PhbpbapSrvGprot.h"

/* Define----------------------------------------------------------------------------------- */
#define MMI_UCM_NOTIFY_TIMEOUT_BT  (2000)
#define MMI_UCM_MO_PROCESSING_TIMEOUT_BT (12000)

#define MMI_UCM_VIB_THEN_RING_DURATION 6000 /* move from profile module */
#define MMI_UCM_DTMF_LEN                   (40)
#define MMI_UCM_END_TEXT_LEN_BT                (50)

/* Maximum number length */
#define SRV_UCM_BT_MAX_NUM_URI_LEN (41)
#define SRV_UCM_BT_MAX_CALL (3)
#define SRV_UCM_BT_MAX_DISP_NAME_LEN (MAX_SUBMENU_CHARACTERS)

#define MMI_UCM_BT_DTMF_LEN                   (40)
#define SRV_UCM_BT_MAX_ERR_MSG_LEN (50)
#define UCMBT_PBAPC_MAX_QUERY_COUNT 5
/* typedef enum----------------------------------------------------------------------------- */


/* Call state enum */
typedef enum
{
    SRV_UCM_BT_BT_IDLE_STATE = 0x00, /* IDLE state */
    SRV_UCM_BT_OUTGOING_STATE = 0x01, /* Outgoing state */
    SRV_UCM_BT_INCOMING_STATE = 0x02, /* Incoming state */
    SRV_UCM_BT_ACTIVE_STATE = 0x04, /* Active state */
    SRV_UCM_BT_HOLD_STATE = 0x08, /* Hold state */
    SRV_UCM_BT_CALL_STATE_END_OF_ENUM /* End of the enum */
} srv_ucm_bt_call_state_enum;
typedef enum
{
	MMI_UCM_BT_ACTION_NONE,
	MMI_UCM_BT_ACTION_ADD_MO,
	MMI_UCM_BT_ACTION_ADD_MT,
	MMI_UCM_BT_ACTION_DELETE,
	MMI_UCM_BT_ACTION_UPDATE
}mmi_ucm_bt_action_enum;

#ifdef __MMI_FTE_SUPPORT__
typedef enum
{
    MMI_UCM_BT_UNLOCK_STATE,
    MMI_UCM_BT_WTL_STATE, /* wait to lock */
    MMI_UCM_BT_LOCK_STATE,
    MMI_UCM_BT_AUTO_LOCK_STATE_TOTAL
}mmi_ucm_bt_auto_lock_state_enum;


typedef enum
{
    MMI_UCM_BT_AL_OUTGOING_EVENT,
    MMI_UCM_BT_AL_INCOMING_EVENT,
    MMI_UCM_BT_AL_RELEASE_EVENT,
    MMI_UCM_BT_AL_CONNECT_EVENT,
    MMI_UCM_BT_AL_UNLOCK_EVENT,
    MMI_UCM_BT_AL_WTL_TIMEOUT_EVENT, /* Wait to lock timeout*/
    MMI_UCM_BT_AL_EVENT_TOTAL
} mmi_ucm_bt_auto_lock_trigger_event_enum;


#define MMI_UCM_BT_FTE_AUTO_LOCK_TIMEOUT  (5000)

#endif


#define SRV_UCM_BT_CALL_STATE_CONNECTED (srv_ucm_bt_call_state_enum) (SRV_UCM_BT_ACTIVE_STATE | SRV_UCM_BT_HOLD_STATE)
#define SRV_UCM_BT_CALL_STATE_ALL (srv_ucm_bt_call_state_enum)(SRV_UCM_BT_INCOMING_STATE|SRV_UCM_BT_OUTGOING_STATE|SRV_UCM_BT_ACTIVE_STATE | SRV_UCM_BT_HOLD_STATE)


/* typedef struture------------------------------------------------------------------------- */


typedef struct
{
    MYTIME call_duration;
    U16 *disp_msg;
    U16 image_id;
    U16 tone_id;
    } mmi_ucm_bt_call_end_struct;
typedef struct
{
    U16 title_string;
    U16 body_string; /* string ID */
    U8* body_string_pointer; /* string pointer */
    U16 animation_image;
    U16 lsk_string;
    FuncPtr lsk_funcPtr;
    U16 rsk_string;
    FuncPtr rsk_funcPtr;
    FuncPtr send_funcPtr;
    FuncPtr end_funcPtr;
} mmi_ucm_bt_proc_scr_struct;


/* Variable----------------------------------------------------------------------------------- */
typedef struct
{
    U8 call_id;
    U8 dir;
    U8 mode;
    U8 multiParty;
    srv_ucm_bt_call_state_enum call_state; //to maintain the varios states of a call like Active, Hold, etc
    U8 num_uri[SRV_UCM_BT_MAX_NUM_URI_LEN + 1]; /* Number, ascii */
    MYTIME start_time;//Maintain time duration of the active call
#ifdef __BT_PBAP_CLIENT__
    SRV_PHB_PBAPC_HANDLE pbapc_handle;
    S32 pbapc_query_count;
    srv_phb_pbapc_list_entry_struct pbapc_list_entry[UCMBT_PBAPC_MAX_QUERY_COUNT];
    srv_phb_pbap_storage_enum pbapc_path;
    MMI_BOOL pbapc_is_query;
#endif /* __BT_PBAP_CLIENT__ */
}mmi_ucm_call_state_cntx_struct;
typedef struct
{
    U8 call_id;
    srv_ucm_bt_call_state_enum call_state;
    U8 num_uri[SRV_UCM_BT_MAX_NUM_URI_LEN + 1];
    U8 dir;
    U8 mode;
    U8 multiParty;
}mmi_ucm_call_info_cntx_struct;

typedef struct
{
    U16 disp_dtmf[MMI_UCM_DTMF_LEN + 1 + 1];
    U8 num_uri[SRV_UCM_BT_MAX_NUM_URI_LEN + 1]; /* Number, ascii */
    mmi_ucm_bt_proc_scr_struct proc_scr;
    S32 hilite_tab;
    S32 hilite_index;
    mmi_id outgoing_opt_cui_id;
    mmi_id incoming_opt_cui_id;
    mmi_id incall_opt_cui_id;
    mmi_id in_call_dialer_opt_cui_id;
    U16 call_end_tone_id;
#ifdef  __MMI_FTE_SUPPORT__
    mmi_ucm_bt_auto_lock_state_enum auto_lock_state;
#endif /* __MMI_FTE_SUPPORT__ */
#ifdef __BT_PBAP_CLIENT__
    SRV_PHB_PBAPC_HANDLE del_pbapc_handle;
#endif /* __BT_PBAP_CLIENT__ */
    mmi_ucm_after_make_call_callback after_callback;
    mmi_ucm_after_make_call_cb_struct after_callback_user_data;
    mmi_ucm_call_state_cntx_struct release_call_info;
    MMI_BOOL is_setup;
    MMI_BOOL disconnecting;
    MMI_BOOL ucm_ringtone; // ringtone is playing
    MMI_BOOL is_ring; // have received RING_IND
    MMI_BOOL is_hide_screen;
    MMI_BOOL is_need_accept;
    MMI_BOOL is_end_all_action;
    MMI_BOOL is_need_update;
    MMI_BOOL is_need_send_evt; // send to clog
    MMI_BOOL is_fp_swap;
} mmi_ucm_bt_cntx_struct;

extern mmi_ucm_bt_cntx_struct *g_ucm_p_bt;

extern mmi_ucm_call_state_cntx_struct g_ucm_call_state[SRV_UCM_BT_MAX_CALL];
extern mmi_ucm_call_info_cntx_struct g_ucm_call_state_temp[SRV_UCM_BT_MAX_CALL];
extern U8 g_num_calls ;

#ifdef __MMI_UCM_BT_CALL_RECORDER__ 
extern MYTIME g_ucm_bt_start_record_time;
#endif
/* Function---------------------------------------------------------------------------------- */
/* UcmEventHdlr.c */

/* ==================================================================================== */
/* =============Kernel EventHdlr related=============================================== */
/* ==================================================================================== */

/* ==================================================================================== */
/* ============= VT Core related====================================================== */
/* ==================================================================================== */ 

/* UcmUi.c */
/* ==================================================================================== */
/* =============Initialization========================================================= */
/* ==================================================================================== */
extern void mmi_ucm_init_context_bt(void);
extern void mmi_ucm_bt_dialer_register_hf_event(int srv_hd, srv_bt_dialer_notify_event_struct notify);
extern MMI_BOOL mmi_ucm_dial_option_bt(CHAR *num_uri);
extern int mmi_ucm_end_option_bt();
extern int mmi_ucm_end_all_option_bt();
extern int mmi_ucm_hold_option_bt();
extern int mmi_ucm_swap_option_bt();
extern void mmi_ucm_entry_error_message_bt(void);
extern void mmi_ucm_call_launch_bt(void );
extern void mmi_ucm_call_launch_set_para(U16* num, mmi_ucm_after_make_call_callback callback, void* user_data);
extern U8 mmi_ucm_get_call_count_bt(void);
extern S32 mmi_ucm_query_call_count_by_call_state_bt(srv_ucm_bt_call_state_enum call_state, S32* index);
extern S32 mmi_ucm_query_group_count_bt(srv_ucm_bt_call_state_enum call_state, S32* index);
extern mmi_ucm_bt_action_enum mmi_ucm_sync_call_list(mmi_ucm_call_state_cntx_struct* call_state_cntx,mmi_ucm_call_info_cntx_struct* call_info);
extern srv_ucm_bt_call_state_enum mmi_ucm_call_state_type_btsrv_to_app_bt(srv_bt_dialer_AtCallState_enum btsrv_type);
extern void mmi_ucm_send_update_clog_evt_bt(void);
extern void mmi_ucm_clean_all_bt(void);
extern void mmi_ucm_play_incoming_ringtone_bt(MMI_BOOL is_wait_call);
extern void mmi_ucm_stop_incoming_ringtone_bt(void);
extern void mmi_ucm_incoming_call_sendkey_bt(void);
extern MMI_BOOL mmi_ucm_get_hide_state_bt(void);
extern void mmi_ucm_set_hide_state_bt(MMI_BOOL new_hide_state);
extern void mmi_ucm_release_ind_bt(void);
#ifdef __MMI_UCM_BT_CALL_RECORDER__
extern void mmi_ucm_start_record_option_bt(void);
extern void mmi_ucm_end_record_option_bt(void);
extern void mmi_ucm_start_record_evt_hdlr_bt(mdi_result result, void *user_data);
extern void mmi_ucm_sndrec_in_call_action_bt(void);
#endif/*__MMI_UCM_BT_CALL_RECORDER__*/
#ifdef __BT_PBAP_CLIENT__
extern void mmi_ucm_destory_pbap_handle(SRV_PHB_PBAPC_HANDLE* handle);
#endif /* __BT_PBAP_CLIENT__ */

/* ==================================================================================== */
/* =============UI Screen flow========================================================= */
/* ==================================================================================== */
extern void mmi_ucm_exit_incoming_call_bt(mmi_scrn_essential_struct* scr_info); 
extern void mmi_ucm_exit_outgoing_call_bt(mmi_scrn_essential_struct* scr_info);
extern void mmi_ucm_exit_in_call_bt(mmi_scrn_essential_struct* scr_info); 

extern void mmi_ucm_highlight_in_call_item_bt(S32 index);     
extern void mmi_ucm_tab_jump_bt(S32 index);
extern void mmi_ucm_tab_prev_bt(void); 
extern void mmi_ucm_tab_next_bt(void); 
extern void mmi_ucm_tab_highlight_bt(void); 
extern void mmi_ucm_go_back_screen_check_bt(void);
extern void mmi_ucm_hold_action_bt(void);
extern void mmi_ucm_retrieve_action_bt(void);
extern void mmi_ucm_swap_action_bt(void);

/* ==================================================================================== */
/* =============category ============================================================== */
/* ==================================================================================== */


extern void mmi_ucm_enter_incoming_call_bt(void);
extern void mmi_ucm_entry_incoming_call_bt(mmi_scrn_essential_struct* scr_info);

extern void mmi_ucm_enter_outgoing_call_bt(void);
extern void mmi_ucm_entry_outgoing_call_bt(mmi_scrn_essential_struct* scr_info);


extern void mmi_ucm_enter_in_call_bt(void);
extern void mmi_ucm_entry_in_call_bt(mmi_scrn_essential_struct* scr_info);


extern void mmi_ucm_entry_call_end_bt(mmi_scrn_essential_struct* scr_info);
extern void mmi_ucm_exit_call_end_bt(mmi_scrn_essential_struct* scr_info);

extern void mmi_ucm_enter_dialling_bt(void);
extern void mmi_ucm_entry_dialling_bt(mmi_scrn_essential_struct* scr_info);

/* ==================================================================================== */
/* =============UI hint =============================================================== */
/* ==================================================================================== */

/* ==================================================================================== */
/* =============highlight ============================================================= */
/* ==================================================================================== */


extern void mmi_ucm_delete_all_screen_bt(void);
extern void mmi_ucm_close_cui_bt(mmi_id *cui_id);
extern U16 mmi_ucm_get_call_type_string_id_bt(srv_ucm_bt_call_state_enum call_state);

/* ==================================================================================== */
/* =============VT related============================================================= */
/* ==================================================================================== */


/* Group proc */
extern mmi_ret mmi_ucm_incall_sg_proc_bt(mmi_event_struct *evt);
extern mmi_ret mmi_ucm_call_end_screen_delete_proc_bt(mmi_event_struct *evt);
extern MMI_ID mmi_ucm_sg_create_bt(MMI_ID parent_id, MMI_ID group_id);
extern void mmi_ucm_go_back_BT_call_screen_bt(void);
extern void mmi_ucm_bt_pre_enter_processing_screen(MMI_ID SG_id);
extern void mmi_ucm_bt_enter_processing_screen(MMI_ID SG_id);
extern void mmi_ucm_bt_close_processing_scrn(void);
extern void mmi_ucm_bt_enter_processing_screen_internal(MMI_ID SG_id);
extern void mmi_ucm_bt_entry_processing_screen_internal(mmi_scrn_essential_struct* scr_info);
extern mmi_ret mmi_ucm_bt_processing_screen_delete_proc(mmi_event_struct *evt);
extern void mmi_ucm_end_and_accpet_confirm_bt(MMI_ID parent_id);
extern void mmi_ucm_end_and_accpet_entry_confirm_bt(mmi_scrn_essential_struct* scr_info);
extern void mmi_ucm_end_and_accpet_entry_confirm_bt(mmi_scrn_essential_struct* scr_info);
extern void mmi_ucm_end_and_accpet_confirm_yes_hdlr_bt(void);
extern 	mmi_ret mmi_ucm_act_callback_bt(mmi_event_struct *event);
extern int mmi_ucm_answer_option_bt();
extern int mmi_ucm_retrieve_option_bt();
extern void mmi_ucm_end_btdialer_and_accept_option_bt(void);
extern mmi_ret mmi_ucm_incall_opt_proc_bt(mmi_event_struct *evt);
extern void mmi_ucm_in_call_endkey_bt(void);
extern void mmi_ucm_play_waitingtone_bt(void);
#ifdef __MMI_FTE_SUPPORT__
extern void mmi_ucm_FTE_unlock_hdlr_bt(void);
extern void mmi_ucm_FTE_fill_unlock_item_bt(wgui_catcall_fte_iconbar_item_struct *item);
extern void mmi_ucm_FTE_auto_lock_timeout_hdlr_bt(void);
extern void mmi_ucm_FTE_screen_touch_hdlr_bt(MMI_BOOL is_touched);
extern MMI_BOOL mmi_ucm_FTE_is_lock_mechanism_applied_screens_bt(void);
extern void mmi_ucm_FTE_scrn_update_hdlr_by_lock_state_bt(mmi_ucm_bt_auto_lock_state_enum lock_state);
extern void mmi_ucm_auto_lock_fsm_hdlr_bt(mmi_ucm_bt_auto_lock_trigger_event_enum event);
extern mmi_ucm_bt_auto_lock_state_enum mmi_ucm_get_auto_lock_state_bt(void);
#endif

#endif /* UCM_BT_PROT_H */ 

