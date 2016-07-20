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
 * BTNotiSrvData.c
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
#include "MMI_features.h"

#ifdef __MMI_BT_NOTI_SRV__
#include "MMIDataType.h"

#include "mmi_frm_events_gprot.h"
#include "GlobalResDef.h"
#include "MMI_trc_Int.h"
#include "OslMemory.h"
#include "Kal_trace.h"
#include "Unicodexdcl.h"
#include "AlertScreen.h"
#include "fs_gprot.h"

#include "BTNotiSrvData.h"
#include "BTNotiSrvDisp.h"
#include "mmi_cb_mgr_gprot.h"
#include "mmi_rp_srv_bt_noti_def.h"


static srv_bt_noti_data_msg_node_struct srv_bt_noti_data_node_list[SRV_BT_NOTI_MSG_LIST_MAX_NUM];
static srv_bt_noti_data_msg_context_struct srv_bt_noti_data_msg_context;

// cm: Common Modules
// SP->FP
static srv_bt_noti_data_msg_node_struct srv_bt_notify_call_data_node;
static U32 srv_bt_notify_call_data_node_index = 1111;

#ifndef __MTK_TARGET__
#ifndef SRV_BT_NOTIFY_TEST_FSM
#define SRV_BT_NOTIFY_TEST_FSM
#endif
#ifndef SRV_BT_MODIS_TEST
#define SRV_BT_MODIS_TEST
#endif
#endif

static void srv_bt_noti_call_init(void);
static void srv_bt_noti_notify_missed_call(U32 missed_call_count);

//#define __TEST__
#ifdef __TEST__
kal_int32 srv_bt_notify_xml_parse(
    WCHAR *file_name, 
    srv_bt_notify_parse_para para_flag, 
    srv_bt_parse_xml_callback callback, 
    void *data )
{
    srv_bt_notify_noti_struct *noti;
    srv_bt_notify_sms_struct *sms;
    
    if (para_flag == srv_bt_notify_parse_noti_body)
    {
        noti = (srv_bt_notify_noti_struct*)data;
        strcpy(noti->content, file_name); 
    }
    else
    {
        sms = (srv_bt_notify_sms_struct*)data;
        strcpy(sms->content, file_name);
    }
    
    callback(para_flag, data, 0);
    
    return 0;    
}

void srv_bt_noti_data_print(void)
{
    U32 i,num ;
    srv_bt_noti_data_msg_node_struct * node;
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;

    for (i = 0;i < SRV_BT_NOTI_MSG_LIST_MAX_NUM; i++)
    {
        printf("%d ", context->srv_bt_noti_data_list_mask[i]);       
    }
    
    num = srv_bt_noti_data_get_msg_num();
    printf("\nmsg_num=%d\n", num);
    
    for (i = 0; i < num; i++)
    {
        node = srv_bt_noti_data_get_msg_info(i); 
        printf("node_index = %d, content: %s\n", context->node_index[i], node->content); 
    }
    printf("\n");
    
    
}

void srv_bt_noti_data_test(void)
{
    srv_bt_noti_event_struct event_data;
    srv_bt_noti_event_info_new event_info;
    srv_bt_notify_header_struct header;

    event_data.evt_id = EVT_ID_SRV_BT_NOTI_NEW_MSG;
    event_data.event_info = &event_info;
    event_info.header = &header;
    
    event_info.xml_file_path = "xml_file_name1";
    header.subtype = srv_bt_notify_subtype_text;
        
    srv_bt_noti_data_event_hdlr(&event_data);
    srv_bt_noti_data_print();

    event_info.xml_file_path = "xml_file_name2";
    srv_bt_noti_data_event_hdlr(&event_data);
    srv_bt_noti_data_print();

    event_info.xml_file_path = "xml_file_name3";
    srv_bt_noti_data_event_hdlr(&event_data);
    srv_bt_noti_data_print();

    srv_bt_noti_data_delete_msg(1);
    srv_bt_noti_data_print();
    
    srv_bt_noti_data_delete_all();
    srv_bt_noti_data_print();    
}
#endif

