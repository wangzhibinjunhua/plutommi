/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   A2dpSrv.res
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  A2DP Service resource file
 *
 * Author:
 * -------
 *   Kinse Lin (mtk01393)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime: $
 * $Log: $
 *
 * 04 24 2014 yinw.wang
 * [MAUI_03492905] [Must Solve][BTDialer v2.3][A2DP]when stop alarm ,background BT music no voice come out
 * .
 *
 * 04 23 2014 ankur.porwal
 * [MAUI_03491573] [BT][IOT]no any call sound can be heard during A2DP playback
 * .
 *
 * 12 27 2013 yufei.shen
 * [MAUI_03481564] [BT music] Should be continue to play BT music in this case
 * .
 *
 * 11 15 2013 yufei.shen
 * [MAUI_03476123] [BT Music] no output from audioplayer in this case
 * .
 *
 * 11 15 2013 yufei.shen
 * [MAUI_03476123] [BT Music] no output from audioplayer in this case
 * .
 *
 * 11 12 2013 guangtao.pei
 * [MAUI_03463381] [BT music]play the music with SP ,DUT no sound
 * .
 *
 * 10 14 2013 yufei.shen
 * [MAUI_03462439] [BT box] BT box feature check in to 11C
 * .
 *
 * 09 17 2013 yufei.shen
 * [MAUI_03456792] [BT Dialer v2.2] patchback to 11BW1308MP
 * .
 *
 * 06 03 2013 amitpratap.singh
 * [MAUI_03421566] [BT dialer 2.0] check-in
 * .
 *
 * 04 20 2012 kinse.lin
 * [MAUI_03172471] [Res] move timer id to res file
 * .
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

//ktimer

#include "mmi_features.h"

#ifdef __MMI_A2DP_SUPPORT__

<?xml version="1.0" encoding="UTF-8"?>

<APP id="SRV_A2DP">


<!----------------------------------------------------------------------------------------
******** Timer section  
------------------------------------------------------------------------------------------>

    <TIMER id="AV_BT_DISC_TIMER"/>
    <TIMER id="AV_BT_START_TIMER"/>
    <TIMER id="AV_BT_DELAY_PAUSE_TIMER"/>
    <TIMER id="AV_BT_CALL_BEGIN_TIMER"/>

#if defined(__BT_SPEAKER_SUPPORT__)
<RECEIVER id="EVT_ID_SRV_UCM_INDICATION" proc="srv_a2dp_sink_handle_gsm_call_ind"/>
#ifdef __MMI_BT_DIALER_SUPPORT__
	<RECEIVER id="EVT_ID_DIALER_EVENT_ALL_CALL_END_ID" proc="srv_a2dp_sink_dialer_call_interrupt_hdlr"/>
#endif
<EVENT id="EVT_ID_SRV_A2DP_DISCONNECT"   type="SENDER"/>
<EVENT id="EVT_ID_SRV_A2DP_CONNECT"   type="SENDER"/>
<EVENT id="EVT_ID_SRV_A2DP_SINK_CONNECT"   type="SENDER"/>
<EVENT id="EVT_ID_SRV_A2DP_STREAM_STRAT"   type="SENDER"/>
#endif /*__BT_SPEAKER_SUPPORT__*/
</APP>

#endif /* __MMI_A2DP_SUPPORT__ */
