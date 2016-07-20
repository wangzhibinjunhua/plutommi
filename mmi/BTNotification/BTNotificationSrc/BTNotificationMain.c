#include "mmi_features.h"


#if defined(__MMI_BT_NOTIFICATION__) && defined(__MMI_BT_NOTI_SRV__)



#if (defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__))

#include "BTNotificationGprot.h"
#include "BTNotificationProt.h"
#include "mmi_frm_scenario_gprot.h"
#include "mmi_rp_app_btnotification_def.h"
#include "GlobalResDef.h"
#include "mmi_frm_history_gprot.h"
#include "GlobalConstants.h"
#include "MenuCuiGprot.h"
#include "wgui_inline_edit.h"
#include "BTNotiSrvGprot.h"
#include "app_datetime.h"
#include "DateTimeType.h"
#include "mmi_rp_app_sms_def.h"
#include "mmi_rp_app_unifiedmessage_def.h"
#include "Mmi_rp_srv_bt_noti_def.h"
#include "wgui_categories_ems.h"
#include "btmmiscrgprots.h"
#include "mmi_frm_scenario_gprot.h"
#include "wgui_categories_util.h"
#include "wgui_categories_ems.h"
#include "wgui_fixed_menus.h"
#include "wgui_categories_list.h"
#include "wgui_categories_popup.h"
#include "wgui_categories_UCE.h"
#include "Gsm7BitNationalLang.h"
#include "SmsSrvGprot.h"
#include "UcmGprot.h"
#include "CommonScreens.h"
#include "mmi_rp_app_smsbtunifiedmessage_def.h"
#include "SmsBtMapCSrvGprot.h"

#ifndef __MTK_TARGET__
#define SRV_BT_NOTIFY_TEST_FSM
#define SRV_BT_NOTIFY_TEST_WITHOUT_SPP
#endif

mmi_bt_notification_cntx_struct g_mmi_bt_notification_cntx = {0};
mmi_bt_notification_option_struct g_mmi_bt_notification_option = {0};
mmi_bt_notification_cntx_struct* g_mmi_bt_notification_cntx_p;

mmi_ret mmi_bt_notification_block_group_proc(mmi_event_struct *param);
mmi_ret mmi_bt_notification_block_scrn_proc(mmi_event_struct *evt);
void mmi_bt_notification_block(void);
void mmi_bt_notification_sync_time(void);
void mmi_bt_notification_cancel_sync_time(void);
mmi_ret mmi_bt_notification_block_show(mmi_event_struct *evt);
mmi_ret mmi_bt_notification_sync_time_show(mmi_event_struct *evt);


#endif/*defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__)*/

#ifdef __MMI_BT_NOTIFICATION__

void mmi_btnotification_entry_main_message_menu()
{
    mmi_bt_notification_lauch();
}

void mmi_bt_notification_set_show_id(U8 id)
{
    g_mmi_bt_notification_cntx.id = id;
}

