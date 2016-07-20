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
 * AvrcpSrvGprot.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SRV_AVRCP_GPROT_H__
#define __SRV_AVRCP_GPROT_H__

#include "MMI_features.h"

#ifdef __MMI_AVRCP_SUPPORT__

#include "MMIDataType.h"
#include "kal_general_types.h"

#include "AvrcpSrvGprot.h"
#include "BtcmSrvGprot.h"

#ifdef __cplusplus
extern "C"
{
#endif


/***************************************************************************** 
* Definations
*****************************************************************************/

/* AVRCP command control type : accept */
#define SRV_AVRCP_CR_ACCEPT            (0x09)
/* AVRCP command control type : reject */
#define SRV_AVRCP_CR_REJECT            (0x0A)
/* AVRCP command control type : not implement */
#define SRV_AVRCP_CR_NOT_IMPLEMENT     (0x08)

/* AVRCP Commands : select */
#define SRV_AVRCP_POP_SELECT            0x00
/* AVRCP Commands : up */
#define SRV_AVRCP_POP_UP                0x01
/* AVRCP Commands : down */
#define SRV_AVRCP_POP_DOWN              0x02
/* AVRCP Commands : left */
#define SRV_AVRCP_POP_LEFT              0x03
/* AVRCP Commands : right */
#define SRV_AVRCP_POP_RIGHT             0x04
/* AVRCP Commands : right up */
#define SRV_AVRCP_POP_RIGHT_UP          0x05
/* AVRCP Commands : right down */
#define SRV_AVRCP_POP_RIGHT_DOWN        0x06
/* AVRCP Commands : left up */
#define SRV_AVRCP_POP_LEFT_UP           0x07
/* AVRCP Commands : left down */
#define SRV_AVRCP_POP_LEFT_DOWN         0x08
/* AVRCP Commands : root menu */
#define SRV_AVRCP_POP_ROOT_MENU         0x09
/* AVRCP Commands : setup menu */
#define SRV_AVRCP_POP_SETUP_MENU        0x0A
/* AVRCP Commands : contents menu */
#define SRV_AVRCP_POP_CONTENTS_MENU     0x0B
/* AVRCP Commands : favorite menu */
#define SRV_AVRCP_POP_FAVORITE_MENU     0x0C
/* AVRCP Commands : exit */
#define SRV_AVRCP_POP_EXIT              0x0D

/* AVRCP Commands : 0 */
#define SRV_AVRCP_POP_0                 0x20
/* AVRCP Commands : 1 */
#define SRV_AVRCP_POP_1                 0x21
/* AVRCP Commands : 2 */
#define SRV_AVRCP_POP_2                 0x22
/* AVRCP Commands : 3 */
#define SRV_AVRCP_POP_3                 0x23
/* AVRCP Commands : 4 */
#define SRV_AVRCP_POP_4                 0x24
/* AVRCP Commands : 5 */
#define SRV_AVRCP_POP_5                 0x25
/* AVRCP Commands : 6 */
#define SRV_AVRCP_POP_6                 0x26
/* AVRCP Commands : 7 */
#define SRV_AVRCP_POP_7                 0x27
/* AVRCP Commands : 8 */
#define SRV_AVRCP_POP_8                 0x28
/* AVRCP Commands : 9 */
#define SRV_AVRCP_POP_9                 0x29
/* AVRCP Commands : dot */
#define SRV_AVRCP_POP_DOT               0x2A
/* AVRCP Commands : enter */
#define SRV_AVRCP_POP_ENTER             0x2B
/* AVRCP Commands : clear */
#define SRV_AVRCP_POP_CLEAR             0x2C

/* AVRCP Commands : channel up */
#define SRV_AVRCP_POP_CHANNEL_UP        0x30
/* AVRCP Commands : channel down */
#define SRV_AVRCP_POP_CHANNEL_DOWN      0x31
/* AVRCP Commands : previous channel */
#define SRV_AVRCP_POP_PREVIOUS_CHANNEL  0x32
/* AVRCP Commands : sound select */
#define SRV_AVRCP_POP_SOUND_SELECT      0x33
/* AVRCP Commands : input select */
#define SRV_AVRCP_POP_INPUT_SELECT      0x34
/* AVRCP Commands : display info */
#define SRV_AVRCP_POP_DISPLAY_INFO      0x35
/* AVRCP Commands : help */
#define SRV_AVRCP_POP_HELP              0x36
/* AVRCP Commands : page up */
#define SRV_AVRCP_POP_PAGE_UP           0x37
/* AVRCP Commands : page down */
#define SRV_AVRCP_POP_PAGE_DOWN         0x38

/* AVRCP Commands : power */
#define SRV_AVRCP_POP_POWER             0x40
/* AVRCP Commands : volume up */
#define SRV_AVRCP_POP_VOLUME_UP         0x41
/* AVRCP Commands : volume down */
#define SRV_AVRCP_POP_VOLUME_DOWN       0x42
/* AVRCP Commands : mute */
#define SRV_AVRCP_POP_MUTE              0x43
/* AVRCP Commands : play */
#define SRV_AVRCP_POP_PLAY              0x44
/* AVRCP Commands : stop */
#define SRV_AVRCP_POP_STOP              0x45
/* AVRCP Commands : pause */
#define SRV_AVRCP_POP_PAUSE             0x46
/* AVRCP Commands : record */
#define SRV_AVRCP_POP_RECORD            0x47
/* AVRCP Commands : rewind */
#define SRV_AVRCP_POP_REWIND            0x48
/* AVRCP Commands : fast forward */
#define SRV_AVRCP_POP_FAST_FORWARD      0x49
/* AVRCP Commands : eject */
#define SRV_AVRCP_POP_EJECT             0x4A
/* AVRCP Commands : forward */
#define SRV_AVRCP_POP_FORWARD           0x4B
/* AVRCP Commands : backward */
#define SRV_AVRCP_POP_BACKWARD          0x4C

/* AVRCP Commands : angle */
#define SRV_AVRCP_POP_ANGLE             0x50
/* AVRCP Commands : subpicture */
#define SRV_AVRCP_POP_SUBPICTURE        0x51

/* AVRCP Commands : F1 */
#define SRV_AVRCP_POP_F1                0x71
/* AVRCP Commands : F2 */
#define SRV_AVRCP_POP_F2                0x72
/* AVRCP Commands : F3 */
#define SRV_AVRCP_POP_F3                0x73
/* AVRCP Commands : F4 */
#define SRV_AVRCP_POP_F4                0x74
/* AVRCP Commands : F5 */
#define SRV_AVRCP_POP_F5                0x75

/* AVRCP Commands : vendor unique */
#define SRV_AVRCP_POP_VENDOR_UNIQUE     0x7E

/* AVRCP Commands : reserved */
#define SRV_AVRCP_POP_RESERVED          0x7F

/***************************************************************************** 
* Enum
*****************************************************************************/

/* key event types */
typedef enum
{
    SRV_AVRCP_KEY_DOWN =0,      /* key down */
    SRV_AVRCP_KEY_UP,           /* key up */
    SRV_AVRCP_KEY_LONGPRESS,    /* key longpress */
    SRV_AVRCP_KEY_REPEAT,       /* key repeat */
    SRV_AVRCP_KEY_CANCELED,     /* key canceled */

    SRV_AVRCP_TOTAL_KEY_EVENTS  /* key total */
} srv_avrcp_key_events;


/***************************************************************************** 
* typedef 
*****************************************************************************/
typedef U8(*AVRCP_SRV_CMD_CALLBACK) (U8 command_type, srv_avrcp_key_events key_events);
typedef void(*AVRCP_SRV_CMD_CNF_CALLBACK) (U16 op_code, U16 command_type, MMI_BOOL key_press);
typedef void(*AVRCP_SRV_CONNECT_NOTIFY_A2DP_CALLBACK) (MMI_BOOL is_connected);

/***************************************************************************** 
* Functions
*****************************************************************************/

/* DOM-NOT_FOR_SDK-BEGIN */
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_init
 * DESCRIPTION
 *  To init AVRCP service
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_init(void);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_connect_tg_req
 * DESCRIPTION
 *  For A2DP to connect AVRCP
 * PARAMETERS
 *  dev_addr  :  [IN] device address to connect
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_connect_tg_req(srv_bt_cm_bt_addr dev_addr);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_from_a2dp
 * DESCRIPTION
 *  to set the flag of disconnect avrcp from A2DP service , 
 *  so that we can judge if we shall inform cm for disconnect ind or cnf
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_disconnect_from_a2dp(MMI_BOOL set);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_disconnect_tg_req
 * DESCRIPTION
 *  To disconnect AVRCP
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_disconnect_tg_req(U32 connect_id);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_cmd_frame_cnf_hdlr
 * DESCRIPTION
 *  To set command frame confirm callback handler. For controller used only.
 *  Currently we do not support controller role.
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_set_cmd_frame_cnf_hdlr(AVRCP_SRV_CMD_CNF_CALLBACK callback_func);

/* DOM-NOT_FOR_SDK-END */


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_cmd_hdlr
 * DESCRIPTION
 *  To set command callback handler. When receive AVRCP command, it will pass to clinet
 *  through this callback function
 * PARAMETERS
 *  callback_func   : [IN] callback function
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_set_cmd_hdlr(AVRCP_SRV_CMD_CALLBACK callback_func);


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
extern void srv_avrcp_set_connect_notify_a2dp_hdlr(AVRCP_SRV_CONNECT_NOTIFY_A2DP_CALLBACK callback_func);


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
extern void srv_avrcp_clear_connect_notify_a2dp_hdlr(void);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_role_hdlr
 * DESCRIPTION
 *  To set role. When role has known by a2dp, it will pass role to srv
 *  through this function
 * PARAMETERS
 *  callback_func   : [IN] callback function
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_set_role_callback(U8 role);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_clear_cmd_hdlr
 * DESCRIPTION
 *  Clear command callback handler.
 * PARAMETERS
 *  callback_func   : [IN] callback function
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_clear_cmd_hdlr(AVRCP_SRV_CMD_CALLBACK callback_func);


/* DOM-NOT_FOR_SDK-BEGIN */
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_frm_sync_calllback
 * DESCRIPTION
 *  for framework to callback if keypad / touch is triggered.
 * PARAMETERS
 *  is_blocked   : [IN] is keypad / touch blocked by target
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_frm_sync_calllback(MMI_BOOL is_blocked);


#ifdef __MMI_EM_BT_AVRCP_CONNECT_TG_ACTIVELY__
/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_actively_connect_tg_flag
 * DESCRIPTION
 *  get EM mode setting
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_TRUE : flag on
 *  MMI_FALSE: flag off
 *****************************************************************************/
extern MMI_BOOL srv_avrcp_get_actively_connect_tg_flag(void);


/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_actively_connect_tg_flag
 * DESCRIPTION
 *  set EM mode setting
 * PARAMETERS
 *  MMI_BOOL    : [IN] set flag on / off
 * RETURNS
 *  void
 *****************************************************************************/
extern void srv_avrcp_set_actively_connect_tg_flag(MMI_BOOL on_off);

/* DOM-NOT_FOR_SDK-END */


#endif

#ifdef __cplusplus
}
#endif

