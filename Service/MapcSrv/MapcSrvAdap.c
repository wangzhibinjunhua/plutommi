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
 * Btmapc_srv.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is for bluetooth map client profile and used by any application
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
 * removed!
 *-------------------------------------------------------------------------------------------*/


#include "MMI_features.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "app_ltlcom.h"
#include "MMIDataType.h"
#include "mmi_frm_events_gprot.h"
#include "Mmi_frm_mem_gprot.h"
#include "QueueGprot.h"
#include "BtcmSrvGprot.h"
#ifdef __MMI_BT_MAP_CLIENT__
#include "MapcSrv.h"
#include "MapcSrvAdap.h"
#endif 
#ifdef __MMI_BT_MAPC_BY_SPP__
#include "Bluetooth_struct.h"
#include "DebugInitDef_Int.h"
#include "BTMMIScrGprots.h"
#include "BTNotiSrvGprot.h"
#include "Mmi_rp_srv_bt_noti_def.h"
#include "Unicodexdcl.h"
#include "FileMgrSrvGprot.h"
#endif

#ifdef __MMI_BT_MAP_CLIENT__
extern srv_map_client_cntx_struct *gmap_client_cntx_p;
#endif

srv_mapc_adp_cntx_struct g_mapc_adp_cntx;
srv_mapc_adp_cntx_struct *g_mapc_adp_cntx_p = &g_mapc_adp_cntx;

MapcAdpCallback g_mapc_adp_cb[SRV_MAPC_ADP_CMD_END] = {0};
const char g_mapx_cmd_header[] = "MAPX";
const char g_mapd_cmd_header[] = "MAPD";

MMI_BOOL srv_bt_mapc_adp_is_connected()
{
#if (defined(__BT_MAP_CLIENT__) && defined(__MMI_BT_MAPC_BY_SPP__))

    if (g_mapc_adp_cntx_p->is_map_by_spp_connected ||
        srv_bt_cm_is_profile_connected(SRV_BT_CM_MAPC_CONNECTION))
    {
        return MMI_TRUE;
    }
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]srv_bt_mapc_adp_is_connected:MMI_FALSE");
    return MMI_FALSE;
#elif defined(__BT_MAP_CLIENT__)
    return srv_bt_cm_is_profile_connected(SRV_BT_CM_MAPC_CONNECTION);
#elif defined(__MMI_BT_MAPC_BY_SPP__)
    return g_mapc_adp_cntx_p->is_map_by_spp_connected;
#else
    return MMI_FALSE;    
#endif
}

#ifdef __MMI_BT_MAPC_BY_SPP__


#define MMI_MAPC_ADP_STATE_TRANS(x)  \
{                                \
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]State Change: %d-->%d",g_mapc_adp_cntx_p->adp_state,x);\
    g_mapc_adp_cntx_p->adp_state = (x);  \
}

static void mapc_adp_itoa(kal_char *buf, kal_int32 i, kal_int32 base)
{
    kal_char *s;
#define LEN   20
   kal_int32 rem;
   static kal_char rev[LEN+1];

   rev[LEN] = 0;
   if (i == 0)
   {
      buf[0] = '0';
      ++buf;
      return;
   }
   s = &rev[LEN];
   while (i)
   {
      rem = i % base;
      if (rem < 10)
         *--s = rem + '0';
      else if (base == 16)
         *--s = "abcdef"[rem - 10];
      i /= base;
   }
   while (*s)
   {
      buf[0] = *s++;
      ++buf;
   }
}


/*
cmd:  TYPE PARAM_NUM PARAM
*/
U16 srv_bt_mapc_adp_gen_cmd_set_fldr(char *cmd, bt_mapc_set_folder_req_struct *req_data)
{
    ///TODO: Sprintf
    srv_mapc_adp_set_folder_cmd folder_cmd = {0};
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]SetfolderCMD");
    mapc_adp_itoa(folder_cmd.cmd_type,SRV_MAPC_ADP_CMD_SET_FOLDER,10);
    mapc_adp_itoa(folder_cmd.para_num,2,10);
    mapc_adp_itoa(folder_cmd.flag,req_data->flag,10);
    if (req_data->folder != NULL && req_data->folder[0] != 0)
    {
        mmi_ucs2_to_asc(folder_cmd.folder_name, (CHAR *)req_data->folder);
        
    }
    else
    {
        strcpy(folder_cmd.folder_name,"ROOT");
    }
    //folder_cmd.folder_name[0] = '0';
    sprintf(cmd,"%s %s %s %s",
        folder_cmd.cmd_type, 
        folder_cmd.para_num,
        folder_cmd.flag,
        folder_cmd.folder_name);
    return strlen(cmd);
}