#ifndef __MTK_TARGET__
void srv_bt_noti_send_sms_test()
{
    MMI_BOOL retval = srv_bt_noti_data_reply_remote_sms(L"15882487297", L"testetstt");
}
#endif

static void srv_bt_noti_data_init_msg(srv_bt_noti_data_msg_node_struct *msg_node, U32 msg_node_index)
{
    memset(msg_node, 0, sizeof(srv_bt_noti_data_msg_node_struct) );

    kal_wsprintf(msg_node->icon_file_path, "%w%d.jpg", BT_NOTIFY_ROOT_FOLDER, msg_node_index);
    kal_wsprintf(msg_node->xml_file_path, "%w%d.xml", BT_NOTIFY_ROOT_FOLDER, msg_node_index);
}

#ifdef SRV_BT_MODIS_TEST
void srv_bt_noti_data_new_msg_test(void)
{
    srv_bt_noti_event_struct event_data;
    srv_bt_noti_event_info_new event_info;
    srv_bt_notify_header_struct header;

    event_data.evt_id = EVT_ID_SRV_BT_NOTI_NEW_MSG;
    event_data.event_info = &event_info;
    event_info.header = &header;

    event_info.xml_file_path = L"c:\\@BTNotify\\bt_notify_0000.xml";
    header.subtype = srv_bt_notify_subtype_text;
    header.category = srv_bt_notify_category_noti;
            
    srv_bt_noti_data_event_hdlr(&event_data);
}
#endif

void srv_bt_noti_data_init(void)
{
    memset(&srv_bt_noti_data_msg_context, 0, sizeof(srv_bt_noti_data_msg_context_struct));

    srv_bt_noti_disp_set_interrupt_event_handler(
        EVT_ID_SRV_BT_NOTI_NEW_MSG,
        srv_bt_notify_category_noti,
        srv_bt_noti_data_event_hdlr,
        NULL);

    srv_bt_noti_disp_set_interrupt_event_handler(
        EVT_ID_SRV_BT_NOTI_DEL_MSG,
        srv_bt_notify_category_noti,
        srv_bt_noti_data_event_hdlr,
        NULL);

    srv_bt_noti_call_init();

    #ifdef __TEST__
    srv_bt_noti_data_test();
    #endif

    #ifdef SRV_BT_NOTIFY_TEST_FSM
    //srv_bt_noti_data_new_msg_test();
    #endif
}

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
U32 srv_bt_noti_data_get_msg_num(void)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_GET_MSG_NUM, context->node_num);
     
    return context->node_num;
}

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
srv_bt_noti_data_msg_node_struct *srv_bt_noti_data_get_msg_info(U32 index)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);

    srv_bt_noti_data_msg_node_struct *node;
    U32 node_index;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_GET_MSG_INFO, index);
    
    MMI_ASSERT(index < context->node_num);
    
    node_index = context->node_index[index];
    MMI_ASSERT(node_index < SRV_BT_NOTI_MSG_LIST_MAX_NUM);
    
    node = &(node_list[node_index]);
    
    return node;
}

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
S32 srv_bt_noti_data_get_msg_index_by_msg_id(U32 msg_id)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);    
    srv_bt_noti_data_msg_node_struct *node;
    U32 i;
    S32 index = -1;
        
    for (i = 0; i < context->node_num; i++)        
    {
        node = &(node_list[i]);
        
        if (node->header.msg_id == msg_id)
        {
            index = i;
            break;
        }
    }
    
    return index;
}

/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_get_msg_info_ref
 * DESCRIPTION
 *  This function is to get msg info reference.
 * PARAMETERS
 *  index  :       [IN]    msg index
 *  node_ref:  [OUT] node ref
 * RETURNS
 *  void
 *****************************************************************************/