#ifdef __MMI_BT_AVRCP_V13__

#define SRV_AVRCP_MAX_ATTR_NUM    4
#define SRV_AVRCP_MAX_ATTR_VAL_NUM    4

#define SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM 8
#define SRV_AVRCP_MAX_IDENTIFIER_COUNT    8

#define SRV_AVRCP_MAX_IDENTIFIER_NUM 8

#define SRV_AVRCP_MAX_ATTRIBUTE_STRING_SIZE 80

#define SRV_AVRCP_ELEM_DATA_SIZE     512

#define SRV_AVRCP_PARA_AVRCP_RESULT \
   srv_avrcp_result_enum    result; \
   srv_avrcp_error_code_enum    error_code;


/***************************************************************************** 
* Enum : result (Intermediate result enum)
*****************************************************************************/
typedef enum 
{
    SRV_AVRCP_RESULT_CMD_SUCCESS,
    SRV_AVRCP_ERROR_NOT_CONNECTED,
    SRV_AVRCP_VERSION_SUPPORT_INCOMPATIBILTY,
    SRV_AVRCP_ATTRIBUTE_NOT_SUPPORTED,
    SRV_AVRCP_NOTIFICATION_ALREADY_REGISTERED,
    SRV_AVRCP_NOTIFICATION_CALLBACK_NULL,
    SRV_AVRCP_INTERNAL_ERROR
}intermediate_result;