U16 srv_bt_mapc_adp_gen_cmd_get_listing(char *cmd, bt_mapc_get_message_listing_req_struct *req_data)
{
    char s_num[3] = {0};
    srv_mapc_adp_get_list_cmd get_list_cmd = {0};
    
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]listCMD: size:%d, offset:%d, maxLen:%d, folder:%d", 
        req_data->list_size,req_data->list_offset,req_data->max_subject_len,req_data->child_folder);

    mapc_adp_itoa(get_list_cmd.cmd_type,SRV_MAPC_ADP_CMD_GET_LISTING,10);
    mapc_adp_itoa(get_list_cmd.para_num,3,10);
    mapc_adp_itoa(get_list_cmd.list_size,req_data->list_size,10);
    mapc_adp_itoa(get_list_cmd.offset,req_data->list_offset,10);
    mapc_adp_itoa(get_list_cmd.max_sub_len,req_data->max_subject_len,10);

    sprintf(cmd,"%s %s %s %s %s",
        get_list_cmd.cmd_type, 
        get_list_cmd.para_num,
        get_list_cmd.list_size,
        get_list_cmd.offset,
        get_list_cmd.max_sub_len);

    return strlen(cmd);
    
}

U16 srv_bt_mapc_adp_gen_cmd_get_msg(char *cmd, bt_mapc_get_message_req_struct *req_data)
{
    char s_num[3] = {0};
    srv_mapc_adp_get_msg_cmd msg_cmd = {0};
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]GetmsgCMD");

    mapc_adp_itoa(msg_cmd.cmd_type,SRV_MAPC_ADP_CMD_GET_MSG,10);
    mapc_adp_itoa(msg_cmd.para_num,1,10);

    if (req_data->handle != NULL)
    {
        memcpy(msg_cmd.handle, req_data->handle, strlen(req_data->handle));
    }
    else
    {
        msg_cmd.handle[0] = '0';
    }

    sprintf(cmd,"%s %s %s",
        msg_cmd.cmd_type, 
        msg_cmd.para_num,
        msg_cmd.handle);
    return strlen(cmd);
}


U16 srv_bt_mapc_adp_gen_cmd_push_msg(char *cmd, bt_mapc_push_message_req_struct *data)
{
    char s_num[3] = {0};
    srv_mapc_adp_push_msg_cmd push_cmd = {0};
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]PushMsgCMD");

    mapc_adp_itoa(push_cmd.cmd_type,SRV_MAPC_ADP_CMD_PUSH_MSG,10);

    sprintf(cmd,"%s",
        push_cmd.cmd_type);
    return strlen(cmd);
}

U16 srv_bt_mapc_adp_gen_cmd_set_status(char *cmd, bt_mapc_set_message_status_req_struct *req_data)
{
    char s_num[3] = {0};
    srv_mapc_adp_set_status_cmd status_cmd = {0}; 
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]SetStatusCMD");

    mapc_adp_itoa(status_cmd.cmd_type,SRV_MAPC_ADP_CMD_SET_STATUS,10);
    mapc_adp_itoa(status_cmd.para_num,2,10);
    mapc_adp_itoa(status_cmd.status,req_data->status,10);

    if (req_data->handle != NULL)
    {
        mmi_ucs2_to_asc(status_cmd.handle, req_data->handle);
    }
    else
    {
        status_cmd.handle[0] = '0';
    }

    sprintf(cmd,"%s %s %s",
        status_cmd.cmd_type, 
        status_cmd.para_num,
        status_cmd.handle);
    return strlen(cmd);
}

U16 srv_bt_mapc_adp_gen_cmd_conn_status(char *cmd)
{
    char s_num[3] = {0};
    srv_mapc_adp_map_conn_cmd status_cmd = {0}; 
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]GenConnCMD");

    mapc_adp_itoa(status_cmd.cmd_type,SRV_MAPC_ADP_CMD_CONNECT,10);
    mapc_adp_itoa(status_cmd.para_num,0,10);

    sprintf(cmd,"%s %s",
        status_cmd.cmd_type, 
        status_cmd.para_num);
    return strlen(cmd);
}



