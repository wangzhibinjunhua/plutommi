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
 * btnotisrvgprot.h
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
#ifndef __BT_NOTI_SRV_DATA_GPROT_H__
#define __BT_NOTI_SRV_DATA_GPROT_H__

#include "MMI_features.h"
#ifdef __MMI_BT_NOTI_SRV__

#include "MMIDataType.h"
#include "fs_gprot.h"
#include "custom_btnotification_config.h"

#define BT_NOTIFY_SENDER_LENTH              50
#define BT_NOTIFY_NUMBER_LENTH              20
#define BT_NOTIFY_CONTENT_LENTH             300         /* remote device limitation is 256 */
#define BT_NOTIFY_SEND_SMS_CONTENT_LENTH    512
#define BT_NOTIFY_ICON_FILE_NAME_LENTH      50
#define BT_NOTIFY_XML_FILE_NAME_LENTH       50
#define BT_NOTIFY_TITLE_LENTH               150
#define BT_NOTIFY_TICKER_TEXT_LENTH         150

#define BT_NOTIFY_RECEIVING_DATA_TIME_GAP   (100)       /* receiving data time gap, 
                                                           for receive near two notification,
                                                           millisecond, must be positive number */

#ifdef __MTK_TARGET__
#define BT_NOTIFY_ROOT_FOLDER               L"z:\\@BTNotify\\"
#define BT_NOTIFY_MAP_ROOT_FOLDER           L"z:\\@map\\"
#define BT_NOTIFY_CAP_ROOT_FOLDER           L"z:\\@cap\\"

#else
#define BT_NOTIFY_ROOT_FOLDER               L"c:\\@BTNotify\\"
#define BT_NOTIFY_MAP_ROOT_FOLDER           L"c:\\@map\\"
#define BT_NOTIFY_CAP_ROOT_FOLDER           L"z:\\@cap\\"
#endif

/* notification category enum */
typedef enum {
    srv_bt_notify_category_none,                /* none category */
    srv_bt_notify_category_noti,                /* notification category */
    srv_bt_notify_category_call,                /* call category */
    srv_bt_notify_category_map                  /* map category */
} srv_bt_notify_category_enum;

/* notification subtype enum */
typedef enum {
    srv_bt_notify_subtype_text,                 /* for category noti text subtype */
    srv_bt_notify_subtype_sms,                  /* for category noti sms subtype */
    srv_bt_notify_subtype_block_sender,         /* for category noti block sender subtype */
    srv_bt_notify_subtype_missed_call           /* for category call */
} srv_bt_notify_subtype_enum;

/* notification action enum */
typedef enum {
    srv_bt_notify_action_add,                   /* add action */
    srv_bt_notify_action_delete,                /* delete action */
    srv_bt_notify_action_delete_all,            /* delete all action */
    srv_bt_notify_action_update                 /* update action */
} srv_bt_notify_opeate_enum;


/* refresh type enum */
typedef enum 
{
    SRV_BT_NOTIFY_REFRESH_NEW,                  /* refresh new */
    SRV_BT_NOTIFY_REFRESH_DEL                   /* refresh del */
} srv_bt_notify_refresh_type;

/* ret code */
typedef enum
{
    SRV_BT_NOTIFY_RET_UNKNOWN_ERROR = -1000,    /* unknown error */
    SRV_BT_NOTIFY_RET_FILE_NOT_EXIST,           /* file not exist */
    SRV_BT_NOTIFY_RET_FILE_INTEGRITY_ERROR,     /* file length error */
    SRV_BT_NOTIFY_RET_MAP_FILE_PARSE_PARA_ERROR
} srv_bt_notify_ret_code;

/* map file ext type */
typedef enum
{
    SRV_BT_NOTIFY_MAP_INVALID_FILE_TYPE = -1,
    SRV_BT_NOTIFY_MAP_XML_FILE_TYPE,
    SRV_BT_NOTIFY_MAP_VCF_FILE_TYPE
} srv_bt_map_file_ext_type;

/* notification header struct */
typedef struct 
{
    srv_bt_notify_category_enum category;       /* notification category */
    srv_bt_notify_subtype_enum subtype;         /* notification subtype */
    srv_bt_notify_opeate_enum action;           /* notification action */
    U32 msg_id;                                 /* notification msg id */
} srv_bt_notify_header_struct;