/***************************************************************************** 
* Enum : Final result
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_RESULT_SUCCESS       =     0x1000,
    SRV_AVRCP_RESULT_ERROR         =     0x1001,
    SRV_AVRCP_RESULT_INVALID_ROLE    =   0x1002,
    SRV_AVRCP_RESULT_INTERNAL_ERROR   =  0x1003,
    SRV_AVRCP_RESULT_CHANNEL_NOT_FOUND     = 0x1004,
    SRV_AVRCP_RESULT_TIMEOUT     =    0x1003,
    SRV_AVRCP_RESULT_BAD_STATE    =   0x1004,
    SRV_AVRCP_RESULT_BUSY       =     0x1005
}srv_avrcp_result_enum;

/***************************************************************************** 
* Enum : Final result Error codes
* AVRCP Error/Status code AVRCP spec 6.15.3 status and error codes 
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_ERRCODE_INVALID_CMD          =      0x00, // All cmds
    SRV_AVRCP_ERRCODE_INVALID_PARAM     =    0x01, // All cmds
    SRV_AVRCP_ERRCODE_NOT_FOUND         =     0x02, // All cmds
    SRV_AVRCP_ERRCODE_INTERNAL_ERROR    =     0x03, // All cmds
    SRV_AVRCP_ERRCODE_OPERATION_COMPLETE    =     0x04, // All cmds except CType is reject
    SRV_AVRCP_ERRCODE_NO_AVAILABLE_PLAYER    =    0x15, // All cmds
    SRV_AVRCP_ERRCODE_PLAYER_CHANGED     =    0x16 // register notification
}srv_avrcp_error_code_enum;

/***************************************************************************** 
* Enum : Final result Notification Events
*****************************************************************************/
typedef enum _srv_avrcp_event_enum
{
    SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT,
    SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT, //result structure : final_result_union.supported_attr_list_result
    SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT,     //result structure : final_result_union.curr_attr_list_result
    SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT,  //result structure : final_result_union.result_cnf
    SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT,             //result structure : final_result_union.attr_txt_result
    SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT,        //result structure : final_result_union.val_txt_result
    SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT,    //result structure : final_result_union.result_cnf
    SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT,        //result structure : final_result_union.result_cnf
    SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT,        //result structure : final_result_union.play_status
    SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT,        //result structure : final_result_union.elem_attr
    SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT,        //result structure : final_result_union.reg_notification_event
    SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT //cancel request
}srv_avrcp_event_enum;