U16 srv_bt_mapc_adp_gen_cmd_genaral(char *cmd, srv_mapc_adp_cmd_type cmd_type, void *data)
{
    U16 cmd_len = 0;
    memset(cmd, 0, SRV_MAPC_ADP_MAX_CMD_LENGTH);

    switch (cmd_type)
    {
        case SRV_MAPC_ADP_CMD_SET_FOLDER:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_set_fldr(cmd, (bt_mapc_set_folder_req_struct *)data);
            break;
        }
        case SRV_MAPC_ADP_CMD_GET_LISTING:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_get_listing(cmd, (bt_mapc_get_message_listing_req_struct *)data);
            break;
        }
        case SRV_MAPC_ADP_CMD_GET_MSG:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_get_msg(cmd, (bt_mapc_get_message_req_struct *)data);
            break;
        }
        case SRV_MAPC_ADP_CMD_PUSH_MSG:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_push_msg(cmd, (bt_mapc_push_message_req_struct *)data);
            break;
        }
        case SRV_MAPC_ADP_CMD_SET_STATUS:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_set_status(cmd, (bt_mapc_set_message_status_req_struct *)data);
            break;
        }
        case SRV_MAPC_ADP_CMD_CONNECT:
        {
            cmd_len = srv_bt_mapc_adp_gen_cmd_conn_status(cmd);
            break;
        }
    }
    return cmd_len;
}

void srv_bt_mapc_adp_set_folder_req(bt_mapc_set_folder_req_struct *req_data)
{
    U16 cmd_len = 0;
    MMI_BOOL result = MMI_FALSE;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_FOLDER_SETTING);

    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_SET_FOLDER, req_data);
    free_local_para((local_para_struct *)req_data);
    result = srv_bt_noti_send_cmd_ext(g_mapx_cmd_header, g_mapc_adp_cntx_p->cmd, cmd_len);
    if (!result)
    {       
        bt_mapc_set_folder_cnf_struct msg_p = {0};
        
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]set_folder_false");
        msg_p.result = SRV_BT_MAPC_FAIL;
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_SET_FOLDER](&msg_p);
    }
}

void srv_bt_mapc_adp_get_listing_req(bt_mapc_get_message_listing_req_struct *req_data)
{
    U16 cmd_len = 0;
    MMI_BOOL result = MMI_FALSE;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_LIST_GETTING);

    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_GET_LISTING, req_data);
    free_local_para((local_para_struct *)req_data);
    result = srv_bt_noti_send_cmd_ext(g_mapx_cmd_header, g_mapc_adp_cntx_p->cmd, cmd_len);
    if (!result)
    {
        bt_mapc_get_message_listing_cnf_struct msg_p = {0};
        
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]get_list_false");
        msg_p.result = SRV_BT_MAPC_FAIL;
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_GET_LISTING](&msg_p);
    }
}

void srv_bt_mapc_adp_get_list_size_req(bt_mapc_get_message_listing_size_req_struct *req_data)
{
    bt_mapc_get_message_listing_size_cnf_struct msg_rsp = {0};

    msg_rsp.result = SRV_BT_MAPC_SUCCESS;
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]GetListSize_REQ");
    free_local_para((local_para_struct *)req_data);
    g_mapc_adp_cb[SRV_MAPC_ADP_CMD_GET_LIST_SIZE]((void *)&msg_rsp);
}

void srv_bt_mapc_adp_get_msg_req(bt_mapc_get_message_req_struct *req_data)
{
    U16 cmd_len = 0;
    U8 spp_handle[MAP_MAX_HANDLE_STR_UCS2_LEN + 2];
    MMI_BOOL result = MMI_FALSE;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_MSG_GETTING);
    memset(spp_handle, 0, MAP_MAX_HANDLE_STR_UCS2_LEN + 2);
    app_ucs2_strncpy(spp_handle, req_data->handle, MAP_MAX_HANDLE_STR_UCS2_LEN/2 + 1);
    memset(req_data->handle, 0, MAP_MAX_HANDLE_STR_UCS2_LEN + 2);
    mmi_ucs2_to_asc(req_data->handle, spp_handle);
    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_GET_MSG, req_data);
    free_local_para((local_para_struct *)req_data);
    result = srv_bt_noti_send_cmd_ext(g_mapx_cmd_header, g_mapc_adp_cntx_p->cmd, cmd_len);

    if (!result)
    {
        bt_mapc_get_message_cnf_struct msg_p = {0};
        
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]get_msg_false");
        msg_p.result = SRV_BT_MAPC_FAIL;
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_GET_MSG](&msg_p);
    }
}