void mmi_bt_notification_lauch(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/ 
    g_mmi_bt_notification_cntx_p->total = srv_bt_noti_data_get_msg_num();
    g_mmi_bt_notification_cntx_p->id = 0;
    g_mmi_bt_notification_cntx_p->scrn_type = MMI_BT_NOTIFICATION_SCRN_MAIN;
    g_mmi_bt_notification_cntx_p->grp_id = mmi_frm_group_create_ex(
                                                GRP_ID_ROOT,
                                                GRP_ID_BTNOTIFICATION_APP,
                                                mmi_bt_notification_main_group_proc,
                                                g_mmi_bt_notification_cntx_p,
                                                MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_frm_scrn_create(GRP_ID_BTNOTIFICATION_APP, 
        SCR_ID_BTNOTIFICATION_MAIN_SCRN, 
        mmi_bt_notification_main_scrn_proc,
        g_mmi_bt_notification_cntx_p);
    
}

mmi_ret mmi_bt_notification_main_group_proc (mmi_event_struct *param)
{
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_main_scrn_proc (mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_ACTIVE:
            mmi_bt_notification_main_show(evt);
            break;

        case EVT_ID_SCRN_GOBACK:
            mmi_bt_notification_main_goback(evt);
            break;

        case EVT_ID_SCRN_DEINIT:
            mmi_bt_notification_main_exit(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}

void mmi_bt_notification_highlight()
{
}

mmi_ret mmi_bt_notification_main_show(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_BOOL result;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
      
    g_mmi_bt_notification_cntx_p->total = srv_bt_noti_data_get_msg_num();
    #ifdef __MTK_TARGET__
    if (MMI_FALSE == srv_bt_noti_check_connection())
    {
        mmi_bt_notification_main_show_disconnect();
    }
    else 
    #endif
    if (g_mmi_bt_notification_cntx_p->total == 0)
    { 
        mmi_bt_notification_main_show_empty();
    }
    else
    {
        if (g_mmi_bt_notification_cntx_p->id == g_mmi_bt_notification_cntx_p->total)
        {
            g_mmi_bt_notification_cntx_p->id--;
        }
        else if (g_mmi_bt_notification_cntx_p->id > g_mmi_bt_notification_cntx_p->total)
        {
            g_mmi_bt_notification_cntx_p->id = (g_mmi_bt_notification_cntx_p->total - 1);
        }
        memset(&g_mmi_bt_notification_cntx_p->node, 0, sizeof(srv_bt_noti_data_msg_node_struct));
        srv_bt_noti_data_get_msg_info_ref(g_mmi_bt_notification_cntx_p->id, &g_mmi_bt_notification_cntx_p->node);
        mmi_bt_notification_main_show_category();
    }
    return MMI_RET_OK;
}

void mmi_bt_notification_main_show_category()
{
    U8 *gui_buffer = NULL;
    srv_bt_noti_data_msg_node_struct * node_data;
    WCHAR* number_buffer;  //"9/10"
    U8* icon_buffer;  //type
    WCHAR* text_buffer;   //txt
    applib_time_struct create_time;
    WCHAR  time[40];
    U32 timestamp;
    
    gui_buffer = mmi_frm_scrn_get_active_gui_buf();

    //number
    number_buffer = OslMalloc(sizeof(WCHAR) * 10);
    kal_wsprintf(number_buffer, "%d/%d", 
        g_mmi_bt_notification_cntx_p->id + 1, 
        g_mmi_bt_notification_cntx_p->total);
    set_cat145_show_number((U8*)number_buffer);
    

    node_data = &g_mmi_bt_notification_cntx_p->node;
    MMI_ASSERT(node_data);

    //image
    if (srv_bt_notify_subtype_sms != node_data->header.subtype)
    {
        set_cat145_show_image_file_path((U8*)node_data->icon_file_path);
        //icon
        icon_buffer = (U8*)node_data->sender;  
    }
    else
    {
        set_cat145_show_image_finish();
        icon_buffer = (U8*)GetString(STR_ID_BTNOTIFICATION_APPLICATION_SMS);
    }

    //title + context + ticker_text + time
    text_buffer = (WCHAR*)&g_mmi_bt_notification_cntx_p->category_text_buffer;
    memset(text_buffer, 0, sizeof(WCHAR) * (BT_NOTIFY_CONTENT_LENTH + 100));
    if (srv_bt_notify_subtype_sms != node_data->header.subtype)
    {
        if (node_data->title[0] != 0)
        {
            text_buffer = mmi_wcscpy(text_buffer, (PU16)node_data->title);
            mmi_ucs2cat((PS8) text_buffer, (const PS8) (L"\n"));
        }
        if (node_data->content[0] != 0)
        {
            mmi_ucs2cat((PS8) text_buffer, (const PS8) node_data->content);
            mmi_ucs2cat((PS8) text_buffer, (const PS8) (L"\n"));
        }          
        mmi_ucs2cat((PS8) text_buffer, (const PS8) node_data->ticker_text);
    }
    else
    {
        text_buffer = mmi_wcscpy(text_buffer, (PU16) (GetString(STR_ID_BTNOTIFICATION_APPLICATION_FROM)));   
        mmi_ucs2cat((PS8) text_buffer, (const PS8) (L" "));          
        mmi_ucs2cat((PS8) text_buffer, (const PS8) node_data->sender);    
        mmi_ucs2cat((PS8) text_buffer, (const PS8) (L"\n"));          
        mmi_ucs2cat((PS8) text_buffer, (const PS8) node_data->content);   
        mmi_ucs2cat((PS8) text_buffer, (const PS8) (L"\n"));             
        mmi_ucs2cat((PS8) text_buffer, (const PS8) node_data->ticker_text); 
    }
    mmi_ucs2cat((PS8) text_buffer, (const PS8) (L"\n"));  
    timestamp = applib_dt_sec_utc_to_local(node_data->timestamp); 
    applib_dt_utc_sec_2_mytime(timestamp, &create_time, MMI_FALSE);  
    date_string((MYTIME*) & create_time, time, DT_IDLE_SCREEN);
    mmi_ucs2cat((PS8) text_buffer, (const PS8)time);
    mmi_ucs2cat((PS8) text_buffer, (const PS8) (L" "));
    time_string((MYTIME*) & create_time, time, DT_IDLE_SCREEN);
    mmi_ucs2cat((PS8) text_buffer, (const PS8)time);

    //show category
    ShowBTNotiCategory145Screen(
        (U8*)GetString(STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME),
        0,
        STR_GLOBAL_OPTIONS,
        0,
        STR_GLOBAL_BACK,
        0,
        IMG_MESSAGE_UNREAD,            
        (U8*)icon_buffer,
        (U8*)text_buffer,
        0,
        gui_buffer);

    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    if ( g_mmi_bt_notification_cntx_p->node.header.subtype == srv_bt_notify_subtype_sms)
    {
        MMI_BOOL is_number_valid = MMI_FALSE;
        is_number_valid = srv_sms_btmapc_check_ucs2_number((char *)g_mmi_bt_notification_cntx_p->node.send_number);
        if (!is_number_valid || 
            ((g_mmi_bt_notification_cntx_p->node.send_number[0] == '\0') && 
            (g_mmi_bt_notification_cntx_p->node.send_number[1] == '\0')))
        {
            (g_mmi_bt_notification_cntx_p->option_struct)->is_sender_valid = MMI_FALSE;
        }
        else
        {
            (g_mmi_bt_notification_cntx_p->option_struct)->is_sender_valid = MMI_TRUE;
        }
    }

    SetLeftSoftkeyFunction(mmi_bt_notification_main_show_option, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_notification_main_csk_hdlr, KEY_EVENT_UP);
    SetKeyHandler((FuncPtr)mmi_bt_notification_main_left_key_hdlr, KEY_LEFT_ARROW, KEY_EVENT_UP);
    SetKeyHandler((FuncPtr)mmi_bt_notification_main_right_key_hdlr, KEY_RIGHT_ARROW, KEY_EVENT_UP);
    OslMfree(number_buffer);
}

void mmi_bt_notification_main_show_empty()
{
    S32 list_not_ready;
    U8 *gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    wgui_cat1032_show(
        (WCHAR*)GetString(STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME),
        0,
        0,
        0,
        (WCHAR*)GetString(STR_GLOBAL_BACK),
        0,
        0,
        NULL,
        NULL,
        NULL,
        0,
        0,   
        0,
        gui_buffer,
        &list_not_ready);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
}

void mmi_bt_notification_main_show_disconnect()
{
    S32 list_not_ready;
    U8 *gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    wgui_set_menu_empty_string_by_id(STR_ID_BTNOTIFICATION_APPLICATION_NEED_USER_CONNECT);
    wgui_cat1032_show(
        (WCHAR*)GetString(STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME),
        0,
        0,
        0,
        (WCHAR*)GetString(STR_GLOBAL_BACK),
        0,
        0,
        NULL,
        NULL,
        NULL,
        0,
        0,   
        0,
        gui_buffer,
        &list_not_ready);
    wgui_set_menu_empty_string_by_id(STR_GLOBAL_EMPTY);
    SetLeftSoftkeyFunction(mmi_bt_notification_main_show_connect, KEY_EVENT_UP);
}

void mmi_bt_notification_main_show_connect()
{
    mmi_bt_dialer_show_popup(GRP_ID_BTNOTIFICATION_APP);
}

mmi_ret mmi_bt_notification_main_goback(mmi_event_struct *evt)
{
    return MMI_RET_OK;
}


mmi_ret mmi_bt_notification_main_exit(mmi_event_struct *evt)
{
    set_cat145_show_number_finish();
    return MMI_RET_OK;
}

void mmi_bt_notification_main_show_option(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MMI_ID opt_grp_id;
    MMI_ID option_menu_id;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                 */
    /*----------------------------------------------------------------*/
    opt_grp_id = mmi_frm_group_create(
                            GRP_ID_BTNOTIFICATION_APP, 
                            GRP_ID_AUTO_GEN, 
                            mmi_bt_notification_main_option_proc, 
                            NULL);
    mmi_frm_group_enter(opt_grp_id, MMI_FRM_NODE_SMART_CLOSE_FLAG);

    option_menu_id = cui_menu_create(
                            opt_grp_id, 
                            CUI_MENU_SRC_TYPE_RESOURCE, 
                            CUI_MENU_TYPE_OPTION, 
                            MENU_ID_BTNOTIFICATION_APPLICATION_OPT, 
                            MMI_FALSE, 
                            NULL);    
    cui_menu_set_default_title(option_menu_id,
        (UI_string_type)GetString(STR_GLOBAL_OPTIONS),
        NULL
        );
    cui_menu_run(option_menu_id);
}

mmi_ret mmi_bt_notification_main_option_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt;
    MMI_ID ret = MMI_RET_OK;

    /*----------------------------------------------------------------*/
    /* Code Body                                                 */
    /*----------------------------------------------------------------*/
    menu_evt = (cui_menu_event_struct *)evt;
    switch (menu_evt->evt_id)
    {
        case EVT_ID_CUI_MENU_LIST_ENTRY:
        {
            ret = mmi_bt_notification_main_option_entry(evt);
            break;
        }
        case EVT_ID_CUI_MENU_ITEM_SELECT:
        {
            ret = mmi_bt_notification_main_option_select(evt);
            break;
        }
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            cui_menu_close(menu_evt->sender_id);
            break;
        }
        default:
        {
            break;
        }
    }
    return ret;
}

mmi_ret mmi_bt_notification_main_option_select(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                 */
    /*----------------------------------------------------------------*/
    menu_evt = (cui_menu_event_struct *)evt;
    
    switch (menu_evt->highlighted_menu_id)
    {
        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_REPLY:
            mmi_bt_notification_main_option_reply(evt);
            break;
            
        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_FORWARD:
            mmi_bt_notification_main_option_forward(evt);
            break;
            
        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_CALL:
            mmi_bt_notification_main_option_call(evt);
            break;

        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_BLOCK:
            mmi_bt_notification_main_option_block(evt);
            break;
            
        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_DELETE:
            mmi_bt_notification_main_option_delete(evt);
            break;
            
        case MENU_ID_BTNOTIFICATION_APPLICATION_OPT_EMPTY:
            mmi_bt_notification_main_option_empty(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_main_option_entry(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt;

    /*----------------------------------------------------------------*/
    /* Code Body                                                 */
    /*----------------------------------------------------------------*/
    menu_evt = (cui_menu_event_struct *)evt;

    if (srv_bt_notify_subtype_sms != g_mmi_bt_notification_cntx_p->node.header.subtype)   //////////todo
    {
        cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_REPLY, MMI_TRUE);
        cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_FORWARD, MMI_TRUE);
        cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_CALL, MMI_TRUE);
    }
    else
    {
        if (!(g_mmi_bt_notification_cntx_p->option_struct)->is_sender_valid)
        {
            cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_REPLY, MMI_TRUE);
            cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_CALL, MMI_TRUE);
        }
            
        cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_BLOCK, MMI_TRUE);
    }

    cui_menu_set_item_hidden(menu_evt->sender_id, MENU_ID_BTNOTIFICATION_APPLICATION_OPT_FORWARD, MMI_TRUE);    
    return MMI_RET_OK;
}
static void mmi_bt_notification_menu_cui_entry_hdlr(mmi_event_struct* evt)
{
    cui_menu_event_struct *menu_evt = (cui_menu_event_struct*)evt;

    if(cui_menu_is_menu_event(menu_evt->evt_id))
    {
        wgui_inputs_options_menu_handler((mmi_event_struct*)menu_evt, g_mmi_bt_notification_cntx_p->grp_id);
    }
}