MMI_BOOL srv_bt_noti_data_get_msg_info_ref(U32 index, srv_bt_noti_data_msg_node_struct *node_ref)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);
    srv_bt_noti_data_msg_node_struct *node;
    U32 node_index;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_GET_MSG_INFO_REF, index);
        
    if (index >= context->node_num)
    {
        return MMI_FALSE;
    }
    
    node_index = context->node_index[index];
    
    if (node_index >= SRV_BT_NOTI_MSG_LIST_MAX_NUM)
    {
        return MMI_FALSE;
    }
    
    node = &(node_list[node_index]);
    *node_ref = *node;
    
    return;
}

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
void srv_bt_noti_data_delete_msg(U32 index)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);
    
    U32 del_node_index;
    srv_bt_noti_data_msg_node_struct *node;
    U32 i;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_DELETE_MSG, index);
    
    MMI_ASSERT(index<context->node_num);

    del_node_index = context->node_index[index];
    MMI_ASSERT(del_node_index < SRV_BT_NOTI_MSG_LIST_MAX_NUM);

    node = &(node_list[del_node_index]);

    FS_Delete(node->icon_file_path);
    FS_Delete(node->xml_file_path);
    memset( node, 0, sizeof(srv_bt_noti_data_msg_node_struct) );

    // context->srv_bt_noti_data_list_mask[index] = 0;
    // [MAUI_03446114] delete notification show wrong msg, use wrong index
    context->srv_bt_noti_data_list_mask[del_node_index] = 0;

    for (i = index; i < context->node_num - 1; i++)
    {
        context->node_index[i] = context->node_index[i+1];
    }
    
    context->node_num --;
    srv_bt_noti_data_send_refresh(SRV_BT_NOTIFY_REFRESH_DEL, 0);
}

void srv_bt_noti_data_delete_msg_by_app_id(U32 app_id)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);
    
    U32 del_node_index;
    srv_bt_noti_data_msg_node_struct *node;
    U32 i = 0, j;

    while (i < context->node_num)
    {
        del_node_index = context->node_index[i];
        MMI_ASSERT(del_node_index<SRV_BT_NOTI_MSG_LIST_MAX_NUM);
        node = &(node_list[del_node_index]);

        if (node->app_id == app_id)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_DELETE_MSG, i);

            FS_Delete(node->icon_file_path);
            FS_Delete(node->xml_file_path);
            
            memset( node, 0, sizeof(srv_bt_noti_data_msg_node_struct) );
            // context->srv_bt_noti_data_list_mask[i] = 0;
            // [MAUI_03446114] delete notification show wrong msg, use wrong index
            context->srv_bt_noti_data_list_mask[del_node_index] = 0;

            --context->node_num;
            
            for (j = i; j < context->node_num; ++j)
            {
                context->node_index[j] = context->node_index[j + 1];
            }
        }
        else
        {
            ++i;
        }
    }

    srv_bt_noti_data_send_refresh(SRV_BT_NOTIFY_REFRESH_DEL, 0);
}

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
void srv_bt_noti_data_delete_all(void)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);    
    srv_bt_noti_data_msg_node_struct *node;
    U32 i;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_DELETE_ALL);
        
    for (i = 0; i < context->node_num; i++)        
    {
        node = &(node_list[i]);
        FS_Delete(node->icon_file_path);
        FS_Delete(node->xml_file_path);
    }

    memset(context, 0, sizeof(srv_bt_noti_data_msg_context_struct));

    srv_bt_noti_data_send_refresh(SRV_BT_NOTIFY_REFRESH_DEL, 0);
}

static MMI_BOOL srv_bt_noti_data_create_msg(srv_bt_noti_data_msg_node_struct **node, U32 *node_index)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);
    
    U32 i;
    S32 new_node_index = -1;

    for (i = 0; i < SRV_BT_NOTI_MSG_LIST_MAX_NUM; i++)
    {
        if (context->srv_bt_noti_data_list_mask[i] == 0)
        {
            new_node_index = i;
            context->srv_bt_noti_data_list_mask[i] = 1;
            break;
        }
    }

    if (new_node_index == -1)
    {
        /* replace the last one */
        new_node_index = context->node_index[context->node_num - 1];
        context->node_num --;        
    }

    for (i = context->node_num; i > 0; i--)
    {
        context->node_index[i] = context->node_index[i - 1];    
    }
    
    context->node_index[0] = new_node_index;
    context->node_num ++;

    *node = &(node_list[new_node_index]);
    *node_index = (U32)new_node_index;
    srv_bt_noti_data_init_msg(*node, *node_index);
      
    return MMI_TRUE;    
}