void srv_bt_mapc_adp_push_msg_req(bt_mapc_push_message_req_struct *req_data)
{
    U16 cmd_len = 0;
    WCHAR filename[SRV_FMGR_PATH_MAX_LEN] = {0};
    MMI_BOOL result = MMI_FALSE;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_MSG_PUSHING);
    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_PUSH_MSG, req_data);

    result = srv_bt_noti_send_file_with_prefix_command((WCHAR *)req_data->file, 
                                                g_mapd_cmd_header,
                                                g_mapc_adp_cntx_p->cmd,
                                                cmd_len);
    
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]send prefix result:%d",result);
    
    free_local_para((local_para_struct *)req_data);

    if (!result)
    {
        bt_mapc_push_message_cnf_struct msg_p = {0};
        
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]push_msg_false");
        msg_p.result = SRV_BT_MAPC_FAIL;
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_PUSH_MSG](&msg_p);
    }
}

void srv_bt_mapc_adp_map_conn_req()
{
    U16 cmd_len = 0;
    MMI_BOOL result = MMI_FALSE;

    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_CONNECTING);
    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_CONNECT, NULL);

    result = srv_bt_noti_send_cmd_ext(g_mapx_cmd_header, g_mapc_adp_cntx_p->cmd, cmd_len);

    if (!result)
    {      
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]map_conn_false");
    }
}


void srv_bt_mapc_adp_set_status_req(bt_mapc_set_message_status_req_struct *req_data)
{
    U16 cmd_len = 0;
    MMI_BOOL result = MMI_FALSE;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_MSG_STATUS_SETTING);
    cmd_len = srv_bt_mapc_adp_gen_cmd_genaral(g_mapc_adp_cntx_p->cmd, SRV_MAPC_ADP_CMD_SET_STATUS, req_data);
    free_local_para((local_para_struct *)req_data);
    result = srv_bt_noti_send_cmd_ext(g_mapx_cmd_header, g_mapc_adp_cntx_p->cmd, cmd_len);

    if (!result)
    {
        bt_mapc_set_message_status_cnf_struct msg_p = {0};
        
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]set_status_false");
        msg_p.result = SRV_BT_MAPC_FAIL;
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_SET_STATUS](&msg_p);
    }
}

MMI_BOOL srv_bt_mapc_adap_connect_by_app(MapcAdpConnCallback connCallback)
{
    if (!g_mapc_adp_cntx_p->is_spp_connected)
    {
        return MMI_FALSE;
    }
    g_mapc_adp_cntx_p->conn_callback = connCallback;
    srv_bt_mapc_adp_map_conn_req();
    return MMI_TRUE;
}


void srv_bt_mapc_adp_set_folder_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_set_folder_cnf_struct msg_p;
    S32 error_code = 0;

    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]setFolder is_number: %d, error_code:%d", noti_evt->ret_is_num, noti_evt->ret_code);
    if (noti_evt->ret_is_num)
    {
        error_code = noti_evt->ret_code;

        if (error_code == SRV_MAPC_ADP_CMD_SET_FOLDER)
        {
            msg_p.result = SRV_BT_MAPC_SUCCESS;
        }
        else
        {
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_SET_FOLDER](&msg_p);
    }
}

void srv_bt_mapc_adp_get_listing_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_get_message_listing_cnf_struct msg_p = {0};
    S32 error_code = 0;

    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]GetListRsp, Retcode:%d", noti_evt->ret_code);
    if (!noti_evt->ret_is_num)
    {
        if (noti_evt->ret_code == SRV_MAPC_ADP_CMD_GET_LISTING)
        {
            msg_p.result = SRV_BT_MAPC_SUCCESS;
            app_ucs2_strncpy(msg_p.file, noti_evt->user_data, BT_MAP_MAX_TEMP_FILE_NAME_LEN);
        }
        else
        {
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
    }
    else
    {
        msg_p.result = SRV_BT_MAPC_FAIL;
    }
    g_mapc_adp_cb[SRV_MAPC_ADP_CMD_GET_LISTING]((void *)&msg_p);
}