/***************************************************************************** 
* Enum : Media Attributes
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_MEDIA_TITLE   =    0x1,
    SRV_AVRCP_MEDIA_ARTIST     =   0x2,
    SRV_AVRCP_MEDIA_ALBUM     =    0x3,
    SRV_AVRCP_MEDIA_TRACK_NUMBER  =     0x4,
     SRV_AVRCP_MEDIA_TOTAL_TRACK_NUMBER     =    0x5,
    SRV_AVRCP_MEDIA_GENRE         =    0x6,
    SRV_AVRCP_MEDIA_PLAYING_TIME    =    0x7,
    SRV_AVRCP_MEDIA_ATTR_UNDEFINED    = 0xFF
}srv_avrcp_media_attr_enum;


/***************************************************************************** 
* Enum : Player app attributes
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER   =    0x1,
    SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE     =   0x2,
    SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE     =    0x3,
    SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE  =     0x4,
    SRV_AVRCP_PLAYER_APP_SETTING_UNDEFINED
}srv_avrcp_player_app_settings_attr_enum;
/***************************************************************************** 
* Enum : Player app attributes Values - SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_EQUALIZER_OFF = 0x01,
    SRV_AVRCP_EQUALIZER_ON = 0x02,
    SRV_AVRCP_EQUALIZER_UNDEF
}srv_avrcp_equalizer_state_enum;

/***************************************************************************** 
* Enum : Player app attributes Values - SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_REPEAT_MDOE_OFF = 0x01,
    SRV_AVRCP_REPEAT_MDOE_SINGLE_TRACK_REPEAT = 0x02,
    SRV_AVRCP_REPEAT_MDOE_ALL_TRACK_REPEAT = 0x03,
    SRV_AVRCP_REPEAT_MDOE_GROUP_REPEAT     = 0x04,
    SRV_AVRCP_REPEAT_MDOE_UNDEF    
}srv_avrcp_repeat_mode_enum;

/***************************************************************************** 
* Enum : Player app attributes Values - SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_SHUFFLE_MODE_OFF = 0x01,
    SRV_AVRCP_SHUFFLE_MODE_ALL_TRACK_SHUFFLED = 0x02,
    SRV_AVRCP_SHUFFLE_MODE_GROUP_SHUFFLE = 0x03,
    SRV_AVRCP_SHUFFLE_MODE_UNDEF    
}srv_avrcp_shuffle_mode_enum;

/***************************************************************************** 
* Enum : Player app attributes Values - SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_SCAN_MODE_OFF = 0x01,
    SRV_AVRCP_SCAN_MODE_ALL_TRACK_SCAN = 0x02,
    SRV_AVRCP_SCAN_MODE_GROUP_SCAN = 0x03,
    SRV_AVRCP_SCAN_MODE_UNDEF
}srv_avrcp_scan_mode_enum;


/***************************************************************************** 
* Enum : Notification Events
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED   =    0x01,
    SRV_AVRCP_EVENT_TRACK_CHANGED     =   0x02,
    SRV_AVRCP_EVENT_TRACK_REACHED_END     =    0x03,
    SRV_AVRCP_EVENT_TRACK_REACHED_START  =     0x04,
    SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED =  0x05 ,
    SRV_AVRCP_EVENT_BATT_STATUS_CHANGED =  0x06,
    SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED =  0x07,
    SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED =  0x08,
    SRV_AVRCP_EVENT_UNDEF
}srv_avrcp_metadata_trasnfer_events;

/***************************************************************************** 
* Enum : Battery status of CT. (Supported report values)
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_BATTERY_STATUS_NORMAL     =      0x00, // Battery operation is in normal state
    SRV_AVRCP_BATTERY_STATUS_WARNING     =    0x01, // unable to operate soon
    SRV_AVRCP_BATTERY_STATUS_CRITICAL     =     0x02, //can't operate any more 
    SRV_AVRCP_BATTERY_STATUS_EXTERNAL    =     0x03, // connected to external power supply
    SRV_AVRCP_BATTERY_STATUS_FULL_CHARGE    =    0x04, //Fully charged
    SRV_AVRCP_BATTERY_STATUS_RESERVED    =    0x15, //reserved for future
}srv_avrcp_battery_status_enum;

/***************************************************************************** 
* Enum : Play status
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_PLAY_STATUS_STOPPED     =      0x00, //
    SRV_AVRCP_PLAY_STATUS_PLAYING     =    0x01, // 
    SRV_AVRCP_PLAY_STATUS_PAUSED     =     0x02, //
    SRV_AVRCP_PLAY_STATUS_FWD_SEEK    =     0x03, // 
    SRV_AVRCP_PLAY_STATUS_REV_SEEK    =    0x04, //
    SRV_AVRCP_PLAY_STATUS_ERROR    =    0xFF, //
}srv_avrcp_play_status_enum;

/***************************************************************************** 
* Enum : System status
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_SYSTEM_STATUS_POWER_ON     =      0x00, //
    SRV_AVRCP_SYSTEM_STATUS_POWER_OFF     =    0x01, // 
    SRV_AVRCP_SYSTEM_STATUS_POWER_UNPLUGGED     =     0x02, //
}srv_avrcp_system_status_enum;

/***************************************************************************** 
* Enum : Resister Notification Response
*****************************************************************************/
typedef enum
{
    SRV_AVRCP_REG_NOTIFY_FINAL_RESULT     =      0x00, //
    SRV_AVRCP_REG_NOTIFY_INTERIM_RESULT     =    0x01, // 
    SRV_AVRCP_REG_NOTIFY_NOT_VALID_RESULT     =     0xff, //
}srv_avrcp_reg_notify_enum;