static void srv_bt_noti_data_parse_xml_callback(srv_bt_notify_parse_para para_flag, void *data, void* user_data, MMI_BOOL ret_val)
{
    srv_bt_notify_noti_struct *noti;
    srv_bt_notify_sms_struct *sms;
    srv_bt_notify_call_struct *call;
    srv_bt_noti_data_msg_node_struct *node; 
    U32 node_index = (U32)user_data;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, 
              TRC_SRV_BT_NOTIFY_DATA_PARSE_XML_CALLBACK, 
              para_flag, 
              data, 
              user_data, 
              ret_val);

    do
    {    
        if (MMI_FALSE == ret_val)
        {
            srv_bt_noti_data_delete_msg(node_index);
            break;
        }
        
        if ((para_flag != srv_bt_notify_parse_call_body) && 
            (srv_bt_noti_data_msg_context.srv_bt_noti_data_list_mask[node_index] == 0))
        {
            /* invalid node index, maybe the node has been cleared while waiting for parer's call back, 
               such as receiving EVT_ID_SRV_BT_NOTI_DEL_MSG
            */
            MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_PARSE_XML_CALLBACK_ERR_1);
            break;
        }
            
        if (para_flag == srv_bt_notify_parse_noti_body)
        {
            node = &(srv_bt_noti_data_node_list[node_index]);
            noti = (srv_bt_notify_noti_struct*)data;
            node->timestamp = noti->timestamp;
            /* app id */
            node->app_id = noti->app_id;
            
            mmi_wcscpy(node->sender, noti->sender);
            mmi_wcscpy(node->title, noti->title);
            mmi_wcscpy(node->ticker_text, noti->ticker_text);

            FS_Delete(node->icon_file_path);
            
            if (FS_Rename(noti->icon_path, node->icon_file_path) != FS_NO_ERROR) 
            {
                MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_PARSE_XML_CALLBACK_ERR_2);
            }
                  
            srv_bt_noti_data_send_refresh(SRV_BT_NOTIFY_REFRESH_NEW, 0);
                  
        }
        else if (para_flag == srv_bt_notify_parse_sms_body)
        {
            node = &(srv_bt_noti_data_node_list[node_index]);        
            sms = (srv_bt_notify_sms_struct*)data;
            node->timestamp = sms->timestamp;
            mmi_wcscpy( node->sender, sms->sender );
            mmi_wcscpy( node->send_number, sms->send_number );

            srv_bt_noti_data_send_refresh(SRV_BT_NOTIFY_REFRESH_NEW, 0);
        }
        else if (para_flag == srv_bt_notify_parse_call_body)
        {
            call = (srv_bt_notify_call_struct*)data;
            srv_bt_noti_notify_missed_call(call->missed_call_count);       
        }
    } while(0);

    srv_bt_noti_data_msg_context.is_waiting_parser_callback = MMI_FALSE;
    OslMfree(data);
}

