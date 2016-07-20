#include "mmi_features.h"
#ifdef __MMI_BT_NOTI_SRV__
#include "custresdef.h"

<?xml version="1.0" encoding="UTF-8"?>

<APP id="SRV_BT_NOTI">
    <!--Include Area-->

    <!-----------------------------------------------------String Resource Area----------------------------------------------------->

    <!-----------------------------------------------------Image Resource Area------------------------------------------------------>

    <!------------------------------------------------------Menu Resource Area------------------------------------------------------>
    <!--Menu Item Area-->

    <!--Menu Tree Area-->


    <!------------------------------------------------------Other Resource---------------------------------------------------------->

    <!-----------------------------------------------Callback Manager Register------------------------------------------------------>
    <EVENT id="EVT_ID_SRV_BT_NOTI_NEW_MSG" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_DEL_MSG" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_REFRESH" type="SENDER"/>	
    <EVENT id="EVT_ID_SRV_BT_NOTI_POST_FSM" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_MISSED_CALL" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_SYNC_DEV" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_MAP_CONNECT_CNF" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_MAP_DISCONNECT_CNF" type="SENDER"/>
    <EVENT id="EVT_ID_SRV_BT_NOTI_MAP_CMD_NOTIFY" type="SENDER"/>
	  <EVENT id="EVT_ID_SRV_BT_NOTI_CAP_CMD_NOTIFY" type="SENDER"/>
    
    <TIMER id="TIMER_ID_BT_NOTI_WAIT_SYNC_CMD"/>
    <TIMER id="TIMER_ID_BT_NOTI_RECEIVE_DATA_TIME_GAP"/>
</APP>
#endif

