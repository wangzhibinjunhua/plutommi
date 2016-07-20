/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * BTNotiSrvRecv.h
 *
 * Project:
 * --------
 *  
 *
 * Description:
 * ------------
 *   This file is for BT Notification srv.
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================
 ****************************************************************************/
#ifndef __BT_NOTIFICATION_SRV_H__
#define __BT_NOTIFICATION_SRV_H__

#include "MMI_features.h"
#ifdef __MMI_BT_NOTI_SRV__

#include "MMIDataType.h"
#include "SppSrvGprot.h"
#include "fs_gprot.h"  

#define BT_NOTIFY_RECEIVE_BUF_SIZE 2048
#define BT_NOTIFY_EVT(_type)  srv_bt_noti_get_external_event_id((srv_bt_notify_extrtnal_event_enum)(_type))
#define BT_NOTIFY_TIMER(_type) srv_bt_noti_get_external_timer_id((srv_bt_notify_external_timer_enum)(_type))

#define BT_NOTIFY_MAX_HEADER_LEN 30
#define BT_NOTIFY_MIN_HEADER_LEN 7     
#define BT_NOTIFY_SYNC_LEN 4                 
#define BT_NOTIFY_ENC_HEADER_LEN 4     


typedef enum 
{
    SRV_BT_EXT_EVENT_SPPC_CONNECT_CNF,
    SRV_BT_EXT_EVENT_SPPC_DISCONNECT_CNF,
    SRV_BT_EXT_EVENT_SPPC_READY_TO_READ,
    SRV_BT_EXT_EVENT_SPPC_READY_TO_WRITE, 
    SRV_BT_EXT_EVENT_POST_FSM,
    SRV_BT_EXT_EVENT_NEW_MSG,
    SRV_BT_EXT_EVENT_DEL_MSG,
    SRV_BT_EXT_EVENT_SYNC_DEV,
    SRV_BT_EXT_EVENT_MAP_CONNECT_CNF,
    SRV_BT_EXT_EVENT_MAP_DISCONNECT_CNF,
    SRV_BT_EXT_EVENT_MAP_CMD_NOTIFY,
    SRV_BT_EXT_EVENT_CAP_CMD_NOTIFY,
    SRV_BT_EXT_EVENT_END
}srv_bt_notify_extrtnal_event_enum;

typedef enum
{
    SRV_BT_NOTI_WAIT_SYNC_CMD_TIMER,
    SRV_BT_NOTI_RECEIVE_DATA_TIME_GAP
} srv_bt_notify_external_timer_enum;

typedef enum
{    
    BT_NOTIFY_STATUS_ENUM_IDLE=0,   // no available data in recv_buf
    BT_NOTIFY_STATUS_ENUM_READING_CMD,   // reading command 
    BT_NOTIFY_STATUS_ENUM_READING_DATA,   // reading data
    BT_NOTIFY_STATUS_ENUM_PARSING,   // parsing data
}bt_notify_status_enum;

typedef enum{    
	BT_NOTIFY_CMD_TYPE_ENUM_INVALID = -1,
    BT_NOTIFY_CMD_TYPE_ENUM_DATA,  // only support this CMD TYPE currently 
    BT_NOTIFY_CMD_TYPE_ENUM_SYNC,
    BT_NOTIFY_CMD_TYPE_ENUM_ACKY,
    BT_NOTIFY_CMD_TYPE_ENUM_ACKN,
    BT_NOTIFY_CMD_TYPE_ENUM_VERN,
    BT_NOTIFY_CMD_TYPE_ENUM_MAPD,
    BT_NOTIFY_CMD_TYPE_ENUM_MAPX,
    BT_NOTIFY_CMD_TYPE_ENUM_CAPC,
    BT_NOTIFY_CMD_TYPE_ENUM_CMD1,  // just reserved 
}bt_notify_cmd_type_enum; // only meaningful when not in IDLE status 

typedef struct{
    MMI_BOOL is_connect;
	MMI_BOOL is_sync;
    MMI_BOOL connect_fail; 
	MMI_BOOL is_ver_send;
    MMI_BOOL is_wait_timer_started;
    MMI_BOOL is_receiving_timer_started;
    
    bt_notify_status_enum status;
    bt_notify_cmd_type_enum cmd_type;
    MMI_BOOL buffer_to_read;

    S32 conn_id;

#ifdef SRV_BT_NOTIFY_TEST_CLIENT
    SppHandle server_handle;
    SppHandle client_handle;
    S32 client_conn_id;
    U8 client_buf[SRV_SPP_MIN_BUFF_SIZE];
#endif
    
    FS_HANDLE fs_handle;
    WCHAR xml_file_path[BT_NOTIFY_XML_FILE_NAME_LENTH];
    S32 map_ret_code;
	S32 cap_ret_code;
    U32 xml_file_size;
    U32 xml_file_wrritten_size;

    U8 recv_buf[BT_NOTIFY_RECEIVE_BUF_SIZE];    
    S32 recv_buf_len;
    S32 recv_counter;

    S32 cmd_buf_len;
    U8 cmd_buf_plain[BT_NOTIFY_MAX_HEADER_LEN];     
    U8 cmd_buf_encrypt[BT_NOTIFY_MAX_HEADER_LEN];

    U8 send_buf[BT_NOTIFY_RECEIVE_BUF_SIZE];    
        
}bt_notify_context;

void srv_bt_noti_recv_init(void);
void srv_bt_noti_recv_server_init(void);
void srv_bt_noti_recv_client_init(void);

S32 srv_bt_noti_client_hdlr(U32 evt, void* para);

mmi_ret srv_bt_noti_recv_event_handler(mmi_event_struct *param);

void srv_bt_noti_recv_send_data(const char* send_data, U16 total_size);

void srv_bt_noti_recv_receive_data_fsm(void);

MMI_BOOL srv_bt_noti_file_exist(const WCHAR *filename);

U32 srv_bt_noti_get_external_event_id(srv_bt_notify_extrtnal_event_enum type);
U32 srv_bt_noti_get_external_timer_id(srv_bt_notify_external_timer_enum type);
U32 srv_bt_noti_get_receiving_data_time_gap(void);

#endif /*__MMI_BT_NOTI_SRV__*/

#endif/*__BT_NOTIFICATION_SRV_H__*/



