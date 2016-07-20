<?xml version="1.0" encoding="UTF-8"?>

#include "MMI_features.h" 

<APP id="SRV_UCM">
    <INCLUDE file="GlobalResDef.h"/>

<!-- 
**************************************** String section ***************************************
-->
#ifdef __MMI_UCM_DETAIL_ERROR_MSG__
    <STRING id="STR_ID_SRV_UCM_RESULT_USER_ABORT"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_EMPTY_NUMBER"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_CALLED_PARTY_BUSY"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_NETWORK_NOT_AVAILABLE"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_CALLED_PARTY_NOT_ANSWERED"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_UCM_BUSY"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_CANCEL"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_FLIGHT_MODE_PROHIBIT"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_PREFERRED_MODE_PROHIBIT"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_SOS_CALL_EXISTS"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_SOS_NUMBER_ONLY"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_LOW_BATTERY"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_NOT_ALLOWED_TO_DIAL"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_NOT_ALLOWED_TO_ACCEPT"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_ACTION_NOT_ALLOWED"/>
    <STRING id="STR_ID_SRV_UCM_RESULT_NO_ACTIVE_CALL"/>
#endif /* __MMI_UCM_DETAIL_ERROR_MSG__ */

<!--
**************************************** Other Resource ***************************************
-->
    <TIMER id="UCM_CONFIRM_TIMER_ID"/>
    <TIMER id="UCM_AUTO_REDIAL_TIMER"/>
    <TIMER id="UCM_SEND_DTMF_TIMER"/>
    <TIMER id="UCM_AUTO_ANSWER_MACHINE_TIMER"/>
    <TIMER id="UCM_AUTO_ANSWER_MACHINE_END_TIMER"/>
#if defined(__MMI_BT_DIALER_SUPPORT__) && defined(__MMI_TELEPHONY_SUPPORT__)
    <RECEIVER id="EVT_ID_SRV_DATETIME_CHANGE" proc="srv_ucm_on_time_change_event"/>
#endif /* __MMI_BT_DIALER_SUPPORT__ && __MMI_TELEPHONY_SUPPORT__*/
#if defined(__MMI_TELEPHONY_SUPPORT__)
    <RECEIVER id="EVT_ID_SRV_SHUTDOWN_HANDLER_RESET" proc="srv_ucm_shutdown_reset_hdlr"/>
#endif
</APP>
