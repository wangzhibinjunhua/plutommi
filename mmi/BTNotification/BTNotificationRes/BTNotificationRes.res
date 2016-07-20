/* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"

#if (defined(__MMI_BT_NOTIFICATION__) || defined (__MMI_BT_NOTI_SRV__))
#include "custresdef.h"
#include "CustomCfg.h"

/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

/* APP tag, include your app name defined in MMIDataType.h */
<APP id="APP_BTNOTIFICATION">

	package_name="native.mtk.btnotification"
    name="STR_ID_UM_MAIN_MENU_BTNOTIFICATION_TEXT"
    launch="mmi_btnotification_entry_main_message_menu"
    package_proc="mmi_btnotification_package_proc"
	
    <!-- 
    ***************************************************************
    Include Area
    ***************************************************************
    -->
    <INCLUDE file="mmi_rp_app_mainmenu_def.h"/>
    <INCLUDE file="GlobalResDef.h"/>
    <INCLUDE file="MainMenuDef.h"/>
    <INCLUDE file="mmi_rp_srv_editor_def.h"/>
    
    <!-- 
    ***************************************************************
    string Area
    ***************************************************************
    -->  
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_REPLY"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_FORWARD"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_CALL"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_DELETE"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_BLOCK"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_EMPTY"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_DELETE_MATRX"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_EMPTY_MATRX"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_BLOCK_NOTIFY"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_FROM"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_DISCONNECT"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_SMS"/>
    <STRING id="STR_ID_BTNOTIFICATION_APPLICATION_NEED_USER_CONNECT"/>
    
    
    <STRING id="STR_ID_BTNOTIFICATION_EDITOR_SNED"/>
    <STRING id="STR_ID_BTNOTIFICATION_EDITOR_INPUT_METHOD"/>
    <STRING id="STR_ID_BTNOTIFICATION_EDITOR_SET_CSTAR"/>
    
    <STRING id="STR_ID_BTNOTIFICATION_POPUP_BLOCKED"/>
    <STRING id="STR_ID_BTNOTIFICATION_POPUP_SYNC_TIME"/>
    <STRING id="STR_ID_BTNOTIFICATION_POPUP_SYNCED"/>
    
    
    <!-- 
    ***************************************************************
    image Area
    ***************************************************************
    --> 
    <IMAGE id="IMG_BTNOTIFICATON_MAIN_MENU_ICON">CUST_IMG_PATH"\\\\MainLCD\\\\NCenter\\\\icons\\\\icon_msg_unread.png"</IMAGE>

    <!-- 
    ***************************************************************
    MENU Area
    ***************************************************************
    -->  
    #ifdef __MMI_BT_NOTIFICATION__
    <MENU id="MAIN_MENU_BTNOTIFICATION_MENUID" type="APP_MAIN" str="STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME" img="IMG_BTNOTIFICATON_MAIN_MENU_ICON"
        highlight="highlight_mainmenu_btnotification" shortcut="ON" shortcut_img="MAIN_MENU_BTNOTIFICATION_ICON" launch="mmi_bt_notification_lauch">    	
    </MENU>
        
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION" type="APP_MAIN" str="STR_ID_BTNOTIFICATION_APPLICATION_APP_NAME"
    	parent="MAIN_MENU_ORGANIZER_MENUID" highlight="highlight_mainmenu_btnotification" launch="mmi_bt_notification_lauch">
    </MENU>    
    
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT" type="OPTION" str="STR_GLOBAL_OPTIONS" img="IMG_GLOBAL_OPTIONS">
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_REPLY</MENUITEM_ID>
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_CALL</MENUITEM_ID>
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_FORWARD</MENUITEM_ID>                                   
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_DELETE</MENUITEM_ID>
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_BLOCK</MENUITEM_ID>
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_APPLICATION_OPT_EMPTY</MENUITEM_ID>
    </MENU>
    
    <MENU id="MENU_ID_BTNOTIFICATION_EDITOR_OPT" type="OPTION" str="STR_GLOBAL_OPTIONS" img="IMG_GLOBAL_OPTIONS">
                                    <MENUITEM_ID>MENU_ID_BTNOTIFICATION_EDITOR_SEND</MENUITEM_ID>
                                    <MENUSET_ID>MENU_SET_EDITOR_OPT</MENUSET_ID>
    </MENU>   
    
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_REPLY" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_REPLY"> </MENU>
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_FORWARD" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_FORWARD"> </MENU>
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_CALL" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_CALL"> </MENU>
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_DELETE" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_DELETE"> </MENU>
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_BLOCK" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_BLOCK"> </MENU>
    <MENU id="MENU_ID_BTNOTIFICATION_APPLICATION_OPT_EMPTY" type="OPTION" str="STR_ID_BTNOTIFICATION_APPLICATION_OPTION_EMPTY"> </MENU>
    
    <MENU id="MENU_ID_BTNOTIFICATION_EDITOR_SEND" type="OPTION" str="STR_ID_BTNOTIFICATION_EDITOR_SNED"> </MENU>
    #endif/*__MMI_BT_NOTIFICATION__*/
    <!-- 
    ***************************************************************
    SCREEN Area
    ***************************************************************
    -->  
    <SCREEN id="GRP_ID_BTNOTIFICATION_APP"/>
    <SCREEN id="GRP_ID_BTNOTIFICATION_DELETE"/>
    <SCREEN id="GRP_ID_BTNOTIFICATION_POPUP"/>
    <SCREEN id="GRP_ID_BTNOTIFICATION_EDIT"/>
    <SCREEN id="GRP_ID_BTNOTIFICATION_BLOCK"/>
    
    <SCREEN id="SCR_ID_BTNOTIFICATION_MAIN_SCRN"/>
    <SCREEN id="SCR_ID_BTNOTIFICATION_POPUP_SCRN"/>
    <SCREEN id="SCR_ID_BTNOTIFICATION_MAIN_DELETE"/>
    <SCREEN id="SCR_ID_BTNOTIFICATION_EDIT"/>
    <SCREEN id="SCR_ID_BTNOTIFICATION_PROCESSING"/>
    <SCREEN id="SCR_ID_BTNOTIFICATION_BLOCK"/>
    
    
    <!-- 
    ***************************************************************
    event Area
    ***************************************************************
    -->
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_REFRESH" proc="mmi_bt_notification_event_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_SYNC_DEV" proc="mmi_bt_notification_event_hdlr"/>
   
 </APP>

#endif /* __MMI_BT_NOTIFICATION__ */