void mmi_bt_notification_entry_processing(void)
{
    
    U16 process_image_id; 
 
    if (mmi_frm_scrn_enter(
            g_mmi_bt_notification_cntx_p->process_grp_id,
            SCR_ID_BTNOTIFICATION_PROCESSING,
            NULL,
            mmi_bt_notification_entry_processing,
            MMI_FRM_FULL_SCRN))
    {
        process_image_id = mmi_get_event_based_image(MMI_EVENT_PROGRESS);
    #ifdef __MMI_SMS_TCARD_STORAGE_SUPPORT__
        mmi_frm_set_curr_scr_blt_mode(MMI_FRM_SCR_BLT_IMMEDIATE);
    #endif

        /*do not set title and title icon, otherwise processing screen will be a full screen*/
        ShowCategory8Screen(
            0,
            0,
            0,
            0,
            g_mmi_bt_notification_cntx_p->process_body_StrId,
            0,
            g_mmi_bt_notification_cntx_p->process_rsk_StrId,
            process_image_id,
            NULL);


        ClearKeyHandler(KEY_END, KEY_EVENT_UP);
        ClearKeyHandler(KEY_END, KEY_EVENT_DOWN);
        ClearKeyHandler(KEY_END, KEY_LONG_PRESS);
        ClearKeyHandler(KEY_END, KEY_REPEAT);
    }
}

void mmi_bt_notification_pre_entry_processing(mmi_id grp_id, U16 bodyStrId, U16 rskStrId)
{
    g_mmi_bt_notification_cntx_p->process_grp_id = grp_id;
    g_mmi_bt_notification_cntx_p->process_body_StrId = bodyStrId;
    g_mmi_bt_notification_cntx_p->process_rsk_StrId = rskStrId;
}

mmi_ret mmi_bt_notification_editor_opt_select_hdlr(mmi_event_struct *menu_evt)
{
    cui_menu_event_struct *cui_menu_evt = (cui_menu_event_struct*)menu_evt;
    MMI_ID curr_grp_id = mmi_frm_group_get_active_id();

    switch (cui_menu_evt->highlighted_menu_id)
    {
		case MENU_ID_BTNOTIFICATION_EDITOR_SEND:
        {	
            MMI_BOOL result;
            
            mmi_bt_notification_pre_entry_processing(g_mmi_bt_notification_cntx_p->grp_id, STR_GLOBAL_SENDING, 0);
			result = srv_bt_noti_data_reply_remote_sms((WCHAR *)g_mmi_bt_notification_cntx_p->option_struct->send_number, (WCHAR *)g_mmi_bt_notification_cntx_p->option_struct->content);
            mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->grp_id, SCR_ID_BTNOTIFICATION_PROCESSING);
            mmi_frm_group_close(g_mmi_bt_notification_cntx_p->grp_id);
            if (result)
            {
                mmi_display_popup((UI_string_type)GetString(STR_GLOBAL_SENT), MMI_EVENT_SUCCESS);
            }
            else
            {
                mmi_display_popup((UI_string_type)GetString(STR_GLOBAL_FAILED), MMI_EVENT_FAILURE);
            }
            break;
        }
    }
    if(cui_menu_is_menu_event(menu_evt->evt_id))
    {
        wgui_inputs_options_menu_handler((mmi_event_struct*)menu_evt, g_mmi_bt_notification_cntx_p->grp_id);
    }
    return MMI_RET_OK;
}