void srv_bt_mapc_adp_get_msg_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_get_message_cnf_struct msg_p = {0};
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    if (!noti_evt->ret_is_num)
    {
        kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]GetMsgRsp, Retcode:%d", noti_evt->ret_code);
        if (noti_evt->ret_code == SRV_MAPC_ADP_CMD_GET_MSG)
        {
            msg_p.result = SRV_BT_MAPC_SUCCESS;
            msg_p.fraction_rsp = BT_MAP_FRACTION_RSP_NO;
            app_ucs2_strncpy(msg_p.file, noti_evt->user_data, BT_MAP_MAX_TEMP_FILE_NAME_LEN);
        }
        else
        {
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
    }
    else
    {
        msg_p.result = SRV_BT_MAPC_FAIL;
    }
    g_mapc_adp_cb[SRV_MAPC_ADP_CMD_GET_MSG]((void *)&msg_p);
}

void srv_bt_mapc_adp_set_status_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_set_message_status_cnf_struct msg_p = {0};
    S32 error_code = 0;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]Set_Status is_number: %d, error_code:%d", noti_evt->ret_is_num,noti_evt->ret_code);
    if (noti_evt->ret_is_num)
    {
        error_code = noti_evt->ret_code;

        if (error_code == SRV_MAPC_ADP_CMD_SET_STATUS)
        {
            msg_p.result = SRV_BT_MAPC_SUCCESS;
        }
        else
        {
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_SET_STATUS](&msg_p);
    }
}

void srv_bt_mapc_adp_push_msg_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_push_message_cnf_struct msg_p = {0};
    S32 error_code = 0;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]pus_msg_rsp is_number: %d, error_code:%d", noti_evt->ret_is_num,noti_evt->ret_code);
    if (noti_evt->ret_is_num)
    {
        error_code = noti_evt->ret_code;

        if (error_code == SRV_MAPC_ADP_CMD_PUSH_MSG)
        {
            msg_p.result = SRV_BT_MAPC_SUCCESS;
        }
        else
        {
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_PUSH_MSG](&msg_p);
    }
}

void srv_bt_mapc_adp_map_conn_rsp(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;    
    S32 error_code = 0;
    bt_mapc_connect_cnf_struct msg_p;
    
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]map_conn_rsp is_number: %d, error_code:%d", noti_evt->ret_is_num,noti_evt->ret_code);

    if (noti_evt->ret_is_num)
    {
        error_code = noti_evt->ret_code;

        if (error_code == SRV_MAPC_ADP_CMD_CONNECT)
        {
            g_mapc_adp_cntx_p->is_map_by_spp_connected = MMI_TRUE;
            msg_p.result = SRV_BT_MAPC_SUCCESS;
        }
        else
        {
            g_mapc_adp_cntx_p->is_map_by_spp_connected = MMI_FALSE;
            msg_p.result = SRV_BT_MAPC_FAIL;
        }
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_CONNECT](&msg_p);
        if (g_mapc_adp_cntx_p->conn_callback)
        {
            g_mapc_adp_cntx_p->conn_callback(g_mapc_adp_cntx_p->is_map_by_spp_connected);
            g_mapc_adp_cntx_p->conn_callback = NULL;
        }
    }
}

void srv_bt_mapc_adp_handle_evt_report(void *data)
{
    srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)data;
    bt_mapc_mns_send_event_ind_struct msg_p = {0};
    S32 error_code = 0;
    U32 size = 0;
    S32 fileHandle;

    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]hadle_evt_report: %d, error_code:%d", noti_evt->ret_is_num,noti_evt->ret_code);
    if (!noti_evt->ret_is_num)
    {        
        app_ucs2_strncpy(msg_p.file,noti_evt->user_data,SRV_BT_MAP_MAX_TEMP_FILE_NAME_LEN);
        if ((fileHandle = FS_Open((WCHAR *)msg_p.file, FS_READ_ONLY)) < 0)
        {
            msg_p.data_size = 0;
        }
        else
        {
            FS_GetFileSize(fileHandle, &size);
            msg_p.data_size = (U16)size;
            FS_Close(fileHandle);
        }
        g_mapc_adp_cb[SRV_MAPC_ADP_CMD_EVENT_REPORT](&msg_p);
    }
}




