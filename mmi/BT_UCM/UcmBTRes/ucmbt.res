/* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"
#include "custresdef.h"
#include "CustomCfg.h"

/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

/* APP tag, include your app name defined in MMIDataType.h */
<APP id="APP_UCMBT">

    <!-- 
    ***************************************************************
    Include Area
    ***************************************************************
    -->
    <INCLUDE file="GlobalResDef.h"/>
    //<INCLUDE file="mmi_rp_app_ucm_def.h"/>
    <INCLUDE file="mmi_rp_app_ucmbt_def.h"/>

    <INCLUDE file="ConnectivityResDef.h"/>

    <INCLUDE file="mmi_rp_srv_editor_def.h"/> 

    <INCLUDE file="mmi_rp_app_mainmenu_def.h"/> 

    <!-- 
    ***************************************************************
    Callback mgnt Area
    ***************************************************************
    -->

    <!-- 
    ***************************************************************
    NVRAM Area
    ***************************************************************
    -->

    <!-- 
    ***************************************************************
    TIMER Area
    ***************************************************************
    -->

    <TIMER id="UCM_NOTIFY_DURATION_TIMER_BT"/>
    <TIMER id="UCM_TONE_AFTER_VIBRATION_BT"/>
    <TIMER id="UCM_MO_PROCESSING_TIMER_BT"/>
#ifdef __MMI_FTE_SUPPORT__
    <TIMER id="UCM_FTE_AUTO_LOCK_TIMER_ID_BT"/>
#endif

	  <!-- 
	  ***************************************************************
	  Callback mgnt Area
	  ***************************************************************
	  -->
#ifdef __MMI_BT_DIALER_SUPPORT__
    <EVENT id="EVT_ID_UCM_BT_CALL_END" type="SENDER"/>
    <RECEIVER id="EVT_ID_DIALER_EVENT_ID" proc="mmi_ucm_init_bt"/>
    <RECEIVER id="EVT_ID_BT_DIALER_DISCONN_EVENT_ID" proc="mmi_ucm_bt_deint"/>
    <RECEIVER id="EVT_ID_PRE_KEY_EVT_ROUTING" proc="mmi_ucm_bk_call_key_proc_bt"/>
	<RECEIVER id="EVT_ID_GPIO_EXT_DEV_KEY_1" proc="mmi_ucm_headset_key_hdlr_bt"/>
#endif
    <!-- 
    ***************************************************************
    STRING Area
    ***************************************************************
    -->

    <STRING id="STR_ID_UCM_BT_CALLING"/>
    <STRING id="STR_ID_UCM_BT_REJECT"/>
    <STRING id="STR_ID_UCM_VOICE_INCOMING"/>
    <STRING id="STR_ID_UCM_BT_ANSWER"/>
    <STRING id="STR_ID_UCM_BT_NOT_ALLOW_TO_HOLD"/>
    <STRING id="STR_ID_UCM_BT_NOT_ALLOW_TO_SWAP"/>
    <STRING id="STR_ID_UCM_BT_HOLD"/>
    <STRING id="STR_ID_UCM_BT_RETRIEVE"/>
    <STRING id="STR_ID_UCM_BT_SWAP"/>
    <STRING id="STR_ID_UCM_BT_END_SINGLE"/>
    <STRING id="STR_ID_UCM_BT_END_ALL"/>
    <STRING id="STR_ID_UCM_BT_END_CALL"/>
    <STRING id="STR_ID_UCM_BT_PHONEBOOK"/>
    <STRING id="STR_ID_UCM_BT_MUTE"/>
    <STRING id="STR_ID_UCM_BT_UNMUTE"/>
    <STRING id="STR_ID_UCM_BT_HAND_HELD"/>
    <STRING id="STR_ID_UCM_BT_HAND_FREE"/>
    <STRING id="STR_ID_UCM_BT_ACTIVE"/>
    <STRING id="STR_ID_UCM_BT_PAIRED_HOLD"/>
    <STRING id="STR_ID_UCM_BT_END_ALL_ACTIVE"/>
    <STRING id="STR_ID_UCM_BT_END_ALL_HELD"/>
    <STRING id="STR_ID_UCM_BT_CALL_ENDED"/>
    <STRING id="STR_ID_UCM_BT_PROCESSING"/>
    <STRING id="STR_ID_UCM_EMERGENCY_CALLS_ONLY"/>
    <STRING id="STR_ID_UCM_BT_CALL_WILL_BE_ENDED"/>
    <STRING id="STR_ID_UCM_BT_DTMF"/>
    <STRING id="STR_ID_UCM_BT_SWITCH_AUDIO_PATH"/>

