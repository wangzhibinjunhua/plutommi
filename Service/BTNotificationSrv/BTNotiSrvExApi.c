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
 * BTNotiSrvExApi.c
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
#include "Stdlib.h"
#include "MMIDataType.h"
#include "Unicodexdcl.h" 

#include "SppSrvGprot.h"
#include "mmi_frm_events_gprot.h"
#include "GlobalResDef.h"
#include "MMI_trc_Int.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "mmi_frm_scenario_gprot.h"
#include "mmi_cb_mgr_gprot.h"

#include "BtNotiSrvGprot.h"
#include "BTNotiSrvRecv.h"
#include "BtNotifySrvParser.h"
#include "BTNotiSrvDisp.h"
#include "mmi_rp_srv_bt_noti_def.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "..\\..\\mtkapp\\connectivity\\connectivityinc\\btmtk\\BTMMISppGprots.h"


U32 srv_bt_noti_get_external_event_id(srv_bt_notify_extrtnal_event_enum type)
{
    switch (type)
    {
        case SRV_BT_EXT_EVENT_SPPC_CONNECT_CNF:
        {
            return EVT_ID_SPPC_CONNECT_CNF;
        }
            
        case SRV_BT_EXT_EVENT_SPPC_DISCONNECT_CNF:
        {
            return EVT_ID_SPPC_DISCONNECT_CNF;
        }
            
        case SRV_BT_EXT_EVENT_SPPC_READY_TO_READ:
        {
            return EVT_ID_SPPC_READY_TO_READ;
        }
            
        case SRV_BT_EXT_EVENT_SPPC_READY_TO_WRITE:
        {
            return EVT_ID_SPPC_READY_TO_WRITE;
        }
            
        case SRV_BT_EXT_EVENT_POST_FSM:
        {
            return EVT_ID_SRV_BT_NOTI_POST_FSM;
        }

        case SRV_BT_EXT_EVENT_NEW_MSG:
        {
            return EVT_ID_SRV_BT_NOTI_NEW_MSG;
        }

        case SRV_BT_EXT_EVENT_DEL_MSG:
        {
            return EVT_ID_SRV_BT_NOTI_DEL_MSG;
        }

        case SRV_BT_EXT_EVENT_SYNC_DEV:
        {
            return EVT_ID_SRV_BT_NOTI_SYNC_DEV;
        }

        case SRV_BT_EXT_EVENT_MAP_CONNECT_CNF:
        {
            return EVT_ID_SRV_BT_NOTI_MAP_CONNECT_CNF;
        }

        case SRV_BT_EXT_EVENT_MAP_DISCONNECT_CNF:
        {
            return EVT_ID_SRV_BT_NOTI_MAP_DISCONNECT_CNF;
        }

        case SRV_BT_EXT_EVENT_MAP_CMD_NOTIFY:
        {
            return EVT_ID_SRV_BT_NOTI_MAP_CMD_NOTIFY;
        }
		case SRV_BT_EXT_EVENT_CAP_CMD_NOTIFY:
		{
			return EVT_ID_SRV_BT_NOTI_CAP_CMD_NOTIFY;
		}
        default:
        {
            return 0;
        }
    }
}

U32 srv_bt_noti_get_external_timer_id(srv_bt_notify_external_timer_enum type)
{
    switch (type)
    {
        case SRV_BT_NOTI_WAIT_SYNC_CMD_TIMER:
        {
            return TIMER_ID_BT_NOTI_WAIT_SYNC_CMD;
        }

        case SRV_BT_NOTI_RECEIVE_DATA_TIME_GAP:
        {
            return TIMER_ID_BT_NOTI_RECEIVE_DATA_TIME_GAP;    
        }
        
        default:
        {
            return 0;
        }
    }
}

U32 srv_bt_noti_get_receiving_data_time_gap(void)
{
    return BT_NOTIFY_RECEIVING_DATA_TIME_GAP;
}

#endif // __MMI_BT_NOTI_SRV__