/* new notification event info */
typedef struct
{
    WCHAR *xml_file_path;                       /* xml file path */
    srv_bt_notify_header_struct *header;        /* notification header struct */
} srv_bt_noti_event_info_new;


/* delete notification event info */
typedef struct
{
    S32 del_msg_id;                             /* delete msg id */
} srv_bt_noti_event_info_del;


/* Uese for notifying missed call count to calllog */
typedef struct
{
    MMI_EVT_PARAM_HEADER
    srv_bt_notify_refresh_type refresh_type;    /* refresh type */
    U32 index;                                  /* refresh notification index */
} srv_bt_noti_refresh_evt_struct;


/* Uese for notifying missed call count to calllog */
typedef struct
{
    MMI_EVT_PARAM_HEADER
    U32 missed_call_count;                  /* missed call count */
} srv_bt_noti_missed_call_evt_struct;

/* Event information data. For each event's event infomation structure, 
  *refer the discription of each event in enum srv_sms_event_enum. */
typedef struct
{
    MMI_EVT_PARAM_HEADER
    void *event_info;
} srv_bt_noti_event_struct;

/* The bt notification sync with remote device operation complete callback */
typedef void (*srv_bt_noti_sync_device_callback)(S32 time, S32 time_zone, MMI_BOOL need_sync);

typedef struct
{
    MMI_EVT_PARAM_HEADER
    S32 time;                                               /* time in second */
    S32 time_zone;                                          /* time zone in millisecond */
    srv_bt_noti_sync_device_callback call_back;             /* Sync callback */
} srv_bt_noti_sync_event_struct;

typedef struct
{
    MMI_EVT_PARAM_HEADER
    U32 len;
    S32 ret_code;
    S32 cmd_type;
    MMI_BOOL ret_is_num;  
} srv_bt_noti_map_event_notify_struct;

typedef struct
{
    MMI_EVT_PARAM_HEADER
    U32 len;
    S32 ret_code;
    S32 cmd_type;
    MMI_BOOL ret_is_num;  
} srv_bt_noti_cap_event_notify_struct;

typedef struct
{
    MMI_EVT_PARAM_HEADER
    MMI_BOOL is_connected;
} srv_bt_noti_map_connectivity_notify_struct;

/* The data msg node struct */
typedef struct 
{
    srv_bt_notify_header_struct header;                     /* notification header */
    WCHAR sender[BT_NOTIFY_SENDER_LENTH];                   /* for notification: app name, for sms: contact name or number */
    WCHAR send_number[BT_NOTIFY_NUMBER_LENTH];              /* for sms only, contact number */
    WCHAR content[BT_NOTIFY_CONTENT_LENTH];                 /* notification content */
    WCHAR title[BT_NOTIFY_TITLE_LENTH];                     /* notification title */
    WCHAR ticker_text[BT_NOTIFY_TICKER_TEXT_LENTH];         /* notification ticker text */ 
    U32 missed_call_count;                                  /* only for missed call subtype */
    U32 timestamp;                                          /* notification timestamp */
    U32 app_id;                                             /* app id */
    WCHAR icon_file_path[BT_NOTIFY_ICON_FILE_NAME_LENTH];   /* icon file path */
    WCHAR xml_file_path[BT_NOTIFY_XML_FILE_NAME_LENTH];     /* xml file path */
} srv_bt_noti_data_msg_node_struct;


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_get_msg_num
 * DESCRIPTION
 *  This function is to get total msg number.
 * PARAMETERS
 *  void
 * RETURNS
 *  S32
 *****************************************************************************/
extern U32 srv_bt_noti_data_get_msg_num(void);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_get_msg_info
 * DESCRIPTION
 *  This function is to get msg info through msg index.
 * PARAMETERS
 *  index  :  [IN] msg index
 * RETURNS
 *  srv_bt_noti_data_msg_node_struct*
 *****************************************************************************/
