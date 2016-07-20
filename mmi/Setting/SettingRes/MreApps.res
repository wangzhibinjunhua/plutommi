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
 * mreapp.res
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Setting uninstall mre app resource file with XML format.
 *
 * Author:
 * -------
 *   zhen tian
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 12 25 2014 zhen.tian
 * [MAUI_03526725] Fix Build error for wearable no lcd
 * .
 *
 * 08 04 2014 zhen.tian
 * [MAUI_03500765] [wearable device]check in 11CW1418MP
 * .
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/* Needed header files of the compile option in XML files, if you need others need to add here */
#include "mmi_features.h"
#include "custresdef.h"

/* Need this line to tell parser that XML start, must after all #include. */
<?xml version="1.0" encoding="UTF-8"?>

/* APP tag, include your app name defined in MMIDataType.h */
<APP id = "APP_SETTING_MREAPPS">

    /* When you use any ID of other module, you need to add
       that header file here, so that Resgen can find the ID */
    <!--Include Area-->
    <INCLUDE file="GlobalResDef.h,SettingResDef.h"/>

    <!-----------------------------------------------------String Resource Area----------------------------------------------------->
    /* String ID of you Application, we will get string from ref_list.txt for all languages */
    <STRING id="STR_ID_SETTING_MREAPPS"/>
    <STRING id="STR_ID_SETTING_MREAPPS_UNINSTALL_ALL"/>
    <STRING id="STR_ID_SETTING_MREAPPS_QUERY"/>
    <STRING id="STR_ID_SETTING_MREAPPS_UNINSTALL_PROCESS"/>
    <!-----------------------------------------------------Image Resource Area------------------------------------------------------>
  
    <!------------------------------------------------------Menu Resource Area------------------------------------------------------>
//#ifdef __MMI_SETTINGS_SUPPORT__    
    <MENU id="MENU_ID_SETTING_MREAPPS" str="STR_ID_SETTING_MREAPPS" highlight="HighlightMreApps">
		<MENUITEM id="MENU_ID_SETTING_MREAPPS_UNINSTALL" str="STR_ID_SETTING_MREAPPS_UNINSTALL_ALL"></MENUITEM>
	</MENU>
//#endif
    <!------------------------------------------------------Other Resource---------------------------------------------------------->
    <SCREEN id = "GRP_ID_SETTING_MREAPPS"/>
    <SCREEN id = "GRP_ID_SETTING_MREAPPS_PROCESSING"/>
    <SCREEN id = "SCR_ID_SETTING_MREAPPS"/>
    <SCREEN id = "SCR_ID_SETTING_MREAPPS_PROCESSING"/>
    <SCREEN id = "SCR_ID_SETTING_MREAPPS_CONFIRM"/>  


</APP>