static mmi_ret mmi_bt_notification_send_sms_proc (mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                                                         */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                                                               */
    /*----------------------------------------------------------------*/
	cui_menu_event_struct* menu_evt = (cui_menu_event_struct*)evt;
	switch (menu_evt->evt_id)
	{
		case EVT_ID_CUI_MENU_LIST_ENTRY:
        {
            mmi_bt_notification_menu_cui_entry_hdlr(evt);
            break;
        }
		case EVT_ID_CUI_MENU_ITEM_SELECT:
        {
            mmi_bt_notification_editor_opt_select_hdlr(evt);
            break;
        }
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
        {
            cui_menu_close(menu_evt->sender_id);
            break;
        }
    }
    return MMI_RET_OK;
}

U32 mmi_bt_notification_get_msg_size_callback(wgui_uce_text_info_struct *current_text_info, wgui_uce_msg_type_enum uce_msg_type)
{
    return current_text_info->char_count;
}

wgui_uce_text_change_result_enum mmi_bt_notification_text_change_callback(wgui_uce_text_info_struct *new_text_info)
{
    
    if (new_text_info->UCS2_count > 0)
    {
        if (new_text_info->char_count > (srv_sms_btmapc_get_usable_text_len(SMSAL_UCS2_DCS) / 2))
        {
            return WGUI_UCE_TEXT_CHANGE_NOT_ALLOWED;
        }
    }
    else
    {
        if (new_text_info->char_count + new_text_info->extension_char_count >
            (srv_sms_btmapc_get_usable_text_len(SMSAL_DEFAULT_DCS) / 2))
        {
            return WGUI_UCE_TEXT_CHANGE_NOT_ALLOWED;
        }
    }
    return WGUI_UCE_TEXT_CHANGE_ALLOWED;
}

wgui_uce_display_enum mmi_bt_notification_editor_display_type_callback(void)
{
    return WGUI_UCE_DISPLAY_SIZE;
}

U32 mmi_bt_notification_editor_remaining_char_count(wgui_uce_text_info_struct *current_text_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* Call to do SMS srv internal operations. */
    return (U32) srv_sms_btmapc_get_last_segment_remaining(
                    current_text_info->UCS2_count,
                    current_text_info->char_count,
                    current_text_info->extension_char_count);
}

U32 mmi_bt_notification_editor_segment_count(wgui_uce_text_info_struct *current_text_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 local_value = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    local_value = srv_sms_btmapc_get_sms_segment_number(
                    current_text_info->UCS2_count,
                    current_text_info->char_count,
                    current_text_info->extension_char_count);
    return local_value;
}


void mmi_bt_notification_count_buffer_charactor(const S8 *content_buffer, mmi_7bit_counter_struct *content_text_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_7bit_counter_struct *temp_counter = NULL;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_7bit_counter_init((U8*)content_buffer);
    temp_counter = mmi_7bit_counter_get_info();
    if (content_text_info != NULL)
    {
        memcpy(content_text_info, temp_counter, sizeof(mmi_7bit_counter_struct));
    }
}


void mmi_bt_notification_update_editor_info(CHAR* text_buff)
{
    wgui_uce_text_info_struct editor_text_info;
    mmi_7bit_counter_struct gsm_text_info;
    mmi_bt_notification_count_buffer_charactor(text_buff, &gsm_text_info);
    editor_text_info.char_count = gsm_text_info.gsm_count + gsm_text_info.ucs2_count + gsm_text_info.gsm_ext_count;
    editor_text_info.extension_char_count = gsm_text_info.gsm_ext_count;
    editor_text_info.UCS2_count = gsm_text_info.ucs2_count;
    editor_text_info.utf8_msg_len = 0;
    wgui_uce_set_current_text_info(&editor_text_info);
}

static mmi_ret mmi_bt_notification_editor_scrn_leave_proc(mmi_event_struct *param)
{
    switch (param->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
        {
            g_mmi_bt_notification_cntx_p->is_in_composer = MMI_FALSE;
            if (g_mmi_bt_notification_cntx_p->need_popup)
            {
                if (g_mmi_bt_notification_cntx_p->popup_grp_id != GRP_ID_INVALID)
                    {
                        mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->popup_grp_id, SCR_ID_BTNOTIFICATION_POPUP_SCRN);
                        mmi_frm_group_close(g_mmi_bt_notification_cntx_p->popup_grp_id);
                        g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
                    }
                    mmi_frm_nmgr_notify_by_app(
                        MMI_SCENARIO_ID_BT_NOTIFY,
                        MMI_EVENT_BT_NOTIFY,
                        mmi_bt_notification_popup_entry,
                        &g_mmi_bt_notification_cntx_p->refresh_cntx);
                    g_mmi_bt_notification_cntx_p->need_popup = MMI_FALSE;
            }
            break;
        }

        default:
            break;
    }

    return MMI_RET_OK; 
}

void mmi_bt_notification_editor_rsk_hdlr()
{
    mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->grp_id , SCR_ID_BTNOTIFICATION_EDIT);
}

void mmi_bt_notification_entry_eitor_options(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_id menu_cui_gid;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    menu_cui_gid = cui_menu_create(
                    g_mmi_bt_notification_cntx_p->grp_id,
                    CUI_MENU_SRC_TYPE_RESOURCE,
                    CUI_MENU_TYPE_OPTION,
                    MENU_ID_BTNOTIFICATION_EDITOR_OPT,
                    MMI_FALSE,
                    NULL);

    cui_menu_set_default_title_image_by_id(menu_cui_gid, IMG_SMS_ENTRY_SCRN_CAPTION);

    cui_menu_run(menu_cui_gid);
}

void mmi_bt_notification_sms_send(void)
{
    MMI_BOOL result;
    
    mmi_bt_notification_pre_entry_processing(g_mmi_bt_notification_cntx_p->grp_id, STR_GLOBAL_SENDING, 0);
	result = srv_bt_noti_data_reply_remote_sms((WCHAR *)g_mmi_bt_notification_cntx_p->option_struct->send_number, (WCHAR *)g_mmi_bt_notification_cntx_p->option_struct->content);
    mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->grp_id, SCR_ID_BTNOTIFICATION_PROCESSING);
    mmi_frm_group_close(g_mmi_bt_notification_cntx_p->grp_id);
    if (result)
    {
        mmi_display_popup((UI_string_type)GetString(STR_GLOBAL_SENT), MMI_EVENT_SUCCESS);
    }
    else
    {
        mmi_display_popup((UI_string_type)GetString(STR_GLOBAL_FAILED), MMI_EVENT_FAILURE);
    }
}