static void srv_bt_noti_data_handle_new_msg(srv_bt_noti_event_info_new *event_info)
{
    srv_bt_noti_data_msg_node_struct *node=NULL;
    U32 node_index;
    srv_bt_notify_parse_para para_flag = srv_bt_notify_parse_none;
    srv_bt_notify_body_union *body; 
    S32 parse_ret  = -1;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_NEW_MSG);
    
    if (srv_bt_noti_data_msg_context.is_waiting_parser_callback == MMI_TRUE)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_NEW_MSG_ERR_1);
        return;
    }
    
    if (event_info->xml_file_path)
    {
        if (event_info->header->category == srv_bt_notify_category_noti) 
        {   
            /* creat new msg */
            srv_bt_noti_data_create_msg(&node, &node_index);
            
            if (node == NULL)
            {            
                return;
            }
        }
        else if (event_info->header->category == srv_bt_notify_category_call)
        {
            node = &srv_bt_notify_call_data_node;
            node_index = srv_bt_notify_call_data_node_index;            
        }
        else
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_NEW_MSG_ERR_2);
            return;
        }
        
        /* copy header */
        memcpy(&(node->header), event_info->header, sizeof(srv_bt_notify_header_struct) );

        body = OslMalloc(sizeof(srv_bt_notify_body_union));        
        memset(body, 0 , sizeof(srv_bt_notify_body_union));
        
        /* parse the body from xml file */
        if (event_info->header->subtype == srv_bt_notify_subtype_text)
        {
            para_flag = srv_bt_notify_parse_noti_body;
        }
        else if (event_info->header->subtype == srv_bt_notify_subtype_sms)
        {
            para_flag = srv_bt_notify_parse_sms_body;
        }
        else if (event_info->header->subtype == srv_bt_notify_subtype_missed_call)
        {
            para_flag = srv_bt_notify_parse_call_body;
        }

        if (para_flag == srv_bt_notify_parse_noti_body)
        {
            body->noti.content = (WCHAR*)&(node->content);
        }
        else if (para_flag == srv_bt_notify_parse_sms_body)
        {
            body->sms.content = (WCHAR*)&(node->content);
        }
        else if (para_flag == srv_bt_notify_parse_call_body)
        {
            body->call.content = (WCHAR*)&(node->content);
        }        
     
        FS_Delete(node->xml_file_path);        
        
        if (FS_Move(event_info->xml_file_path, node->xml_file_path, FS_MOVE_OVERWRITE | FS_MOVE_COPY, NULL, NULL, 0) != FS_NO_ERROR)    
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_NEW_MSG_ERR_3);
            OslMfree(body);
            return;
        }

        srv_bt_noti_data_msg_context.is_waiting_parser_callback = MMI_TRUE;

        parse_ret = srv_bt_notify_xml_parse(node->xml_file_path,
                                            para_flag,
                                            srv_bt_noti_data_parse_xml_callback,
                                            (void*)body,
                                            (void*)node_index);

        /* delete xml file to reduce quota size */
    #if !defined(__SRV_BT_NOTI_QUOTA_DEBUG_ENABLE__)
        FS_Delete(node->xml_file_path);
    #endif
    
        if (parse_ret == -1)
        {
            MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_NEW_MSG_ERR_4);
            OslMfree(body);
            srv_bt_noti_data_msg_context.is_waiting_parser_callback = MMI_FALSE;
            return;
        }
    }   
}

static void srv_bt_noti_data_handle_del_msg(srv_bt_noti_event_info_del *event_info)
{
    srv_bt_noti_data_msg_context_struct *context = &srv_bt_noti_data_msg_context;
    srv_bt_noti_data_msg_node_struct *node_list = &(srv_bt_noti_data_node_list[0]);
    S32 msg_id;
    U32 i;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_HANDLE_DEL_MSG, event_info->del_msg_id);
                
    msg_id = event_info->del_msg_id;

    if (msg_id == -1)
    {
        srv_bt_noti_data_delete_all();
    }
    else
    {
        for (i = 0; i < context->node_num; i++)
        {
            if ((U32)msg_id == node_list[context->node_index[i]].header.msg_id)
            {
                srv_bt_noti_data_delete_msg(i);
            }
        }
    }
}

static void srv_bt_noti_data_send_refresh(srv_bt_notify_refresh_type refresh_type, U32 index)
{
    srv_bt_noti_refresh_evt_struct event;

    MMI_FRM_INIT_EVENT(&event, EVT_ID_SRV_BT_NOTI_REFRESH);
    event.refresh_type = refresh_type;
    event.index = index;
    MMI_FRM_CB_EMIT_POST_EVENT(&event);

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_SEND_REFRESH);
}

static MMI_BOOL srv_bt_noti_data_event_hdlr(srv_bt_noti_event_struct* event_data)
{
    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_EVENT_HDLR, event_data->evt_id);
    
    switch (event_data->evt_id)
    {
        case EVT_ID_SRV_BT_NOTI_NEW_MSG:
        {
            srv_bt_noti_data_handle_new_msg((srv_bt_noti_event_info_new*)event_data->event_info);          
            break;
        }

        case EVT_ID_SRV_BT_NOTI_DEL_MSG:
        {
            srv_bt_noti_data_handle_del_msg((srv_bt_noti_event_info_del*)event_data->event_info);
            break;
        }

        default:
        {
            break;
        }
    }

    return MMI_FALSE;
}