extern srv_bt_noti_data_msg_node_struct *srv_bt_noti_data_get_msg_info(U32 index);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_get_msg_info_ref
 * DESCRIPTION
 *  This function is to get msg info reference.
 * PARAMETERS
 *  index  :       [IN]    msg index
 *  node_ref:  [OUT] node ref
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_data_get_msg_info_ref(U32 index, srv_bt_noti_data_msg_node_struct *node_ref);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_delete_msg
 * DESCRIPTION
 *  This function is to delete specified msg through msg index.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_bt_noti_data_delete_msg(U32 index);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_delete_all
 * DESCRIPTION
 *  This function is to delete all msgs.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_bt_noti_data_delete_all(void);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_get_msg_index_by_msg_id
 * DESCRIPTION
 *  This function is to get msg index through msg id
 * PARAMETERS
 *  msg_id  :  [IN] msg id
 * RETURNS
 *  S32
 *****************************************************************************/
extern S32 srv_bt_noti_data_get_msg_index_by_msg_id(U32 msg_id);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_reply_remote_sms
 * DESCRIPTION
 *  This function is to reply sms to remote device through spp, it will return result when send operation done.
 *  it does not care remote device when to send the reply sms or the sent status.
 *  NOTE: content must be ended with '\0' and the strlen must be smaller than BT_NOTIFY_SEND_SMS_CONTENT_LENTH
 * PARAMETERS
 *  send_number  :  [IN] send number
 *  content:               [IN] sms content, must be ended with '\0' and the strlen must be 
 *                                        smaller than BT_NOTIFY_SEND_SMS_CONTENT_LENTH
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_data_reply_remote_sms(WCHAR *send_number, WCHAR *content);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_block_remote_notification
 * DESCRIPTION
 *  This function is to send data to remote device through spp to notify it block the specified
 *  notification by app id, it will return result when send operation done.
 * PARAMETERS
 *  app_id  :  [IN] app id of notification
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_data_block_remote_notification(U32 app_id);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_update_remote_missed_call
 * DESCRIPTION
 *  This function is to send data to remote device though spp to notify remote device 
 *  to clear the missed call count, it will return result when send operation done.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_update_remote_missed_call(void);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_send_xml
 * DESCRIPTION
 *  This function is to send xml file to remote device though spp, and return result when
 *  send operation done.
 * PARAMETERS
 *  xml_file  :  [IN] xml file path
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_send_xml(const WCHAR *xml_file);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_send_file_with_prefix_command
 * DESCRIPTION
 *  This function is to send file to remote device though spp, and return result when
 *  send operation done.
 * PARAMETERS
 *  file_path       :    [IN] file path
 *  prefix_command  :    [IN] prefix command sync with remote device, ended with '\0'
 *  data            :    [IN] user data
 *  data_len        :    [IN] user data len
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_send_file_with_prefix_command(const WCHAR *file_path,
                                                          const char *prefix_command,
                                                          const char *data,
                                                          U16   data_len);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_send_cmd
 * DESCRIPTION
 *  This function is to send cmd to remote device though spp, and return result when
 *  send operation done.
 * PARAMETERS
 *  cmd  :  [IN] command string, ended with '\0'
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_send_cmd(const char *cmd);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_send_cmd_ext
 * DESCRIPTION
 *  This function is to send cmd to remote device though spp, and return result when
 *  send operation done.
 * PARAMETERS
 *  cmd       :     [IN] command string, ended with '\0'
 *  data      :     [IN] user data string 
 *  data_len  :     [IN] user data string length
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_send_cmd_ext(const char *cmd, const char *data, U16 data_len);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_check_connection
 * DESCRIPTION
 *  This function is to check connect status with remote device, if connected, will return 
 *  MMI_TRUE, then local device can receive data from remote device
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_check_connection(void);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_check_connect_fail
 * DESCRIPTION
 *  This function is to check connect status with remote device, if failed, will return 
 *  MMI_TRUE, then local device can not send and receive data with remote device
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_check_connect_fail(void);


/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_check_sync
 * DESCRIPTION
 *  This function is check sync state, if has sync with remote device, then it will return 
 *  MMI_TRUE, and local device can send data to remote device
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
extern MMI_BOOL srv_bt_noti_check_sync(void);


#endif/*__MMI_BT_NOTI_SRV__*/

#endif/*__BT_NOTI_SRV_DATA_GPROT_H__*/

