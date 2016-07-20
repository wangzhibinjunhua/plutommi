/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2010
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
 *  Swatch.res
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file defines the resource ID for the idle Swatch screen application.
 *
 * Author:
 * -------
 *  Renxiao Zeng (mtk71448)
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 05 28 2015 anne.xu
 * [MAUI_03534579] AsterV2 patch to 11CW1418SP4
 * Change Mainmenu alloc memory from ASM.
 *
 * 04 07 2015 shengxi.xu
 * [MAUI_03534579] AsterV2 patch to 11CW1418SP4
 * .
 *
 * 04 07 2015 shengxi.xu
 * [MAUI_03532835] [Tiny System]Tiny system slim
 * -Check in for tiny system slim
 *
 * 03 30 2015 shengxi.xu
 * [MAUI_03534579] AsterV2 patch to 11CW1418SP4
 * -Patch back Clock to SP4
 *
 * 07 31 2014 shengxi.xu
 * [MAUI_03512465] [Tiny Sysytem] Tail of minute hand flickers on entering S mode
 * .
 *
 * 07 21 2014 shengxi.xu
 * [MAUI_03511109] [Wristband]Patch back to W1418MP.
 * .
 *
 * 07 21 2014 shengxi.xu
 * [MAUI_03511109] [Wristband]Patch back to W1418MP.
 * .
 *
 * 07 21 2014 shengxi.xu
 * [MAUI_03511109] [Wristband]Patch back to W1418MP.
 * .
 *
 * 07 11 2014 shengxi.xu
 * [MAUI_03506681] [Wearable_Phase2] [Tiny System] It do show clock needles in tiny mode when clock is analog
 * .
 *
 * 06 24 2014 shengxi.xu
 * [MAUI_03507252] [Test Camp][App in idle] Installed clock taking more time to show after swipe
 * -
 *
 * 06 23 2014 shengxi.xu
 * [MAUI_03507252] [Test Camp][App in idle] Installed clock taking more time to show after swipe
 * -Show Clock first and then to load tiny load
 *
 * 06 13 2014 shengxi.xu
 * [MAUI_03503060] [App in idle] Steps and Calorie strings shown in english on idle screen
 * -Check in for clock change image by language
 *
 * 05 23 2014 renxiao.zeng
 * [MAUI_03501341] unable to go to clock screen automatically after time out
 * .
 *
 * 05 19 2014 renxiao.zeng
 * [MAUI_03487758] [Wearable Device][New UI]check in
 * .
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "MMI_features.h"
#include "CustResDef.h"

#if defined(__MMI_WEARABLE_DEVICE__)

<?xml version="1.0" encoding="UTF-8"?>
<APP id="APP_IDLE_SWATCH" name="STR_ID_IDLE_SWATCH">

    <!----- Include Area ------------------------------------------------------>
    <INCLUDE file="GlobalResDef.h"/>
    <MEMORY heap="SMART_WATCH_MAINMENU_MEM_SIZE" inc="Watch_barrel.h" />
    
#ifdef __CUI_SWATCH_SUPPORT__
    <MEMORY heap="MMI_IDLE_SWATCH_MEM_SIZE" inc="IdleMemCfg.h" />


    <!----- Screen Resource Area ---------------------------------------------->
    <SCREEN id="GRP_ID_CUI_SWATCH" />
    <SCREEN id="SCR_ID_CUI_SWATCH" />
#endif  //__CUI_SWATCH_SUPPORT__
    <SCREEN id="GRP_ID_SWATCH_SETTING" />
    <SCREEN id="SCR_ID_SWATCH_SETTING" />

#ifdef __MMI_MAINLCD_128X128__
    <SCREEN id="GRP_ID_SWATCH_DIGITAL" />
    <SCREEN id="SCR_ID_SWATCH_DIGITAL" />