/***************************************************************************** 
* Structure : Supported Attributes result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
        
    U8    attr_count;
    srv_avrcp_player_app_settings_attr_enum supported_attr_list[SRV_AVRCP_MAX_ATTR_VAL_NUM];
}srv_avrcp_playerapp_setting_attr_list_result;


/***************************************************************************** 
* Structure : Supported Attribute-values result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
    
    srv_avrcp_player_app_settings_attr_enum  attribute_id;
    U8    attr_val_count;
    U8     attr_values[SRV_AVRCP_MAX_ATTR_VAL_NUM];
}srv_avrcp_playerapp_settings_attr_value_result;

/***************************************************************************** 
* Structure : Current  attribute list(internal struct)
*****************************************************************************/
typedef struct
{
    srv_avrcp_player_app_settings_attr_enum  attribute_id;
    U8     attr_values;
}srv_avrcp_playerapp_settings_curr_attr_list_struct;

/***************************************************************************** 
* Structure : Current  attribute list result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
        
    U8     count;
    srv_avrcp_playerapp_settings_curr_attr_list_struct curr_attr_list[SRV_AVRCP_MAX_ATTR_VAL_NUM];
}srv_avrcp_playerapp_curr_attr_list_result;

/***************************************************************************** 
* Structure :   attribute txt (internal struct)
*****************************************************************************/
typedef struct
{
    srv_avrcp_player_app_settings_attr_enum        attribute_id;
    U8        *attr_str;
}srv_avrcp_playerapp_attr_txt_struct;