/*****************************************************************************
 * FUNCTION
 *  srv_bt_noti_data_reply_remote_sms
 * DESCRIPTION
 *  This function is to reply sms to remote device through spp, it will return result when send operation done.
 *  it does not care remote device when to send the reply sms or the sent status.
 * PARAMETERS
 *  send_number  :  [IN] send number
 *  content:               [IN] sms content, must be ended with '\0' and the strlen must be 
 *                                        smaller than BT_NOTIFY_SEND_SMS_CONTENT_LENTH
 * RETURNS
 *  MMI_BOOL
 *****************************************************************************/
MMI_BOOL srv_bt_noti_data_reply_remote_sms(WCHAR *send_number, WCHAR *content)
{
    srv_bt_notify_data_struct* node = NULL;
    WCHAR *xml_file_path = NULL;
    S32 parse_ret;
    MMI_BOOL retval = MMI_FALSE;

    do
    {
        node = OslMalloc(sizeof(srv_bt_notify_data_struct));

        if (node == NULL)
        {
            break;
        }
    
        memset(node, 0, sizeof(srv_bt_notify_data_struct));
        node->header.category= srv_bt_notify_category_noti;
        node->header.subtype= srv_bt_notify_subtype_sms;
        node->header.action = srv_bt_notify_action_add;
        node->header.msg_id = 0;
        node->mbody.sms.sender[0] = 0;
        node->mbody.sms.timestamp= 0;
        node->mbody.sms.content = NULL;
    
        if (mmi_ucs2strlen((const CHAR*)send_number) > BT_NOTIFY_NUMBER_LENTH)
        {
            break;
        }
        
        mmi_wcscpy(node->mbody.sms.send_number, send_number);

        if (mmi_ucs2strlen((const CHAR*)content) > BT_NOTIFY_SEND_SMS_CONTENT_LENTH)
        {
            break;
        }

        node->mbody.sms.content = OslMalloc(sizeof(WCHAR) * BT_NOTIFY_SEND_SMS_CONTENT_LENTH);
        
        if (node->mbody.sms.content == NULL)
        {
            break;
        }
    
        mmi_wcscpy(node->mbody.sms.content, content);
        xml_file_path = OslMalloc(sizeof(WCHAR) * BT_NOTIFY_XML_FILE_NAME_LENTH);

        if (xml_file_path == NULL)
        {
            break;
        }
    
        kal_wsprintf(xml_file_path, "%wsend_sms_%04d.xml", BT_NOTIFY_ROOT_FOLDER, 0);

        parse_ret = srv_bt_notify_xml_generator(xml_file_path, node);
        MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_SEND_SMS_PARSE_RESULT, parse_ret); 
        
        if (parse_ret == -1)
        {
            break;
        }          

        retval = srv_bt_noti_send_xml(xml_file_path);
    } while(0);

    if (xml_file_path != NULL)
    {
        OslMfree(xml_file_path);
    }
    
    if (node->mbody.sms.content != NULL)
    {
        OslMfree(node->mbody.sms.content);
    }
    
    if (node != NULL)
    {
        OslMfree(node);
    }
    
    return retval;
}

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
MMI_BOOL srv_bt_noti_data_block_remote_notification(U32 app_id)
{
    srv_bt_notify_data_struct* node = NULL;
    WCHAR *xml_file_path = NULL;
    S32 parse_ret;
    MMI_BOOL retval = MMI_FALSE;

    do
    {
        node = OslMalloc(sizeof(srv_bt_notify_data_struct));

        if (node == NULL)
        {
            break;
        }
        
        xml_file_path = OslMalloc(sizeof(WCHAR) * BT_NOTIFY_XML_FILE_NAME_LENTH);

        if (xml_file_path == NULL)
        {
            break;
        }
        
        memset(node, 0, sizeof(srv_bt_notify_data_struct));
        node->header.category= srv_bt_notify_category_noti;
        node->header.subtype= srv_bt_notify_subtype_block_sender;
        node->header.action = srv_bt_notify_action_update;        
        node->mbody.block_sender.sender[0] = 0;
        node->mbody.block_sender.send_number[0] = 0;
        node->mbody.block_sender.app_id = app_id;

        kal_wsprintf(xml_file_path, "%wupdate_block_sender_%04d.xml", BT_NOTIFY_ROOT_FOLDER, 0);

        parse_ret = srv_bt_notify_xml_generator(xml_file_path, node);
        MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_UPDATE_REMOTE_BLOCK_PARSE_RESULT, parse_ret);
        
        if (parse_ret == -1)
        {
            break;
        }          

        retval = srv_bt_noti_send_xml(xml_file_path);
    } while(0);

    if (xml_file_path != NULL)
    {
        OslMfree(xml_file_path);
    }
    
    if (node != NULL)
    {
        OslMfree(node);
    }

    /* delete corresponding msg */
    if (MMI_TRUE == retval)
    {
        MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_UPDATE_REMOTE_BLOCK_DELETE_MSG, app_id);
        srv_bt_noti_data_delete_msg_by_app_id(app_id);
    }
    
    return retval;
}