#ifdef __MMI_UCM_BT_CALL_RECORDER__
	<STRING id="STR_ID_UCM_BT_CALL_RECODE"/>
	<STRING id="STR_ID_UCM_BT_CALL_UNRECODE"/>
	<STRING id="STR_ID_UCM_RECORDING"/>
#endif /*__MMI_UCM_BT_CALL_RECORDER__*/
#ifndef __MMI_TELEPHONY_SUPPORT__
#ifdef __MMI_FTE_SUPPORT__
    <STRING id="STR_ID_UCM_TOUCH_TO_UNLOCK"/>
#endif /* __MMI_FTE_SUPPORT__ */
#endif
    <!-- 
    ***************************************************************
    IMAGE Area
    ***************************************************************
    -->
 
#if defined (__MMI_BT_DIALER_SUPPORT__)

#if defined (__MMI_FTE_SUPPORT__)
    <IMAGE id="IMG_ID_UCM_BT_OUTGOING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Connect\\\\BT_NET.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_BT_INCOMING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Connect\\\\BT_NET.png"</IMAGE>
#elif defined (__MMI_MAINLCD_128X128__)
    <IMAGE id="IMG_ID_UCM_BT_OUTGOING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Connect\\\\BT_NET.jpg"</IMAGE>
    <IMAGE id="IMG_ID_UCM_BT_INCOMING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Incoming\\\\BT_INCOM.jpg"</IMAGE>
#else
    <IMAGE id="IMG_ID_UCM_BT_OUTGOING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Connect\\\\BT_NET.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_BT_INCOMING">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Connect\\\\BT_NET.png"</IMAGE>
#endif /* __MMI_FTE_SUPPORT__ */
#ifndef __MMI_TELEPHONY_SUPPORT__
#ifdef  __FTE_NON_SLIM_RES__
    <IMAGE id="IMG_ID_UCM_CALL_STATE_ACTIVE">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Outgoing\\\\CL_ACT.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_CALL_STATE_HOLD">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Outgoing\\\\CL_HOLD.png"</IMAGE>
#else
    <IMAGE id="IMG_ID_UCM_CALL_STATE_ACTIVE">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Outgoing\\\\CL_ACT.bmp"</IMAGE>
    <IMAGE id="IMG_ID_UCM_CALL_STATE_HOLD">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Outgoing\\\\CL_HOLD.bmp"</IMAGE>
#endif /* __FTE_NON_SLIM_RES__ */
#ifdef __MMI_BTD_BOX_UI_STYLE__
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_UP">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock_down.png"</IMAGE>
#elif defined (__SLIM_UCM__)
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_UP">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock_s.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock_down_s.png"</IMAGE>
#else
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_UP">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock.png"</IMAGE>
    <IMAGE id="IMG_ID_UCM_LOCK_ICON_DOWN">CUST_IMG_PATH"\\\\MainLCD\\\\Call\\\\Lock\\\\CL_lock_down.png"</IMAGE>
#endif /* __SLIM_UCM__ */
#endif /* __MMI_TELEPHONY_SUPPORT__ */

#endif /* __MMI_BT_DIALER_SUPPORT__ */

    <!-- 
    ***************************************************************
    SCREEN Area
    ***************************************************************
    -->
    <SCREEN id="GRP_ID_UCM_BT_PRE_MO"/>
    <SCREEN id="GRP_ID_UCM_BT_MO"/>
    <SCREEN id="GRP_ID_UCM_BT_MT"/>
    <SCREEN id="GRP_ID_UCM_BT_INCALL"/>
    <SCREEN id="GRP_ID_UCM_BT_CALL_END"/> 
#ifndef __MMI_TELEPHONY_SUPPORT__
    <SCREEN id="GRP_ID_UCM_MO_SELECT"/>