/***************************************************************************** 
* Structure : attribute txt result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT

    U8        count;
    U16     charset[SRV_AVRCP_MAX_ATTR_NUM];

    srv_avrcp_playerapp_attr_txt_struct attr_txt[SRV_AVRCP_MAX_ATTR_NUM];
}srv_avrcp_playerapp_attr_txt_result;

/***************************************************************************** 
* Structure : attribute value txt (internal struct)
*****************************************************************************/
typedef struct
{
    U16     charset;
    
    U8        value_id;
    U8        *value_str;
}srv_avrcp_playerapp_value_txt_struct;

/***************************************************************************** 
* Structure : attribute value txt result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT

    U8        count;
    srv_avrcp_player_app_settings_attr_enum        attr_id;

    srv_avrcp_playerapp_value_txt_struct value_txt[SRV_AVRCP_MAX_ATTR_VAL_NUM];
}srv_avrcp_playerapp_value_txt_result;

/***************************************************************************** 
* Structure : play status result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
        
    U32         song_len;
    U32            song_pos; //time elapsed in milliseconds
    
    srv_avrcp_play_status_enum            play_status;
}srv_avrcp_play_status_result;

/***************************************************************************** 
* Structure : Element attributes internal struct
*****************************************************************************/
typedef struct
{
    srv_avrcp_media_attr_enum  elem_id;
    U16  charset;
    U8    *element_data;
}srv_avrcp_element_attributes_struct;

/***************************************************************************** 
* Structure : Element attributes result struct
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
        
    U8            count;
    srv_avrcp_element_attributes_struct elements[SRV_AVRCP_MAX_GET_ELEMENT_ATTR_NUM];
}srv_avrcp_elem_attr_result;

/***************************************************************************** 
* Structure : result struct for events that doesn't have any values other than result and error code

to notify to APP.
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT
        
}srv_avrcp_result_cnf;

/***************************************************************************** 
* Structure : notification struct
When user requets for register notifications, then it will send the interim response with the current value of 
corressponing attributes. Whenver the event changes at TG, TG notfies the Event with final respnse to CT.
User need to register again the event after recieving final response.
*****************************************************************************/
typedef struct
{
    SRV_AVRCP_PARA_AVRCP_RESULT

    srv_avrcp_reg_notify_enum         is_interim;    //if the response is immediate response(0x00-final reponse , 0x01-immediate response,0xff - not valid) to notification and final response will be notified for the event if changed
    
    srv_avrcp_metadata_trasnfer_events         event_id;
    srv_avrcp_play_status_enum         playback_status; //Event id : SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED
    srv_avrcp_system_status_enum    system_status;//Event id : SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED
    srv_avrcp_battery_status_enum    batt_status;//Event id : SRV_AVRCP_EVENT_BATT_STATUS_CHANGED
    
    U32        song_pos; //Current position of playing in ms elapsed ,Event Id:SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED

    /*If player current application settings changed (like repeat/shuffle), then below are current changed player app settings*/
    U8         count;    // : Event ID:SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED
    srv_avrcp_player_app_settings_attr_enum        attr_id[SRV_AVRCP_MAX_ATTR_NUM]; //Event ID:SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED
    U8        attr_val[SRV_AVRCP_MAX_ATTR_VAL_NUM];//Event ID:SRV_AVRCP_EVENT_PLAYER_APP_SETTING_CHNAGED
}srv_avrcp_register_notification_result;



/***************************************************************************** 
* Structure : Final result Union
*****************************************************************************/
typedef union
{
    /*Player App suported settings - eualizer,repeat,shuffle,scan modes*/
    srv_avrcp_playerapp_setting_attr_list_result     supported_attr_list_result; //Event: SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT

    /*Player App suported settings values for - eualizer,repeat,shuffle,scan modes*/
    srv_avrcp_playerapp_settings_attr_value_result    supp_attr_val_list; //Event:SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT

    /*Player App Current value of settings attrubutes(like repeat - off , scan - ON*/
    srv_avrcp_playerapp_curr_attr_list_result         curr_attr_list_result; //Event:SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT

    /*Player App text for supported attrbutes like 'Equalizer' , 'Repeat'*/
    srv_avrcp_playerapp_attr_txt_result                attr_txt_result;//Event: SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT

    /*Player App text for supported attrbutes values like , 'Equalizer_OFF'*/
    srv_avrcp_playerapp_value_txt_result            val_txt_result; //Event:SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT

    /*Player register notification result struct. The interim result(0x01) is current value of that media element 

    and when it gets changed, user will be notified in confirmance'*/
    srv_avrcp_register_notification_result             reg_notification_event; //Event:SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT

    /*Player App status of  current playing song.*/
    srv_avrcp_play_status_result                    play_status;//Event:SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT

    /*Media Element result struct , like atrist name etc*/
    srv_avrcp_elem_attr_result                         elem_attr;//Event: SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT



    /*Simple result notify struct for those who doesn't have other than result/error to notify application
    event ids:    SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT
                SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT
                SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT
                SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT
    */
    srv_avrcp_result_cnf                            result_cnf;
}srv_avrcp_result_union;

