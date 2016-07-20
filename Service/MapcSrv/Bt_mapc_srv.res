#include "MMI_features.h"
#include "CustResDef.h"


<?xml version="1.0" encoding="UTF-8"?>
#ifdef __MMI_BT_MAPC_BY_SPP__
<APP id="SRV_BT_MAPC">

    <INCLUDE file="GlobalResDef.h,SettingResDef.h"/>
    
    <TIMER id="BT_MAC_SRV_TIMER_ID"/>
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_MAP_CONNECT_CNF" proc="srv_bt_mapc_adp_event_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_MAP_DISCONNECT_CNF" proc="srv_bt_mapc_adp_event_hdlr"/>
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_MAP_CMD_NOTIFY" proc="srv_bt_mapc_adp_event_hdlr"/>
</APP>
#endif/*__MMI_BT_MAPC_BY_SPP__*/