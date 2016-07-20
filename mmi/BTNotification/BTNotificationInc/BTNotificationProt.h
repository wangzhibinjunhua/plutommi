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
 * btmmispp.h
 *
 * Project:
 * --------
 *  
 *
 * Description:
 * ------------
 *   This file is for BT SPP app.
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================
 ****************************************************************************/
#ifndef __BT_NOTIFICATION_PROT_H__
#define __BT_NOTIFICATION_PROT_H__

#include "mmi_features.h"
#if (defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__))
#include "MMIDataType.h"
#include "BTNotiSrvGprot.h"
#include "notificationGprot.h"

typedef enum
{   
    MMI_BT_NOTIFICATION_SCRN_MAIN,
    MMI_BT_NOTIFICATION_SCRN_DELETE,
    MMI_BT_NOTIFICATION_SCRN_TOTAL
} mmi_bt_notification_scrn_enum;

typedef enum
{   
    MMI_BT_NOTIFICATION_OPTION_REPLY,
    MMI_BT_NOTIFICATION_OPTION_FORWARD,
    MMI_BT_NOTIFICATION_OPTION_CALL,
    MMI_BT_NOTIFICATION_OPTION_BLOCK,
    MMI_BT_NOTIFICATION_OPTION_DELETE,
    MMI_BT_NOTIFICATION_OPTION_EMPTY,
    MMI_BT_NOTIFICATION_OPTION_TOTAL
} mmi_bt_notification_option_enum;

typedef struct
{
    U8 id;
    mmi_bt_notification_option_enum option_enum;
    MMI_BOOL is_sender_valid;
    WCHAR send_number[BT_NOTIFY_NUMBER_LENTH]; // for sms only, contact number
    WCHAR content[BT_NOTIFY_SEND_SMS_CONTENT_LENTH];
} mmi_bt_notification_option_struct;

typedef struct 
{
    U8 id;
    U8 total;
    MMI_ID grp_id;
    MMI_ID popup_grp_id;
    
    mmi_id process_grp_id;
    U16 process_body_StrId;
    U16 process_rsk_StrId;
        
    srv_bt_noti_data_msg_node_struct node;
    WCHAR category_text_buffer[BT_NOTIFY_CONTENT_LENTH + BT_NOTIFY_TICKER_TEXT_LENTH + 2];
    mmi_bt_notification_scrn_enum scrn_type;
    mmi_bt_notification_option_struct *option_struct;

    MMI_BOOL is_in_composer;
    MMI_BOOL need_popup;
    srv_bt_noti_refresh_evt_struct refresh_cntx;
    srv_bt_noti_sync_event_struct sync_time_cntx;
} mmi_bt_notification_cntx_struct;

#define MMI_BT_NOTIFICATION_SMS_MAX_NUMBER (BT_NOTIFY_SEND_SMS_CONTENT_LENTH * ENCODING_LENGTH)

extern void mmi_bt_notification_init();

extern void mmi_bt_notification_highlight();

extern void mmi_bt_notification_set_show_id();

extern mmi_ret mmi_bt_notification_main_group_proc (mmi_event_struct *param);

extern mmi_ret mmi_bt_notification_main_scrn_proc (mmi_event_struct *param);

extern mmi_ret mmi_bt_notification_main_show(mmi_event_struct *evt);

extern mmi_ret mmi_bt_notification_main_goback(mmi_event_struct *evt);

extern mmi_ret mmi_bt_notification_main_exit(mmi_event_struct *evt);

extern void mmi_bt_notification_main_show_option(void);

extern mmi_ret mmi_bt_notification_main_option_proc(mmi_event_struct *evt);

extern mmi_ret mmi_bt_notification_main_option_select(mmi_event_struct *evt);

extern mmi_ret mmi_bt_notification_main_option_entry(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_reply(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_forward(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_call(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_delete(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_block(mmi_event_struct *evt);

extern void mmi_bt_notification_main_option_empty(mmi_event_struct *evt);

extern void mmi_bt_notification_main_csk_hdlr(void);

extern void mmi_bt_notification_main_left_key_hdlr();

extern void mmi_bt_notification_main_right_key_hdlr();

extern void mmi_bt_notification_main_show_category();

extern void mmi_bt_notification_main_show_empty();

extern void mmi_bt_notification_main_show_disconnect();

extern void mmi_bt_notification_main_show_connect(void);

extern mmi_ret mmi_bt_notification_delete_group_proc (mmi_event_struct *param);

extern mmi_ret mmi_bt_notification_delete_scrn_proc (mmi_event_struct *param);


extern mmi_ret mmi_bt_notification_delete_show(mmi_event_struct *evt);

extern void mmi_bt_notification_delete(void);

extern void mmi_bt_notification_empty(void);


///////////////
extern mmi_ret mmi_bt_notification_event_hdlr(mmi_event_struct *evt);

extern MMI_BOOL mmi_bt_notification_popup_entry(mmi_scenario_id id, void *para);

extern mmi_ret mmi_bt_notification_popup_group_proc (mmi_event_struct *param);

extern mmi_ret mmi_bt_notification_popup_scrn_proc (mmi_event_struct *param);

extern mmi_ret mmi_bt_notification_popup_show(mmi_event_struct *evt);

extern void mmi_bt_notification_popup_view();

extern void mmi_bt_notification_popup_launch_app();

#endif /* (defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__)) */
#endif