#endif
    <SCREEN id="GRP_ID_SWATCH_BW" />
    <SCREEN id="SCR_ID_SWATCH_BW" />

    <!-- String Resource Area-------------------------------------------------->
    <STRING id="STR_ID_IDLE_SWATCH"/>
    <STRING id="STR_ID_IDLE_SWATCH_STEP"/>
    <STRING id="STR_ID_IDLE_SWATCH_CALORIE"/>    



    <!-- Image Resource Area--------------------------------------------------->
    #define IDLE_SWATCH_ROOT_PATH CUST_IMG_PATH"\\\\MainLCD\\\\IdleScreen\\\\Swatch\\\\"
    
#if defined(__MMI_MAINLCD_128X32__)
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N0">IDLE_SWATCH_ROOT_PATH"\\\\Time_0.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N1">IDLE_SWATCH_ROOT_PATH"\\\\Time_1.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N2">IDLE_SWATCH_ROOT_PATH"\\\\Time_2.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N3">IDLE_SWATCH_ROOT_PATH"\\\\Time_3.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N4">IDLE_SWATCH_ROOT_PATH"\\\\Time_4.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N5">IDLE_SWATCH_ROOT_PATH"\\\\Time_5.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N6">IDLE_SWATCH_ROOT_PATH"\\\\Time_6.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N7">IDLE_SWATCH_ROOT_PATH"\\\\Time_7.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N8">IDLE_SWATCH_ROOT_PATH"\\\\Time_8.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_N9">IDLE_SWATCH_ROOT_PATH"\\\\Time_9.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_CO">IDLE_SWATCH_ROOT_PATH"\\\\colon.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_BT_ON" >CUST_IMG_PATH"\\\\MainLCD\\\\IdleScreen\\\\Statusicons\\\\SI_BTon.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT1_CLOCK_BT_OFF" >CUST_IMG_PATH"\\\\MainLCD\\\\IdleScreen\\\\Statusicons\\\\SI_BToff.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_INDICATION_H">IDLE_SWATCH_ROOT_PATH"\\\\Mode_indication\\\\SI_Hmode.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_INDICATION_S">IDLE_SWATCH_ROOT_PATH"\\\\Mode_indication\\\\SI_Smode.bmp"</IMAGE> 
#else

    <!-- Analog 1 -->
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_CLOCK_BG">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\clock_bg.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_HOUR_HAND">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\hour_hand.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_MINUTE_HAND">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\minute_hand.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_SECOND_HAND">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\second_hand.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_CALORIES">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\calories.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_1_STEPS">IDLE_SWATCH_ROOT_PATH"\\\\analog_1\\\\steps.png"</IMAGE>

    <!-- Analog 2 -->
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_CLOCK_BG">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_bg_black.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_HOUR_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_hour_black.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_MINUTE_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_min_black.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_CLOCK_BG_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_bg_black_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_HOUR_HAND_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_hour_black_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_MINUTE_HAND_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_min_black_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_NAIL">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_nail_black.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_NAIL_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_nail_black_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_2_PREVIEW">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\black_preview.png"</IMAGE>

    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_CLOCK_BG">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_bg_white.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_HOUR_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_hour_white.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_MINUTE_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_min_white.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_CLOCK_BG_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_bg_white_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_HOUR_HAND_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_hour_white_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_MINUTE_HAND_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_min_white_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_NAIL">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_nail_white.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_NAIL_TINY">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\clock_nail_white_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_3_PREVIEW">IDLE_SWATCH_ROOT_PATH"\\\\Analog_2\\\\white_preview.png"</IMAGE>
    
    <!-- Digital 1 -->
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_AM">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\am.png"</IMAGE>    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_AM_CN">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\am_cn.png"</IMAGE>   
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_PM">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\pm.png"</IMAGE>    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_PM_CN">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\pm_cn.png"</IMAGE>
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_0">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_0.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_1">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_1.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_2">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_2.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_3">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_3.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_4">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_4.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_5">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_5.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_6">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_6.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_7">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_7.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_8">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_8.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_NUM_9">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\num_9.png"</IMAGE>
    
    <!-- Calendra use -->    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_0">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_0.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_1">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_1.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_2">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_2.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_3">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_3.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_4">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_4.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_5">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_5.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_6">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_6.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_7">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_7.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_8">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_8.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_9">IDLE_SWATCH_ROOT_PATH"\\\\digital_1\\\\hour_num_9.png"</IMAGE>
    
    <!-- Preview -->
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_BG">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_bg.9slice.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_LEFT">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_left.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_RIGHT">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_right.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_OK">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_ok.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_OK_DOWN">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_ok_down.png"</IMAGE>
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_1">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_1.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_2">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_2.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_PREVIEW_3">IDLE_SWATCH_ROOT_PATH"\\\\preview\\\\preview_3.png"</IMAGE>