void mmi_bt_notification_entry_editor(void)
{
    U8 *gui_buffer = NULL;
    if (mmi_frm_scrn_enter(g_mmi_bt_notification_cntx_p->grp_id, 
        SCR_ID_BTNOTIFICATION_EDIT, 
        NULL, 
        mmi_bt_notification_entry_editor, 
        MMI_FRM_FULL_SCRN))
    {
        gui_buffer = mmi_frm_scrn_get_gui_buf(g_mmi_bt_notification_cntx_p->grp_id, SCR_ID_BTNOTIFICATION_EDIT);

        wgui_uce_initialize_editor(
            (U8 *)(g_mmi_bt_notification_cntx_p->option_struct)->content,
            (MMI_BT_NOTIFICATION_SMS_MAX_NUMBER / ENCODING_LENGTH),
            1,
            1,
            (U8)(MMI_BT_NOTIFICATION_SMS_MAX_NUMBER / ENCODING_LENGTH - 1),
            mmi_bt_notification_get_msg_size_callback,
            mmi_bt_notification_text_change_callback,
            mmi_bt_notification_editor_display_type_callback,
            mmi_bt_notification_editor_remaining_char_count,
            mmi_bt_notification_editor_segment_count,
            NULL,
            NULL);
        
        mmi_bt_notification_update_editor_info((CHAR*)(g_mmi_bt_notification_cntx_p->option_struct)->content);
        ShowCategory280Screen(
            STR_ID_SMS_BT_MESSAGE_MENUENTRY,
            IMG_SMS_ENTRY_SCRN_CAPTION,
            STR_GLOBAL_OPTIONS,
            IMG_SMS_COMMON_NOIMAGE,
            STR_GLOBAL_BACK,
            IMG_SMS_COMMON_NOIMAGE,
            WGUI_UCE_MSG_TYPE_SMS,
            IMM_INPUT_TYPE_SENTENCE,
            NULL,
            NULL,
            gui_buffer);
        
        SetCategory280RightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);

        SetLeftSoftkeyFunction(mmi_bt_notification_entry_eitor_options, KEY_EVENT_UP);

        //TODO:
        SetCenterSoftkeyFunction(mmi_bt_notification_sms_send, KEY_EVENT_UP);
       
    
       
        mmi_frm_scrn_set_leave_proc(
            g_mmi_bt_notification_cntx_p->grp_id,
            SCR_ID_BTNOTIFICATION_EDIT,
            mmi_bt_notification_editor_scrn_leave_proc);
    }
}


