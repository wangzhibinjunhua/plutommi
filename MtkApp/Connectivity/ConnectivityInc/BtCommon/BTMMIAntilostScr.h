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
 * BTMMIAntilostScr.h
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *   This file is the header file of BTMMIAntilostScr.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __BT_MMI_ANTI_LOST_H__
#define __BT_MMI_ANTI_LOST_H__

#include "MMI_features.h"
#include "Inlinecuigprot.h"

//#include "BtcmSrvGprot.h"
//#include "BTMMIScrGprots.h"
//#include "BTMMIScr.h"
//#include "MMIDataType.h"
//#include "kal_general_types.h"
//#include "ProcedureGprot.h"
//#include "mdi_datatype.h"
//#include "gui_touch_feedback.h"
//#include "mmi_rp_app_profiles_def.h"


/***************************************************************************** 
* Macro
*****************************************************************************/
/*MMI task query RSSI interval*/
#define BT_ANTI_LOST_CFG_QUERY_INTERVAL 5
/*if RSSI value is less than THRESHOLD, it will give alert.*/
#define BT_ANTI_LOST_CFG_RSSI_ALERT_THRESHOLD  -80

/* Inline CUI */
#define BT_ANTI_LOST_SET_STATUS_CAPTION (CUI_INLINE_ITEM_ID_BASE + 1)
#define BT_ANTI_LOST_SET_STATUS  (CUI_INLINE_ITEM_ID_BASE + 2)
#define BT_ANTI_LOST_SET_ALERT_CAPTION (CUI_INLINE_ITEM_ID_BASE + 3)
#define BT_ANTI_LOST_SET_ALERT_MODE  (CUI_INLINE_ITEM_ID_BASE + 4)

/***************************************************************************** 
* Enum
*****************************************************************************/
typedef enum
{
	MMI_BT_ANTI_LOST_OFF = 0,
	MMI_BT_ANTI_LOST_ON = 1,
	MMI_BT_ANTI_LOST_TOTAL = 2
}mmi_bt_anti_lost_status_enum;

typedef enum
{
	MMI_BT_ANTI_LOST_VIBRATION_AND_RING = 0,
	MMI_BT_ANTI_LOST_RING,
	MMI_BT_ANTI_LOST_VIBRATION, 
	MMI_BT_ANTI_LOST_ALERT_MODE_TOTAL
}mmi_bt_anti_lost_alert_mode_enum;

/***************************************************************************** 
* Extern functions
*****************************************************************************/
extern void mmi_bt_anti_lost_init(void);
extern mmi_ret mmi_bt_anti_lost_connect_complete_hdlr(void *para);
extern mmi_ret mmi_bt_anti_lost_disconn_complete_hdlr(void *para);
extern mmi_bt_anti_lost_status_enum mmi_bt_anti_lost_get_status(void);
extern void mmi_bt_entry_anti_lost(void);



/*****************************************************************************
 * FUNCTION
 *  mmi_bt_anti_lost_indication_hdlr
 * DESCRIPTION
 *  This function is to handler event
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
extern mmi_ret mmi_bt_anti_lost_indication_hdlr(mmi_event_struct *evt);

#endif/* __BT_MMI_ANTI_LOST_H__*/

/*------------------------------------------------------------*/
/*-------------------end--------------------------------------*/
/*------------------------------------------------------------*/