/* call: Call Modules */
static void srv_bt_noti_call_init(void)
{
    srv_bt_noti_disp_set_interrupt_event_handler(
        EVT_ID_SRV_BT_NOTI_NEW_MSG,
        srv_bt_notify_category_call,
        srv_bt_noti_data_event_hdlr,
        NULL);
    srv_bt_noti_data_init_msg(&srv_bt_notify_call_data_node, srv_bt_notify_call_data_node_index);
}

static void srv_bt_noti_notify_missed_call(U32 missed_call_count)
{
    srv_bt_noti_missed_call_evt_struct event;

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_MISSED_CALL_COUNT, missed_call_count);
    
    MMI_FRM_INIT_EVENT(&event, EVT_ID_SRV_BT_NOTI_MISSED_CALL);
    event.missed_call_count = missed_call_count;
    MMI_FRM_CB_EMIT_POST_EVENT(&event);

    MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_DATA_SEND_REFRESH);
}

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
MMI_BOOL srv_bt_noti_update_remote_missed_call(void)
{
    srv_bt_notify_data_struct* node = NULL;
    WCHAR *xml_file_path = NULL;
    S32 parse_ret;
    MMI_BOOL retval = MMI_FALSE;
    
    do
    {
        node = OslMalloc(sizeof(srv_bt_notify_data_struct));

        if (node == NULL)
        {
            break;
        }
        
        memset(node, 0, sizeof(srv_bt_notify_data_struct));
        node->header.category= srv_bt_notify_category_call;
        node->header.subtype= srv_bt_notify_subtype_missed_call;
        node->header.action = srv_bt_notify_action_update;
        node->header.msg_id = 0;
        node->mbody.call.sender[0] = 0;
        node->mbody.call.send_number[0] = 0;
        node->mbody.call.missed_call_count = 0;
        node->mbody.call.timestamp = 0;
        node->mbody.call.content = NULL;

        xml_file_path = OslMalloc(sizeof(WCHAR) * BT_NOTIFY_XML_FILE_NAME_LENTH);

        if (xml_file_path == NULL)
        {
            break;
        }

        kal_wsprintf(xml_file_path, "%wupdate_missed_call_%04d.xml", BT_NOTIFY_ROOT_FOLDER, 0);
        parse_ret = srv_bt_notify_xml_generator(xml_file_path, node);
        MMI_TRACE(MMI_CONN_TRC_G7_BT, TRC_SRV_BT_NOTIFY_UPDATE_REMOTE_MISSED_CALL_PARSE_RESULT, parse_ret);

        if (parse_ret == -1)
        {
            break;
        }

        retval = srv_bt_noti_send_xml(xml_file_path);
    } while(0);

    if (xml_file_path != NULL)
    {
        OslMfree(xml_file_path);
    }

    if (node != NULL)
    {
        OslMfree(node);
    }

    return retval;
}

#endif // __MMI_BT_NOTI_SRV__