/*****************************************************************************
* <GROUP CallBackFunctions>
* FUNCTION
*  srv_avrcp_notify_event
* DESCRIPTION: 
* This function is used to receive notification event
* Application should register this callback function
* which would be called when AVRCP Service gets response from Bt Stack Layer
* In this callback funtion, application needs to identify the event,
* Based on that event, it needs to typecast the structure to valid one.
* PARAMETERS
* param1 : Event ID
* param2 : Result Union
* RETURNS
* void
 *****************************************************************************/
typedef void(*srv_avrcp_notify_event)(srv_avrcp_event_enum notify_event_id,srv_avrcp_result_union result);


/*****************************************************************************
* FUNCTION
* srv_avrcp_register_result_notifier
* DESCRIPTION: 
* Application should register the above callback function using this interface
* The application should register the callback function before using the service of
* BT dialer, otherwise BT dialer won't be able to send back the response to APP.
* PARAMETERS
* param1 : application function callback
* RETURNS
* enum - intermediate_result
* *****************************************************************************/
U8 srv_avrcp_register_result_notifier(srv_avrcp_notify_event cb_ptr);

/*****************************************************************************
* FUNCTION
* srv_avrcp_list_player_app_attr_req
* DESCRIPTION: To get player app supported settings
* PARAMETERS
* RETURNS
* enum : Immediate result : SUCCESS/FAILURE
* Actual Result : It will be notified in app_notify_callback.
* Event ID:    SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_EVENT
* Resut structure : result_union.supported_attr_list_result
* *****************************************************************************/
U8 srv_avrcp_list_player_app_attr_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_list_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:    SRV_AVRCP_EVT_ID_SUPPORTED_ATTR_VALUE_EVENT
 * Resut structure : result_union.supp_attr_val_list
 *****************************************************************************/
U8 srv_avrcp_list_player_app_value_req(srv_avrcp_player_app_settings_attr_enum attr_id );

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_curr_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:    SRV_AVRCP_EVT_ID_CURR_ATTR_VAL_EVENT
 * Resut structure : result_union.curr_attr_list_result
 *****************************************************************************/
U8 srv_avrcp_get_curr_player_app_value_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_set_player_app_value_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_SET_PLAYERAPP_VAL_EVENT
 * Resut structure : result_union.result_cnf
 *****************************************************************************/
U8 srv_avrcp_set_player_app_value_req(U8 attr_values[]);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_attr_txt_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_ATTR_TXT_EVENT
 * Resut structure : result_union.attr_txt_result
 *****************************************************************************/
U8 srv_avrcp_get_player_app_attr_txt_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_player_app_value_txt_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_ATTR_TXT_VAL_EVENT
 * Resut structure : result_union.val_txt_result
 *****************************************************************************/
U8 srv_avrcp_get_player_app_value_txt_req(srv_avrcp_player_app_settings_attr_enum attr_id );

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
void srv_avrcp_get_playerapp_value_txt_equalizer_setting_req();

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
void srv_avrcp_get_playerapp_value_txt_repeat_setting_req();

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
void srv_avrcp_get_playerapp_value_txt_shuffle_setting_req();

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
void srv_avrcp_get_playerapp_value_txt_scan_setting_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_displayable_charset_req
 * DESCRIPTION
 *  Set  Character set at TG to notify result to CT.
 *  UTF-8 is default charset format.
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_INFORM_DISPLAYABLE_CHARSET_EVENT
 * Resut structure : result_union.result_cnf
 *****************************************************************************/