#ifdef __MMI_MAINLCD_128X128__
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_KEY_BG">IDLE_SWATCH_ROOT_PATH"\\\\Analog\\\\watchface02_bg.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_KEY_HOUR_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog\\\\watchface02_shorthand_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_KEY_MINUTE_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog\\\\watchface02_longhand_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_KEY_SECOND_HAND">IDLE_SWATCH_ROOT_PATH"\\\\Analog\\\\watchface02_secondhand_img.bmp"</IMAGE>  
    <IMAGE id="IMG_ID_IDLE_SWATCH_ANALOG_KEY_CENTER_BG">IDLE_SWATCH_ROOT_PATH"\\\\Analog\\\\watchface02_center_img.bmp"</IMAGE>
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_BG">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_bg.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HL0">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursleft0_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HL1">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursleft1_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HL2">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursleft2_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR0">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright0_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR1">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright1_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR2">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright2_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR3">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright3_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR4">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright4_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR5">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright5_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR6">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright6_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR7">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright7_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR8">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright8_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_HR9">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_hoursright9_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M0">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute0_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M1">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute1_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M2">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute2_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M3">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute3_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M4">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute4_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M5">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute5_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M6">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute6_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M7">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute7_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M8">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute8_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_M9">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_minute9_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S0">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second0_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S1">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second1_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S2">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second2_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S3">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second3_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S4">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second4_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S5">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second5_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S6">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second6_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S7">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second7_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S8">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second8_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_S9">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_second9_img.bmp"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_DIGIT_PO">IDLE_SWATCH_ROOT_PATH"\\\\Digital\\\\watchface_point_img.bmp"</IMAGE>

    //add by xl for app
    <IMAGE id="IMG_ID_SWATCH_LEFTTOP_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_lefttop_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_LEFTTOP_PRESS_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_lefttop_press_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_LEFTBOTTOM_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_leftbottom_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_LEFTBOTTOM_PRESS_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_leftbottom_press_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_RIGHTTOP_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_righttop_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_RIGHTTOP_PRESS_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_righttop_press_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_RIGHTBOTTOM_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_rightbottom_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_RIGHTBOTTOM_PRESS_BTN">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\sidebar_rightbottom_press_btn.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_ICON_42_38">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\icon_42_38_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_ICON_88_51">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\icon_88_51_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_ICON_88_68">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\icon_88_68_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_INDICATOR_BOTTOM">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\indicator_bottom_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_INDIcATOR_TOP">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\indicator_top_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT1">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right1_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT2">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right2_img.png"</IMAGE>
    <IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT3">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right3_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT4">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right4_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT5">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right5_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT6">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right6_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_MAIN_RIGHT7">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_right7_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_BG_PICTURE">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\bgpicture_bg.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_BG1_PICTURE">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\bgpicture_bg1b.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_128_128_BG_PICTURE">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\bg128_128_bg.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_A">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_alphabet_a_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_M">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_alphabet_m_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_P">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_alphabet_p_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_DOWN_ARROW_P">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_arrow_down_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_UP_ARROW_P">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_arrow_up_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_CHOOSE_BLOCK_P">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_blanc_choosed_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_BLANC_P">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_blanc_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_0">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no0_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_1">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no1_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_2">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no2_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_3">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no3_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_4">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no4_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_5">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no5_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_6">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no6_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_7">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no7_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_8">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no8_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_TIME_NUM_9">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\date_no9_img.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_BATTERY_IMG">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\systembar_battery_img.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_SYSTEMBAR_BG">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\systembar_bg.png"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_PAGE_ON">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_pageindicator_pressed.bmp"</IMAGE>
	<IMAGE id="IMG_ID_SWATCH_PAGE_OFF">IDLE_SWATCH_ROOT_PATH"\\\\App\\\\main_pageindicator_normal.bmp"</IMAGE>