#endif /* __MMI_TELEPHONY_SUPPORT__ */
 
    <SCREEN id="SCR_ID_UCM_BT_OUTGOING"/>
    <SCREEN id="SCR_ID_UCM_BT_INCOMING"/>
    <SCREEN id="SCR_ID_UCM_BT_IN_CALL"/>
    <SCREEN id="SCR_ID_UCM_BT_CALL_END"/>
    <SCREEN id="SCR_ID_UCM_BT_PROCESSING"/>
    <SCREEN id="SCR_ID_UCM_BT_DUMMY"/>
    <SCREEN id="SCR_ID_UCM_BT_DIALLING"/>
    <SCREEN id="SCR_ID_UCM_END_AND_ACCEPT_CONFIRM"/>
    <SCREEN id="SCR_ID_UCM_BT_DTMF_EDITOR"/>
        
    
   
    <!-- 
    ***************************************************************
    EVENT Area
    ***************************************************************
     -->
#if defined (__MMI_BT_DIALER_SUPPORT__)
    <RECEIVER id="EVT_ID_SRV_DATETIME_CHANGE" proc="mmi_ucm_on_time_change_hdlr_bt"/>
#endif
    
    <!-- 
    ***************************************************************
    MENU Area
    ***************************************************************
    -->
   
   <MENU id="MENU_ID_UCM_BT_INCALL_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">                             
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_HOLD</MENUITEM_ID>                       
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE</MENUITEM_ID>                              
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_SWAP</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_DTMF</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_MUTE</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE</MENUITEM_ID>                      
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_END_ALL</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_SWITCH_AUDIO_PATH</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD</MENUITEM_ID>
                                <MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END</MENUITEM_ID>
				#ifdef __MMI_UCM_BT_CALL_RECORDER__
				<MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_RECODE</MENUITEM_ID>
				<MENUITEM_ID>MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE</MENUITEM_ID>
				#endif /*__MMI_UCM_BT_CALL_RECORDER__*/
   </MENU>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_HOLD" str="STR_ID_UCM_BT_HOLD"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_RETRIEVE" str="STR_ID_UCM_BT_RETRIEVE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_SWAP" str="STR_ID_UCM_BT_SWAP"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_DTMF" str="STR_ID_UCM_BT_DTMF"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_MUTE" str="STR_GLOBAL_MUTE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_UNMUTE" str="STR_ID_UCM_BT_UNMUTE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_END_SINGLE" str="STR_ID_UCM_BT_END_SINGLE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_END_ALL" str="STR_ID_UCM_BT_END_ALL"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_SWITCH_AUDIO_PATH" str="STR_ID_UCM_BT_SWITCH_AUDIO_PATH"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_HOLD" str="STR_GLOBAL_MODE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_BQB_TEST_END" str="STR_GLOBAL_NORMAL"/>
   #ifdef __MMI_UCM_BT_CALL_RECORDER__
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_RECODE" str="STR_ID_UCM_BT_CALL_RECODE"/>
   <MENUITEM id="MENU_ID_UCM_BT_INCALL_OPTION_UNRECODE" str="STR_ID_UCM_BT_CALL_UNRECODE"/>
   #endif /*__MMI_UCM_BT_CALL_RECORDER__*/
   
#ifdef  __MMI_FTE_SUPPORT__
    <MENU id="MENU_ID_UCM_BT_IN_CALL_DIALER_OPTION" type="OPTION" str="STR_GLOBAL_OPTIONS">
                            <MENUITEM_ID>MENU_ID_UCM_BT_IN_CALL_DIALER_OPTION_DIAL</MENUITEM_ID>
                            #ifdef __MMI_BT_PBAP_CLIENT__ 
                            <MENUITEM_ID>MENU_ID_UCM_BT_IN_CALL_DIALER_OPTION_SAVE</MENUITEM_ID>
                            #endif
    </MENU>
     <MENUITEM id="MENU_ID_UCM_BT_IN_CALL_DIALER_OPTION_DIAL" str="STR_GLOBAL_DIAL"/>
        #ifdef __MMI_BT_PBAP_CLIENT__ 
     <MENUITEM id="MENU_ID_UCM_BT_IN_CALL_DIALER_OPTION_SAVE" str="STR_BT_PHONEBOOK"/>
     #endif
 #endif

 </APP>