void mmi_bt_notification_send_sms(WCHAR *phone_number, WCHAR *content)
{
    memset((g_mmi_bt_notification_cntx_p->option_struct)->send_number, 0, BT_NOTIFY_NUMBER_LENTH * ENCODING_LENGTH + 1);
    memset((g_mmi_bt_notification_cntx_p->option_struct)->content, 0, BT_NOTIFY_SEND_SMS_CONTENT_LENTH * ENCODING_LENGTH + 1);
    if (phone_number != NULL)
    {
        memcpy((g_mmi_bt_notification_cntx_p->option_struct)->send_number, 
            phone_number, 
            mmi_wcslen(phone_number)*ENCODING_LENGTH + 1);
    }
    if (content != NULL)
    {
        memcpy((g_mmi_bt_notification_cntx_p->option_struct)->content, 
            content, 
            mmi_wcslen(content)*ENCODING_LENGTH + 1);
    }
    
    g_mmi_bt_notification_cntx_p->grp_id= mmi_frm_group_create_ex(
                    GRP_ID_ROOT,
                    GRP_ID_BTNOTIFICATION_EDIT,
                    mmi_bt_notification_send_sms_proc,
                    NULL,
                    MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_bt_notification_entry_editor();
    g_mmi_bt_notification_cntx_p->is_in_composer = MMI_TRUE;

}

void mmi_bt_notification_main_option_reply(mmi_event_struct *evt)
{
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_REPLY;
    mmi_bt_notification_send_sms(g_mmi_bt_notification_cntx_p->node.send_number, NULL);
}

void mmi_bt_notification_main_option_forward(mmi_event_struct *evt)
{
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_FORWARD;
}

void mmi_bt_notification_main_option_call(mmi_event_struct *evt)
{
    mmi_ucm_make_call_para_struct param;
    
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_CALL;
    

    if ((g_mmi_bt_notification_cntx_p->node.send_number[0] != '\0') || (g_mmi_bt_notification_cntx_p->node.send_number[1] != '\0'))
    {
        mmi_ucm_init_call_para(&param);
    
        param.dial_type = SRV_UCM_CALL_TYPE_ALL;
        param.ucs2_num_uri = (U16 *)g_mmi_bt_notification_cntx_p->node.send_number;
    
        mmi_ucm_call_launch(0, &param);
    }
    else
    {
        mmi_display_popup(
            (UI_string_type)GetString(STR_GLOBAL_FAILED),
            MMI_EVENT_FAILURE);
    }
}
void mmi_bt_notification_main_option_block(mmi_event_struct *evt)
{
    MMI_ID grp_id;
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_FORWARD;

    grp_id = mmi_frm_group_create_ex(
                    GRP_ID_ROOT,
                    GRP_ID_BTNOTIFICATION_BLOCK,
                    mmi_bt_notification_block_group_proc,
                    NULL,
                    MMI_FRM_NODE_SMART_CLOSE_FLAG);
    
    mmi_frm_scrn_create(grp_id, 
        SCR_ID_BTNOTIFICATION_BLOCK, 
        mmi_bt_notification_block_scrn_proc,
        NULL);
}


void mmi_bt_notification_main_option_delete(mmi_event_struct *evt)
{
    MMI_ID grp_id;
    g_mmi_bt_notification_cntx_p->scrn_type = MMI_BT_NOTIFICATION_SCRN_DELETE;
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_DELETE;
    
    grp_id = mmi_frm_group_create_ex(
                    GRP_ID_ROOT,
                    GRP_ID_BTNOTIFICATION_DELETE,
                    mmi_bt_notification_delete_group_proc,
                    NULL,
                    MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_frm_scrn_create(grp_id, 
        SCR_ID_BTNOTIFICATION_MAIN_DELETE, 
        mmi_bt_notification_delete_scrn_proc,
        NULL);
}

void mmi_bt_notification_main_option_empty(mmi_event_struct *evt)
{
    MMI_ID grp_id;
    g_mmi_bt_notification_cntx_p->scrn_type = MMI_BT_NOTIFICATION_SCRN_DELETE;
    g_mmi_bt_notification_cntx_p->option_struct->id = g_mmi_bt_notification_cntx_p->id;
    g_mmi_bt_notification_cntx_p->option_struct->option_enum = MMI_BT_NOTIFICATION_OPTION_EMPTY;
    grp_id = mmi_frm_group_create_ex(
                    GRP_ID_ROOT,
                    GRP_ID_BTNOTIFICATION_DELETE,
                    mmi_bt_notification_delete_group_proc,
                    NULL,
                    MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_frm_scrn_create(grp_id, 
        SCR_ID_BTNOTIFICATION_MAIN_DELETE, 
        mmi_bt_notification_delete_scrn_proc,
        NULL);
}

void mmi_bt_notification_main_csk_hdlr(void)
{
    if (srv_bt_notify_subtype_sms == g_mmi_bt_notification_cntx_p->node.header.subtype)
    {
        if ((g_mmi_bt_notification_cntx_p->option_struct)->is_sender_valid)
        {
            mmi_bt_notification_main_option_reply(NULL);
        }
        else
        {
            mmi_bt_notification_main_option_delete(NULL);
        }
    }
    else
    {
        mmi_bt_notification_main_option_delete(NULL);
    }
}

void mmi_bt_notification_main_left_key_hdlr()
{   
    if (g_mmi_bt_notification_cntx_p->id > 0)
        g_mmi_bt_notification_cntx_p->id--;
    else
        g_mmi_bt_notification_cntx_p->id = g_mmi_bt_notification_cntx_p->total - 1;
    
    mmi_bt_notification_main_show(NULL);
}

void mmi_bt_notification_main_right_key_hdlr()
{    
    if (g_mmi_bt_notification_cntx_p->id < g_mmi_bt_notification_cntx_p->total - 1)
        g_mmi_bt_notification_cntx_p->id++;
    else
        g_mmi_bt_notification_cntx_p->id = 0;
    
    mmi_bt_notification_main_show(NULL);
}

mmi_ret mmi_bt_notification_block_group_proc(mmi_event_struct *param)
{
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_block_scrn_proc(mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_ACTIVE:
            mmi_bt_notification_block_show(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_sync_time_scrn_proc(mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_ACTIVE:
            mmi_bt_notification_sync_time_show(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}


mmi_ret mmi_bt_notification_delete_group_proc (mmi_event_struct *param)
{
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_delete_scrn_proc (mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_ACTIVE:
            mmi_bt_notification_delete_show(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}


mmi_ret mmi_bt_notification_sync_time_show(mmi_event_struct *evt)
{
    MMI_BOOL result;

    U8 *gui_buffer = NULL;

    gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    ShowCategory165Screen(
        STR_GLOBAL_YES,
        0,
        STR_GLOBAL_NO,
        0,
        (UI_string_type)GetString(STR_ID_BTNOTIFICATION_POPUP_SYNC_TIME),
        IMG_GLOBAL_L1,
        gui_buffer);

    SetLeftSoftkeyFunction(mmi_bt_notification_sync_time, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_notification_sync_time, KEY_EVENT_UP);

    SetRightSoftkeyFunction(mmi_bt_notification_cancel_sync_time, KEY_EVENT_UP);
    SetKeyHandler(mmi_bt_notification_cancel_sync_time,KEY_END,KEY_EVENT_DOWN);

    return MMI_RET_OK;
}


mmi_ret mmi_bt_notification_block_show(mmi_event_struct *evt)
{
    MMI_BOOL result;
    mmi_id str_id;
    WCHAR* pop_str, *str;
   
    U8 *gui_buffer = NULL;

    gui_buffer = mmi_frm_scrn_get_active_gui_buf();

    str_id = STR_ID_BTNOTIFICATION_APPLICATION_BLOCK_NOTIFY;
    str = (WCHAR *)GetString(str_id);
    pop_str = (WCHAR *)OslMalloc((mmi_wcslen(str) + BT_NOTIFY_SENDER_LENTH + 2 + 1) * ENCODING_LENGTH);// 2 is '\n' and '?'
    memcpy (pop_str, str, (mmi_wcslen(str) + 1) * ENCODING_LENGTH);
    mmi_wcscat(pop_str, L"\n");
    mmi_wcscat(pop_str, g_mmi_bt_notification_cntx_p->node.sender);
    mmi_wcscat(pop_str, L"?");
    ShowCategory165Screen(
        STR_GLOBAL_YES,
        0,
        STR_GLOBAL_NO,
        0,
        pop_str,
        IMG_GLOBAL_L1,
        gui_buffer);

    SetLeftSoftkeyFunction(mmi_bt_notification_block, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_bt_notification_block, KEY_EVENT_UP);

    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    OslMfree(pop_str);

    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_delete_show(mmi_event_struct *evt)
{
    MMI_BOOL result;
    mmi_id str_id;

    U8 *gui_buffer = NULL;

    gui_buffer = mmi_frm_scrn_get_active_gui_buf();

    if (MMI_BT_NOTIFICATION_OPTION_DELETE == g_mmi_bt_notification_cntx_p->option_struct->option_enum)
        str_id = STR_ID_BTNOTIFICATION_APPLICATION_DELETE_MATRX;
    else
        str_id = STR_ID_BTNOTIFICATION_APPLICATION_EMPTY_MATRX;

    ShowCategory165Screen(
        STR_GLOBAL_YES,
        0,
        STR_GLOBAL_NO,
        0,
        (UI_string_type) GetString(str_id),
        IMG_GLOBAL_L1,
        gui_buffer);
    

    if (MMI_BT_NOTIFICATION_OPTION_DELETE == g_mmi_bt_notification_cntx_p->option_struct->option_enum)
    {
        SetLeftSoftkeyFunction(mmi_bt_notification_delete, KEY_EVENT_UP);
        SetCenterSoftkeyFunction(mmi_bt_notification_delete, KEY_EVENT_UP);
    }
    else
    {
        SetLeftSoftkeyFunction(mmi_bt_notification_empty, KEY_EVENT_UP);
        SetCenterSoftkeyFunction(mmi_bt_notification_empty, KEY_EVENT_UP);
    }
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    return MMI_RET_OK;
}


void mmi_bt_notification_block(void)
{
    MMI_BOOL result = MMI_TRUE;
    
    result = srv_bt_noti_data_block_remote_notification(g_mmi_bt_notification_cntx_p->node.app_id);
    if (result)
    {
        mmi_display_popup(
            (UI_string_type)GetString(STR_ID_BTNOTIFICATION_POPUP_BLOCKED),
            MMI_EVENT_SUCCESS);
    }
    else
    {
        mmi_display_popup(
            (UI_string_type)GetString(STR_GLOBAL_FAILED),
            MMI_EVENT_FAILURE);
    }
    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_BLOCK, 
                SCR_ID_BTNOTIFICATION_BLOCK);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_BLOCK);
}

void mmi_bt_notification_sync_time()
{
    srv_bt_noti_sync_event_struct *sync_time = &g_mmi_bt_notification_cntx_p->sync_time_cntx;
    sync_time->call_back(sync_time->time, sync_time->time_zone, MMI_TRUE);

    mmi_display_popup(
            (UI_string_type)GetString(STR_ID_BTNOTIFICATION_POPUP_SYNCED),
            MMI_EVENT_SUCCESS);

    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_BLOCK, 
                SCR_ID_BTNOTIFICATION_BLOCK);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_BLOCK);
}

void mmi_bt_notification_cancel_sync_time()
{
    srv_bt_noti_sync_event_struct *sync_time = &g_mmi_bt_notification_cntx_p->sync_time_cntx;
    sync_time->call_back(sync_time->time, sync_time->time_zone, MMI_FALSE);

    mmi_frm_scrn_close_active_id();
}

void mmi_bt_notification_delete(void)
{   
    srv_bt_noti_data_delete_msg(g_mmi_bt_notification_cntx_p->id);         
        
    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_DELETE, 
                SCR_ID_BTNOTIFICATION_MAIN_DELETE);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_DELETE);
}

void mmi_bt_notification_empty(void)
{   
    srv_bt_noti_data_delete_all();
    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_DELETE, 
                SCR_ID_BTNOTIFICATION_MAIN_DELETE);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_DELETE);
}


///////
//show pupop

MMI_BOOL mmi_bt_notification_popup_entry(mmi_scenario_id id, void *para)
{         
    g_mmi_bt_notification_cntx_p->popup_grp_id = mmi_frm_group_create_ex(
            GRP_ID_ROOT,
            GRP_ID_AUTO_GEN,
            mmi_bt_notification_popup_group_proc,
            NULL,
            MMI_FRM_NODE_SMART_CLOSE_FLAG);

    mmi_frm_scrn_create(g_mmi_bt_notification_cntx_p->popup_grp_id, 
        SCR_ID_BTNOTIFICATION_POPUP_SCRN, 
        mmi_bt_notification_popup_scrn_proc,
        NULL);

    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_popup_group_proc (mmi_event_struct *param)
{
    switch(param->evt_id)
    {
        case EVT_ID_GROUP_DEINIT:
        {
            g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
            break;
        }
    }
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_popup_scrn_proc (mmi_event_struct *evt)
{
    switch(evt->evt_id)
    {
        case EVT_ID_SCRN_ACTIVE:
            mmi_bt_notification_popup_show(evt);
            break;
            
        default:
            break;
    }
    return MMI_RET_OK;
}

mmi_ret mmi_bt_notification_popup_show(mmi_event_struct *evt)
{       
    MMI_BOOL result;    

    srv_bt_noti_data_msg_node_struct * data_node;
    applib_time_struct create_time;
    WCHAR  time[20];
    WCHAR* timestamp_buffer;
    WCHAR* sms_title_buffer;
    U32 timestamp; 
    WCHAR* text_buffer;
    
    memset(&g_mmi_bt_notification_cntx_p->node, 0, sizeof(srv_bt_noti_data_msg_node_struct));
    if(!srv_bt_noti_data_get_msg_info_ref(0, &g_mmi_bt_notification_cntx_p->node))
    {
        if (g_mmi_bt_notification_cntx_p->popup_grp_id != GRP_ID_INVALID)
        {
            mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->popup_grp_id, SCR_ID_BTNOTIFICATION_POPUP_SCRN);
            mmi_frm_group_close(g_mmi_bt_notification_cntx_p->popup_grp_id);
            g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
        }
        return MMI_RET_OK;
    }
    data_node = &g_mmi_bt_notification_cntx_p->node;        
    text_buffer = (WCHAR*)&g_mmi_bt_notification_cntx_p->category_text_buffer;
    memset(text_buffer, 0, sizeof(WCHAR) * (BT_NOTIFY_CONTENT_LENTH + BT_NOTIFY_TICKER_TEXT_LENTH + 2));
    if (data_node->content[0] != 0)
    {
        mmi_ucs2cat((PS8) text_buffer, (const PS8) data_node->content);          
    }
    mmi_ucs2cat((PS8) text_buffer, (const PS8) data_node->ticker_text); 

    //timestamp
    timestamp_buffer = OslMalloc(sizeof(WCHAR) * 60);
    memset(timestamp_buffer, 0, sizeof(WCHAR) * 60);
    timestamp = applib_dt_sec_utc_to_local(data_node->timestamp); 
    applib_dt_utc_sec_2_mytime(timestamp, &create_time, MMI_FALSE); 
    date_string((MYTIME*) & create_time, (UI_string_type)time, DT_IDLE_SCREEN);
    mmi_ucs2cat((PS8) timestamp_buffer, (const PS8) time);
    mmi_ucs2cat((PS8) timestamp_buffer, (const PS8) (L" "));
    time_string((MYTIME*) & create_time, (UI_string_type)time, DT_IDLE_SCREEN);
    mmi_ucs2cat((PS8)timestamp_buffer, (const PS8)time);

    //show category
    if (srv_bt_notify_subtype_sms == data_node->header.subtype)
    {            
        sms_title_buffer = OslMalloc(sizeof(WCHAR) * (100)); 
        memset(sms_title_buffer, 0, sizeof(WCHAR) * (100));    
        sms_title_buffer = mmi_wcscpy(sms_title_buffer, (WCHAR*)GetString(STR_ID_BTNOTIFICATION_APPLICATION_FROM));  
        mmi_ucs2cat((PS8)sms_title_buffer, (const PS8)(L" "));   
        mmi_ucs2cat((PS8)sms_title_buffer, (const PS8)data_node->sender); 
        wgui_showcategory632_screen(
            (UI_string_type)GetString(STR_ID_BTNOTIFICATION_APPLICATION_SMS),
            (UI_string_type)sms_title_buffer,
            (UI_string_type)GetString(STR_GLOBAL_VIEW),
            (UI_string_type)GetString(STR_GLOBAL_CANCEL),            
            (UI_string_type)text_buffer,
            (UI_string_type)timestamp_buffer);
        OslMfree(sms_title_buffer);
    }
    else
    {
        if (data_node->title != NULL)
        {
            wgui_showcategory632_screen(
                (UI_string_type)data_node->sender,
                (UI_string_type)data_node->title,
                (UI_string_type)GetString(STR_GLOBAL_VIEW),
                (UI_string_type)GetString(STR_GLOBAL_CANCEL),
                (UI_string_type)text_buffer,
                (UI_string_type)timestamp_buffer);
        }
        else
        {
            wgui_showcategory632_screen(
                (UI_string_type)data_node->sender,
                 NULL,
                (UI_string_type)GetString(STR_GLOBAL_VIEW),
                (UI_string_type)GetString(STR_GLOBAL_CANCEL),            
                (UI_string_type)text_buffer,
                (UI_string_type)timestamp_buffer);
        }
    }
    
    OslMfree(timestamp_buffer);
    show_softkey_background();
    show_left_softkey();
    show_right_softkey();
    SetLeftSoftkeyFunction((FuncPtr)mmi_bt_notification_popup_view, KEY_EVENT_UP);
    SetRightSoftkeyFunction((FuncPtr)mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction((FuncPtr)mmi_bt_notification_popup_view, KEY_EVENT_UP);
    return MMI_RET_OK;
}

void mmi_bt_notification_popup_view()
{        
    mmi_bt_notification_popup_launch_app();
    mmi_frm_scrn_close(
        g_mmi_bt_notification_cntx_p->popup_grp_id, 
        SCR_ID_BTNOTIFICATION_POPUP_SCRN);
    mmi_frm_group_close(g_mmi_bt_notification_cntx_p->popup_grp_id);
    g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
}

void mmi_bt_notification_popup_launch_app()
{
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_APP);
    mmi_bt_notification_lauch();
}

#endif /* __MMI_BT_NOTIFICATION__ */

#if (defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__))

void mmi_bt_notification_init()   // add in bootup
{
    g_mmi_bt_notification_cntx.id = 0;
    g_mmi_bt_notification_cntx.total = srv_bt_noti_data_get_msg_num();
    g_mmi_bt_notification_cntx_p = &g_mmi_bt_notification_cntx;
    g_mmi_bt_notification_cntx_p->option_struct = &g_mmi_bt_notification_option;
#ifdef SRV_BT_NOTIFY_TEST_WITHOUT_SPP
    srv_bt_noti_recv_receive_data_test_without_spp();
#endif
}


mmi_ret mmi_bt_notification_event_hdlr(mmi_event_struct *evt)
{ 
	#ifdef __MMI_BT_NOTIFICATION__
    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_DELETE, SCR_ID_BTNOTIFICATION_MAIN_DELETE);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_DELETE);
    mmi_frm_scrn_close(GRP_ID_BTNOTIFICATION_BLOCK, SCR_ID_BTNOTIFICATION_BLOCK);
    mmi_frm_group_close(GRP_ID_BTNOTIFICATION_BLOCK);
    switch (evt->evt_id)
    {
        case EVT_ID_SRV_BT_NOTI_REFRESH:
        {
            srv_bt_noti_refresh_evt_struct* refresh_evt = (srv_bt_noti_refresh_evt_struct*)evt; 
            if (SRV_BT_NOTIFY_REFRESH_NEW != refresh_evt->refresh_type)
            {        
                g_mmi_bt_notification_cntx_p->total = srv_bt_noti_data_get_msg_num();
                if (0 == g_mmi_bt_notification_cntx_p->total)
                {
                    mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->popup_grp_id, SCR_ID_BTNOTIFICATION_POPUP_SCRN);
                    mmi_frm_group_close(g_mmi_bt_notification_cntx_p->popup_grp_id);
                    mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->grp_id, SCR_ID_BTNOTIFICATION_EDIT);
                    g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
                }

                if (mmi_frm_scrn_get_active_id() == SCR_ID_BTNOTIFICATION_MAIN_SCRN ||
                    mmi_frm_scrn_get_active_id() == SCR_ID_BTNOTIFICATION_MAIN_DELETE ||
                    mmi_frm_scrn_get_active_id() == SCR_ID_BTNOTIFICATION_BLOCK)
                {
                    mmi_bt_notification_main_show(NULL);   
                }
            }
            else
            {
                if (!g_mmi_bt_notification_cntx_p->is_in_composer)
                {
                    if (g_mmi_bt_notification_cntx_p->popup_grp_id != GRP_ID_INVALID)
                    {
                        mmi_frm_scrn_close(g_mmi_bt_notification_cntx_p->popup_grp_id, SCR_ID_BTNOTIFICATION_POPUP_SCRN);
                        mmi_frm_group_close(g_mmi_bt_notification_cntx_p->popup_grp_id);
                        g_mmi_bt_notification_cntx_p->popup_grp_id = GRP_ID_INVALID;
                    }
                    mmi_frm_nmgr_notify_by_app(
                        MMI_SCENARIO_ID_BT_NOTIFY,
                        MMI_EVENT_BT_NOTIFY,
                        mmi_bt_notification_popup_entry,
                        NULL);                  
                    g_mmi_bt_notification_cntx_p->need_popup = MMI_FALSE;
                }
                else
                {
                    memcpy(&g_mmi_bt_notification_cntx_p->refresh_cntx, refresh_evt, sizeof(srv_bt_noti_refresh_evt_struct));
                    g_mmi_bt_notification_cntx_p->need_popup = MMI_TRUE;
                }
            }
            break;
        }
        case EVT_ID_SRV_BT_NOTI_SYNC_DEV:
        {
            srv_bt_noti_sync_event_struct* sync_evt = (srv_bt_noti_sync_event_struct*)evt;
            
            MMI_ID grp_id;

            memcpy(&g_mmi_bt_notification_cntx_p->sync_time_cntx, sync_evt, sizeof(srv_bt_noti_sync_event_struct));

	        grp_id = mmi_frm_group_create_ex(
	                    GRP_ID_ROOT,
	                    GRP_ID_BTNOTIFICATION_BLOCK,
	                    mmi_bt_notification_block_group_proc,
	                    NULL,
	                    MMI_FRM_NODE_SMART_CLOSE_FLAG);
    
    	    mmi_frm_scrn_create(grp_id, 
    	        SCR_ID_BTNOTIFICATION_BLOCK, 
    	        mmi_bt_notification_sync_time_scrn_proc,
    	        sync_evt);
                
                break;
        }
        default:
        {
            return MMI_RET_OK;
        }
    }
	#elif defined(__MMI_BT_NOTI_SRV__)
	switch(evt->evt_id)
	{
		case EVT_ID_SRV_BT_NOTI_SYNC_DEV:
		{
			srv_bt_noti_sync_event_struct* sync_evt = (srv_bt_noti_sync_event_struct*)evt;
			srv_bt_noti_sync_event_struct *sync_time = &g_mmi_bt_notification_cntx_p->sync_time_cntx;
			
			memcpy(&g_mmi_bt_notification_cntx_p->sync_time_cntx, sync_evt, sizeof(srv_bt_noti_sync_event_struct));
			
		    sync_time->call_back(sync_time->time, sync_time->time_zone, MMI_FALSE);
			break;
		}
	}
	
	#endif/*__MMI_BT_NOTI_SRV__*/
    return MMI_RET_OK;
}

#endif/*defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__)*/


#endif/*defined(__MMI_BT_NOTIFICATION__) && defined (__MMI_BT_NOTI_SRV__)*/