U8 srv_avrcp_inform_displayable_charset_req(U16 charset[]);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_inform_battery_status_of_ct_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_INFORM_BATT_STATUS_CT_EVENT
 * Resut structure : result_union.result_cnf
 *****************************************************************************/
U8 srv_avrcp_inform_battery_status_of_ct_req(srv_avrcp_battery_status_enum battery_status);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_element_attr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT
 * Resut structure : result_union.attr_txt_result
 *****************************************************************************/
U8 srv_avrcp_get_element_attr_req(srv_avrcp_media_attr_enum attr_ids[]);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_play_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_PLAY_STATUS_EVENT
 * Resut structure : result_union.play_status
 *****************************************************************************/
U8 srv_avrcp_get_play_status_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_register_notification_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_REG_NOTIFICATION_EVENT
 * Resut structure : result_union.play_status
 *****************************************************************************/
U8 srv_avrcp_register_notification_req(srv_avrcp_metadata_trasnfer_events event_id,U32 playback_interval );

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_abort_continueing_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 * enum - intermediate_result
 * Actual Result : It will be notified in app_notify_callback.
 * Event ID:     SRV_AVRCP_EVT_ID_ABORT_REQ_EVENT
 * Resut structure : result_union.result_cnf
 *****************************************************************************/
U8 srv_avrcp_abort_continueing_req();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_elements_attr_request
 * DESCRIPTION
 *  This is wrapper API for app for API -srv_avrcp_get_element_attr_req(attr[])
 *  User can use any of both APIs.
 * PARAMETERS
 *  
 * RETURNS
 *    SUCCESS/FAILURE
 *     SUCCESS/FAILURE
  * Actual Result : It will be notified in app_notify_callback.
  * Event ID:      SRV_AVRCP_EVT_ID_ELEM_ATTR_EVENT
  * Resut structure : result_union.attr_txt_result
 *****************************************************************************/
void srv_avrcp_get_elements_attr_request();

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_check_attribute_support_status_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  TRUE/FALSE
 *****************************************************************************/
MMI_BOOL srv_avrcp_check_attribute_support_status_req(srv_avrcp_player_app_settings_attr_enum     attribute_id);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_supported_attr_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  enum - intermediate_result
 *****************************************************************************/
U8    srv_avrcp_get_supported_attr_req(srv_avrcp_player_app_settings_attr_enum supported_attr[]);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_get_attribute_supported_values_req
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 *    attr_value[] -is corressponding enum to attribute value.
 *    SRV_AVRCP_PLAYER_APP_SETTING_EQUALIZER   -srv_avrcp_equalizer_state_enum
 *    SRV_AVRCP_PLAYER_APP_SETTING_REPEAT_MODE -srv_avrcp_repeat_mode_enum
 *    SRV_AVRCP_PLAYER_APP_SETTING_SHUFFLE_MODE -srv_avrcp_shuffle_mode_enum
 *    SRV_AVRCP_PLAYER_APP_SETTING_SCAN_MODE  -srv_avrcp_scan_mode_enum
 * RETURNS
 *  enum - intermediate_result
 *****************************************************************************/
U8    srv_avrcp_get_attribute_supported_values_req(srv_avrcp_player_app_settings_attr_enum    attr_id ,U8 attr_val[],U8 *count);

/*****************************************************************************
 * FUNCTION
 *  srv_avrcp_unmask_reg_notification_event_id
 * DESCRIPTION
 *  Below are current registered notification for events:
 *     SRV_AVRCP_EVENT_PLAYBACK_STATUS_CHANGED
 *    SRV_AVRCP_EVENT_TRACK_CHANGED
 *    SRV_AVRCP_EVENT_TRACK_REACHED_END
 *    SRV_AVRCP_EVENT_TRACK_REACHED_START
 *    SRV_AVRCP_EVENT_BATT_STATUS_CHANGED
 *    SRV_AVRCP_EVENT_SYSTEM_STATUS_CHANGED
 *If user want to notify other events of  this enum, user should pass event id.
 *playback_interval for event -  SRV_AVRCP_EVENT_PLAYBACK_POS_CHNAGED otherwise -1
 * PARAMETERS
 *  
 * RETURNS
 *  enum - intermediate_result
 *****************************************************************************/
U8 srv_avrcp_unmask_reg_notification_event_id(srv_avrcp_metadata_trasnfer_events event_id,S16     playback_interval);

#endif //__MMI_BT_AVRCP_V13__

#endif /* __MMI_AVRCP_SUPPORT__ */

#endif /* __SRV_AVRCP_GPROT_H__ */ 

