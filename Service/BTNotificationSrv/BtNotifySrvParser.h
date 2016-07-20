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
 *  BtNotifySrvParser.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  SMS Service For BT Parser Xml Header File
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/
#ifndef __SRV_BT_NOTIFY_PARSER_SRV_H__
#define __SRV_BT_NOTIFY_PARSER_SRV_H__

#include "MMI_features.h"
#ifdef __MMI_BT_NOTI_SRV__

#include "kal_general_types.h"
#include "BTNotiSrvGprot.h"


typedef enum {
    srv_bt_notify_parse_none,
    srv_bt_notify_parse_header,
    srv_bt_notify_parse_noti_body,
    srv_bt_notify_parse_sms_body,
    srv_bt_notify_parse_call_body,
    srv_bt_notify_parse_block_sender_body
} srv_bt_notify_parse_para;

typedef struct 
{
    WCHAR sender[BT_NOTIFY_SENDER_LENTH];
    WCHAR title[BT_NOTIFY_TITLE_LENTH];
    WCHAR ticker_text[BT_NOTIFY_TICKER_TEXT_LENTH]; 
    WCHAR *content;
    U32 timestamp;
    U32 app_id;
    WCHAR icon_path[256];
} srv_bt_notify_noti_struct;

typedef struct 
{
    WCHAR sender[BT_NOTIFY_SENDER_LENTH];
    WCHAR send_number[BT_NOTIFY_NUMBER_LENTH];
    WCHAR *content;
    U32 timestamp;
} srv_bt_notify_sms_struct;

typedef struct 
{
    WCHAR sender[BT_NOTIFY_SENDER_LENTH];
    WCHAR send_number[BT_NOTIFY_NUMBER_LENTH];
    WCHAR *content;
    U32 missed_call_count;
    U32 timestamp;
} srv_bt_notify_call_struct;

typedef struct 
{
    WCHAR sender[BT_NOTIFY_SENDER_LENTH];
    WCHAR send_number[BT_NOTIFY_NUMBER_LENTH];
    U32 app_id;
} srv_bt_notify_block_sender_struct;

typedef union
{
    srv_bt_notify_noti_struct noti;
    srv_bt_notify_sms_struct sms;
    srv_bt_notify_call_struct call;
    srv_bt_notify_block_sender_struct block_sender;
}srv_bt_notify_body_union;

typedef struct 
{
    srv_bt_notify_header_struct header; 
    srv_bt_notify_body_union mbody;
} srv_bt_notify_data_struct;


typedef void (*srv_bt_parse_xml_callback)(srv_bt_notify_parse_para para_flag, void *data, void *user_data, MMI_BOOL ret_val);

/*****************************************************************************
 * FUNCTION
 *  srv_bt_notify_xml_parse
 * DESCRIPTION
 *  parse xml file
 * PARAMETERS
 *  file_name    :   [IN]    WCHAR
 *  para_flag    :   [IN]    srv_bt_notify_parse_para
 *  callback     :   [IN]    srv_bt_parse_xml_callback
 *  data         :   [IN]    void
 * RETURNS
 *  kal_int32
 *****************************************************************************/
kal_int32 srv_bt_notify_xml_parse(
    WCHAR *file_name, 
    srv_bt_notify_parse_para para_flag, 
    srv_bt_parse_xml_callback callback, 
    void *data,
    void *user_data);
    
/*****************************************************************************
 * FUNCTION
 *  srv_bt_notify_xml_generator
 * DESCRIPTION
 *  parse xml file
 * PARAMETERS
 *  file_name    :   [IN]    WCHAR
 *  data         :   [IN]    srv_bt_notify_data_struct
 * RETURNS
 *  kal_int32
 *****************************************************************************/
kal_int32 srv_bt_notify_xml_generator(
    WCHAR *file_name, 
    srv_bt_notify_data_struct *data);

#endif /* __MMI_BT_NOTI_SRV__ */
#endif /* __SRV_BT_NOTIFY_PARSER_SRV_H__*/