void srv_bt_mapc_adp_conn_cnf(void *data)
{
    srv_bt_noti_map_connectivity_notify_struct *noti_evt = (srv_bt_noti_map_connectivity_notify_struct *)data;
    bt_mapc_connect_cnf_struct msg_p = {0};

    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]MAP by SPP Connected: %d",noti_evt->is_connected);

    if ((gmap_client_cntx_p->conn_type == SRV_BT_MAPC_CONN_SPP) && (noti_evt->is_connected))
    {
        g_mapc_adp_cntx_p->is_spp_connected = MMI_TRUE;
        g_mapc_adp_cntx_p->is_map_by_spp_connected = MMI_TRUE;
        msg_p.result = BT_MAP_SUCCESS;
        //srv_bt_mapc_adp_map_conn_req();
    }
    else
    {
        msg_p.result = BT_MAP_FAIL;
        g_mapc_adp_cntx_p->is_spp_connected = MMI_FALSE;
        g_mapc_adp_cntx_p->is_map_by_spp_connected = MMI_FALSE;
    }   
    g_mapc_adp_cb[SRV_MAPC_ADP_CMD_CONNECT]((void *)&msg_p);
    
}
void srv_bt_mapc_adp_disconn_cnf(void *data)
{
    srv_bt_noti_map_connectivity_notify_struct *noti_evt = (srv_bt_noti_map_connectivity_notify_struct *)data;
    bt_mapc_disconnect_cnf_struct msg_p = {0};

    msg_p.result = SRV_BT_MAPC_SUCCESS;
    kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]MAP by SPP DisConnected: %d",noti_evt->is_connected);
    MMI_MAPC_ADP_STATE_TRANS(SRV_MAPC_ADP_IDLE);
    if (gmap_client_cntx_p->conn_type == SRV_BT_MAPC_CONN_SPP && g_mapc_adp_cntx_p->is_map_by_spp_connected)
    {
        g_mapc_adp_cntx_p->is_spp_connected = MMI_FALSE;
        g_mapc_adp_cntx_p->is_map_by_spp_connected = MMI_FALSE;
    }   
    g_mapc_adp_cb[SRV_MAPC_ADP_CMD_DISCONNECT]((void *)&msg_p);
}


void srv_bt_mapc_adp_set_callback(MapcAdpCallback callback, srv_mapc_adp_cmd_type cmdType)
{
    if (callback != NULL)
    {
        g_mapc_adp_cb[cmdType] = callback;
    }
}

mmi_ret srv_bt_mapc_adp_event_hdlr(mmi_event_struct *param)
{        
    switch (param->evt_id)
    {
        case EVT_ID_SRV_BT_NOTI_MAP_DISCONNECT_CNF:
        {
            srv_bt_mapc_adp_disconn_cnf(param);
            break;
        }
        case EVT_ID_SRV_BT_NOTI_MAP_CONNECT_CNF:
        {
            srv_bt_mapc_adp_conn_cnf(param);
            break;
        }
        case EVT_ID_SRV_BT_NOTI_MAP_CMD_NOTIFY:
        { 
            srv_bt_noti_map_event_notify_struct *noti_evt = (srv_bt_noti_map_event_notify_struct *)param;
            kal_wap_trace(MOD_MMI_COMMON_APP,TRACE_GROUP_6,"[MAPADP]receive cmd notify,curr_state:%d", g_mapc_adp_cntx_p->adp_state);
            if (noti_evt->ret_code == SRV_MAPC_ADP_CMD_EVENT_REPORT)
            {
                srv_bt_mapc_adp_handle_evt_report(param);
            }
            else if (g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_FOLDER_SETTING)
            {
                srv_bt_mapc_adp_set_folder_rsp(param);
            }
            else if (g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_LIST_GETTING)
            {
                srv_bt_mapc_adp_get_listing_rsp(param);
            }
            else if (g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_MSG_GETTING)
            {
                srv_bt_mapc_adp_get_msg_rsp(param);
            }
            else if (g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_MSG_STATUS_SETTING)
            {
                srv_bt_mapc_adp_set_status_rsp(param);
            }
            else if (g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_MSG_PUSHING)
            {
                srv_bt_mapc_adp_push_msg_rsp(param);
            }
            else if ((g_mapc_adp_cntx_p->adp_state == SRV_MAPC_ADP_CONNECTING))
            {
                srv_bt_mapc_adp_map_conn_rsp(param);
            }
            break;
        }
    }
    return MMI_RET_OK;
}



#endif/*__MMI_BT_MAPC_BY_SPP__*/