#endif
 
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_BG_IMAGE">IDLE_SWATCH_ROOT_PATH"\\\\Analog_tiny\\\\clock_bg_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_ANALOG_HOUR_HAND_IMAGE">IDLE_SWATCH_ROOT_PATH"\\\\Analog_tiny\\\\hour_hand_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_ANALOG_MIN_HAND_IMAGE">IDLE_SWATCH_ROOT_PATH"\\\\Analog_tiny\\\\minute_hand_tiny.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_ANALOG_SECOND_HAND_IMAGE">IDLE_SWATCH_ROOT_PATH"\\\\Analog_tiny\\\\second_hand_tiny.png"</IMAGE>
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_AM">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\Digit_tiny_am.png"</IMAGE> 
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_AM_CN">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\Digit_tiny_am_cn.png"</IMAGE> 
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_PM">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\Digit_tiny_pm.png"</IMAGE> 
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_PM_CN">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\Digit_tiny_pm_cn.png"</IMAGE>
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_0">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_0.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_1">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_1.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_2">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_2.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_3">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_3.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_4">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_4.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_5">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_5.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_6">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_6.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_7">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_7.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_8">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_8.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_DIGIT1_NUM_9">IDLE_SWATCH_ROOT_PATH"\\\\Digit_1_tiny\\\\tiny_num_9.png"</IMAGE>
    
    
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_INDICATION_H">IDLE_SWATCH_ROOT_PATH"\\\\Mode_indication\\\\SI_Hmode.png"</IMAGE>
    <IMAGE id="IMG_ID_IDLE_SWATCH_TINY_INDICATION_S">IDLE_SWATCH_ROOT_PATH"\\\\Mode_indication\\\\SI_Smode.png"</IMAGE> 
    
#endif    
    <!----- Timer Resource Area ---- ------------------------------------------>
    <TIMER id = "IDLE_SWATCH_UPDATE_TIMER" />
    <TIMER id = "IDLE_SWATCH_TINY_ENCODE_TIMER" />
    <TIMER id = "IDLE_SWATCH_TINY_REFESH_TIMER" />


    <CACHEDATA type="byte" id="NVRAM_IDLE_SWATCH_INDEX" restore_flag="TRUE">
        <DEFAULT_VALUE> [0x01] </DEFAULT_VALUE>
        <DESCRIPTION> Swatch index </DESCRIPTION>
    </CACHEDATA>

    
    <!----- Receiver Resource Area ---- ------------------------------------------>
    <RECEIVER id="EVT_ID_GPIO_LCD_SLEEP_OUT" proc="mmi_idle_swatch_event_handler"/>
    <RECEIVER id="EVT_ID_GPIO_LCD_SLEEP_IN" proc="mmi_idle_swatch_event_handler"/>
    <RECEIVER id="EVT_ID_SCREEN_LOCK_KEY_PRE_LOCK_EVT_ROUTING" proc="mmi_idle_swatch_event_handler"/>
    <RECEIVER id="EVT_ID_SRV_BT_NOTI_UPDATE_TIME_NOTIFY" proc="mmi_idle_swatch_enter_proc"/>
    <RECEIVER id="EVT_ID_TIP_UPDATE_TIME" proc="mmi_idle_swatch_enter_proc"/>
    <RECEIVER id="EVT_ID_GATT_UPDATE_TF" proc="mmi_idle_swatch_enter_proc"/>
    #ifdef __MMI_MAINLCD_128X32__ 
    <RECEIVER id="EVT_ID_KEY_CLICK_DOUBLE" proc="mmi_idle_swatch_event_handler"/>
    #endif
    
</APP>
        
#endif  //defined(__MMI_WEARABLE_DEVICE__)

