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
 * Calendar.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * This file implements Calendar application.
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
 *
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
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 /**
 * Copyright Notice
 * ?2002 - 2003, Pixtel Communications, Inc., 1489 43rd Ave. W.,
 * Vancouver, B.C. V6M 4K8 Canada. All Rights Reserved.
 *  (It is illegal to remove this copyright notice from this software or any
 *  portion of it)
 */

/**********************************************************************************
   Filename:      Calendar.c
   Author:        GAUTAM
   Date Created:  July-12-2003
**********************************************************************************/
/*********************************************************************************
 * Include
 *********************************************************************************/

#include "MMI_features.h"
 
#ifdef __MMI_CALENDAR__

#include "MMI_common_app_trc.h"
#include "DebugInitDef_Int.h"
#include "MMIDataType.h"
#include "GlobalResDef.h"
#include "mmi_frm_scenario_gprot.h"
#include "custom_mmi_default_value.h"
#include "gui_typedef.h"
#include "app_datetime.h"
#include "CustDataRes.h"
#include "gui_data_types.h"
#include "mmi_frm_events_gprot.h"
#include "string.h"
#include "wgui_categories_calendar.h"
#include "PhoneBookGprot.h"
#include "GlobalConstants.h"
#include "wgui_categories_util.h"
#include "mmi_frm_input_gprot.h"
#include "mmi_frm_mem_gprot.h"
#include "gui_theme_struct.h"
#include "gui_calendar.h"
#include "Unicodexdcl.h"
#include "mmi_frm_nvram_gprot.h"
#include "AlertScreen.h"
#include "CommonScreensResDef.h"
#include "kal_trace.h"
#include "ToDoListGprot.h"
#include "wgui_datetime.h"
#include "mmi_rp_app_organizer_def.h"
#include "wgui_categories_list.h"
#include "stdio.h"
#include "AlarmFrameworkProt.h"
#include "nvram_common_defs.h"
#include "NotificationGprot.h"
#include "TimerEvents.h"
#include "mmi_frm_timer_gprot.h"
#include "AlarmDef.h"
#include "wgui_categories.h"
#include "mmi_frm_history_gprot.h"
#include "bppxhtmlgprot.h"
#include "Menucuigprot.h"
#include "DateTimeType.h"
#include "CalendarProt.h"
#include "CalendarGprot.h"
#include "CommonScreens.h"
#include "kal_general_types.h"
#include "IndianCalendarDef.h"
#include "PixcomFontEngine.h"
#include "mmi_rp_app_uiframework_def.h"
#include "kal_public_api.h"
#include "mmi_common_app_trc.h"

#ifdef __MMI_HIJRI_CALENDAR__
#include "mmi_rp_app_hijri_calendar_def.h"
#include "HijriCalendarResdef.h"
#include "HijriCalendarProt.h"
#endif

#ifdef __MMI_INDICAL__
#include "mmi_rp_app_indical_def.h"
#include "IndianCalendarProt.h"
#endif

#include "gui_switch.h"
#include "lcd_sw_rnd.h"
#include "gdi_include.h"
#include "lcd_sw_inc.h"
#include "Gui_Setting.h"
#include "wgui.h"
#include "BppXhtmlGprot.h"
#include "gdi_const.h"
#include "gdi_datatype.h"
#include "fs_func.h"
#include "wgui_inline_edit.h"
#include "wgui_categories_text_viewer.h"

#include "mmi_rp_app_todolist_def.h"
#include "mmi_rp_app_calendar_def.h"
#include "TodolistProt.h"
#include "TodolistSrvGprot.h"
#ifdef __MMI_BT_SUPPORT__ 
#include "BTMMIScrGprots.h"
#endif

#ifdef __MMI_BIRTHDAY_REMINDER__
#include "BirthdayProt.h"
#endif 
#include "ToDoListDB.h"
#include "SyncMLGprot.h"
#include "InlineCuiGprot.h"
#include "vCalendar.h"
#ifdef __MMI_VCALENDAR__
#include "Vcalsrvgprot.h"
#include "mmi_rp_srv_vcalendar_def.h"
#endif
#include "gui_effect_oem.h"
#include "mdi_audio.h"
#include "SecSetCuiGprot.h"
#include "CalendarEventGprot.h"
#if defined (__DCM_WITH_COMPRESSION_MMI_AP__) && defined(__MTK_TARGET__)
#include "MMI_ap_dcm_config.h"
#endif
#include "Wgui_softkeys.h"

#ifdef __MMI_BTD_BOX_UI_STYLE__
#include "wgui_categories_btbox.h"
#endif /* __MMI_BTD_BOX_UI_STYLE__ */

#if defined(__MMI_WEARABLE_DEVICE__)
#ifndef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
#define __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
#endif

#ifndef __SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__
#define __SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__
#endif

#ifndef __SWATCCH_FOR_CALENDAR_EVENT_SYNC_DATA__
//#define __SWATCCH_FOR_CALENDAR_EVENT_SYNC_DATA__
#endif

#ifndef __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
#define __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
#endif

#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
#define __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
#endif

#endif/*__MMI_WEARABLE_DEVICE__*/


#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
#include "mmi_rp_app_idle_swatch_def.h"


//add by xl
#ifdef __MMI_WEARABLE_DEVICE__
#include "wgui_swatch_common_pen_handle.h" //
#endif

swatch_common_cell_info swatch_calendar_cell = {0};

applib_time_struct swatch_calendar_show_buffer[3];
//add by xl end


applib_time_struct g_swatch_calendar_current_view_time = {0};
applib_time_struct g_swatch_calendar_today_time = {0};
//extern kal_bool g_is_launch_monthly_view;

#define GDI_COLOR_TEXT       gdi_act_color_from_rgb(255, 52, 149, 165)
#define GDI_COLOR_BUTTON       gdi_act_color_from_rgb(255, 31, 181, 172)

#define GDI_COLOR_BG       gdi_act_color_from_rgb(255, 32, 32, 40)
#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN__*/


#ifdef __SWATCCH_FOR_CALENDAR_EVENT_SYNC_DATA__
#include "BTNotiSrvGprot.h"

void mmi_clndr_sync_data_callback_hdlr(void *data);
#endif

extern void mmi_clndr_tap_list_show_details();
/* 
 * Define
 */

#define MMI_CAL_TRACE0(sub_grp) \
		MMI_TRACE(MMI_COMMON_TRC_G2_ORG, sub_grp)

#define MMI_CAL_TRACE1(sub_grp, arg) \
		MMI_TRACE(MMI_COMMON_TRC_G2_ORG, sub_grp, arg)
		
#define MMI_CAL_TRACE2(sub_grp, arg1, arg2) \
		MMI_TRACE(MMI_COMMON_TRC_G2_ORG, sub_grp, arg1, arg2)

#define MMI_CAL_TRACE3(sub_grp, arg1, arg2, arg3) \
		MMI_TRACE(MMI_COMMON_TRC_G2_ORG, sub_grp, arg1, arg2, arg3)
/*
 * Typedef 
 */

/* 
 * Local Variable
 */

static clndr_context_struct g_mmi_clndr_cntx;
#ifdef __MMI_AP_DCM_CLNDR__
#pragma arm section code = "DYNAMIC_CODE_CALENDAR_RODATA", rodata = "DYNAMIC_CODE_CALENDAR_ROCODE"
#endif
#ifdef __MMI_CALENDAR_CHINESE_SUPPORT__
const U8 solar_term_table[62][12] = 
{
   
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x87, 0x76},       /* 1970 */
  {0x65, 0x43, 0x65, 0x55, 0x66, 0x66, 0x87, 0x88, 0x88, 0x98, 0x87, 0x86},
  {0x65, 0x53, 0x54, 0x54, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x86, 0x76},
  {0x64, 0x43, 0x65, 0x55, 0x66, 0x66, 0x87, 0x88, 0x88, 0x98, 0x87, 0x86},       /* 1975 */
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x55, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x88, 0x87, 0x76},
  {0x64, 0x43, 0x65, 0x55, 0x66, 0x66, 0x87, 0x88, 0x87, 0x98, 0x87, 0x86},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x75},       /* 1980 */
  {0x54, 0x43, 0x55, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x88, 0x86, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x87, 0x88, 0x87, 0x98, 0x87, 0x86},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x43, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},       /* 1985 */
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x88, 0x86, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x87, 0x88, 0x87, 0x98, 0x87, 0x76},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x88, 0x86, 0x76},       /* 1990 */
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x87, 0x76},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x87, 0x76},       /* 1995 */
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x87, 0x76},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},       /* 2000 */
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x87, 0x76},
  {0x65, 0x43, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},       /* 2005 */
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x98, 0x86, 0x76},
  {0x64, 0x43, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x32, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},       /* 2010 */
  {0x64, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x88, 0x87, 0x76},
  {0x65, 0x43, 0x54, 0x44, 0x54, 0x55, 0x76, 0x77, 0x76, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x55, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x88, 0x86, 0x76},       /* 2015 */
  {0x64, 0x43, 0x54, 0x43, 0x54, 0x55, 0x76, 0x77, 0x76, 0x87, 0x76, 0x65},
  {0x54, 0x32, 0x54, 0x44, 0x55, 0x55, 0x77, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x88, 0x86, 0x76},
  {0x64, 0x43, 0x54, 0x43, 0x54, 0x55, 0x76, 0x77, 0x76, 0x87, 0x76, 0x65},       /* 2020 */
  {0x54, 0x32, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x87, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x66, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x54, 0x43, 0x54, 0x55, 0x66, 0x77, 0x76, 0x87, 0x76, 0x65},
  {0x54, 0x32, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},       /* 2025 */
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},
  {0x54, 0x43, 0x65, 0x54, 0x65, 0x65, 0x77, 0x87, 0x87, 0x87, 0x76, 0x76},
  {0x64, 0x43, 0x54, 0x43, 0x54, 0x55, 0x66, 0x76, 0x76, 0x87, 0x76, 0x65},
  {0x54, 0x32, 0x54, 0x44, 0x55, 0x55, 0x76, 0x77, 0x77, 0x87, 0x76, 0x75},
  {0x54, 0x42, 0x54, 0x54, 0x55, 0x65, 0x77, 0x77, 0x77, 0x87, 0x76, 0x76},       /* 2030 */
};

/* number of accumulated days per solar month, non-leap year and leap year. */
const U16 gClndrSolarAccuDays[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};


/* array of lunar calendar */

const clndr_lunar_table_struct gClndrLunarInfo[] = 
{
    {47, 0, 5482},
    {36, 0, 2921},   /* 1970 */
    {26, 5, 5970},
    {45, 0, 6994},
    {33, 0, 6949},
    {22, 4, 5707},
    {41, 0, 6731},   /* 1975 */
    {30, 8, 5291},
    {48, 0, 4781},
    {37, 0, 5485},
    {27, 6, 2921},
    {46, 0, 3497},    /* 1980 */
    {35, 0, 7570},
    {24, 4, 7461},
    {43, 0, 7461},
    {32, 10, 6733},
    {50, 0, 2646},   /* 1985 */
    {39, 0, 4790},
    {28, 6, 1461},
    {47, 0, 5845},
    {36, 0, 3753},
    {26, 5, 7826},    /* 1990 */
    {45, 0, 3730},
    {34, 0, 3366},
    {22, 3, 2646},
    {40, 0, 2647},
    {30, 8, 5334},   /* 1995 */
    {49, 0, 4954},
    {37, 0, 5845},
    {27, 5, 5833},
    {46, 0, 5961},
    {35, 0, 5779},   /* 2000 */
    {23, 4, 5419},
    {42, 0, 5419},
    {31, 0, 2651},
    {21, 2, 5466},
    {39, 0, 5482},   /* 2005 */
    {28, 7, 6997},
    {48, 0, 7076},
    {37, 0, 6985},
    {25, 5, 6803},
    {44, 0, 6805},   /* 2010 */
    {33, 0, 5421},
    {22, 4, 2733},
    {40, 0, 2741},
    {30, 9, 5546},
    {49, 0, 5586},   /* 2015 */
    {38, 0, 3493},
    {27, 6, 7498},
    {46, 0, 3402},
    {35, 0, 3221},
    {24, 4, 5422},   /* 2020 */
    {42, 0, 5462},
    {31, 0, 2741},
    {21, 2, 5554},
    {40, 0, 5842},
    {28, 6, 3749},    /* 2025 */
    {47, 0, 5925},
    {36, 0, 5707},
    {25, 5, 3223},
    {43, 0, 3243},
    {33, 0, 1370},   /* 2030 */
    {22, 3, 2774},   /* 2031 */
};

#endif /* __MMI_CALENDAR_CHINESE_SUPPORT__*/

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

const cui_inline_item_caption_struct cui_jump_caption =
{
    STR_GLOBAL_DATE
};
#ifdef __MMI_MAINLCD_96X64__
const cui_inline_set_item_struct cui_jump_to_date[2] = 
{
    {CUI_INLINE_ITEM_ID_BASE + 0, CUI_INLINE_ITEM_TYPE_DISPLAY_ONLY | CUI_INLINE_ITEM_FULL_WIDTH | CUI_INLINE_ITEM_DISABLE, 0, NULL},
    {CUI_INLINE_ITEM_ID_BASE + 1, CUI_INLINE_ITEM_TYPE_DATE | CUI_INLINE_ITEM_FULL_WIDTH | CUI_INLINE_ITEM_CENTER_JUSTIFY, 0, NULL},
};
#else
const cui_inline_set_item_struct cui_jump_to_date[2] = 
{
    {CUI_INLINE_ITEM_ID_BASE + 0, CUI_INLINE_ITEM_TYPE_CAPTION | CUI_INLINE_ITEM_FULL_WIDTH, 0, &cui_jump_caption},
#ifdef __MMI_BTD_BOX_UI_STYLE__
    {CUI_INLINE_ITEM_ID_BASE + 1, CUI_INLINE_ITEM_TYPE_DATETIME_SETTING_DISPLAY_ONLY, 0, NULL},
#else
    {CUI_INLINE_ITEM_ID_BASE + 1, CUI_INLINE_ITEM_TYPE_DATE | CUI_INLINE_ITEM_FULL_WIDTH | CUI_INLINE_ITEM_RIGHT_JUSTIFY, 0, NULL},
#endif /* __MMI_BTD_BOX_UI_STYLE__ */
};
#endif
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
static const cui_inline_item_caption_struct cui_cal_settings_caption[2] =
{
    ORGANIZER_MENU_CALENDER_STRINGID,
    STR_CLNDR_ONSCREEN_DISPLAY
};
#ifdef __MMI_MAINLCD_96X64__
static const cui_inline_set_item_struct cui_cal_settings[4] = 
{
    {CUI_INLINE_ITEM_ID_BASE + 1, CUI_INLINE_ITEM_TYPE_SELECT, 0, NULL},
    {CUI_INLINE_ITEM_ID_BASE + 3, CUI_INLINE_ITEM_TYPE_SELECT, 0, NULL}    
};
#else
static const cui_inline_set_item_struct cui_cal_settings[4] = 
{
    {CUI_INLINE_ITEM_ID_BASE + 0, CUI_INLINE_ITEM_TYPE_CAPTION, 0, &cui_cal_settings_caption[0]},
    {CUI_INLINE_ITEM_ID_BASE + 1, CUI_INLINE_ITEM_TYPE_SELECT, 0, NULL},
    {CUI_INLINE_ITEM_ID_BASE + 2, CUI_INLINE_ITEM_TYPE_CAPTION, 0, &cui_cal_settings_caption[1]},
    {CUI_INLINE_ITEM_ID_BASE + 3, CUI_INLINE_ITEM_TYPE_SELECT, 0, NULL}    
};
#endif
static mmi_id mmi_clndr_setting_child_gid;
#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */

static mmi_id mmi_clndr_jump_child_gid;

#ifdef __MMI_HIJRI_CALENDAR__
static mmi_id option_id;
#endif

mmi_clndr_confirm_user_data_struct g_clndr_confirm_user_data;
#ifdef __MMI_AP_DCM_CLNDR__
#pragma arm section code, rodata
#endif

/********************************************************************************* 
 * Local Function
 *********************************************************************************/
static mmi_ret mmi_cal_option_group_proc(mmi_event_struct* evt);
static void mmi_cal_option_menu_entry_hdlr(cui_menu_event_struct *menu_evt);
static void mmi_cal_option_menu_select_hdlr(cui_menu_event_struct *menu_evt);
static void mmi_clndr_lunar_highlight_hdlr(S32 index);
static void mmi_clndr_entry_lunar_swtich(void);
static mmi_ret mmi_clndr_main_group_proc(mmi_event_struct *evt);
static mmi_ret mmi_clndr_main_leave_proc(mmi_event_struct *parm);
#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
static mmi_ret mmi_clndr_main_screen_leave_proc(mmi_event_struct *parm);
#endif
static void mmi_clndr_entry_screen(mmi_scrn_essential_struct* scr_info);
#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
void mmi_clndr_entry_monthly_view_screen(void);
#endif
static void mmi_clndr_exit_screen(void);
static void mmi_clndr_exit_main_screen(void);
static void mmi_clndr_screen_memory_allocate(void);
static void mmi_clndr_screen_reset_cell_info(void);
static void mmi_clndr_lunar_save_done(void);
static void mmi_clndr_monthly_set_cell_info(
                            MYTIME *date, 
                            mmi_clndr_cell_struct *monthly_cell);

#ifdef __MMI_CLNDR_EVENT_INFO__
static void mmi_clndr_set_info_box(mmi_clndr_cell_struct *curr_cell);
static S32 mmi_clndr_event_constructor(
                            gui_calendar_type_enum type,
                            applib_time_struct cell_time,
                            applib_time_struct time_interval,
                            wgui_cat83_event_struct *event_info);
#endif /* __MMI_CLNDR_EVENT_INFO__ */
static void mmi_clndr_entry_option(void);
static void mmi_clndr_validate_input(void);
static void mmi_clndr_entry_jump_to_date(void);
#ifdef __MMI_CALENDAR_CHINESE_SUPPORT__
static S16 mmi_clndr_compute_solar_term(S16 year, S16 month, S16 solar_index);
static void mmi_clndr_compute_lunar_info(clndr_lnuar_date_info_struct *DI);
static void mmi_clndr_lunar_date_str(clndr_lnuar_date_info_struct *lunar_date);
static MMI_BOOL mmi_clndr_is_leap_month(S16 year, S16 month);
#endif
static mmi_ret mmi_clndr_jump_proc(mmi_event_struct *evt);
static void mmi_clndr_get_date_str(MYTIME *date, U8 *date_str);
static void mmi_clndr_monthly_or_weekly_pre_entry_screen(mmi_cal_launch_type_enum launch_type);
static void mmi_clndr_monthly_pre_entry_screen(void);
#ifdef __MMI_CALENDAR_EVENT__
static void mmi_clndr_weekly_pre_entry_screen(void);
#endif
static void mmi_clndr_go_to_today(void);
static void mmi_clndr_display_set_config_2(void);
static void mmi_clndr_display_set_config_1(mmi_cal_launch_type_enum dis_type, applib_time_struct *curr_time);
static void mmi_clndr_entry_week_first_day_swtich(void);
static void mmi_clndr_launch_int(mmi_id parent_id, mmi_cal_launch_type_enum dis_type, MYTIME *curr_time);


#ifdef __MMI_CALENDAR_EVENT__

static S32 mmi_clndr_cell_data_constructor(
                                gui_calendar_type_enum type,
                                applib_time_struct start_time,
                                applib_time_struct end_time,
                                applib_time_struct interval,
                                S32 query_count,
                                gui_calendar_cell_struct *cells);
static void mmi_cal_weekly_set_cell_info(
                                MYTIME *date, 
                                MYTIME *interval, 
                                U32 count);
static MMI_BOOL mmi_clndr_search_monthly_check(
                                const void *data, 
                                const srv_tdl_vcal_enum vcal_type,
                                const srv_tdl_search_filter_struct search_filter);

static void mmi_clndr_monthly_set_daily_icon(
                                MYTIME *time, 
                                mmi_clndr_cell_struct *month_cell);

void mmi_clndr_reset_event_search_state(void);
void mmi_clndr_reset_event_search_state_exclude_all_search(void);

extern srv_tdl_event_source_enum g_clndr_event_filter_select;

extern MMI_BOOL mmi_clndr_monthly_event_list_update(mmi_cal_daily_scrn_info *scrn_info);
extern MMI_BOOL mmi_clndr_weekly_event_list_update(MYTIME *date);

#endif /* __MMI_CALENDAR_EVENT__ */

#if defined(__MMI_ICON_BAR_SUPPORT__)
static void mmi_clndr_toolbar_callback(S32 index);
static void mmi_clndr_get_toolbar_resource(U8 view_mode,
                                           gui_icon_bar_item_resource_struct *res,
                                           S32 *items);

#endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
#ifdef __MMI_TOUCH_SCREEN__
static void mmi_clndr_highlight_select_handler(
                                gui_calendar_type_enum type,
                                applib_time_struct highlighted_time);
#endif/* __MMI_TOUCH_SCREEN__ */

#if 0
#if defined( __MMI_OP11_HOMESCREEN_0301__) || defined(__MMI_OP11_HOMESCREEN_0302__)
/* under construction !*/
#endif
#endif

/*********************************************************************************
 * Global Variable
 *********************************************************************************/
extern const U8 gDaysInMonth[];
clndr_context_struct *g_clndr_cntx = &g_mmi_clndr_cntx;
mmi_clndr_view_mode_struct g_current_view_mode_context;


/********************************************************************************* 
 * Global Function
 *********************************************************************************/
 
#define MMI_CLNDR_SECTION_DCM_BEGIN

#ifdef __MMI_AP_DCM_CLNDR__
#pragma arm section code = "DYNAMIC_CODE_CALENDAR_RODATA", rodata = "DYNAMIC_CODE_CALENDAR_ROCODE"
#endif 

#ifdef __MMI_TOUCH_SCREEN__
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_highlight_select_handler
 * DESCRIPTION
 *  Calendar highlighted cell select handler.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_highlight_select_handler(
                gui_calendar_type_enum type,
                applib_time_struct highlighted_time)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_CALENDAR_EVENT__
    mmi_clndr_show_daily_event();
#endif
}
#endif /* __MMI_TOUCH_SCREEN__ */

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_highlight_change_handler
 * DESCRIPTION
 *  Calendar highlighted cell change handler.
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
static MMI_BOOL mmi_clndr_highlight_change_handler(
                 gui_calendar_type_enum type,
                 applib_time_struct highlighted_time,
                 applib_time_struct real_start_time,
                 applib_time_struct real_end_time)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *scrn_data;    

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                    GRP_ID_CAL_MAIN, 
                    SCR_ID_CLNDR_SCREEN);
    if (highlighted_time.nYear > CLNDR_END_YEAR || highlighted_time.nYear < CLNDR_START_YEAR)
    {
        mmi_popup_display_simple_ext(
            STR_CLNDR_OUT_OF_CALENDAR,
            MMI_EVENT_FAILURE,
            GRP_ID_CAL_MAIN,
            NULL);
        return MMI_FALSE;
    }
    if(type == GUI_CALENDAR_TYPE_MONTH)
    {
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
        scrn_data->highlight_time.nYear = highlighted_time.nYear;
        scrn_data->highlight_time.nMonth = highlighted_time.nMonth;
        scrn_data->highlight_time.nDay = highlighted_time.nDay;
        scrn_data->highlight_time.DayIndex = DOW(
                        scrn_data->highlight_time.nYear, 
                        scrn_data->highlight_time.nMonth, 
                        scrn_data->highlight_time.nDay);
    }
    else
    {
        memcpy(&scrn_data->highlight_time, &highlighted_time, sizeof(applib_time_struct));
    }
    return MMI_TRUE;
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_lunar_data_constructor
 * DESCRIPTION
 *  This API construct lunar data.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static S32 mmi_clndr_lunar_data_constructor(
            gui_calendar_type_enum type,
            applib_time_struct cell_time,
            applib_time_struct time_interval,
            PU8 title,
            U32 title_length,
            gui_calendar_cell_detail_info_struct *detail_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    MYTIME curr_cell_time;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/  
    memcpy(&curr_cell_time, &cell_time, sizeof(MYTIME));
    
    /* Get the cell lunar info. */
    if (type == GUI_CALENDAR_TYPE_MONTH)
    {
    #if defined (__MMI_INDICAL__) || defined (__MMI_HIJRI_CALENDAR__)
        if(IsChineseSet() && g_clndr_cntx->lunar_state == MMI_CLNDR_ENGLISH && g_clndr_cntx->infodispval)
    #else    
        if (IsChineseSet())
    #endif
        {
    #ifdef __MMI_CALENDAR_CHINESE_SUPPORT__
            /* Set the Lunar info of Chinese lunar calendar */
            g_clndr_cntx->LunarInfo.SolarMonth = curr_cell_time.nMonth;
            g_clndr_cntx->LunarInfo.SolarYear = curr_cell_time.nYear;
            g_clndr_cntx->LunarInfo.SolarDay = curr_cell_time.nDay;
            
            /* Title */
            mmi_clndr_compute_lunar_info(&g_clndr_cntx->LunarInfo);
			mmi_clndr_lunar_date_str(&g_clndr_cntx->LunarInfo);
         
         #ifdef __MMI_CALENDAR_TITLE__
            memcpy(title, (U8*)g_clndr_cntx->LunarInfo.MessageLine1, title_length);
        #endif

            if (detail_info->detail_entry_number >= 1)
            {
                memcpy(
                    detail_info->detail_list[0].string,
                    (U8*)g_clndr_cntx->LunarInfo.MessageLine1,
                    detail_info->detail_string_max_length);
            }
            if (detail_info->detail_entry_number >= 2)
            {
                memcpy(
                    detail_info->detail_list[1].string,
                    (U8*)g_clndr_cntx->LunarInfo.MessageLine2,
                    detail_info->detail_string_max_length);
            }
    #endif /*#__MMI_CALENDAR_CHINESE_SUPPORT__*/
        }
    #ifdef __MMI_INDICAL__
        else if(g_clndr_cntx->lunar_state == MMI_CLNDR_INDIAN_LUNISOLAR)
        {
            S32 str_indian_paksha_len = 0;
            S32 str_indian_tithi_len = 0;
            memset(g_clndr_cntx->str_indian_paksha, 0, sizeof(U8) * MAX_TITHI_FOR_CAL_POPUP);
            memset(g_clndr_cntx->str_indian_tithi, 0, sizeof(U8) * MAX_TITHI_FOR_CAL_POPUP);

    #ifdef __MMI_CALENDAR_TITLE__
            /* Title */
            if (!mmi_indical_get_date_str(curr_cell_time, title))
            {
                mmi_clndr_get_date_str(&curr_cell_time, title);
            }
    #endif
            /* Hint message */
            if (g_clndr_cntx->infodispval)
            {
                mmi_indical_get_indian_date_str(
                        curr_cell_time,  
                        g_clndr_cntx->str_indian_tithi, 
                        g_clndr_cntx->str_indian_paksha);
            
                str_indian_paksha_len = mmi_ucs2strlen((CHAR*)g_clndr_cntx->str_indian_paksha);
                str_indian_tithi_len = mmi_ucs2strlen((CHAR*)g_clndr_cntx->str_indian_tithi);

                if (detail_info->detail_entry_number >= 1 && str_indian_tithi_len != 0)
                {
                    memcpy(
                        detail_info->detail_list[0].string,
                        (U8*)g_clndr_cntx->str_indian_tithi,
                        detail_info->detail_string_max_length);
                }
                if (detail_info->detail_entry_number >= 2 && str_indian_paksha_len != 0)
                {
                    memcpy(
                        detail_info->detail_list[1].string,
                        (U8*)g_clndr_cntx->str_indian_paksha,
                        detail_info->detail_string_max_length);
                }
            }
        }
    #endif /* __MMI_INDICAL__ */
    #ifdef __MMI_HIJRI_CALENDAR__
        else if(g_clndr_cntx->lunar_state == MMI_CLNDR_HIJRI_LUNAR)
        {
            S32 str_hijri_date1_len = 0;
            S32 str_hijri_date2_len = 0;

            memset(
                    g_clndr_cntx->str_hijri_date1,
                    0, 
                    MAX_TITHI_FOR_CAL_POPUP / ENCODING_LENGTH);
            memset(
                    g_clndr_cntx->str_hijri_date2,
                    0, 
                    MAX_TITHI_FOR_CAL_POPUP / ENCODING_LENGTH);

        #ifdef __MMI_CALENDAR_TITLE__
            /* Title */
            if (!mmi_hijri_get_date_str(curr_cell_time, title))
            {
                mmi_clndr_get_date_str(&curr_cell_time, title);
            }
        #endif
            /* Hint message */
            if (g_clndr_cntx->infodispval)
            {
                mmi_hijri_get_hijri_date_str(
                    curr_cell_time, 
                    g_clndr_cntx->str_hijri_date1, 
                    g_clndr_cntx->str_hijri_date2);
            
                str_hijri_date1_len = mmi_ucs2strlen((CHAR*)g_clndr_cntx->str_hijri_date1);
                str_hijri_date2_len = mmi_ucs2strlen((CHAR*)g_clndr_cntx->str_hijri_date2);
                if (detail_info->detail_entry_number >= 1 && str_hijri_date1_len != 0)
                {
                    memcpy(
                        detail_info->detail_list[0].string,
                        (U8*)g_clndr_cntx->str_hijri_date1,
                        detail_info->detail_string_max_length);
                }
                if (detail_info->detail_entry_number >= 2 && str_hijri_date2_len != 0)
                {
                    memcpy(
                        detail_info->detail_list[1].string,
                        (U8*)g_clndr_cntx->str_hijri_date2,
                        detail_info->detail_string_max_length);
                }
            }
        }
    #endif /* __MMI_HIJRI_CALENDAR__ */
    }
    return 0;
}


#ifdef __MMI_CLNDR_EVENT_INFO__

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_set_info_box
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_set_info_box(mmi_clndr_cell_struct *curr_cell)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_clndr_cell_struct cell;
    CHAR temp_string[(CLNDR_INFO_BOX_COUNTER + 1) * ENCODING_LENGTH];
    srv_tdl_event_struct *pevent = NULL;
    U8 i;    
    mmi_cal_main_scrn_info *scrn_data;    

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memcpy(&cell, curr_cell, sizeof(mmi_clndr_cell_struct));
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);
    
    if (cell.date > 0)
    {
        for(i = 0; i < CLNDR_INFO_BOX_ROW; i++)
        {
            if (cell.today_list[i].event_id == 0xFFFFFFFF)
            {
                continue;
            }
			
		    if(cell.today_list[i].source_id == SRV_TDL_EVENT_SOURCE_LOCAL)
		 	{
				srv_tdl_get_cache(
					(void*)&pevent, 
					sizeof(srv_tdl_event_short_struct), 
					SRV_TDL_VCAL_EVENT,
					cell.today_list[i].event_id);
		 	}
			else
			{
				 pevent = (srv_tdl_event_struct *)OslMalloc(sizeof(srv_tdl_event_struct));	
				 srv_tdl_event_get(
					 pevent, 
					 sizeof(srv_tdl_event_struct), 
					 cell.today_list[i].source_id, 
					 cell.today_list[i].event_id);
			}
                    
            g_clndr_cntx->info_box_icon[i] = IMG_CLNDR_TASK_CLOCK;
            mmi_tdl_get_time_string(
                pevent,
                SRV_TDL_VCAL_EVENT,
                (MYTIME *)&scrn_data->highlight_time,
                (CHAR*)g_clndr_cntx->info_box_text[i],
                (CLNDR_TIME_STRING_LENGTH + 1) * ENCODING_LENGTH);

            kal_wsprintf((WCHAR*)temp_string, "(%d-%d)", cell.date, i + 1);
            mmi_ucs2ncat(
                (CHAR*)g_clndr_cntx->info_box_text[i], 
                temp_string, 
                CLNDR_INFO_BOX_COUNTER + 1);
            mmi_ucs2ncat(
                (CHAR*)g_clndr_cntx->info_box_text[i], 
                (CHAR*)pevent->subject, 
                MAX_TODO_NOTE_LEN);   
            g_clndr_cntx->info_box_icon[i] = cell.icon;
			
			if(cell.today_list[i].source_id != SRV_TDL_EVENT_SOURCE_LOCAL)
			{
			    OslMfree(pevent);
			}
        }
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_event_constructor
 * DESCRIPTION
 *  This API construct event data.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static S32 mmi_clndr_event_constructor(
                    gui_calendar_type_enum type,
                    applib_time_struct cell_time,
                    applib_time_struct time_interval,
                    wgui_cat83_event_struct *event_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 entry_number = CLNDR_INFO_BOX_ROW;
    srv_tdl_search_filter_struct search_info;    
    MYTIME cell_time_begin, cell_time_end;
    mmi_clndr_cell_struct curr_cell;
    U32 i,j=0;
    srv_tdl_event_struct *pevent;
    U32 day_index;
    MMI_BOOL ret;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	for (i = 0; i < CLNDR_INFO_BOX_ROW; i++)
    {
        g_clndr_cntx->info_box_icon[i] = 0;
		memset(g_clndr_cntx->info_box_text[i], 0, CLNDR_MAX_INFO_BOX_LEN);
    }
	
    if (GUI_CALENDAR_TYPE_MONTH == type)
    {
        mmi_clndr_set_info_box(&(g_clndr_cntx->monthly_cell_info[cell_time.nDay]));
    }
    else if (GUI_CALENDAR_TYPE_WEEK == type)
    {
        memset(&curr_cell, 0, sizeof(mmi_clndr_cell_struct));
        memset(curr_cell.today_list, 0xFF, sizeof(srv_tdl_event_id_struct) * CLNDR_INFO_BOX_ROW);
        memcpy(&cell_time_begin, &cell_time, sizeof(MYTIME));
        applib_dt_increase_time(
                    (applib_time_struct*)&cell_time_begin,
                    (applib_time_struct*)&time_interval,
                    (applib_time_struct*)&cell_time_end);

        day_index = cell_time_begin.DayIndex;

		search_info.type = SRV_TDL_SEARCH_TYPE_DURATION;
		memcpy(&search_info.u.duration[0], &cell_time_begin, sizeof(MYTIME));
		memcpy(&search_info.u.duration[1], &cell_time_end, sizeof(MYTIME));
		

        if(g_tdl_cntx.weekly_search[day_index].state == MMI_CAL_EVENT_SEARCH_DONE_OK)
        {
			for(i = 0; i < g_tdl_cntx.weekly_search[day_index].event_cnt; i++)	
			{
				if(g_tdl_cntx.weekly_search[day_index].event_buf[i].source_id == SRV_TDL_EVENT_SOURCE_LOCAL)
			 	{
					srv_tdl_get_cache(
						(void*)&pevent, 
						sizeof(srv_tdl_event_short_struct), 
						SRV_TDL_VCAL_EVENT,
						g_tdl_cntx.weekly_search[day_index].event_buf[i].event_id);
			 	}
				else
				{
					 pevent = (srv_tdl_event_struct *)OslMalloc(sizeof(srv_tdl_event_struct));	
					 srv_tdl_event_get(
						 pevent, 
						 sizeof(srv_tdl_event_struct), 
						 g_tdl_cntx.weekly_search[day_index].event_buf[i].source_id, 
						 g_tdl_cntx.weekly_search[day_index].event_buf[i].event_id);
				}

			    ret = srv_tdl_search_default_check(pevent, SRV_TDL_VCAL_EVENT, search_info);
				if(ret)
				{
				   curr_cell.icon = IMG_CLNDR_ICON_REMINDER;
		           if(j < CLNDR_INFO_BOX_ROW)
		           {
		               curr_cell.today_list[j].event_id = g_tdl_cntx.weekly_search[day_index].event_buf[i].event_id;
		               curr_cell.today_list[j].source_id = g_tdl_cntx.weekly_search[day_index].event_buf[i].source_id;
		               j++;
		           }
				   curr_cell.date++;	 
				}
				if(g_tdl_cntx.weekly_search[day_index].event_buf[i].source_id != SRV_TDL_EVENT_SOURCE_LOCAL)
				{
				    OslMfree(pevent);
				}
			}
			
        }
        mmi_clndr_set_info_box(&curr_cell);
    }
     
    if (event_info->event_entry_number < entry_number)
    {
        entry_number = event_info->event_entry_number;
    }
    for (i = 0; i < entry_number; i++)
    {
        memcpy((event_info->entry_list[i].string),g_clndr_cntx->info_box_text[i],event_info->event_string_max_length);
        event_info->entry_list[i].icon = g_clndr_cntx->info_box_icon[i];
    }
    return entry_number;
}
#endif /* __MMI_CLNDR_EVENT_INFO__ */


#ifdef __MMI_BTD_BOX_UI_STYLE__

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_goto_date_picker_save
 * DESCRIPTION
 *  Save data from picker
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_goto_date_picker_save(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    gui_picker_date_struct *picker_date;
    U8* picker_data = gui_picker_get_user_data();
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ASSERT(picker_data != NULL);
    
    picker_date = (gui_picker_date_struct*)picker_data;
    g_mmi_clndr_cntx.year = picker_date->current_year;
    g_mmi_clndr_cntx.month = picker_date->month;
    g_mmi_clndr_cntx.day = picker_date->day;

    GoBackHistory();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_goto_date_entry_picker
 * DESCRIPTION
 *  Enter the picker for date/time setting
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_goto_date_entry_picker(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    gui_picker_header *header;
    gui_picker_date_struct *picker_date;
    U8 picker_data[GUI_PICKER_STRUCT_MAX_SIZE] = {0};
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    header = (gui_picker_header*)picker_data;
    header->style = GUI_PICKER_STYLE_COSMOS;
    header->type = GUI_PICKER_TYPE_DATE;
    
    picker_date = (gui_picker_date_struct *)picker_data;
    picker_date->display_row = 5;
    picker_date->min_year = 1970;  //this should bigger than g_date_year_min in wgui_datetime.c
    picker_date->max_year = 2030;  //this should smaller than g_date_year_max in wgui_datetime.c
    picker_date->current_year = g_mmi_clndr_cntx.year;
    picker_date->month = g_mmi_clndr_cntx.month;
    picker_date->day = g_mmi_clndr_cntx.day;
            
    wgui_picker_entry((U8*)picker_data, GRP_ID_CAL_JUMP, mmi_clndr_goto_date_picker_save);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_goto_date_update
 * DESCRIPTION
 *  update cui values
 * PARAMETERS
 *  is_set
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_goto_date_update(MMI_BOOL is_set)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    memset(g_mmi_clndr_cntx.date_text, 0, 80);

    if (!is_set)
    {
        mmi_cal_main_scrn_info *scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                               GRP_ID_CAL_MAIN, 
                                                               SCR_ID_CLNDR_SCREEN);
        MMI_ASSERT(scrn_data != NULL);
        g_mmi_clndr_cntx.year = scrn_data->highlight_time.nYear;
        g_mmi_clndr_cntx.month = scrn_data->highlight_time.nMonth;
        g_mmi_clndr_cntx.day = scrn_data->highlight_time.nDay;
    }
    
    kal_wsprintf((WCHAR*)g_mmi_clndr_cntx.date_text, "%04d . %02d . %02d", g_mmi_clndr_cntx.year, g_mmi_clndr_cntx.month, g_mmi_clndr_cntx.day);
    cui_inline_set_value(mmi_clndr_jump_child_gid, 
                         (CUI_INLINE_ITEM_ID_BASE + 1),
                         &g_mmi_clndr_cntx.date_text);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_goto_date_option_group_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  evt    
 * RETURNS
 *  mmi_ret
 *****************************************************************************/
static mmi_ret mmi_clndr_goto_date_option_group_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt = (cui_menu_event_struct*)evt;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(menu_evt->evt_id)
    {
        case EVT_ID_CUI_MENU_ITEM_SELECT:
        {
            if (menu_evt->highlighted_menu_id == MENU_ID_CLNDR_GOTO_TODAY_OPTION_EDIT)
            {
                mmi_clndr_goto_date_entry_picker();
            }
            else if (menu_evt->highlighted_menu_id == MENU_ID_CLNDR_GOTO_TODAY_OPTION_GOTO)
            {
                mmi_frm_group_close(mmi_frm_group_get_active_id());
                cui_inline_lsk_function();
            }
            break;
        }
            
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
            cui_menu_close(mmi_frm_group_get_active_id());
            //mmi_frm_group_close(mmi_frm_group_get_active_id());
            break;

        default:
            break;
    }
    return MMI_RET_OK;        
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_goto_date_entry_option
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_goto_date_entry_option(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_menu_id menu_id;
    mmi_id group_id, inline_id;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    group_id = mmi_frm_group_create_ex(
                                        GRP_ID_CAL_JUMP,
                                        GRP_ID_AUTO_GEN,
                                        mmi_clndr_goto_date_option_group_proc,
                                        NULL,
                                        MMI_FRM_NODE_SMART_CLOSE_FLAG);

    menu_id = MENU_ID_CLNDR_GOTO_TODAY_OPTION;

    inline_id = cui_menu_create(
                                group_id,
                                CUI_MENU_SRC_TYPE_RESOURCE,
                                CUI_MENU_TYPE_OPTION,
                                menu_id,
                                MMI_TRUE,
                                NULL);
    
    cui_menu_run(inline_id);
}


#endif /* __MMI_BTD_BOX_UI_STYLE__ */


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_main_group_proc
 * DESCRIPTION
 *  Exit function of task view all application
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_clndr_main_group_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    mmi_cal_group_data_struct *cal_group_cntx = evt->user_data;
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)    
    mmi_confirm_property_struct arg;
    cui_event_inline_notify_struct *inline_evt;    
#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
        case EVT_ID_CUI_INLINE_SUBMIT:
        {        
            mmi_confirm_property_init(&arg, CNFM_TYPE_YESNO);
            arg.parent_id = cal_group_cntx->group_id;
            arg.callback = (mmi_proc_func)mmi_clndr_comfirm_proc;
            
            mmi_clndr_confirm_user_data_init(&g_clndr_confirm_user_data);
            g_clndr_confirm_user_data.sg_id = GRP_ID_CAL_MAIN;
            g_clndr_confirm_user_data.LSK_function = mmi_clndr_save_settings;
            g_clndr_confirm_user_data.RSK_function = mmi_clndr_go_to_options;
            
            arg.user_tag = (void*)&g_clndr_confirm_user_data;
            mmi_confirm_display_ext(
                STR_GLOBAL_SAVE_ASK,
                MMI_EVENT_QUERY,
                &arg);
            break;
        }
        case EVT_ID_CUI_INLINE_NOTIFY:
            inline_evt = (cui_event_inline_notify_struct *)evt;
            if (inline_evt->event_type == CUI_INLINE_NOTIFY_HIGHLIGHT_ITEM ||
                inline_evt->event_type == CUI_INLINE_NOTIFY_SELECT_FOCUS_CHANGED)
            {
                cui_inline_get_value(
                    mmi_clndr_setting_child_gid,
                    CUI_INLINE_ITEM_ID_BASE + 1,
                    &g_clndr_cntx->CurrHighlightCalendar);
                if (!IsChineseSet() && g_clndr_cntx->CurrHighlightCalendar == MMI_CLNDR_ENGLISH)        
                {
                    cui_inline_set_item_attributes(mmi_clndr_setting_child_gid, 
                                       CUI_INLINE_ITEM_ID_BASE + 3,
                                       CUI_INLINE_SET_ATTRIBUTE,
                                       CUI_INLINE_ITEM_DISABLE);
                }
                else
                {
                    cui_inline_set_item_attributes(mmi_clndr_setting_child_gid, 
                                       CUI_INLINE_ITEM_ID_BASE + 3,
                                       CUI_INLINE_RESET_ATTRIBUTE,
                                       CUI_INLINE_ITEM_DISABLE);
                }
                #ifdef __MMI_MAINLCD_96X64__
                if(inline_evt->item_id == (CUI_INLINE_ITEM_ID_BASE + 1))
            	{
            		cui_inline_set_title_string(mmi_clndr_setting_child_gid, get_string(cui_cal_settings_caption[0].string_id));
            	}
            	if(inline_evt->item_id == (CUI_INLINE_ITEM_ID_BASE + 3))
            	{
            		cui_inline_set_title_string(mmi_clndr_setting_child_gid, get_string(cui_cal_settings_caption[1].string_id));
            	}
                #endif /* __MMI_MAINLCD_96X64__ */
            }
            break;
        case EVT_ID_POPUP_QUIT:
        {
            cui_inline_close(mmi_clndr_setting_child_gid);
            break;
        }
        case EVT_ID_CUI_INLINE_ABORT:
            cui_inline_close(mmi_clndr_setting_child_gid);
        break;
#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */
        case EVT_ID_GROUP_DEINIT:
        {
            OslMfree(cal_group_cntx);
        #ifdef __MMI_CALENDAR_EVENT__
            mmi_tdl_set_type((srv_tdl_vcal_enum)MMI_TDL_VCAL_TYPE_TOTAL);
        #endif
        #ifdef __MMI_AP_DCM_CLNDR__
            mmi_ap_post_dcm_unload_evt(DYNAMIC_CODE_COMPRESS_CALENDAR);
        #endif
            break;
        }   
    #ifdef __MMI_VCALENDAR__
        case EVT_ID_CUI_VCAL_FAIL:
        case EVT_ID_CUI_VCAL_SUCCESS:
        case EVT_ID_CUI_VCAL_FAIL_NOT_ENOUGH_MEMORY:
        case EVT_ID_CUI_VCAL_USER_CANCEL:
        {
            mmi_group_event_struct *evt_send = (mmi_group_event_struct*)evt;
            mmi_frm_group_close(evt_send->sender_id);
            break;
        }
    #endif
    #ifdef __MMI_CALENDAR_EVENT__
        case EVT_ID_TDL_SAVE_SUCCESS:
        case EVT_ID_TDL_SAVE_FAIL:
        case EVT_ID_TDL_SAVE_CANCEL:
        {
            cui_tdl_save_result_struct *tdl_save_evt = (cui_tdl_save_result_struct*)evt;
            cui_cal_save_close(tdl_save_evt->sender_id);
            break;
        }  
    #endif /* __MMI_CALENDAR_EVENT__ */
        default:
            break;
    }
 
    return MMI_RET_OK;    
}

#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
//add by xl
void load_calendar_data()
{
 /*----------------------------------------------------------------*/
 /* Local Variables                                                */
 /*----------------------------------------------------------------*/
    applib_time_struct time_interval = {0};

	time_interval.nDay = 1;
    
 	if (0 == swatch_calendar_cell.highlight_index)
 	{
 	    //0->1: 往后移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].nYear = swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].nMonth = swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].nDay = swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay + 1;
		//星期往后移一天，也是逻辑上更新；
		//swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].DayIndex = swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex + 1;
		
        applib_dt_increase_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
						        (applib_time_struct*)&time_interval , 
						        (applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1]);
		if(swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].nYear > CLNDR_END_YEAR)
		{
		    swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].nYear = CLNDR_START_YEAR;
			swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 1].DayIndex = 
				   DOW(swatch_calendar_show_buffer[1].nYear, swatch_calendar_show_buffer[1].nMonth, swatch_calendar_show_buffer[1].nDay);
		}
		
        //0->2: 往前移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[2].nYear= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[2].nMonth= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[2].nDay= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay - 1;
		//swatch_calendar_show_buffer[2].DayIndex= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex + 1;
		applib_dt_decrease_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
								(applib_time_struct*)&time_interval , 
								(applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 2]);
		if(swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 2].nYear < CLNDR_START_YEAR)
		{
			swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 2].nYear = CLNDR_END_YEAR;
			swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index + 2].DayIndex = 
				DOW(swatch_calendar_show_buffer[2].nYear, swatch_calendar_show_buffer[2].nMonth, swatch_calendar_show_buffer[2].nDay);
		}

 	}
	else if (1 == swatch_calendar_cell.highlight_index) 
	{
	    //1->0: 往前移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[0].nYear= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[0].nMonth= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[0].nDay= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay - 1;
		//swatch_calendar_show_buffer[0].DayIndex= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex - 1;
		applib_dt_decrease_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
								(applib_time_struct*)&time_interval , 
								(applib_time_struct*)&swatch_calendar_show_buffer[0]);
        if(swatch_calendar_show_buffer[0].nYear < CLNDR_START_YEAR)
        {
			swatch_calendar_show_buffer[0].nYear = CLNDR_END_YEAR;
			swatch_calendar_show_buffer[0].DayIndex = 
				DOW(swatch_calendar_show_buffer[0].nYear, swatch_calendar_show_buffer[0].nMonth, swatch_calendar_show_buffer[0].nDay);
        }

		//1->2: 往后移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[2].nYear= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[2].nMonth= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[2].nDay= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay + 1;
		//swatch_calendar_show_buffer[2].DayIndex= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex + 1;
		applib_dt_increase_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
						        (applib_time_struct*)&time_interval , 
						        (applib_time_struct*)&swatch_calendar_show_buffer[2]);
        if(swatch_calendar_show_buffer[2].nYear > CLNDR_END_YEAR)
        {
		    swatch_calendar_show_buffer[2].nYear = CLNDR_START_YEAR;
			swatch_calendar_show_buffer[2].DayIndex = 
				DOW(swatch_calendar_show_buffer[2].nYear, swatch_calendar_show_buffer[2].nMonth, swatch_calendar_show_buffer[2].nDay);
        }
	}

	else if (2 == swatch_calendar_cell.highlight_index)
	{
	    //2->0:往后移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[0].nYear= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[0].nMonth= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[0].nDay= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay + 1;
		//swatch_calendar_show_buffer[0].DayIndex= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex + 1;
		applib_dt_increase_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
						        (applib_time_struct*)&time_interval , 
						        (applib_time_struct*)&swatch_calendar_show_buffer[0]);
		if(swatch_calendar_show_buffer[0].nYear > CLNDR_END_YEAR)
		{
		    swatch_calendar_show_buffer[0].nYear = CLNDR_START_YEAR;
			swatch_calendar_show_buffer[0].DayIndex = 
				DOW(swatch_calendar_show_buffer[0].nYear, swatch_calendar_show_buffer[0].nMonth, swatch_calendar_show_buffer[0].nDay);
		}

        //2->1: 往前移一天，year/month/day都要逻辑上更新；
		//swatch_calendar_show_buffer[1].nYear= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nYear;
		//swatch_calendar_show_buffer[1].nMonth= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nMonth;
		//swatch_calendar_show_buffer[1].nDay= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].nDay - 1;
		//swatch_calendar_show_buffer[1].DayIndex= swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index].DayIndex - 1;
		applib_dt_decrease_time((applib_time_struct*)&swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], 
								(applib_time_struct*)&time_interval , 
								(applib_time_struct*)&swatch_calendar_show_buffer[1]);
		if(swatch_calendar_show_buffer[1].nYear < CLNDR_START_YEAR)
		{
			swatch_calendar_show_buffer[1].nYear = CLNDR_END_YEAR;
			swatch_calendar_show_buffer[1].DayIndex = 
				DOW(swatch_calendar_show_buffer[1].nYear, swatch_calendar_show_buffer[1].nMonth, swatch_calendar_show_buffer[1].nDay);
		}
	}

	//记录滑动后，当前正在查看的时间；
	memcpy(&g_swatch_calendar_current_view_time, &swatch_calendar_show_buffer[swatch_calendar_cell.highlight_index], sizeof(applib_time_struct));
}
static MMI_BOOL mmi_swatch_calendar_check_grp_is_calendar()
{
    MMI_ID current_active_grp_id = GRP_ID_INVALID;
	MMI_ID current_active_scrn_id = SCR_ID_INVALID;

	
    mmi_frm_get_active_scrn_id(&current_active_grp_id ,&current_active_scrn_id);

	if (current_active_grp_id == GRP_ID_CAL_MAIN)
		return MMI_TRUE;
	else
		return MMI_FALSE;
}
static void mmi_swatch_calendar_cell_long_tap_handle(mmi_pen_point_struct pos)
{
    return;
}

static MMI_BOOL mmi_swatch_calendar_pen_down_hdlr(mmi_pen_point_struct down)
{
  S32 str_w, str_h;
	WCHAR event[6] = {'E','v','e','n','t','\0'};
	WCHAR month_view[11] = {'M','o','n','t','h',' ','v','i','e','w','\0'};
	color c = {255, 255, 255 ,100};
	WCHAR month_view_chn[11] = {0};

    U8 data;

	data = srv_setting_get_language();
	wcscpy(month_view_chn, (WCHAR*)GetString(ORGANIZER_MENU_CALENDER_STRINGID));
	if(mmi_swatch_calendar_check_grp_is_calendar() == MMI_FALSE)
		return;
	/**********************************code body***************************************/
	#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__   
			if(0<=down.x && down.x<120 && 200<=down.y && down.y<= 240)//50->40
			{
			    /*gdi_layer_get_base_handle(&swatch_calendar_cell.base_layer);

				gdi_layer_push_and_set_active(swatch_calendar_cell.base_layer);

				gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);

				gdi_layer_clear(GDI_COLOR_BLACK);

				//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_WHITE);//height为50的矩形区域绘制；
				gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_BLUE);
				//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);
				
				gdi_layer_pop_and_restore_active();
				
				//view all draw hilight;
				mmi_swatch_draw_view_all_highlight();*/

				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);
				
                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    //gdi_draw_solid_rect(0, LCD_HEIGHT-50+1, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_RED);
			    gdi_draw_solid_rect(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_BUTTON);

				//LSK:Event;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c);
				gui_measure_string((UI_string_type) event, &str_w, &str_h); 
				gui_move_text_cursor(0+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				//gui_move_text_cursor(0, 190);
				gui_print_text((UI_string_type) event);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);
			}			
			//else if(120<down.x<=240 && 120<up.x<=240)
			else if(120<down.x && down.x<=240 && 200<=down.y && down.y<= 240)//50->40
			{
					/*gdi_layer_get_base_handle(&swatch_calendar_cell.base_layer);
	
					gdi_layer_push_and_set_active(swatch_calendar_cell.base_layer);
	
					gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
	
					gdi_layer_clear(GDI_COLOR_BLACK);
	
					//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_WHITE);//height为50的矩形区域绘制；
					//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_BLUE);
					gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_BLUE);
					
					gdi_layer_pop_and_restore_active(); 	
				//monthly view draw hilight;
				mmi_swatch_draw_monthly_view_highlight();*/
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);

                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-40+1, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_BUTTON);

				//RSK:Month View;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c);
				gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
				gui_move_text_cursor(LCD_WIDTH/2+1+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				gui_print_text((UI_string_type) month_view);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
			}	
	   #else
	        //remove event, only handle the month view;
	     #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	        if(0<=down.x && down.x<=240 && 200<=down.y && down.y<= 240)//50->40
			{					
				//monthly view draw hilight;
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);

                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    gdi_draw_solid_rect(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_BUTTON);

				//Whole:Month View;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c);
				if(data == 0)
				gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
				else
					gui_measure_string((UI_string_type) month_view_chn, &str_w, &str_h); 
				gui_move_text_cursor((LCD_WIDTH - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				if(data == 0)
				gui_print_text((UI_string_type) month_view);
				else
					gui_print_text((UI_string_type) month_view_chn);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
			}	
		 #else
		    //new style;(96,176) 57x57
		  #if defined(__MMI_MAINLCD_240X240__) 
		    if(96<=down.x && down.x<= 96 + 57 && 176<=down.y && down.y<= 176 + 57)
			{					
				//monthly view draw hilight;
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(96 , 176, 96 + 57, 176 + 57);

                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BG);
				
			    gdi_image_draw_id(96, 176, IMG_CLNDR_LAUNCH_MONTH_VIEW_PRESSED);//(96.176)
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(96 , 176, 96 + 57, 176 + 57);
				
			}	
          #elif defined(__MMI_MAINLCD_320X320__)
		    //for 320x320;
		    if(96 * 4/3 + (57*4/3 - 57)/2 - 5<=down.x && down.x<= 96 * 4/3 + (57*4/3 - 57)/2 - 5 + 57 
			   && 176 * 4/3 + (57*4/3 - 57)/2 + 10<=down.y && down.y<= 176 * 4/3 + (57*4/3 - 57)/2 + 10 + 57)
			{					
				//monthly view draw hilight;
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(96 * 4/3 + (57*4/3 - 57)/2 - 5, 
					                        176 * 4/3 + (57*4/3 - 57)/2 + 10, 
					                        96 * 4/3 + (57*4/3 - 57)/2 - 5 + 57, 
					                        176 * 4/3 + (57*4/3 - 57)/2 + 10 + 57);

                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BG);
				
			    gdi_image_draw_id(96 * 4/3 + (57*4/3 - 57)/2 - 5, 176 * 4/3 + (57*4/3 - 57)/2 + 10, IMG_CLNDR_LAUNCH_MONTH_VIEW_PRESSED);//
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(96 * 4/3 + (57*4/3 - 57)/2  - 5, 
					                        176 * 4/3 + (57*4/3 - 57)/2 + 10, 
					                        96 * 4/3 + (57*4/3 - 57)/2  - 5 + 57, 
					                        176 * 4/3 + (57*4/3 - 57)/2 + 10 + 57);
				
			}	
		   #endif
		 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	   #endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/
			else if(170<down.x && down.x<=170+26 && 20<=down.y && down.y<= 20+26)
			{
				//details draw hilight;
				
			}
			else//pos.x==120，正中间的分隔线位置；以及无click处理的区域；
			{
				//trace;
			}

}
static MMI_BOOL mmi_swatch_calendar_pen_move_hdlr(mmi_pen_point_struct down, mmi_pen_point_struct move_pos)
{
   S32 str_w, str_h;
	WCHAR event[6] = {'E','v','e','n','t','\0'};
	WCHAR month_view[11] = {'M','o','n','t','h',' ','v','i','e','w','\0'};
	color c_hilight = {255, 255, 255 ,100};
	color c = {52, 149, 165 ,100};
	WCHAR month_view_chn[11] = {0};
	
	U8 data;

	data = srv_setting_get_language();
	wcscpy(month_view_chn, (WCHAR*)GetString(ORGANIZER_MENU_CALENDER_STRINGID));
    if(mmi_swatch_calendar_check_grp_is_calendar() == MMI_FALSE)
		return;
	/**********************************************code body***************************************************/
        //在非3个Icon的区域，无需要处理pen down/move的hilight\non_hilight效果；
        /*if(!((0<=down.x && down.x<=240 && 190<=down.y && down.y<=240)|| 
			(170<down.x && down.x<=170+26 && 20<=down.y && down.y<= 20+26)))*/

	    //在非底部2个Icon的区域 pen down，无需要处理pen down/move的hilight\non_hilight效果；
	  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
		if(!((0<=down.x && down.x<=240 && 200<=down.y && down.y<=240)))	//50->40
		   return;
	  #else
	    //new style;
	   #if defined(__MMI_MAINLCD_240X240__) 
	    if(!((0<=down.x && down.x<=240 && 176<=down.y && down.y<=240)))//(96,176)
	   #elif defined(__MMI_MAINLCD_320X320__)
		if(!((0<=down.x && down.x<=LCD_WIDTH && 176 * 4/3 + (57*4/3 - 57)/2<=down.y && down.y<=LCD_HEIGHT)))//for 320x320;
	   #endif
		   return;
	  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
			
	#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__   		
        if(0<=move_pos.x && move_pos.x<120 && 200<=move_pos.y && move_pos.y<= 240) //50->40
	    {
	        //pen move时，移到指定区域，view all draw hilight;
			
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);
				
                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    gdi_draw_solid_rect(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_BUTTON);

				//LSK:Event hilight case;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c_hilight);
				gui_measure_string((UI_string_type) event, &str_w, &str_h); 
				gui_move_text_cursor(0+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				gui_print_text((UI_string_type) event);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);		
				
	    }	
		else //50->40
		{
		    //pen move时，移出指定区域，view all draw non_hilight;
		        gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(0, LCD_HEIGHT-40, LCD_WIDTH/2 - 1, LCD_HEIGHT);
				
                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    //gdi_draw_solid_rect(0, LCD_HEIGHT-50+1, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_GRAY);
				//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH/2 +1, LCD_HEIGHT, GDI_COLOR_BUTTON);
				
				//LSK:Event non_hilight case;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c);
				gui_measure_string((UI_string_type) event, &str_w, &str_h); 
				gui_move_text_cursor(0+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				gui_print_text((UI_string_type) event);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(0, LCD_HEIGHT-40, LCD_WIDTH/2 - 1, LCD_HEIGHT);	
		}
	#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/
		
	#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__  
		if(120<move_pos.x && move_pos.x<=240 && 200<=move_pos.y && move_pos.y<= 240) //50->40
		{
		    //pen move时，移到指定区域，monthly view draw hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_BUTTON);

								//RSK:Month View hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c_hilight);
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
								gui_move_text_cursor(LCD_WIDTH/2+1+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
								gui_print_text((UI_string_type) month_view);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
								
		}
		else //50->40
		{
		    //pen move时，移到指定区域，monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50+1, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);
								//RSK:Month View non_hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c);
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
								gui_move_text_cursor(LCD_WIDTH/2+1+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
								gui_print_text((UI_string_type) month_view);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);		    
		}
	#else
	  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	    if(0<=move_pos.x && move_pos.x<=240 && 200<=move_pos.y && move_pos.y<= 240) 
		{
		    //pen move时，移到指定区域，monthly view draw hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								gdi_draw_solid_rect(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_BUTTON);

								//whole: Month View hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c_hilight);
			if(data == 0)
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
			else
				gui_measure_string((UI_string_type) month_view_chn, &str_w, &str_h); 
								gui_move_text_cursor((LCD_WIDTH - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
			if(data == 0)
								gui_print_text((UI_string_type) month_view);
			else
				gui_print_text((UI_string_type) month_view_chn);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
								
		}
		else //50->40
		{
		    //pen move时，移到指定区域，monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50+1, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);
								//RSK:Month View non_hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c);
			if(data == 0)
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
			else
				gui_measure_string((UI_string_type) month_view_chn, &str_w, &str_h); 
								gui_move_text_cursor((LCD_WIDTH - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
			if(data == 0)
								gui_print_text((UI_string_type) month_view);
			else
				gui_print_text((UI_string_type) month_view_chn);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);		    
		}
	  #else
	    //new style;(96,176)
	   #if defined(__MMI_MAINLCD_240X240__) 
	    if(96<=move_pos.x && move_pos.x<=96+57 && 176<=move_pos.y && move_pos.y<= 176+57) 
		{
		    //pen move时，移到指定区域，monthly view draw hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(96 , 96+57, 176, 176+57);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BG);

								gdi_image_draw_id(96, 176, IMG_CLNDR_LAUNCH_MONTH_VIEW_PRESSED);//(96.176)
								
								gdi_layer_pop_clip();		
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(96 , 96+57, 176, 176+57);
								
		}
		else
		{
		    //pen move时，移到非指定区域，monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(96 , 96+57, 176, 176+57);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BG);

								gdi_image_draw_id(96, 176, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);//(96.176)
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(96 , 96+57, 176, 176+57);		    
		}
	   #elif defined(__MMI_MAINLCD_320X320__)
	    //for 320x320;
	    if(96* 4/3 + (57*4/3 - 57)/2 -5<=move_pos.x && move_pos.x<=96* 4/3 + (57*4/3 - 57)/2 -5 + 57 
			&& 176* 4/3 + (57*4/3 - 57)/2 + 10<=move_pos.y && move_pos.y<= 176* 4/3 + (57*4/3 - 57)/2 + 10 + 57) 
		{
		    //pen move时，移到指定区域，monthly view draw hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(96* 4/3 + (57*4/3 - 57)/2 -5, 															
															176* 4/3 + (57*4/3 - 57)/2 + 10, 
															96* 4/3 + (57*4/3 - 57)/2 -5 +57, 
															176* 4/3 + (57*4/3 - 57)/2 + 10+57);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BG);

								gdi_image_draw_id(96* 4/3 + (57*4/3 - 57)/2 - 5, 176* 4/3 + (57*4/3 - 57)/2 + 10, IMG_CLNDR_LAUNCH_MONTH_VIEW_PRESSED);//
								
								gdi_layer_pop_clip();		
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(96* 4/3 + (57*4/3 - 57)/2 -5, 															
														176* 4/3 + (57*4/3 - 57)/2 + 10, 
														96* 4/3 + (57*4/3 - 57)/2 -5 +57, 
														176* 4/3 + (57*4/3 - 57)/2 + 10+57);
								
		}
		else
		{
		    //pen move时，移到非指定区域，monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(96* 4/3 + (57*4/3 - 57)/2 -5, 															
															176* 4/3 + (57*4/3 - 57)/2 + 10, 
															96* 4/3 + (57*4/3 - 57)/2 -5 +57, 
															176* 4/3 + (57*4/3 - 57)/2 + 10+57);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BG);

								gdi_image_draw_id(96* 4/3 + (57*4/3 - 57)/2 - 5, 176* 4/3 + (57*4/3 - 57)/2 + 10, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);//
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(96* 4/3 + (57*4/3 - 57)/2 -5, 															
														176* 4/3 + (57*4/3 - 57)/2 + 10, 
														96* 4/3 + (57*4/3 - 57)/2 -5 +57, 
														176* 4/3 + (57*4/3 - 57)/2 + 10+57);		    
		}
	   #endif
	  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/
		
		if(170<move_pos.x && move_pos.x<=170+26 && 20<=move_pos.y && move_pos.y<= 20+26)
		{
		    //details;
		    
		}
		else//pos.x==120，正中间的分隔线位置；以及无click处理的区域；
		{
		    //trace;
		} 
}
static MMI_BOOL mmi_swatch_calendar_click_handle(mmi_pen_point_struct down, mmi_pen_point_struct up)
{
      S32 str_w, str_h;
	WCHAR event[6] = {'E','v','e','n','t','\0'};
	WCHAR month_view[11] = {'M','o','n','t','h',' ','v','i','e','w','\0'};
	color c_hilight = {255, 255, 255 ,100};
	color c = {52, 149, 165 ,100};
	WCHAR month_view_chn[11] = {0};
	
	U8 data;

	data = srv_setting_get_language();
	wcscpy(month_view_chn, (WCHAR*)GetString(ORGANIZER_MENU_CALENDER_STRINGID));
	/****************************************code body***********************************************/
    if(mmi_swatch_calendar_check_grp_is_calendar() == MMI_FALSE)
		return;
     //0<=pos.x<=240       0<=pos.y<=190 = 240 -50;
     #ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
		//滑动的区域，需要指定精确的x/y 坐标，但是pen down->up evt 的处理区域；
	    //if(0<=down.x<120 && 0<=up.x<120)
	 #ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__
	    if(0<=up.x && up.x<120 && 200<=up.y && up.y<= 240) //50->40
	    {
	        //view all draw non_hilight;			
				gdi_layer_lock_frame_buffer();
			    gdi_layer_push_and_set_clip(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);
				
                gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
				gdi_layer_clear(GDI_COLOR_BLACK);
			    //gdi_draw_solid_rect(0, LCD_HEIGHT-50+1, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_GRAY);
				//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_GRAY);
				//LSK:Event non_hilight case;
				gui_set_font(&MMI_large_font); 
				gui_set_text_color(c);
				gui_measure_string((UI_string_type) event, &str_w, &str_h); 
				gui_move_text_cursor(0+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
				gui_print_text((UI_string_type) event);
			    
			    gdi_layer_pop_clip();

			    gdi_layer_unlock_frame_buffer();
			    gdi_layer_blt_previous(0, LCD_HEIGHT-40, LCD_WIDTH/2 -1, LCD_HEIGHT);		
				
			 //只有原本pen down pos也在该区域内，才会view all;	
			 if(0<=down.x && down.x<120 && 190<=down.y && down.y<= 240)
			 {
			     gdi_layer_clear(GDI_COLOR_BLACK);
	           mmi_clndr_entry_all_list();
			 }
			 
	    }	
		
		//else if(120<down.x<=240 && 120<up.x<=240)
		else if(120<up.x && up.x<=240 && 190<=up.y && up.y<= 240) //50->40
		{
		    //monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50+1, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);
								//RSK:Month View non_hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c);
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
								gui_move_text_cursor(LCD_WIDTH/2+1+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
								gui_print_text((UI_string_type) month_view);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(LCD_WIDTH/2+1 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);

			
			
		    //monthly view;
		    if(120<down.x && down.x<=240 && 190<=down.y && down.y<= 240)
		    	mmi_swatch_clndr_entry_monthly_view();
			
		}	
	 #else
	  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	    if(0<=up.x && up.x<=240 && 190<=up.y && up.y<= 240) //50->40
		{
		    //monthly view draw non_hilight;
								gdi_layer_lock_frame_buffer();
								gdi_layer_push_and_set_clip(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);
				
								gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
								gdi_layer_clear(GDI_COLOR_BLACK);
								//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50+1, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);
								//RSK:Month View non_hilight case;
								gui_set_font(&MMI_large_font); 
								gui_set_text_color(c);
			if(data == 0)
								gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
			else
				gui_measure_string((UI_string_type) month_view_chn, &str_w, &str_h); 
								gui_move_text_cursor((LCD_WIDTH - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);
			if(data == 0)
								gui_print_text((UI_string_type) month_view);
			else
				gui_print_text((UI_string_type) month_view_chn);
								
								gdi_layer_pop_clip();
				
								gdi_layer_unlock_frame_buffer();
								gdi_layer_blt_previous(0 , LCD_HEIGHT-40, LCD_WIDTH, LCD_HEIGHT);

			
			
		    //monthly view;
		    if(0<=down.x && down.x<=240 && 190<=down.y && down.y<= 240)
		    	mmi_swatch_clndr_entry_monthly_view();
			
		}
	  #else
	    //new style;
	   #if defined(__MMI_MAINLCD_240X240__) 
	    if(96<=up.x && up.x<=96+57 && 176<=up.y && up.y<= 176+57) 
	   #elif defined(__MMI_MAINLCD_320X320__)
	    //for 320x320;
	    if(96 * 4/3 + (57*4/3 - 57)/2 -5<=up.x && up.x<=96 * 4/3 + (57*4/3 - 57)/2 -5 + 57 && 
		   176 * 4/3 + (57*4/3 - 57)/2 + 10<=up.y && up.y<= 176 * 4/3 + (57*4/3 - 57)/2 + 10 + 57) 
	   #endif
		{
		    //monthly view draw non_hilight;
			gdi_layer_lock_frame_buffer();
		  #if defined(__MMI_MAINLCD_240X240__) 
			gdi_layer_push_and_set_clip(96 , 96+57, 176, 176+57);
		  #elif defined(__MMI_MAINLCD_320X320__)
		    //for 320x320;
		    gdi_layer_push_and_set_clip(96 * 4/3 + (57*4/3 - 57)/2 - 5, 							
		    							176 * 4/3 + (57*4/3 - 57)/2 + 10, 
		    							96 * 4/3 + (57*4/3 - 57)/2 -5 + 57, 
		    							176 * 4/3 + (57*4/3 - 57)/2 +10 + 57);
		  #endif

			gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);
			gdi_layer_clear(GDI_COLOR_BG);
			
          #if defined(__MMI_MAINLCD_240X240__) 
			gdi_image_draw_id(96, 176, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);//(96.176)
		  #elif defined(__MMI_MAINLCD_320X320__)
		    gdi_image_draw_id(96 * 4/3 + (57*4/3 - 57)/2 - 5, 176 * 4/3 + (57*4/3 - 57)/2 + 10, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);//for 320x320;
		  #endif
			gdi_layer_pop_clip();

			gdi_layer_unlock_frame_buffer();
		  #if defined(__MMI_MAINLCD_240X240__) 
			gdi_layer_blt_previous(96 , 96+57, 176, 176+57);	
		  #elif defined(__MMI_MAINLCD_320X320__)
		    //for 320x320;
		    gdi_layer_blt_previous(96 * 4/3 + (57*4/3 - 57)/2 - 5, 							
	    							176 * 4/3 + (57*4/3 - 57)/2 + 10, 
	    							96 * 4/3 + (57*4/3 - 57)/2 -5 + 57, 
	    							176 * 4/3 + (57*4/3 - 57)/2 +10 + 57);
		  #endif
			
		    //monthly view;
		  #if defined(__MMI_MAINLCD_240X240__) 
		    if(96<=down.x && down.x<=96+57 && 176<=down.y && down.y<= 176+57)
		  #elif defined(__MMI_MAINLCD_320X320__)
		    //for 320x320;
		    if(96* 4/3 + (57*4/3 - 57)/2 - 5<=down.x && down.x<=96* 4/3 + (57*4/3 - 57)/2 - 5 + 57 && 
			   176* 4/3 + (57*4/3 - 57)/2 + 10<=down.y && down.y<= 176* 4/3 + (57*4/3 - 57)/2 + 10 + 57)
		  #endif
		    	mmi_swatch_clndr_entry_monthly_view();
			
		}
	  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	 #endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/
		else if(170<up.x && up.x<=170+26 && 20<=up.y && up.y<= 20+26)
		{
		 #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
		 #endif/*__SWATCCH_FOR_CALENDAR_EVENT_JUMP_TO_DATE__*/
		}
		else//pos.x==120，正中间的分隔线位置；以及无click处理的区域；
		{
		    //trace;
		}
	 #endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN__*/	

}
static void mmi_swatch_calendar_cell_change_index_rule(void)
{

	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	if(swatch_calendar_cell.highlight_index < 0)
	{
		swatch_calendar_cell.highlight_index += swatch_calendar_cell.total_icon_num; //add app_total_num_icon
	}
	else if(swatch_calendar_cell.highlight_index > (swatch_calendar_cell.total_icon_num - 1))
	{
		swatch_calendar_cell.highlight_index -= swatch_calendar_cell.total_icon_num;
	}

	load_calendar_data();
	
}
static MMI_BOOL mmi_swatch_calendar_is_pen_move_valid(S32 pen_move_offset)
{
	return MMI_TRUE;
	
}

static void mmi_swatch_calendar_set_pen_pos_area(swatch_common_pos_struct *start_pos, swatch_common_pos_struct *end_pos)
{
	start_pos->x = 0;
	start_pos->y = 0;
	end_pos->x = LCD_WIDTH;
  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	end_pos->y = LCD_HEIGHT - 40;//50->40
  #else
    //new style;
   #if defined(__MMI_MAINLCD_240X240__) 
    end_pos->y = 176;
   #elif defined(__MMI_MAINLCD_320X320__)
    end_pos->y = 176 * 4/3 + (57*4/3 - 57)/2;//for 320x320;
   #endif
  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
}

static swatch_common_pos_struct mmi_get_swatch_calendar_cell_layout(S32 index, S32 pen_move_offset)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	swatch_common_pos_struct icon_pos;
	S32 pos_y;
	S32 icon_index;
	/*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	
	index = index - swatch_calendar_cell.highlight_index;
	if(index > 0 && index > swatch_calendar_cell.total_icon_num - 2)
	{
		icon_index = index - swatch_calendar_cell.total_icon_num;
	}
	else if(index < 0 && index < 2 - swatch_calendar_cell.total_icon_num)
	{
		icon_index = index + swatch_calendar_cell.total_icon_num;
	}
	else
	{
		icon_index = index;
	}
	/*Pos X is fixed*/  
	icon_pos.x = 0;
	pos_y = swatch_calendar_cell.cell_top_distance + icon_index * (swatch_calendar_cell.cell_height + swatch_calendar_cell.cell_distance);
	pos_y += pen_move_offset;
	icon_pos.y = pos_y;
	return icon_pos;
}
static void mmi_show_swatch_calendar_cell_info(swatch_common_pos_struct calendar_layout, U8 alarm_index)
{
	/*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
	
	//WCHAR calendar_day[6]={0};
	//WCHAR time_array[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	U16  day_image_id[10]= {IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_0,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_1,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_2,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_3,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_4,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_5,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_6,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_7,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_8,
						    IMG_ID_IDLE_SWATCH_DIGITAL_1_HOUR_NUM_9};
    
	/*WCHAR str_week[7][20] = {
			                  {'S','u', 'n', 'd', 'a', 'y', 0},
			                  {'M','o', 'n', 'd', 'a', 'y', 0},
			                  {'T','u', 'e', 's', 'd', 'a', 'y', 0},
			                  {'W','e', 'n', 'd', 's', 'd', 'a', 'y', 0},
			                  {'T','h', 'u', 'r', 's', 'd', 'a', 'y', 0},
			                  {'F','r', 'i', 'd', 'a', 'y', 0},
			                  {'S','a', 't', 'u', 'r', 'd', 'a', 'y', 0},		                  
		                 };*/
	WCHAR str_cur_week[20] = {0};
	
	WCHAR str_month[13][20] = { {0},
		                        {'J','a', 'n', 'u', 'a', 'r', 'y', 0},
								{'F','e', 'b', 'r', 'u', 'a', 'r', 'y', 0},
								{'M','a', 'r', 'c', 'h', 0},
								{'A','p', 'r', 'i', 'l', 0},
								{'M','a', 'y', 0},
								{'J','u', 'n', 'e', 0},
								{'J','u', 'l', 'y', 0},
								{'A','u', 'g', 'u', 's', 't', 0},
								{'S','e', 'p', 't', 'e', 'm', 'b', 'e', 'r', 0},
								{'O','c', 't', 'o', 'b', 'e', 'r', 0},
								{'N','o', 'v', 'e', 'm', 'b', 'e', 'r', 0},
								{'D','e', 'c', 'e', 'm', 'b', 'e', 'r', 0},
	                        };
	WCHAR str_cur_month[20] = {0};

  #ifdef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	WCHAR str_cur_display[50] = {0};
    WCHAR slit[3] = L", \0";
  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	
	S32 str_w, str_h;
	S32 string_region, string_region_for_big_font_day;

  #ifdef __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
    S32 TODAY_MARK_OFFSET_X, TODAY_MARK_OFFSET_Y;
    WCHAR str_today[10] = {0};
  #endif/*__SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__*/

	color font_color;
	color font_color_white;
	MYTIME selected_time = {0};
	U8 data;

 #ifdef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	S32 ori_calendar_layout_y = 0;
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	data = srv_setting_get_language();
    
	string_region = LCD_WIDTH/2;
	string_region_for_big_font_day = LCD_WIDTH;

  #ifdef __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
    TODAY_MARK_OFFSET_X = 0;
	TODAY_MARK_OFFSET_Y = swatch_calendar_cell.cell_top_distance;
  #endif/*__SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__*/

  #ifdef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
  	ori_calendar_layout_y = calendar_layout.y;
  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/

    //draw text之前，先set text color;
	gui_set_text_color(gui_color(255, 255, 255));

  #ifdef __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
    //draw today Mark;
    memcpy(&selected_time, &swatch_calendar_show_buffer[alarm_index], sizeof(MYTIME));

	//Check if the current selected time is today;
    if(selected_time.nYear == g_swatch_calendar_today_time.nYear 
	   && selected_time.nMonth == g_swatch_calendar_today_time.nMonth 
	   && selected_time.nDay == g_swatch_calendar_today_time.nDay)
    {
      #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
        //draw today background;
    	gdi_draw_solid_rect(84, calendar_layout.y - TODAY_MARK_OFFSET_Y, 156, calendar_layout.y - TODAY_MARK_OFFSET_Y + 27, gdi_act_color_from_rgb(255,48,130,145));

		//draw Today; 
		gui_set_font(&MMI_medium_font);//20px 
		wcscpy(str_today, (WCHAR*)GetString(STR_ID_CLNDR_TODAY));
		gui_measure_string((UI_string_type)str_today, &str_w, &str_h); 
		calendar_layout.x = 84 + (72 - str_w)/2;
		calendar_layout.y += (27 - str_h)/2;
		gui_move_text_cursor(calendar_layout.x, calendar_layout.y - TODAY_MARK_OFFSET_Y);
		gui_print_text((UI_string_type) str_today);
	  #else
	    //draw today bg image;new style;
	   #if defined(__MMI_MAINLCD_240X240__) 
    	gdi_image_draw_id(73, calendar_layout.y - TODAY_MARK_OFFSET_Y, IMG_CLNDR_TODAY_BG);//(73,0)  94x38
       #elif defined(__MMI_MAINLCD_320X320__)
	    gdi_image_draw_id(73 * 4/3 + (94 * 4/3 - 94)/2, calendar_layout.y - TODAY_MARK_OFFSET_Y, IMG_CLNDR_TODAY_BG);//for 320x320
	   #endif

		//draw Today text; 
		gui_set_font(&MMI_medium_font);//20px 
		wcscpy(str_today, (WCHAR*)GetString(STR_ID_CLNDR_TODAY));
		gui_measure_string((UI_string_type)str_today, &str_w, &str_h); 
	  #if defined(__MMI_MAINLCD_240X240__) 
		calendar_layout.x = 73 + (94 - str_w)/2;
	  #elif defined(__MMI_MAINLCD_320X320__)
	    //for 320x320;
	    calendar_layout.x = 73 * 4/3 + (94 * 4/3 - 94)/2 + (94 - str_w)/2;
	  #endif
		calendar_layout.y += (38 - str_h)/2;
		gui_move_text_cursor(calendar_layout.x, calendar_layout.y - TODAY_MARK_OFFSET_Y);
		gui_print_text((UI_string_type) str_today);
	  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
    }
  #endif/*__SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__*/
	
	//draw day
	/*calendar_day[0] = time_array[swatch_calendar_show_buffer[alarm_index].nDay / 10];
	calendar_day[1] = time_array[swatch_calendar_show_buffer[alarm_index].nDay % 10];
			
	gui_set_font(&MMI_large_font); 
	gui_measure_string((UI_string_type) calendar_day, &str_w, &str_h); 

	calendar_layout.x += ((string_region_for_big_font_day - str_w) >> 1);
	gui_move_text_cursor(calendar_layout.x, calendar_layout.y);
	//font_color = gui_get_text_color();
	gui_print_text((UI_string_type) calendar_day);*/
	//使用Image res绘制日期；
  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	gdi_image_draw_id(120-70, calendar_layout.y, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay / 10]);
	gdi_image_draw_id(120, calendar_layout.y, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay % 10]);
  #else
    //new style;
   #if defined(__MMI_MAINLCD_240X240__) 
    gdi_image_draw_id(120-70, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 48, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay / 10]);
	gdi_image_draw_id(120, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 48, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay % 10]);
   #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    gdi_image_draw_id(LCD_WIDTH/2-70, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 48 + 20, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay / 10]);
	gdi_image_draw_id(LCD_WIDTH/2, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 48 + 20, day_image_id[swatch_calendar_show_buffer[alarm_index].nDay % 10]);
   #endif
  #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/

  #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	//draw week 
	gui_set_font(&MMI_medium_font);//20px 
	//wcscpy(str_cur_week, (str_week[swatch_calendar_show_buffer[alarm_index].DayIndex]));
	wcscpy(str_cur_week, (WCHAR*)GetString(STR_GLOBAL_SUNDAY + swatch_calendar_show_buffer[alarm_index].DayIndex));
	gui_measure_string((UI_string_type)str_cur_week, &str_w, &str_h); 
	calendar_layout.x = ((string_region - str_w) >> 1);
	calendar_layout.y += 100;
	gui_move_text_cursor(calendar_layout.x, calendar_layout.y);
	gui_print_text((UI_string_type) str_cur_week);

	//draw month
	gui_set_font(&MMI_medium_font);//20px 
	if(data == 0)//0: english    1:chinese
	wcscpy(str_cur_month, (str_month[swatch_calendar_show_buffer[alarm_index].nMonth]));
	else
		wcscpy(str_cur_month, (WCHAR*)GetString(STR_GLOBAL_JANUARY_SHORT + swatch_calendar_show_buffer[alarm_index].nMonth -1));
	gui_measure_string((UI_string_type)str_cur_month, &str_w, &str_h); 
	calendar_layout.x = LCD_WIDTH/2 + ((string_region - str_w) >> 1);
	//calendar_layout.y += 100;
	calendar_layout.y;//draw week 时，已经加了100;
	gui_move_text_cursor(calendar_layout.x, calendar_layout.y);
	gui_print_text((UI_string_type) str_cur_month);
  #else
    //new style;
    //week string;
	gui_set_font(&MMI_medium_font);//20px 
	//wcscpy(str_cur_week, (str_week[swatch_calendar_show_buffer[alarm_index].DayIndex]));
	wcscpy(str_cur_week, (WCHAR*)GetString(STR_GLOBAL_SUNDAY + swatch_calendar_show_buffer[alarm_index].DayIndex));

	//month string;
	if(data == 0)//0: english    1:chinese
		wcscpy(str_cur_month, (str_month[swatch_calendar_show_buffer[alarm_index].nMonth]));
	else
		wcscpy(str_cur_month, (WCHAR*)GetString(STR_GLOBAL_JANUARY_SHORT + swatch_calendar_show_buffer[alarm_index].nMonth -1));

	wcscpy(str_cur_display, str_cur_week);
	wcscat(str_cur_display, slit);
	wcscat(str_cur_display, str_cur_month);
	
	gui_measure_string((UI_string_type)str_cur_display, &str_w, &str_h); 
	calendar_layout.x = ((string_region_for_big_font_day - str_w) >> 1);
	//calendar_layout.y += 100;
  #if defined(__MMI_MAINLCD_240X240__) 
	gui_move_text_cursor(calendar_layout.x, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 136);
  #elif defined(__MMI_MAINLCD_320X320__)
    gui_move_text_cursor(calendar_layout.x, ori_calendar_layout_y - TODAY_MARK_OFFSET_Y + 136 + 20);
  #endif
	gui_print_text((UI_string_type) str_cur_display);
  #endif

    #if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
	#endif
}
static void mmi_swatch_calendar_cell_show(S32 pen_move_offset) //app来实现
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	S32 i;
	S32 image_width, image_height;
	S32 x1, y1, x2, y2;
	MMI_BOOL is_show;
	swatch_common_pos_struct calendar_layout;
	
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
    //gdi_layer_lock_frame_buffer();
	gdi_layer_push_and_set_active(swatch_calendar_cell.cell_layer_handler);
	//gdi_push_and_set_alpha_blending_source_layer(swatch_calendar_cell.cell_layer_handler);
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	gdi_layer_push_and_set_clip(0, 0, LCD_WIDTH, LCD_HEIGHT-40); //50->40
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__) 
    gdi_layer_push_and_set_clip(0, 0, LCD_WIDTH, 176 -2);
  #elif defined(__MMI_MAINLCD_320X320__)
    gdi_layer_push_and_set_clip(0, 0, LCD_WIDTH, 176 * 4/3 + (57*4/3 - 57)/2 -2);//for 320x320;
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);

	for(i = 0; i<swatch_calendar_cell.total_icon_num; i++)
	{
		is_show = MMI_FALSE;
		calendar_layout = mmi_get_swatch_calendar_cell_layout(i, pen_move_offset);

	 #if defined(__MMI_MAINLCD_240X240__) 
		if ((calendar_layout.y < LCD_HEIGHT-40) && (calendar_layout.y + swatch_calendar_cell.cell_height> 0))//50->40
	 #elif defined(__MMI_MAINLCD_320X320__)
	    if ((calendar_layout.y < LCD_HEIGHT-40 * 4/3) && (calendar_layout.y + swatch_calendar_cell.cell_height> 0))//for 320x320;
	 #endif
				is_show = MMI_TRUE;
		
		SWATCH_PEN_TRACE("[SWATCH_PEN]mmi_swatch_calendar_cell_show,cell_index=%d, is_show=%d\n", i, is_show);
		SWATCH_PEN_TRACE("[SWATCH_PEN]mmi_swatch_calendar_cell_show,highlight_index=%d, layout_y=%d\n", swatch_calendar_cell.highlight_index, calendar_layout.y);

		if (MMI_FALSE == swatch_calendar_cell.disable_array_image)
		{
			if (calendar_layout.y < 0)
				is_show = MMI_FALSE;
		}
		
		if(MMI_TRUE == is_show)
		{			
			mmi_show_swatch_calendar_cell_info(calendar_layout, i);
		}	
	 }  

	gdi_layer_pop_clip();
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	
#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	gdi_layer_blt(swatch_calendar_cell.base_layer,
					  swatch_calendar_cell.cell_layer_handler,
					  NULL,
					  NULL,
					  0, 0, LCD_WIDTH, LCD_HEIGHT-40-2);//50->40
					  //0, 0, LCD_WIDTH, LCD_HEIGHT);
#else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__) 
    gdi_layer_blt(swatch_calendar_cell.base_layer,
					  swatch_calendar_cell.cell_layer_handler,
					  NULL,
					  NULL,
					  0, 0, LCD_WIDTH, 176 - 2);
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    gdi_layer_blt(swatch_calendar_cell.base_layer,
					  swatch_calendar_cell.cell_layer_handler,
					  NULL,
					  NULL,
					  0, 0, LCD_WIDTH, 176 * 4/3 + (57*4/3 - 57)/2 - 2);
  #endif
#endif
					  	
    //gdi_layer_unlock_frame_buffer();
}

static void mmi_swatch_calendar_draw_bg()
{
    S32 str_w, str_h;
	WCHAR event[6] = {'E','v','e','n','t','\0'};
	WCHAR month_view[11] = {'M','o','n','t','h',' ','v','i','e','w','\0'};
	WCHAR month_view_chn[11] = {0};
	color c = {52, 149, 165 ,100};
	U8 data;
    
	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/ 
	data = srv_setting_get_language();
	//background;
	gdi_layer_get_base_handle(&swatch_calendar_cell.base_layer);

	gdi_layer_push_and_set_active(swatch_calendar_cell.base_layer);

	gdi_layer_set_source_key(MMI_TRUE,GDI_COLOR_TRANSPARENT);

	//gdi_layer_clear(GDI_COLOR_BLACK);
	gdi_layer_clear(GDI_COLOR_BG);

	//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_WHITE);//height为50的矩形区域绘制；
	//gdi_draw_solid_rect(0, LCD_HEIGHT-50, LCD_WIDTH/2 -1, LCD_HEIGHT, GDI_COLOR_GRAY);
	//gdi_draw_solid_rect(LCD_WIDTH/2+1 , LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT, GDI_COLOR_GRAY);

#ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	//line interval;
    gdi_draw_solid_rect(0, LCD_HEIGHT-40-1, LCD_WIDTH, LCD_HEIGHT-40-1, GDI_COLOR_TEXT); //50->40
 #ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__
	gdi_draw_solid_rect(LCD_WIDTH/2 , LCD_HEIGHT-40, LCD_WIDTH/2, LCD_HEIGHT, GDI_COLOR_TEXT);
	
	//LSK:Event;
	gui_set_font(&MMI_large_font); 
	gui_set_text_color(c);
	gui_measure_string((UI_string_type) event, &str_w, &str_h); 
	gui_move_text_cursor(0+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);//50->40
	//gui_move_text_cursor(0, 190);
	gui_print_text((UI_string_type) event);
 #endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/

	//RSK:Month View;
	gui_set_font(&MMI_large_font); 
	gui_set_text_color(c);
	wcscpy(month_view_chn, (WCHAR*)GetString(ORGANIZER_MENU_CALENDER_STRINGID));
	if(data == 0)
	gui_measure_string((UI_string_type) month_view, &str_w, &str_h); 
	else
		gui_measure_string((UI_string_type) month_view_chn, &str_w, &str_h); 
 #ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__
	gui_move_text_cursor(LCD_WIDTH/2+1+(LCD_WIDTH/2 - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);//50->40
 #else
    //remove event, only show the month view;
    gui_move_text_cursor((LCD_WIDTH - str_w)/2, LCD_HEIGHT-40 +(40 - str_h)/2);//50->40
 #endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN_EVENT__*/
    if(data == 0)
	gui_print_text((UI_string_type) month_view);
	else
		gui_print_text((UI_string_type) month_view_chn);
#else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__) 
    gdi_image_draw_id(96, 176, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);//(96.176)
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    gdi_image_draw_id(96 * 4/3 + (57*4/3 - 57)/2 - 5, 176 * 4/3 + (57*4/3 - 57)/2 + 10, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);
    //gdi_image_draw_id((LCD_WIDTH- 57)/2, 176 * 4/3 + (57*4/3 - 57)/2, IMG_CLNDR_LAUNCH_MONTH_VIEW_NORMAL);
  #endif
#endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	
	gdi_layer_pop_and_restore_active();


    //touch text;
    /*gdi_layer_push_and_set_active(swatch_calendar_cell.cell_layer_handler);

	gdi_layer_push_and_set_clip(0, LCD_HEIGHT-50, LCD_WIDTH, LCD_HEIGHT);
	gdi_layer_clear(GDI_COLOR_TRANSPARENT);
	gdi_layer_set_source_key(MMI_TRUE, GDI_COLOR_TRANSPARENT);*/
	
	////

	/*gdi_layer_pop_clip();
	//gdi_pop_and_restore_alpha_blending_source_layer();
	gdi_layer_pop_and_restore_active();
	
	gdi_layer_blt(swatch_calendar_cell.base_layer,
					  swatch_calendar_cell.cell_layer_handler,
					  NULL,
					  NULL,
					  0, 0, LCD_WIDTH, LCD_HEIGHT);*/
	
}
//xl add end
//xyz wrapper a new API;
static void mmi_swatch_clndr_entry_main_screen(applib_time_struct highlight_time)
{

    //add xl 
    //calender
    //滑动显示data 的cache 3个；
    //50->40，相应调整layout;
	swatch_calendar_cell.total_icon_num = 3;
	swatch_calendar_cell.highlight_index = 0;
 #if defined(__MMI_MAINLCD_240X240__) 
	swatch_calendar_cell.cell_top_distance = 30+20;
	swatch_calendar_cell.cell_height = 130 + 10;
 #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    swatch_calendar_cell.cell_top_distance = (30+20) * 4/3;
	swatch_calendar_cell.cell_height = (130 + 10) * 4/3;
 #endif
 
 #ifndef __ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__
	swatch_calendar_cell.cell_distance = 30 +5;
 #else
    //new style;
  #if defined(__MMI_MAINLCD_240X240__) 
    swatch_calendar_cell.cell_distance = 30 + 5 + 5;//enlarge the distance;
  #elif defined(__MMI_MAINLCD_320X320__)
    //for 320x320;
    swatch_calendar_cell.cell_distance = (30 + 5 + 5) * 4/3;//enlarge the distance;
  #endif
 #endif/*__ASTER_NEW_STYLE_CHANGE_FOR_CALENDAR__*/
	//swatch_calendar_cell.get_layout = mmi_get_swatch_calendar_cell_layout;
	//swatch_calendar_cell.check_area = mmi_swatch_calendar_cell_check_area;
	swatch_calendar_cell.draw_cell_layer = mmi_swatch_calendar_cell_show;
	swatch_calendar_cell.draw_cell_bg = mmi_swatch_calendar_draw_bg;//height为50的两个矩形区域绘制；
	swatch_calendar_cell.change_index_rule = mmi_swatch_calendar_cell_change_index_rule;
	swatch_calendar_cell.pen_down_hdlr = mmi_swatch_calendar_pen_down_hdlr;    
	swatch_calendar_cell.pen_move_hdlr = mmi_swatch_calendar_pen_move_hdlr;
	swatch_calendar_cell.click_handle = mmi_swatch_calendar_click_handle;
	//swatch_calendar_cell.long_tap_handle = mmi_swatch_calendar_cell_long_tap_handle;
	swatch_calendar_cell.long_tap_handle = NULL;
	swatch_calendar_cell.check_is_valid_pen_move = mmi_swatch_calendar_is_pen_move_valid;
	//swatch_calendar_cell.is_valid_pen_pos = mmi_swatch_calendar_is_pen_pos_valid;
	swatch_calendar_cell.set_pen_pos_area = mmi_swatch_calendar_set_pen_pos_area;

	swatch_calendar_show_buffer[0].nYear= highlight_time.nYear;
	swatch_calendar_show_buffer[0].nMonth= highlight_time.nMonth;
	swatch_calendar_show_buffer[0].nDay= highlight_time.nDay;
	swatch_calendar_show_buffer[0].DayIndex= highlight_time.DayIndex;
	
	load_calendar_data();
	
	mmi_swatch_cell_entry(&swatch_calendar_cell);
	//add xl end

	//g_is_launch_monthly_view = KAL_TRUE;
}
void mmi_swatch_clndr_entry_monthly_view()
{
            mmi_cal_main_scrn_info *scrn_data;
			
		    //g_is_launch_monthly_view = KAL_TRUE;

            scrn_data = OslMalloc(sizeof(mmi_cal_main_scrn_info));
            //memcpy(&(scrn_data->highlight_time), &g_clndr_cntx->cal_time, sizeof(MYTIME)); 
            //根据滑动后，当前正在view的时间，来launch monthly_view;
            memcpy(&(scrn_data->highlight_time), &g_swatch_calendar_current_view_time, sizeof(MYTIME));    
            mmi_frm_scrn_first_enter(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN , (FunctionPtr)mmi_clndr_entry_screen, scrn_data);
       //mmi_clndr_entry_monthly_view_screen();
}

#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN__*/
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_screen
 * DESCRIPTION
 *  Display calendar screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_entry_screen(mmi_scrn_essential_struct* scr_info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *scrn_data;  
    applib_time_struct max_time, min_time, highlight_time;
    U8 *gui_buffer;
    MMI_BOOL status_bar_display = MMI_TRUE;
    U8 *lsk, *rsk;
    U16 csk_img_icon = IMG_GLOBAL_COMMON_CSK;
#if defined(__MMI_ICON_BAR_SUPPORT__)
    gui_icon_bar_item_resource_struct resource[3];
    MMI_BOOL enable_state[3];
    S32 items;
#endif /* defined(__MMI_ICON_BAR_SUPPORT__) */

	//S32 job_id;
    U32 DOW_flag = MMI_CALENDAR_FDOW;
    gui_calendar_type_enum clndr_type = GUI_CALENDAR_TYPE_MONTH;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!mmi_frm_scrn_enter(
                scr_info->group_id, 
                SCR_ID_CLNDR_SCREEN, 
                mmi_clndr_exit_screen, 
                (FunctionPtr)mmi_clndr_entry_screen, 
                MMI_FRM_FULL_SCRN))
    {
        return;
    }

    mmi_frm_scrn_set_leave_proc(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN, mmi_clndr_main_leave_proc);
    lsk = (U8*)GetString(STR_GLOBAL_OPTIONS);
    rsk = (U8*)GetString(STR_GLOBAL_BACK);
    gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    scrn_data = (mmi_cal_main_scrn_info *)mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);
    
    mmi_clndr_screen_memory_allocate();
    mmi_clndr_screen_reset_cell_info();

    memset(&min_time, 0, sizeof(applib_time_struct));
    memset(&max_time, 0, sizeof(applib_time_struct));
    memset(&highlight_time, 0, sizeof(applib_time_struct));
    min_time.nYear = CLNDR_START_YEAR;
    min_time.nMonth = 1;
    min_time.nDay = 1;
    max_time.nYear = CLNDR_END_YEAR;
    max_time.nMonth = 12;
    max_time.nDay = 31;
    highlight_time.nYear = scrn_data->highlight_time.nYear;
    highlight_time.nMonth = scrn_data->highlight_time.nMonth;
    highlight_time.nDay = scrn_data->highlight_time.nDay;
    highlight_time.nHour = scrn_data->highlight_time.nHour;
    
//launch monthly view;
    //wgui_cat83_refresh_events_reminder();
#ifdef	__MMI_CALENDAR_FDOW__
	if(g_clndr_cntx->first_day_of_week == MMI_CLNDR_MONDAY_AS_BEGIN)
	{
	    DOW_flag = GUI_CALENDAR_MONDAY_AS_BEGIN;
	}
#endif
#ifdef __MMI_CALENDAR_EVENT__        
    /* Register keypad and touch handler */      
    wgui_cat83_register_cell_data_query_handler(mmi_clndr_cell_data_constructor);
#endif
#ifdef __MMI_CALENDAR_CHINESE_SUPPORT__
    wgui_cat83_register_cell_lunar_query_handler(mmi_clndr_lunar_data_constructor);
#endif /*__MMI_CALENDAR_CHINESE_SUPPORT__*/
#ifdef __MMI_CLNDR_EVENT_INFO__                
    wgui_cat83_register_event_query_handler(mmi_clndr_event_constructor);
#endif
    wgui_cat83_register_highlight_change_callback(mmi_clndr_highlight_change_handler);
    //wgui_cat83_set_new_style(MMI_TRUE);
    if (g_clndr_cntx->display_type == CLNDR_MONTHLY_VIEW)
    {
        g_current_view_mode_context.current_mode = MMI_VIEW_MODE_MONTH;
        clndr_type = GUI_CALENDAR_TYPE_MONTH;
    #if defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)
        mmi_clndr_get_toolbar_resource(MMI_VIEW_MODE_MONTH, resource, &items);

		enable_state[0] = MMI_FALSE;
		enable_state[1] = MMI_TRUE;
        enable_state[2] = MMI_TRUE;
    #endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
    }
#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)
    else if (g_clndr_cntx->display_type == CLNDR_WEEKLY_VIEW)
    {
        g_current_view_mode_context.current_mode = MMI_VIEW_MODE_WEEK;
        clndr_type = GUI_CALENDAR_TYPE_WEEK;
    #if defined(__MMI_ICON_BAR_SUPPORT__)
        mmi_clndr_get_toolbar_resource(MMI_VIEW_MODE_WEEK, resource, &items);

		enable_state[0] = MMI_TRUE;
		enable_state[1] = MMI_FALSE;
        enable_state[2] = MMI_TRUE;	 
    #endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
    }
#endif

#if defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)
    wgui_cat9004_show(
        0,
        clndr_type,
        max_time,
        min_time,
        highlight_time,
        status_bar_display,
        lsk,
        rsk,
        items, // for HVGA calendar tool bar
        resource, // for HVGA calendar tool bar
        mmi_clndr_toolbar_callback,
        enable_state,
        gui_buffer,
        DOW_flag);

#else /* defined(__MMI_ICON_BAR_SUPPORT__) */
    ShowCategory83Screen(
        0,            
        clndr_type,
        max_time,
        min_time,
        highlight_time,
        status_bar_display,
        lsk,
        rsk,
        gui_buffer,
        DOW_flag);
#endif /* defined(__MMI_ICON_BAR_SUPPORT__)  */
#ifndef __SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__
//remove原有monthly view的各种softkey处理；
#ifdef __MMI_TOUCH_SCREEN__
    wgui_cat83_register_highlight_select_callback(mmi_clndr_highlight_select_handler);
#endif
#ifdef __MMI_CALENDAR_EVENT__ 
    csk_img_icon = IMG_GLOBAL_OPTION_CSK;
    ChangeCenterSoftkey(0, csk_img_icon);
    SetCenterSoftkeyFunction(mmi_clndr_show_daily_event, KEY_EVENT_UP);
#else
    ChangeCenterSoftkey(0, csk_img_icon);
    SetCenterSoftkeyFunction(mmi_clndr_entry_option, KEY_EVENT_UP);
#endif
    SetLeftSoftkeyFunction(mmi_clndr_entry_option, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
#if !defined(__MMI_MAINLCD_96X64__) || defined(__MMI_CALENDAR_EVENT__)    
    SetKeyUpHandler(mmi_clndr_swith_view_mode, KEY_POUND);
#endif /* 96X64 resolution not support weekly view */
#if defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__)
    SetKeyUpHandler(mmi_clndr_switch_clndr_type, KEY_STAR);
#endif /* defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__) */
#endif/*__SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__*/
}


//launch main_screen;
#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
static void mmi_clndr_entry_main_screen(mmi_scrn_essential_struct* scr_info)
{
		/*----------------------------------------------------------------*/
		/* Local Variables												  */
		/*----------------------------------------------------------------*/
		mmi_cal_main_scrn_info *scrn_data;	
		applib_time_struct max_time, min_time, highlight_time;
		U8 *gui_buffer;
		
		/*----------------------------------------------------------------*/
		/* Code Body													  */
		/*----------------------------------------------------------------*/
		
			//main menu->calendar, entry CLNDR_MAIN_SCREEN;
			if (!mmi_frm_scrn_enter(
						scr_info->group_id, 
						SCR_ID_CLNDR_MAIN_SCREEN, 
						mmi_clndr_exit_main_screen, 
						(FunctionPtr)mmi_clndr_entry_main_screen, 
						MMI_FRM_FULL_SCRN))
			{
				return;
			}
		
	
	   
	   
			//main menu->calendar, entry CLNDR_MAIN_SCREEN;
			gui_buffer = mmi_frm_scrn_get_active_gui_buf();
			scrn_data = (mmi_cal_main_scrn_info *)mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_MAIN_SCREEN);
	  
		mmi_frm_scrn_set_leave_proc(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_MAIN_SCREEN, mmi_clndr_main_screen_leave_proc);
	
		memset(&min_time, 0, sizeof(applib_time_struct));
		memset(&max_time, 0, sizeof(applib_time_struct));
		memset(&highlight_time, 0, sizeof(applib_time_struct));
		min_time.nYear = CLNDR_START_YEAR;
		min_time.nMonth = 1;
		min_time.nDay = 1;
		max_time.nYear = CLNDR_END_YEAR;
		max_time.nMonth = 12;
		max_time.nDay = 31;
		highlight_time.nYear = scrn_data->highlight_time.nYear;
		highlight_time.nMonth = scrn_data->highlight_time.nMonth;
		highlight_time.nDay = scrn_data->highlight_time.nDay;
		highlight_time.nHour = scrn_data->highlight_time.nHour;
		highlight_time.DayIndex = scrn_data->highlight_time.DayIndex;

        //Add date scope check;
		if (highlight_time.nYear > CLNDR_END_YEAR || highlight_time.nYear < CLNDR_START_YEAR)
	    {
	        mmi_popup_display_simple_ext(
	            STR_CLNDR_OUT_OF_CALENDAR,
	            MMI_EVENT_FAILURE,
	            GRP_ID_CAL_MAIN,
	            NULL);
			//mmi_frm_group_close(GRP_ID_CAL_MAIN);
			mmi_frm_scrn_close(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_MAIN_SCREEN);
	        return;
	    }
		
	#ifdef __SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__
	    memcpy(&g_swatch_calendar_today_time, &highlight_time, sizeof(applib_time_struct));
	#endif/*__SWATCCH_FOR_CALENDAR_DRAW_TODAY_MARK__*/
	
		//launch main screen;
		if(g_swatch_calendar_current_view_time.nYear == 0)//first entry;
		  mmi_swatch_clndr_entry_main_screen(highlight_time);
		else  //back to the screen;
		  mmi_swatch_clndr_entry_main_screen(g_swatch_calendar_current_view_time);
}
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MMI_ICON_BAR_SUPPORT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef	__MMI_CALENDAR_FDOW__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __MMI_CALENDAR_EVENT__        
/* under construction !*/
/* under construction !*/
#endif
#ifdef __MMI_CALENDAR_CHINESE_SUPPORT__
/* under construction !*/
#endif /*__MMI_CALENDAR_CHINESE_SUPPORT__*/
#ifdef __MMI_CLNDR_EVENT_INFO__                
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #if defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
/* under construction !*/
#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #if defined(__MMI_ICON_BAR_SUPPORT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
    #endif /* defined(__MMI_ICON_BAR_SUPPORT__) */
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else /* defined(__MMI_ICON_BAR_SUPPORT__) */  
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* defined(__MMI_ICON_BAR_SUPPORT__)  */
/* under construction !*/
#ifdef __MMI_TOUCH_SCREEN__
/* under construction !*/
#endif
#ifdef __MMI_CALENDAR_EVENT__ 
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
#if !defined(__MMI_MAINLCD_96X64__) || defined(__MMI_CALENDAR_EVENT__)    
/* under construction !*/
#endif /* 96X64 resolution not support weekly view */
#if defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__)
/* under construction !*/
#endif /* defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__) */
/* under construction !*/
/* under construction !*/
#endif

#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN__*/
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_main_leave_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  start_index     [IN]        
 *  menuData        [?]         
 *  num_item        [IN]        
 * RETURNS
 *  
 *****************************************************************************/
static mmi_ret mmi_clndr_main_leave_proc(mmi_event_struct *parm)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (parm->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
        {           
            if (parm->user_data != NULL)
            {
                OslMfree(parm->user_data);
                parm->user_data = NULL;
            }

        #if defined(__MMI_INDICAL) || defined (__MMI_HIJRI_CALENDAR__)
            g_current_view_mode_context.calendar_type_flag = MMI_FALSE;
        #endif /* defined(__MMI_INDICAL) || defined (__MMI_HIJRI_CALENDAR__) */

		#ifdef __MMI_CALENDAR_EVENT__
		    mmi_clndr_reset_event_search_state();
		#endif
    
            break;
        }
        default:
            break;
    }

    return MMI_RET_OK;
}


#ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
//for main screen leave;
static mmi_ret mmi_clndr_main_screen_leave_proc(mmi_event_struct *parm)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (parm->evt_id)
    {
        case EVT_ID_SCRN_DEINIT:
        {           		
			if (parm->user_data != NULL)
            {
                OslMfree(parm->user_data);
                parm->user_data = NULL;
            }
		    memset(&g_swatch_calendar_current_view_time, 0x00, sizeof(applib_time_struct));
    
            break;
        }
        default:
            break;
    }

    return MMI_RET_OK;
}	
#endif/*__SWATCCH_FOR_CALENDAR_MAIN_SCREEN__*/
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_switch_entry
 * DESCRIPTION
 *  Display calendar screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_switch_entry(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //mmi_cal_main_scrn_info *scrn_user_data;
    //mmi_cal_main_scrn_info *new_user_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* 
     * For swith from monthly view to weekly view case.
     * Since they use the same screen ID, should enter dummy firstly, 
     * then close scr_id_clndr_screen, and enter again.
     */
    if (!mmi_frm_scrn_enter(
                    GRP_ID_CAL_MAIN,
                    GLOBAL_SCR_DUMMY,
                    0,
                    0,
                    MMI_FRM_FULL_SCRN))
    {
        return;
    }
    
    //scrn_user_data = mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);        
    //new_user_data = (mmi_cal_main_scrn_info*)OslMalloc(sizeof(mmi_cal_main_scrn_info));
    //memcpy(new_user_data, scrn_user_data, sizeof(mmi_cal_main_scrn_info));
    //mmi_frm_scrn_set_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN, new_user_data);
    //OslMfree(scrn_user_data);
    mmi_frm_scrn_close_active_id();    
    
    if (g_current_view_mode_context.switch_setting_flag
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
        || g_current_view_mode_context.calendar_type_flag
#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */
            )
    {
#ifdef __MMI_CALENDAR_EVENT__
        mmi_clndr_event_close_scrn();
#endif
    }
}


#if defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__)
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_switch_clndr_type
 * DESCRIPTION
 *  Switches between English->Indian->Hijri or Chinese->Indian->Hijri Calendars.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_switch_clndr_type(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (g_clndr_cntx->lunar_state)
    {
        case MMI_CLNDR_ENGLISH:
    #ifdef __MMI_INDICAL__
            g_clndr_cntx->lunar_state = MMI_CLNDR_INDIAN_LUNISOLAR;
    #else if __MMI_HIJRI_CALENDAR__
            g_clndr_cntx->lunar_state = MMI_CLNDR_HIJRI_LUNAR;
    #endif
            break;

    #ifdef __MMI_INDICAL__
        case MMI_CLNDR_INDIAN_LUNISOLAR:
    #ifdef __MMI_HIJRI_CALENDAR__
            g_clndr_cntx->lunar_state = MMI_CLNDR_HIJRI_LUNAR;
    #else
            g_clndr_cntx->lunar_state = MMI_CLNDR_ENGLISH;
    #endif
            break;
     #endif

     #ifdef __MMI_HIJRI_CALENDAR__
        case MMI_CLNDR_HIJRI_LUNAR:
            g_clndr_cntx->lunar_state = MMI_CLNDR_ENGLISH;
            break;
      #endif
      
        default:
            break;
    }
    WriteValueSlim(LUNAR_CALENDAR, &(g_clndr_cntx->lunar_state), DS_BYTE);
    WriteValueSlim(NVRAM_CLNDR_INFO_VAL, &(g_clndr_cntx->infodispval), DS_BYTE);
    g_current_view_mode_context.calendar_type_flag = MMI_TRUE;
    mmi_clndr_switch_entry();
}
#endif /* defined(__MMI_INDICAL__ ) || defined(__MMI_HIJRI_CALENDAR__) */


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_exit_screen
 * DESCRIPTION
 *  Exit function of calendar screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_exit_screen(void)
{
#ifdef __MMI_CLNDR_EVENT_INFO__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 i;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (g_clndr_cntx)
    {
        if (g_clndr_cntx->info_box_text[0] != NULL)
        {      
            for (i = 0; i < CLNDR_INFO_BOX_ROW; i++)
            {
                OslMfree(g_clndr_cntx->info_box_text[i]);
                g_clndr_cntx->info_box_text[i] = NULL;
            }
        }
    }
#endif /*__MMI_CLNDR_EVENT_INFO__    */        
}

static void mmi_clndr_exit_main_screen(void)
{
	 //mmi_frm_asm_free_anonymous;   init中申请；
	 mmi_swatch_common_pen_handle_exit();
     return;  
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_screen_reset_cell_info
 * DESCRIPTION
 *  Get screen display information of.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_screen_reset_cell_info(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U32 i;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(g_clndr_cntx->monthly_cell_info, 0, sizeof(mmi_clndr_cell_struct) * CLNDR_COLUMN * CLNDR_ROW);
#ifdef __MMI_CALENDAR_EVENT__
    memset(g_clndr_cntx->weekly_cell_info, 0, CLNDR_ROW * sizeof(mmi_clndr_cell_struct));
#endif 

#ifdef __MMI_CLNDR_EVENT_INFO__
    for (i = 0; i < CLNDR_COLUMN * CLNDR_ROW; i++)
    {
        memset(g_clndr_cntx->monthly_cell_info[i].today_list, 0xFF, sizeof(srv_tdl_event_id_struct) * CLNDR_INFO_BOX_ROW);
    }
    for (i = 0; i < CLNDR_ROW; i++)
    {
        memset(g_clndr_cntx->weekly_cell_info[i].today_list, 0xFF, sizeof(srv_tdl_event_id_struct) * CLNDR_INFO_BOX_ROW);
    }
#endif    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_screen_memory_allocate
 * DESCRIPTION
 *  Get screen display information of.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_screen_memory_allocate(void)
{
#ifdef __MMI_CLNDR_EVENT_INFO__    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /* allocate memory for reminder */
    for (i = 0; i < CLNDR_INFO_BOX_ROW; i++)
    {
        g_clndr_cntx->info_box_text[i] = 
                    OslMalloc(CLNDR_MAX_INFO_BOX_LEN + ENCODING_LENGTH);
    }
#endif /* __MMI_CLNDR_EVENT_INFO__ */    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_get_date_str
 * DESCRIPTION
 *  
 * PARAMETERS
 *  date        [?]     [?]
 *  dateStr     [?]     [?]
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_get_date_str(MYTIME *date, U8 *date_str)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_wsprintf(
        (WCHAR*)date_str, 
        "%4d/%02d/%02d", 
        date->nYear, 
        date->nMonth, 
        date->nDay);
}



/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_pre_entry_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_monthly_or_weekly_pre_entry_screen(mmi_cal_launch_type_enum launch_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *scrn_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                       GRP_ID_CAL_MAIN, 
                                                       SCR_ID_CLNDR_SCREEN);
    mmi_clndr_display_set_config_1(launch_type, &scrn_data->highlight_time);

    //g_current_view_mode_context.current_mode = MMI_VIEW_MODE_WEEK;
    //g_clndr_cntx->period_interval = CLNDR_WEEKLY_PERIOD_INTERVAL;
    
    if (g_current_view_mode_context.switch_setting_flag)
    {
        mmi_clndr_switch_entry();
    }
    else
    {
        mmi_frm_scrn_close_active_id();
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_monthly_pre_entry_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_monthly_pre_entry_screen(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_clndr_monthly_or_weekly_pre_entry_screen(MMI_CAL_LAUNCH_TYPE_MONTHLY);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_monthly_set_cell_info
 * DESCRIPTION
 *  Set the icon in the cell of calendar, 
 *  including todolist and Hijri/Indian icon.
 * PARAMETERS
 *  ClndrTime       [?]     
 *  TaskInDay       [?]     
 *  SelectedDate        [?](?)
 *  daylist             [?](?)
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_monthly_set_cell_info(
                        MYTIME *date, 
                        mmi_clndr_cell_struct *monthly_cell)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_INDICAL__
    if(g_clndr_cntx->lunar_state == MMI_CLNDR_INDIAN_LUNISOLAR)
    {   
        mmi_indical_get_festival_icon(*date, g_clndr_cntx->monthly_cell_info);
        mmi_indical_get_paksha_end_icon(*date, g_clndr_cntx->monthly_cell_info, 0);
        mmi_indical_get_paksha_end_icon(*date, g_clndr_cntx->monthly_cell_info, 1);
    }
#endif /* __MMI_INDCIAL__ */
#ifdef __MMI_HIJRI_CALENDAR__
    if(g_clndr_cntx->lunar_state == MMI_CLNDR_HIJRI_LUNAR)
    {
        mmi_hijri_get_list_of_festival_icons(*date, g_clndr_cntx->monthly_cell_info);
    }
#endif /* __MMI_HIJRI_CALENDAR__ */

}                        

#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_weekly_pre_entry_screen
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_weekly_pre_entry_screen(void)
{
    mmi_clndr_monthly_or_weekly_pre_entry_screen(MMI_CAL_LAUNCH_TYPE_WEEKLY);
}
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_confirm_user_data_init
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_confirm_user_data_init(mmi_clndr_confirm_user_data_struct* arg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    arg->sg_id = GRP_ID_INVALID;
    arg->LSK_function = NULL;
    arg->CSK_function = NULL;
    arg->RSK_function = NULL;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_comfirm_proc
 * DESCRIPTION
 *  
 * PARAMETERS
 *  
 * RETURNS
 *  void
 *****************************************************************************/
mmi_ret mmi_clndr_comfirm_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_ALERT_QUIT:
        {
            mmi_alert_result_evt_struct *alert = (mmi_alert_result_evt_struct*)evt;
            mmi_clndr_confirm_user_data_struct* confirm_data = 
                (mmi_clndr_confirm_user_data_struct*)alert->user_tag;

            switch (alert->result)
            {
                case MMI_ALERT_NORMAL_EXIT:
                {
                    mmi_frm_group_close(alert->alert_id);
                    break;
                }
                case MMI_ALERT_CNFM_YES:
                {
                    if (confirm_data->LSK_function)
                    {
                        confirm_data->LSK_function(confirm_data->sg_id);
                    }
                    break;
                }
                case MMI_ALERT_CNFM_NO:
                {
                    if (confirm_data->RSK_function)
                    {
                        confirm_data->RSK_function(confirm_data->sg_id);
                    }
                    break;
                }
                default:
                    break;
            }
        }
        default:
        {
            break;
        }        
    }
	return MMI_RET_OK;
}


#if defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_toolbar_tap_callback
 * DESCRIPTION
 *  A callback function handler of icon bar which informs application
 *  the index of focused item.
 * PARAMETERS
 *  index         : [IN] Is the index of focused item.
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_toolbar_callback(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info * scrn_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_CAL_TRACE2(MMI_CAL_TOOLBAR_CALLBACK, g_current_view_mode_context.current_mode, index);
    mmi_clndr_set_swith_mode_flag(MMI_TRUE);

        switch (index)
	{
		case MMI_VIEW_MODE_MONTH:
		        g_current_view_mode_context.current_mode = MMI_VIEW_MODE_MONTH;
			mmi_clndr_monthly_pre_entry_screen();
			break;
#ifndef __MMI_MAINLCD_96X64__				
		case MMI_VIEW_MODE_WEEK:
			g_current_view_mode_context.current_mode = MMI_VIEW_MODE_WEEK;
			mmi_clndr_weekly_pre_entry_screen();   
			break;
#endif						 
		case MMI_VIEW_MODE_DAILY:
			g_current_view_mode_context.current_mode = MMI_VIEW_MODE_DAILY;
			scrn_data = mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);
			mmi_clndr_daily_pre_entry_screen((MYTIME *)&scrn_data->highlight_time);
			break;
	        default: 
		        break;
        }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_get_toolbar_resource
 * DESCRIPTION
 *  get calendar toolbar info.
 * PARAMETERS
 * view_mode    [IN]    monthly, weekly, daily view
 * source       [OUT]   resource
 * items        [OUT]   icon button items
 * RETURNS
 *  
 *****************************************************************************/
static void mmi_clndr_get_toolbar_resource(U8 view_mode,
                                                    gui_icon_bar_item_resource_struct *res,
                                                    S32 *items)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ASSERT(res != NULL && items != NULL);
    
    if (view_mode > MMI_VIEW_MODE_DAILY)
    {
        return;
    }

    switch (view_mode)
    {
        case MMI_VIEW_MODE_MONTH: 
        case MMI_VIEW_MODE_WEEK:
	        res[0].content_icon          = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_MONTH);
	        res[0].disabled_content_icon = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_MONTH_DISABLE);
	     #if !defined(__MMI_WEARABLE_DEVICE__)
	        res[0].text_of_description   = (U8*)GetString(STR_CLNDR_MONTHLY_VIEW);
		 #endif
	        res[1].content_icon          = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_WEEK);
	        res[1].disabled_content_icon = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_WEEK_DISABLE);
		 #if !defined(__MMI_WEARABLE_DEVICE__)
	        res[1].text_of_description   = (U8*)GetString(STR_CLNDR_WEEKLY_VIEW);      
		 #endif
	        res[2].content_icon          = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_DAY);
	        res[2].disabled_content_icon = (U8*)GetImage(IMG_CLNDR_TOOLBAR_VIEW_DAY_DISABLE);
	     #if !defined(__MMI_WEARABLE_DEVICE__)
	        res[2].text_of_description   = (U8*)GetString(STR_CLNDR_DAILY_VIEW);           
		 #endif
		    break;	

        default:
            break;  
    }

    *items = 3;
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_setup_toolbar
 * DESCRIPTION
 *  
 * PARAMETERS
 * view_mode    [IN]    monthly, weekly, daily view
 * RETURNS
 *  
 *****************************************************************************/
void mmi_clndr_setup_toolbar(U8 view_mode)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 count = 3;
    PU8 enable_icons[3];
    PU8 disable_icons[3];
    PU8 hint_string[3];
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (view_mode > MMI_VIEW_MODE_DAILY)
    {
        return;
    }

    switch (view_mode)
    {
        case MMI_VIEW_MODE_DAILY: /* at monthly view, set tool button as weekly view */
	        enable_icons[0]  = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_MONTH);
	        disable_icons[0] = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_MONTH_DISABLE);
		 #if !defined(__MMI_WEARABLE_DEVICE__)
	        hint_string[0] = (PU8)GetString(STR_CLNDR_MONTHLY_VIEW);
		 #endif
	        enable_icons[1]  = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_WEEK);
	        disable_icons[1] = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_WEEK_DISABLE);
		 #if !defined(__MMI_WEARABLE_DEVICE__)
	        hint_string[1] = (PU8)GetString(STR_CLNDR_WEEKLY_VIEW);
		 #endif
	        enable_icons[2]  = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_DAY);
	        disable_icons[2] = (PU8)GetImage(IMG_CLNDR_TOOLBAR_VIEW_DAY_DISABLE);  
		 #if !defined(__MMI_WEARABLE_DEVICE__)
	        hint_string[2] = (PU8)GetString(STR_CLNDR_DAILY_VIEW);
		 #endif
	        break;
        default:
            break;  
    }

    wgui_icon_bar_setup(
        count,
        enable_icons,
        disable_icons,
        hint_string,
        mmi_clndr_toolbar_callback);

        wgui_icon_bar_set_item_enable_state(2, MMI_FALSE);
  //      wgui_icon_bar_update();
}
#endif /* defined(__MMI_ICON_BAR_SUPPORT__) && defined(__MMI_CALENDAR_EVENT__)*/


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_launch_int
 * DESCRIPTION
 *  Launch calendar without parameter.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_launch_int(mmi_id parent_id, mmi_cal_launch_type_enum dis_type, MYTIME *curr_time)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/  
    mmi_cal_group_data_struct *cal_group_cntx;
#ifdef __MMI_CALENDAR_EVENT__
    srv_tdl_event_source_enum i;
#endif	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    set_inline_date_boundary(CLNDR_END_YEAR, CLNDR_START_YEAR, 12, 1);
    
    cal_group_cntx = (mmi_cal_group_data_struct*)OslMalloc(sizeof(mmi_cal_group_data_struct));
	memset(g_clndr_cntx, 0, sizeof(g_clndr_cntx));
	
#ifdef __MMI_CALENDAR_EVENT__
	memset(&g_tdl_cntx, 0, sizeof(g_tdl_cntx));
    mmi_tdl_set_type(SRV_TDL_VCAL_EVENT);

	// init the event source filter
	for(i = SRV_TDL_EVENT_SOURCE_LOCAL; i < SRV_TDL_EVENT_SOURCE_TOTAL; i++)
	{
		if(srv_tdl_has_source(i))
		{
			srv_tdl_set_source_state(MMI_TRUE, i);
		}
	}
	g_clndr_event_filter_select = SRV_TDL_EVENT_SOURCE_TOTAL;
#endif    
    /* Read the DisplayType from NVRAM, get the current time as highlighted time in calendar. */
    mmi_clndr_display_set_config_1(dis_type, (applib_time_struct *)curr_time); 

    /* get lunar state from NVRAM. */    
    mmi_clndr_display_set_config_2();   

    cal_group_cntx->parent_id = parent_id;
    cal_group_cntx->group_id = GRP_ID_CAL_MAIN;
    
    mmi_frm_group_create_ex(
                parent_id,
                GRP_ID_CAL_MAIN, 
                mmi_clndr_main_group_proc,
                cal_group_cntx,
                MMI_FRM_NODE_SMART_CLOSE_FLAG);

#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
    if (mmi_syncml_is_calendar_sync_now())
    {
        mmi_popup_display_simple_ext(
            STR_ID_SYNC_CODE_FORBIDDEN, 
            MMI_EVENT_FAILURE, 
            GRP_ID_CAL_MAIN, 
            NULL);
        return;
    }
#endif /* __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__ */

    switch (dis_type)
    {
    #ifdef __MMI_CALENDAR_EVENT__
        case MMI_CAL_LAUNCH_TYPE_DAILY:
        {
            MYTIME date;
            if (g_clndr_cntx->cal_time.nYear == 0 ||
                g_clndr_cntx->cal_time.nMonth == 0 ||
                g_clndr_cntx->cal_time.nDay == 0)
            {
                GetDateTime(&date);
            }
            else
            {
                memcpy(&date, &g_clndr_cntx->cal_time, sizeof(MYTIME));        
            }
            mmi_clndr_daily_pre_entry_screen(&date);

            break;
        }
        case MMI_CAL_LAUNCH_TYPE_ALL:
        {
            mmi_clndr_entry_all_list();
            break;
        }    
    #endif
        default:
        {        
            mmi_cal_main_scrn_info *scrn_data = OslMalloc(sizeof(mmi_cal_main_scrn_info));
            memcpy(&scrn_data->highlight_time, &g_clndr_cntx->cal_time, sizeof(MYTIME));        
		 #ifndef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
            mmi_frm_scrn_first_enter(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN, (FunctionPtr)mmi_clndr_entry_screen, scrn_data);
		 #else
		    //main menu->calendar, entry CLNDR_MAIN_SCREEN;
		    mmi_frm_scrn_first_enter(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_MAIN_SCREEN, (FunctionPtr)mmi_clndr_entry_main_screen, scrn_data);
		 #endif
            break;
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_set_display_config
 * DESCRIPTION
 *  
 * PARAMETERS
 *          
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_display_set_config_2(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	
#if defined (__MMI_INDICAL__) || defined (__MMI_HIJRI_CALENDAR__) 
    /* Set LunarState */
    ReadValueSlim(LUNAR_CALENDAR, (void*)&g_clndr_cntx->lunar_state, DS_BYTE);
      
    if (g_clndr_cntx->lunar_state == 0xff)
    {
        g_clndr_cntx->lunar_state = MMI_CLNDR_ENGLISH;
    }
  
    /* Set infodispval */

    ReadValueSlim(NVRAM_CLNDR_INFO_VAL, &(g_clndr_cntx->infodispval), DS_BYTE);
#endif /* defined (__MMI_INDICAL__) || defined (__MMI_HIJRI_CALENDAR__) */

#ifdef	__MMI_CALENDAR_FDOW__
    ReadValueSlim(NVRAM_CLNDR_FIRST_DAY_OF_WEEK, &g_clndr_cntx->first_day_of_week, DS_BYTE);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_display_set_config_1
 * DESCRIPTION
 *  
 * PARAMETERS
 *       
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_display_set_config_1(mmi_cal_launch_type_enum dis_type, applib_time_struct *curr_time)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(dis_type)
    {
#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)
        case MMI_CAL_LAUNCH_TYPE_WEEKLY:
        {
            g_clndr_cntx->display_type = CLNDR_WEEKLY_VIEW;
			g_current_view_mode_context.current_mode = MMI_VIEW_MODE_WEEK;
            //g_clndr_cntx->period_interval = CLNDR_WEEKLY_PERIOD_INTERVAL;  
            break;
        }
#endif
        default:
        {        
            g_clndr_cntx->display_type = CLNDR_MONTHLY_VIEW;
			g_current_view_mode_context.current_mode = MMI_VIEW_MODE_MONTH;
            break;
        }
    }
    /* Set Calendar Time */
    if (curr_time)  //Set the CalTime with gived para.
    {
        memcpy(&g_clndr_cntx->cal_time, curr_time, sizeof(MYTIME));
    }
    else  //Set the CalTime with current time.
    {
        GetDateTime(&g_clndr_cntx->cal_time);
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_go_to_today
 * DESCRIPTION
 *  Entry function of Jump To screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_go_to_today(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    mmi_cal_main_scrn_info *scrn_data;    
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                       GRP_ID_CAL_MAIN, 
                                                       SCR_ID_CLNDR_SCREEN);
    GetDateTime(&scrn_data->highlight_time);
    mmi_frm_scrn_close_active_id();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_option
 * DESCRIPTION
 *  Side down key handler, go to 1st day of next month.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_entry_option(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_menu_id menu_id;
    //U8 support_jpg = MMI_FALSE;
    //U8 to_hide = MMI_FALSE;  
    mmi_cal_common_group_data_struct *opt_user_data;      

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    opt_user_data = (mmi_cal_common_group_data_struct*)OslMalloc(sizeof(mmi_cal_common_group_data_struct));
    //memset(opt_user_data, 0, sizeof(mmi_cal_common_group_data_struct));
    opt_user_data->parent_id = GRP_ID_CAL_MAIN;
    opt_user_data->group_id = mmi_frm_group_create_ex(
                                                GRP_ID_CAL_MAIN,
                                                GRP_ID_AUTO_GEN,
                                                mmi_cal_option_group_proc,
                                                opt_user_data,
                                                MMI_FRM_NODE_NONE_FLAG);

#ifdef __MMI_CALENDAR_EVENT__
    if (g_clndr_cntx->display_type == CLNDR_MONTHLY_VIEW)
    {
        menu_id = ORGANIZER_CALENDER_MONTHLY_OPTIONS_MENU;
    }
    else
    {
        menu_id = ORGANIZER_CALENDER_WEEKLY_OPTIONS_MENU;
    }
#else
    menu_id = ORGANIZER_CALENDER_MONTHLY_OPTIONS_MENU;
#endif

    opt_user_data->child_id = cui_menu_create(
                                        opt_user_data->group_id,
                                        CUI_MENU_SRC_TYPE_RESOURCE,
                                        CUI_MENU_TYPE_OPTION,
                                        menu_id,
                                        MMI_TRUE,
                                        NULL);
#ifdef __MMI_HIJRI_CALENDAR__                                        
    option_id = opt_user_data->child_id;
#endif
#if 0 /*to_hide not use*/
#if defined(GDI_USING_JPEG_ENCODE_V2) || defined(GDI_USING_JPEG_ENCODE)
/* under construction !*/
#else
/* under construction !*/
#endif /* defined(GDI_USING_JPEG_ENCODE_V2) || defined(GDI_USING_JPEG_ENCODE) */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_BT_SUPPORT__  
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_BT_SUPPORT__ */
#endif /*to_hide not use*/   
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
    if (g_clndr_cntx->lunar_state == MMI_CLNDR_ENGLISH)
    {
    #ifdef __MMI_HIJRI_CALENDAR__
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DAY_DETAILS, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_FESTIVALS, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DATE_CORRECTION, MMI_TRUE);    
    #endif
    
    #ifdef __MMI_HIJRI_CALENDAR__
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_TITHI, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_FESTIVAL_LIST, MMI_TRUE);    
    #endif
    }

#ifdef __MMI_INDICAL__
    else if (g_clndr_cntx->lunar_state == MMI_CLNDR_INDIAN_LUNISOLAR)
    {
#ifdef __MMI_HIJRI_CALENDAR__
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DAY_DETAILS, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_FESTIVALS, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DATE_CORRECTION, MMI_TRUE);    
#endif /* __MMI_HIJRI_CALENDAR__ */
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_TITHI, MMI_FALSE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_FESTIVAL_LIST, MMI_FALSE);    
    }
#endif /* __MMI_INDICAL__ */
#ifdef __MMI_HIJRI_CALENDAR__
    else /*if (g_clndr_cntx->LunarState == MMI_CLNDR_HIJRI_LUNAR)*/
    {
#ifdef __MMI_INDICAL__
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_TITHI, MMI_TRUE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_INDICAL_FESTIVAL_LIST, MMI_TRUE);    
#endif /* __MMI_INDICAL__ */
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DAY_DETAILS, MMI_FALSE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_FESTIVALS, MMI_FALSE);    
        cui_menu_set_item_hidden(opt_user_data->child_id, MENU_ID_HIJRI_DATE_CORRECTION, MMI_FALSE);
    }
#endif /* __MMI_HIJRI_CALENDAR__ */
#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */

#if (!defined(__MMI_INDICAL__)) && (!defined(__MMI_HIJRI_CALENDAR__))
     //cui_menu_set_item_hidden(opt_user_data->child_id, MENU_CAL_TYPE, MMI_TRUE);    
#endif /* (!defined(__MMI_INDICAL__)) && (!defined(__MMI_HIJRI_CALENDAR__)) */

    cui_menu_set_default_title_by_id(opt_user_data->child_id,STR_GLOBAL_OPTIONS,ORGANIZER_TITLE_IMAGEID);
    cui_menu_run(opt_user_data->child_id);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_cal_option_group_proc
 * DESCRIPTION
 *  Generate the menus.
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_cal_option_group_proc(mmi_event_struct* evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_menu_event_struct *menu_evt = (cui_menu_event_struct*)evt;
    mmi_cal_common_group_data_struct *opt_user_data;     
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
    opt_user_data = (mmi_cal_common_group_data_struct*)evt->user_data;
    switch(menu_evt->evt_id)
    {    
        case EVT_ID_GROUP_DEINIT:
        {
            OslMfree(opt_user_data);
            break;
        }
        case EVT_ID_CUI_MENU_LIST_ENTRY:
            mmi_cal_option_menu_entry_hdlr(menu_evt);
            break;

        //case EVT_ID_CUI_MENU_ITEM_HILITE:
            //break;
            
        case EVT_ID_CUI_MENU_ITEM_SELECT:
            mmi_cal_option_menu_select_hdlr(menu_evt);
            break;
            
        case EVT_ID_CUI_MENU_CLOSE_REQUEST:
            cui_menu_close(opt_user_data->child_id);
            mmi_frm_group_close(opt_user_data->group_id);
            break;

        default:
            break;
    }
    return MMI_RET_OK;        
}


/*****************************************************************************
 * FUNCTION
 *  mmi_cal_option_menu_entry_hdlr
 * DESCRIPTION
 *  Generate the menus.
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_cal_option_menu_entry_hdlr(cui_menu_event_struct *menu_evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    U16 total;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (menu_evt->parent_menu_id)
    {
#ifdef __MMI_CALENDAR_EVENT__
        case MENU_ID_CLNDR_DELETE_EVENT:
            cui_menu_set_default_title_by_id(
                        menu_evt->sender_id, 
                        STR_ID_CLNDR_DELETE_EVENT,
                        ORGANIZER_TITLE_IMAGEID);
            break;
  
#endif /* __MMI_CALENDAR_EVENT__ */

        case ORGANIZER_CALENDER_MONTHLY_OPTIONS_MENU:
#ifdef __MMI_CALENDAR_EVENT__ 
        case ORGANIZER_CALENDER_WEEKLY_OPTIONS_MENU:
#endif
              cui_menu_set_default_title_by_id(
                          menu_evt->sender_id, 
                          STR_GLOBAL_OPTIONS,
                          ORGANIZER_TITLE_IMAGEID);

        default:
            break;
    }
    
#ifdef __MMI_CALENDAR_EVENT__
    srv_tdl_get_all_index(NULL, NUM_OF_CAL, SRV_TDL_VCAL_EVENT, &total);

    if (total == 0)
    {
        cui_menu_set_non_leaf_item(menu_evt->sender_id, MENU_ID_CLNDR_DELETE_EVENT, MMI_FALSE);
    }
#endif /* __MMI_CALENDAR_EVENT__ */

#ifdef __MMI_HIJRI_CALENDAR__
        cui_menu_set_non_leaf_item(option_id, MENU_ID_HIJRI_DATE_CORRECTION, MMI_FALSE);
#endif
}


/*****************************************************************************
 * FUNCTION
 *  mmi_cal_option_menu_select_hdlr
 * DESCRIPTION
 *  Generate the menus.
 * PARAMETERS
 *  index       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_cal_option_menu_select_hdlr(cui_menu_event_struct *menu_evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    mmi_cal_common_group_data_struct *opt_user_data = menu_evt->user_data;     
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (menu_evt->highlighted_menu_id)
    {
    #ifdef __MMI_CALENDAR_EVENT__
        case MENU_GOTO_TASK_CAL:
            mmi_clndr_show_daily_event();
            break;
            
    #if !defined(__MMI_WEARABLE_DEVICE__)
        case MENU_ID_CLNDR_VIEW_ALL:
            mmi_clndr_entry_all_list();
            break;
            
        case MENU_ID_CLNDR_ADD_TASK:
        {   
            mmi_clndr_entry_add_hdlr();
            break;
        }
    #endif
	#ifdef __MMI_SNS_CALENDAR__     
        case MENU_ID_CLNDR_EVENT_FILTER:
        {
            mmi_clndr_entry_filter_hdlr();
            break;
        }
    #endif	
    #endif /* __MMI_CALENDAR_EVENT__ */ 
                
        case MENU_ID_CLNDR_JUMP_TO_DATE:
            mmi_clndr_entry_jump_to_date();
            break;
            
#if !defined(__MMI_WEARABLE_DEVICE__)
        case MENU_ID_CLNDR_GOTO_TODAY:
            mmi_clndr_go_to_today();
            break;
#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)
        case MENU_ID_CLNDR_WEEKLY_VIEW:
            mmi_clndr_weekly_pre_entry_screen();
            break;
            
        case MENU_ID_CLNDR_MONTHLY_VIEW:
            mmi_clndr_monthly_pre_entry_screen();
            break;
#endif            
#endif/*__MMI_WEARABLE_DEVICE__*/
     
    #ifdef __MMI_HIJRI_CALENDAR__
        case MENU_ID_HIJRI_DAY_DETAILS:
            mmi_hijri_pre_entry_day_details();
            break;
            
        case MENU_ID_HIJRI_FESTIVALS:
            mmi_hijri_pre_entry_festival_list();
            break;
            
        case MENU_ID_HIJRI_DATE_CORRECTION:
            mmi_hijri_entry_date_correction();
            break;        
    #endif /* __MMI_HIJRI_CALENDAR__ */
    
    #ifdef __MMI_INDICAL__
        case MENU_ID_INDICAL_TITHI:
            mmi_indical_pre_entry_tithi_display();
            break;
            
        case MENU_ID_INDICAL_FESTIVAL_LIST:
            mmi_indical_pre_festival_list_display();
            break;
    #endif /* __MMI_INDICAL__ */
    
    #if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
        case MENU_ID_CLNDR_SETTINGS:
            mmi_clndr_pre_entry_settings();
            break;
    #endif
    
    
    #if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
        case MENU_ID_CLNDR_HELP:
            mmi_clndr_entry_help();
            break;
    #endif
    
    #if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
        case MENU_CAL_TYPE:
        {
            mmi_clndr_entry_lunar_swtich();
            break;
        }
    #endif
    #ifdef __MMI_CALENDAR_EVENT__
        case MENU_ID_CLNDR_DELETE_EVENT:
            mmi_tdl_check_no_event_popup();
            break;
        
     #if !defined(__MMI_WEARABLE_DEVICE__)      
        case MENU_ID_CLNDR_DELETE_ALL:
            mmi_tdl_delete_all_confirm(opt_user_data->parent_id);
            break;

        case MENU_ID_CLNDR_DELETE_ALL_OVERDUE:
            mmi_tdl_delete_overdue_confirm(opt_user_data->parent_id);
            break;
            
        case MENU_ID_CLNDR_DELETE_SPEC_PERIOD:
            mmi_clndr_entry_spec_time();
            break;
      #endif/*__MMI_WEARABLE_DEVICE__*/
    #endif /* __MMI_CALENDAR_EVENT__ */ 

	#ifdef	__MMI_CALENDAR_FDOW__
	    case MENU_ID_CLNDR_FIRST_DAY_OF_WEEK:
			mmi_clndr_entry_week_first_day_swtich();
            break;
    #endif
        default:
            break;
    }
}


#ifdef	__MMI_CALENDAR_FDOW__
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_week_first_day_highlight_hdlr
 * DESCRIPTION
 *  
 * PARAMETERS
 *  nIndex      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_week_first_day_highlight_hdlr(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (index == 0)
    {
        g_clndr_cntx->first_day_of_week = MMI_CLNDR_SUNDAY_AS_BEGIN;
    }
    else 
    {
        g_clndr_cntx->first_day_of_week = MMI_CLNDR_MONDAY_AS_BEGIN;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_first_day_save_done
 * DESCRIPTION
 *  
 * PARAMETERS
 *  nIndex      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_first_day_save_done(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_popup_display_simple_ext(
                    STR_GLOBAL_SAVED,
                    MMI_EVENT_SUCCESS,
                    GRP_ID_CAL_MAIN,
                    0);

    mmi_frm_scrn_close(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SWITCH_WEEK_FIRST_DAY);
    WriteValueSlim(NVRAM_CLNDR_FIRST_DAY_OF_WEEK, &(g_clndr_cntx->first_day_of_week), DS_BYTE);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_week_first_day_swtich
 * DESCRIPTION
 *  set week first day, monday or sunday
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_entry_week_first_day_swtich(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *gui_buffer;
    U16 item_list[2];
    U16 highlight_index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_scrn_enter(
            GRP_ID_CAL_MAIN,
            SCR_ID_CLNDR_SWITCH_WEEK_FIRST_DAY,
            NULL,
            mmi_clndr_entry_week_first_day_swtich,
            MMI_FRM_FULL_SCRN);
            
    gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    item_list[0] = STR_GLOBAL_SUNDAY;
    item_list[1] = STR_GLOBAL_MONDAY;

    highlight_index = (g_clndr_cntx->first_day_of_week == MMI_CLNDR_SUNDAY_AS_BEGIN) ? 0 : 1;
    RegisterHighlightHandler(mmi_clndr_week_first_day_highlight_hdlr);
    EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    ShowCategory11Screen(
            STR_ID_CLNDR_FIRST_DAY_OF_WEEK,
            GetRootTitleIcon(ORGANIZER_CALENDER_MENU),
            STR_GLOBAL_OK,
            IMG_GLOBAL_OK,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            2,
            item_list,
            highlight_index,
            gui_buffer);

    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_clndr_first_day_save_done, KEY_EVENT_UP);
    SetLeftSoftkeyFunction(mmi_clndr_first_day_save_done, KEY_EVENT_UP);
}
#endif
#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_lunar_swtich
 * DESCRIPTION
 *  Toggle state of lunar calendar.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_entry_lunar_swtich(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U8 *gui_buffer;
    U16 item_list[2];
    U16 highlight_index;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_scrn_enter(
            GRP_ID_CAL_MAIN,
            SCR_ID_DUMMY, /* Should modify */
            NULL,
            mmi_clndr_entry_lunar_swtich,
            MMI_FRM_FULL_SCRN);
            
    gui_buffer = mmi_frm_scrn_get_active_gui_buf();
    item_list[0] = STR_GLOBAL_ON;
    item_list[1] = STR_GLOBAL_OFF;

    highlight_index = (g_clndr_cntx->lunar_state == MMI_TRUE) ? 0 : 1;
    RegisterHighlightHandler(mmi_clndr_lunar_highlight_hdlr);
    EnableCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    ShowCategory11Screen(
            CAL_STRING_LUNAR,
            GetRootTitleIcon(ORGANIZER_CALENDER_MENU),
            STR_GLOBAL_OK,
            IMG_GLOBAL_OK,
            STR_GLOBAL_BACK,
            IMG_GLOBAL_BACK,
            2,
            item_list,
            highlight_index,
            gui_buffer);

    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_clndr_lunar_save_done, KEY_EVENT_UP);
    SetLeftSoftkeyFunction(mmi_clndr_lunar_save_done, KEY_EVENT_UP);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_lunar_save_done
 * DESCRIPTION
 *  Hilite function of pupdate period
 * PARAMETERS
 *  nIndex      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_lunar_save_done(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_popup_display_simple_ext(
                    STR_GLOBAL_SAVED,
                    MMI_EVENT_SUCCESS,
                    GRP_ID_CAL_MAIN,
                    0);

    g_clndr_cntx->lunar_state = g_clndr_cntx->lunar_onoff;

    mmi_frm_scrn_close(GRP_ID_CAL_MAIN, SCR_ID_DUMMY);
    WriteValueSlim(LUNAR_CALENDAR, &(g_clndr_cntx->lunar_state), DS_BYTE);
}
#endif

/*****************************************************************************
 * FUNCTION
 *  HighlightThmUpdatePeriod
 * DESCRIPTION
 *  Hilite function of pupdate period
 * PARAMETERS
 *  nIndex      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_lunar_highlight_hdlr(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (index == 0)
    {
        g_clndr_cntx->lunar_onoff = MMI_TRUE;
    }
    else 
    {
        g_clndr_cntx->lunar_onoff = MMI_FALSE;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_swith_view_mode
 * DESCRIPTION
 *  Use "#" to switch monthly view/weekly view/daily view/view all.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_swith_view_mode(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *main_scrn_data;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_clndr_set_swith_mode_flag(MMI_TRUE);
    g_current_view_mode_context.current_mode++;
    g_current_view_mode_context.current_mode %= MMI_VIEW_MODE_TOTAL;
    switch(g_current_view_mode_context.current_mode)
    {
        case MMI_VIEW_MODE_MONTH:
            mmi_clndr_monthly_pre_entry_screen();
            break;
#if !defined( __MMI_MAINLCD_96X64__) && defined(__MMI_CALENDAR_EVENT__)           
        case MMI_VIEW_MODE_WEEK:
            mmi_clndr_weekly_pre_entry_screen();   
            break;
#endif           
    #ifdef __MMI_CALENDAR_EVENT__            
        case MMI_VIEW_MODE_DAILY:
            main_scrn_data = mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);
            mmi_clndr_daily_pre_entry_screen((MYTIME *)&main_scrn_data->highlight_time);
            break;

        case MMI_VIEW_MODE_ALL:
            mmi_clndr_all_pre_entry_screen();
            break;            
    #endif /* __MMI_CALENDAR_EVENT__ */
    
        default:
            break;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_validate_input
 * DESCRIPTION
 *  Validate correctness of date and jump to the date in calendar.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_validate_input(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_inline_item_date_time_struct date;
    mmi_cal_main_scrn_info *scrn_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);    
    #ifdef __MMI_BTD_BOX_UI_STYLE__
    scrn_data->highlight_time.nDay = g_mmi_clndr_cntx.day;
    scrn_data->highlight_time.nMonth = g_mmi_clndr_cntx.month;
    scrn_data->highlight_time.nYear = g_mmi_clndr_cntx.year;
    #else
    cui_inline_get_value(
            mmi_clndr_jump_child_gid, 
            CUI_INLINE_ITEM_ID_BASE + 1, 
            &date);
    scrn_data->highlight_time.nDay = (U8)date.day;
    scrn_data->highlight_time.nMonth = (U8)date.month;
    scrn_data->highlight_time.nYear = date.year;
    #endif /* __MMI_BTD_BOX_UI_STYLE__ */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_jump_to_date
 * DESCRIPTION
 *  Entry function of Jump To screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_entry_jump_to_date(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    mmi_cal_main_scrn_info *scrn_data;    
    cui_inline_struct inline_data;
    cui_inline_item_date_time_struct date;
	cui_inline_item_softkey_struct softkey_struct = {{
    #ifdef __MMI_BTD_BOX_UI_STYLE__
    {STR_GLOBAL_OPTIONS, 0},
    #else
    {STR_GLOBAL_OK, 0},
    #endif /* __MMI_BTD_BOX_UI_STYLE__ */
    {CUI_INLINE_SOFTKEY_DEFAULT_VALUE, 0},
	{0, CUI_INLINE_SOFTKEY_DEFAULT_VALUE}}};
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    mmi_frm_group_create_ex(
                    GRP_ID_CAL_MAIN,
                    GRP_ID_CAL_JUMP,
                    mmi_clndr_jump_proc,
                    NULL,
                    MMI_FRM_NODE_SMART_CLOSE_FLAG);
#ifndef __MMI_MAINLCD_96X64__
    inline_data.items_count = 2;
    inline_data.title = STR_CLNDR_JUMP_TO;
#else
    inline_data.items_count = 2;
    inline_data.title = STR_GLOBAL_DATE;
#endif
    inline_data.title_icon = GetRootTitleIcon(ORGANIZER_CALENDER_MENU);
    inline_data.screen_flag = CUI_INLINE_SCREEN_DISABLE_DONE;
    inline_data.softkey = &softkey_struct;
    inline_data.items = cui_jump_to_date;

    mmi_clndr_jump_child_gid = cui_inline_create(
                                        GRP_ID_CAL_JUMP,
                                        &inline_data);

    if (mmi_clndr_jump_child_gid != GRP_ID_INVALID)
    {
        #ifdef __MMI_BTD_BOX_UI_STYLE__
        mmi_clndr_goto_date_update(MMI_FALSE);
        #else
        scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                           GRP_ID_CAL_MAIN, 
                                                           SCR_ID_CLNDR_SCREEN);
        memset(&date, 0, sizeof(cui_inline_item_date_time_struct));
        date.year = scrn_data->highlight_time.nYear;
        date.month = scrn_data->highlight_time.nMonth;
        date.day = scrn_data->highlight_time.nDay;
        cui_inline_set_value(
                mmi_clndr_jump_child_gid, 
                CUI_INLINE_ITEM_ID_BASE + 1, 
                &date);
        #endif /* __MMI_BTD_BOX_UI_STYLE__ */
        cui_inline_run(mmi_clndr_jump_child_gid);
    }
    else
    {
        mmi_frm_group_close(GRP_ID_CAL_JUMP);
    }
}



/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_jump_proc
 * DESCRIPTION
 *  Exit function of task view all application
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static mmi_ret mmi_clndr_jump_proc(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (evt->evt_id)
    {
        case EVT_ID_CUI_INLINE_SUBMIT:
        case EVT_ID_CUI_INLINE_CSK_PRESS:
            mmi_clndr_validate_input();
            mmi_frm_group_close(GRP_ID_CAL_JUMP);            
            break;
            
        case EVT_ID_CUI_INLINE_ABORT:
            mmi_frm_group_close(GRP_ID_CAL_JUMP);
            break;
        #ifdef __MMI_BTD_BOX_UI_STYLE__
        case EVT_ID_CUI_INLINE_MAIN_SCREEN_ACTIVE:
            mmi_clndr_goto_date_update(MMI_TRUE);
            break;
        case EVT_ID_CUI_INLINE_MAIN_SCREEN_SHOWN:
            set_left_softkey_function(mmi_clndr_goto_date_entry_option, KEY_EVENT_UP);
            break;
        #endif /* __MMI_BTD_BOX_UI_STYLE__ */
        //case EVT_ID_GROUP_GOBACK:
        //case EVT_ID_GROUP_DELETE_REQ:
        //    break;       
        //case EVT_ID_GROUP_DEINIT:
        //    break;
        default:
            break;
    }
 
    return MMI_RET_OK;    
}
#ifdef __MMI_CALENDAR_CHINESE_SUPPORT__


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_compute_solar_term
 * DESCRIPTION
 *  This function is to calculate the date of solar item in given year.
 * PARAMETERS
 *  year            [IN]        Year in solar calendar, e.g. 2003
 *  month           [IN]        
 *  solar_index     [IN]        Index of solar term, 0 = SC (Slight Cold), 1 = GC,...
 * RETURNS
 *  the solar day of given solar item
 *****************************************************************************/
static S16 mmi_clndr_compute_solar_term(S16 year, S16 month, S16 solar_index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(solar_index % 2 == 1)
    {
        return (solar_term_table[year - CLNDR_FIRST_NAVI_YEAR][month - 1] & 0X0F) + 16;
    }
    else
    {
        return solar_term_table[year - CLNDR_FIRST_NAVI_YEAR][month - 1] >> 4;
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_compute_lunar_info
 * DESCRIPTION
 *  This function is to convert solar date infomation to lunar date.
 * CALLS
 * PARAMETERS
 *  lunar_date      [IN/OUT]       lunar date info struct
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_compute_lunar_info(clndr_lnuar_date_info_struct *lunar_date)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/   
    S16 year_index = 0;
    S16 days_sum = 0;
    S16 intercalary_month = 0;
    S16 lunar_days = 0;
    S16 month_index = 0;
    S16 accumulate_day = 0;
    U8 is_leap_year = 0;
    U8 solar_term;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    accumulate_day = gClndrSolarAccuDays[lunar_date->SolarMonth - 1] + lunar_date->SolarDay;
    
    is_leap_year = IsLeapYear(lunar_date->SolarYear);
    if((is_leap_year == 1) && (lunar_date->SolarMonth > 2))
    {  
        accumulate_day++;
    }
    
    year_index = lunar_date->SolarYear - CLNDR_TABLE_START_YEAR;

    /* to check if today is earlier than the Chinese New Year day of this year */
    if (accumulate_day <= gClndrLunarInfo[year_index].BaseDays)
    {
        year_index--;
        lunar_date->LunarYear = lunar_date->SolarYear - 1;
        if(IsLeapYear(lunar_date->SolarYear - 1))
        {
            accumulate_day = accumulate_day + 366 - gClndrLunarInfo[year_index].BaseDays;
        }
        else
        {
            accumulate_day = accumulate_day + 365 - gClndrLunarInfo[year_index].BaseDays;
        }
    }
    else
    {
        lunar_date->LunarYear = lunar_date->SolarYear;
        accumulate_day -= gClndrLunarInfo[year_index].BaseDays;
    }
    
    /* to calculate the lunar month and day */
    for (month_index = 0; month_index < 13; month_index++)
    {
        if (gClndrLunarInfo[year_index].MonthDays & (0x01 << month_index))
        {
            lunar_days = 30;
        }
        else
        {
            lunar_days = 29;
        }
        days_sum += lunar_days;

        if (days_sum >= accumulate_day)
        {
            days_sum -= lunar_days;
            break;
        }     
    }

    lunar_date->LunarMonth = (month_index + 1);
    lunar_date->LunarDay = accumulate_day - days_sum;

    /* to adjust Lunar month if there is a intercalary month in this year */
    intercalary_month = gClndrLunarInfo[year_index].Intercalary;
    lunar_date->LeapMonth = MMI_FALSE;
    if (intercalary_month != 0)
    {
        if(lunar_date->LunarMonth == intercalary_month + 1)
        {
            lunar_date->LunarMonth--;
            lunar_date->LeapMonth = MMI_TRUE;   
        }
        else if(lunar_date->LunarMonth > intercalary_month + 1)
        {
            lunar_date->LunarMonth--;
        }
    }
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    /* to calculate the lunar day of solar term in this month */
    solar_term = solar_term_table[lunar_date->SolarYear - CLNDR_FIRST_NAVI_YEAR][lunar_date->SolarMonth - 1];
    if(lunar_date->SolarDay == solar_term >> 4)                                 
    {
        lunar_date->SolarTerm = (lunar_date->SolarMonth  - 1) * 2;
    }
    else if(lunar_date->SolarDay == (solar_term & 0X0F) + 16)
    {
        lunar_date->SolarTerm = (lunar_date->SolarMonth  - 1) * 2 + 1;
    }
    else
    {
        lunar_date->SolarTerm = 25;      // not a solar term
    }
    /* to recode the information to present */
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_lunar_date_str
 * DESCRIPTION
 *  This function is to show the string of lunar date.
 * CALLS
 * PARAMETERS
 *  lunar_date      [IN]        in lunar date 
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_lunar_date_str(clndr_lnuar_date_info_struct *lunar_date)
{
    /* Chinese lunar year */
    //mmi_ucs2cpy(lunar_date->TitleInfo, GetString((U16) (STR_CAL_KAN1 + lunar_date->KanYear)));
    //mmi_ucs2cat(lunar_date->TitleInfo, GetString((U16) (STR_CAL_CHI1 + lunar_date->ChiYear)));
    //mmi_ucs2cat(lunar_date->TitleInfo, GetString(STR_GLOBAL_YEAR));
    U32 strid[6] = {0};/*Use this array to store string id, strcat at last*/
    U32 i;
    /* Chinese lunar month */
    lunar_date->MessageLine1[0] = 0;
    lunar_date->MessageLine1[1] = 0;
    if (lunar_date->LeapMonth == MMI_TRUE)
    {
        strid[0] = STR_CLNDR_LEAP;
    }
    
    if (lunar_date->LunarMonth == 1)
    {
        strid[1] = STR_CLNDR_CHINESE_ZHENG_YUE;
    }
    else if (lunar_date->LunarMonth <= 10)
    {
        strid[1] = STR_CAL_CHINESE_NO1 + lunar_date->LunarMonth - 1;
    }
    else if (lunar_date->LunarMonth == 12)
    {
        strid[1] = STR_CLNDR_CHINESE_LA_YUE;
    }
    else
    {
        strid[1] = STR_CAL_CHINESE_NO10;
        strid[2] = STR_CAL_CHINESE_NO1 + (lunar_date->LunarMonth % 10 - 1);
    }
    strid[3] = STR_CAL_MONTH;
    /* Chinese lunar day */
    if (lunar_date->LunarDay == 30)
    {
        strid[4] = STR_CAL_CHINESE_NO30;
    }
    else if(lunar_date->LunarDay == 20)
    {
        strid[4] = STR_CAL_CHINESE_NO2;
        strid[5] = STR_CAL_CHINESE_NO10;
    }
    else 
    {
        if (lunar_date->LunarDay <= 10)
        {
            strid[4] = STR_CLNDR_CHINESE_CHU;
        }
        else if (lunar_date->LunarDay < 20)
        {
            strid[4] = STR_CAL_CHINESE_NO10;
        }
        else if (lunar_date->LunarDay < 30)
        {
            strid[4] = STR_CAL_CHINESE_NO20;
        }
        strid[5] = STR_CAL_CHINESE_NO1 + (lunar_date->LunarDay - 1) % 10;
    }
    for(i=0; i<6; i++)
    {
        mmi_ucs2cat((CHAR *)lunar_date->MessageLine1, GetString(strid[i]));
        strid[i] = 0;
    }
    lunar_date->MessageLine2[0] = 0;
    lunar_date->MessageLine2[1] = 0;
    if (lunar_date->SolarTerm != 25)
    {
       /* Solar Term */
       strid[0] = STR_CAL_SOLARTERM1 + lunar_date->SolarTerm; 
    }
    else
    {
        /*holiday*/
        if(lunar_date->LunarMonth == 1 && lunar_date->LunarDay == 1)
        {
            strid[1] = STR_ID_CLNDR_HDAY_SPRING;
        }
        else if(lunar_date->LunarMonth == 5 && lunar_date->LunarDay == 5)
        {   
            strid[1] = STR_ID_CLNDR_HDAY_DRAGON_BOAT;
        }
        else if(lunar_date->LunarMonth == 8 && lunar_date->LunarDay == 15)
        {
            strid[1] = STR_ID_CLNDR_HDAY_MID_AUTUMN;
        }
        else if(lunar_date->SolarMonth == 1 && lunar_date->SolarDay == 1)
        {
            strid[1] = STR_ID_CLNDR_HDAY_NEW_YEAR;
        }
        else if(lunar_date->SolarMonth == 5 && lunar_date->SolarDay == 1)
        {
            strid[1] = STR_ID_CLNDR_HDAY_LABOR;
        }
        else if(lunar_date->SolarMonth == 10 && lunar_date->SolarDay == 1)
        {
            strid[1] = STR_ID_CLNDR_HDAY_NATIONAL;
        }
    }
	for(i=0; i<2; i++)
    {
        mmi_ucs2cat((CHAR *)lunar_date->MessageLine2, GetString(strid[i]));
    }
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_is_leap_month
 * DESCRIPTION
 *  Check if leap month
 * PARAMETERS
 *  MYTIME*
 * RETURNS
 *  void
 *****************************************************************************/
static MMI_BOOL mmi_clndr_is_leap_month(S16 year, S16 month)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if (gClndrLunarInfo[year - CLNDR_FIRST_NAVI_YEAR + 1].Intercalary == month)
	{
		return MMI_TRUE;
	}
	else
	{
		return MMI_FALSE;
	}
}

#endif /* __MMI_CALENDAR_CHINESE_SUPPORT__ */

#ifdef __MMI_CALENDAR_EVENT__

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_monthly_set_daily_icon
 * DESCRIPTION
 *  Get list of days which a task is associated to.
 * PARAMETERS
 *  ClndrTime       [?]     
 *  TaskInDay       [?]     
 *  SelectedDate        [?](?)
 *  daylist             [?](?)
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_clndr_monthly_set_daily_icon(
                        MYTIME *date, 
                        mmi_clndr_cell_struct *daily_cell)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i;
    srv_tdl_event_struct *pevent = NULL;
    MYTIME curr_date,result,increment_time;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    MMI_ASSERT(daily_cell);

    for (i = 0; i < g_tdl_cntx.monthly_search.event_cnt; i++)
    {   
		memcpy(&curr_date, date, sizeof(MYTIME));
	    curr_date.nHour = 0;
		curr_date.nMin = 0;
		curr_date.nSec = 0;

		if(g_tdl_cntx.monthly_search.event_buf[i].source_id == SRV_TDL_EVENT_SOURCE_LOCAL)
	 	{
			srv_tdl_get_cache(
						(void*)&pevent, 
						sizeof(srv_tdl_event_short_struct), 
						SRV_TDL_VCAL_EVENT,
						g_tdl_cntx.monthly_search.event_buf[i].event_id);
	 	}
		else
		{
			 pevent = (srv_tdl_event_struct *)OslMalloc(sizeof(srv_tdl_event_struct));	
			 srv_tdl_event_get(
						 pevent, 
						 sizeof(srv_tdl_event_struct), 
						 g_tdl_cntx.monthly_search.event_buf[i].source_id, 
						 g_tdl_cntx.monthly_search.event_buf[i].event_id);
		}

		curr_date.nDay = 1;
	    curr_date.DayIndex = DOW(
				        curr_date.nYear, 
				        curr_date.nMonth, 
				        curr_date.nDay);
		memset(&increment_time, 0, sizeof(MYTIME));
        increment_time.nDay = 1;		
		while(curr_date.nMonth == date->nMonth)
		{
		 #ifndef __SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__
		    //remove calendar event icon set;
			if(srv_tdl_event_search_check_daily((srv_tdl_event_short_struct *)pevent, curr_date))
			{
            #ifdef __MMI_CLNDR_EVENT_INFO__
				daily_cell[curr_date.nDay].icon = IMG_CLNDR_ICON_REMINDER;
				if(daily_cell[curr_date.nDay].date < CLNDR_INFO_BOX_ROW)
				{
					daily_cell[curr_date.nDay].today_list[daily_cell[curr_date.nDay].date].source_id = g_tdl_cntx.monthly_search.event_buf[i].source_id;
					daily_cell[curr_date.nDay].today_list[daily_cell[curr_date.nDay].date].event_id = g_tdl_cntx.monthly_search.event_buf[i].event_id;
				}
            #endif /*__MMI_CLNDR_EVENT_INFO__*/
				daily_cell[curr_date.nDay].date++;
			}
		 #endif/*__SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__*/

			applib_dt_increase_time(
                (applib_time_struct*)&curr_date, 
                (applib_time_struct*)&increment_time, 
                (applib_time_struct*)&result);
		    memcpy(&curr_date, &result, sizeof(MYTIME));	
		}
		if(g_tdl_cntx.monthly_search.event_buf[i].source_id != SRV_TDL_EVENT_SOURCE_LOCAL)
		{
		    OslMfree(pevent);
		}
	}
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_search_monthly_check
 * DESCRIPTION
 *  Check if the event is in the search list.
 * PARAMETERS
 *  data : [IN] The data to be checked.
 *  filter : [IN] The check criterin.
 * RETURNS
 *  The error code of the operation.
 * RETURN VALUES
 *  MMI_TRUE : Sort successfully.
 *  MMI_FALSE : Sort failed with unknow reasons.
 *****************************************************************************/ 
MMI_BOOL mmi_clndr_search_monthly_check(
                                 const void *data, 
                                 const srv_tdl_vcal_enum vcal_type,
                                 const srv_tdl_search_filter_struct search_filter)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tdl_event_short_struct *pevent = (srv_tdl_event_short_struct*)data;
    MMI_BOOL result;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (pevent->repeat.rule)
    {
    #ifdef __MMI_INDICAL__
        case MMI_TDL_RULE_TITHI:
            result = (MMI_BOOL)srv_tdl_event_search_tithi_monthly(
                                                    data,
                                                    vcal_type,
                                                    search_filter.u.date_time);
            break;
    #endif /* __MMI_INDICAL__ */

        default:
            result = srv_tdl_event_search_check_monthly(
                                                    pevent, 
                                                    search_filter.u.date_time);
    }
    return result;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_search_weekly_check
 * DESCRIPTION
 *  Check if the event is in the search list.
 * PARAMETERS
 *  data : [IN] The data to be checked.
 *  filter : [IN] The check criterin.
 * RETURNS
 *  The error code of the operation.
 * RETURN VALUES
 *  MMI_TRUE : Sort successfully.
 *  MMI_FALSE : Sort failed with unknow reasons.
 *****************************************************************************/ 
static MMI_BOOL mmi_clndr_search_weekly_check(
                                 const void *data, 
                                 const srv_tdl_vcal_enum vcal_type,
                                 const srv_tdl_search_filter_struct search_filter)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tdl_event_short_struct *pevent = (srv_tdl_event_short_struct*)data;
    MMI_BOOL result;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch (pevent->repeat.rule)
    {
    #ifdef __MMI_INDICAL__
        case MMI_TDL_RULE_TITHI:
            result = (MMI_BOOL)srv_tdl_event_search_tithi_weekly(
                                                    data,
                                                    vcal_type,
                                                    search_filter.u.weekly_search);
            break;
    #endif /* __MMI_INDICAL__ */

        default:
            result = srv_tdl_event_search_check_weekly(
                                                    pevent, 
                                                    search_filter.u.weekly_search);
    }
    return result;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_cell_data_constructor
 * DESCRIPTION
 *  This API construct cell data.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
static S32 mmi_clndr_cell_data_constructor(
            gui_calendar_type_enum type,
            applib_time_struct start_time,
            applib_time_struct end_time,
            applib_time_struct interval,
            S32 query_count,
            gui_calendar_cell_struct *cells)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    S32 i = 1; //Started with 1, as it is used as date index in monthly view.
    mmi_cal_daily_scrn_info *scrn_data;
    MYTIME date_to_set, increment_time, result;
    
	srv_tdl_search_filter_struct search_info;
    MMI_BOOL ret;
    S32 job_id;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    memset(cells, 0, query_count * sizeof(gui_calendar_cell_struct));
    for(i = 0; i < query_count; i++)
	{
        cells[i].bg_index = GUI_CALENDAR_COLOR_NONE;
    }
    mmi_clndr_screen_reset_cell_info();

    switch (type)
    {
        case GUI_CALENDAR_TYPE_MONTH:
        {		
			scrn_data = (mmi_cal_daily_scrn_info *)mmi_frm_scrn_get_user_data(
						GRP_ID_CAL_MAIN, 
						SCR_ID_CLNDR_SCREEN);

			memcpy(&date_to_set, (MYTIME*)&start_time, sizeof(MYTIME));

            // india or hijri lunar info
			mmi_clndr_monthly_set_cell_info(
				(MYTIME *)&scrn_data->curr_date, 
				g_clndr_cntx->monthly_cell_info);
		
			ret = mmi_clndr_monthly_event_list_update(scrn_data);
			if(!ret)
			{
				search_info.type = SRV_TDL_SEARCH_TYPE_MONTHLY;
				memcpy(&search_info.u.date_time, &scrn_data->curr_date, sizeof(MYTIME));

				job_id = srv_tdl_event_search_begin(&search_info,SRV_TDL_EVENT_SORT_START_TIME, g_clndr_event_filter_select);
				if(job_id <= 0)
				{
				    g_tdl_cntx.monthly_search.state = MMI_CAL_EVENT_SEARCH_DONE_OK;
				    g_tdl_cntx.monthly_search.event_cnt = 0;
				}
				else
				{
				    memcpy(&g_tdl_cntx.monthly_search.date, &scrn_data->curr_date, sizeof(MYTIME));
					g_tdl_cntx.monthly_search.search_id = job_id;
					g_tdl_cntx.monthly_search.state = MMI_CAL_EVENT_SEARCH_GOING;
				}
				return 0;
			}
            else if(g_tdl_cntx.monthly_search.state == MMI_CAL_EVENT_SEARCH_DONE_ERR)
		    {
				g_tdl_cntx.monthly_search.state = MMI_CAL_EVENT_SEARCH_DONE_OK;
				 mmi_popup_display_simple(
			        (WCHAR*)(get_string(STR_GLOBAL_ERROR)), 
			        MMI_EVENT_FAILURE, 
			        GRP_ID_ROOT, 
			        NULL);
			 
				return 0;
		    }
		    mmi_clndr_monthly_set_daily_icon((MYTIME *)&scrn_data->curr_date, g_clndr_cntx->monthly_cell_info);
			
			memset(&increment_time, 0, sizeof(MYTIME));
            increment_time.nDay = 1;		
			for(i = 0; i < query_count; i++)
			{
				if(date_to_set.nMonth == scrn_data->curr_date.nMonth)
				{
	                if (g_clndr_cntx->monthly_cell_info[date_to_set.nDay].date > 0)
	                {
	                #ifdef __MMI_CLNDR_EVENT_INFO__
	                    cells[i].icon_id = g_clndr_cntx->monthly_cell_info[date_to_set.nDay].icon;      
	                #else
						if(g_clndr_cntx->monthly_cell_info[date_to_set.nDay].date == 1)
						{
	                        cells[i].bg_index = GUI_CALENDAR_COLOR_ONE_TASK;
						}
						else
						{
	                        cells[i].bg_index = GUI_CALENDAR_COLOR_MORE_TASK;
						}
	                #endif
	                    cells[i].flags |= GUI_CALENDAR_CELL_SCHEDULED;
	                }		
				}
				
				if(date_to_set.nYear == scrn_data->curr_date.nYear && date_to_set.nMonth > scrn_data->curr_date.nMonth)
				{
					break;
				}
				applib_dt_increase_time(
	                (applib_time_struct*)&date_to_set, 
	                (applib_time_struct*)&increment_time, 
	                (applib_time_struct*)&result);
			    memcpy(&date_to_set, &result, sizeof(MYTIME));	
			}
            break;
        }
		
        case GUI_CALENDAR_TYPE_WEEK:
        {
            ret = mmi_clndr_weekly_event_list_update((MYTIME*)&start_time);
            if(ret && g_tdl_cntx.weekly_search[start_time.DayIndex].state == MMI_CAL_EVENT_SEARCH_DONE_OK)
            {
	            mmi_cal_weekly_set_cell_info((MYTIME*)&start_time, (MYTIME*)&interval, query_count);
	            
	            for (i = 0; i < query_count; i++, cells++)
	            {
	                if (g_clndr_cntx->weekly_cell_info[i].date > 0)
	                {
	                    if(g_clndr_cntx->weekly_cell_info[i].date == 1)
						{
	                        cells->bg_index = GUI_CALENDAR_COLOR_ONE_TASK;
						}
						else
						{
	                        cells->bg_index = GUI_CALENDAR_COLOR_MORE_TASK;
						}
	                    cells->flags |= GUI_CALENDAR_CELL_SCHEDULED;
	                }
	            }
	        }
			else if(g_tdl_cntx.weekly_search[start_time.DayIndex].state == MMI_CAL_EVENT_SEARCH_DONE_ERR)
		    {
				 g_tdl_cntx.weekly_search[start_time.DayIndex].state = MMI_CAL_EVENT_SEARCH_DONE_OK;
				 mmi_popup_display_simple(
			        (WCHAR*)(get_string(STR_GLOBAL_ERROR)), 
			        MMI_EVENT_FAILURE, 
			        GRP_ID_ROOT, 
			        NULL);
		    }
	        else
	        {
	        	search_info.type = SRV_TDL_SEARCH_TYPE_DAILY;
			    memcpy(&search_info.u.date_time, (MYTIME*)&start_time, sizeof(MYTIME));
				job_id = srv_tdl_event_search_begin(&search_info, SRV_TDL_EVENT_SORT_START_TIME,g_clndr_event_filter_select);
				if(job_id <= 0)
				{
					g_tdl_cntx.weekly_search[start_time.DayIndex].state = MMI_CAL_EVENT_SEARCH_DONE_OK;
		            g_tdl_cntx.weekly_search[start_time.DayIndex].event_cnt = 0;
				    return 0;
				}
		        else
		        {
		            memcpy(&g_tdl_cntx.weekly_search[start_time.DayIndex].date, (MYTIME*)&start_time, sizeof(MYTIME));
			        g_tdl_cntx.weekly_search[start_time.DayIndex].search_id = job_id;
			        g_tdl_cntx.weekly_search[start_time.DayIndex].state = MMI_CAL_EVENT_SEARCH_GOING;
			        g_tdl_cntx.weekly_search_cnt++;
			    }
	        }
            break;
        }
        default:
            break;
    }

    return i;
}


/*****************************************************************************
 * FUNCTION
 *  mmi_cal_weekly_set_cell_info
 * DESCRIPTION
 *  Set the icon in the cell of calendar, 
 *  only fill the column of date_to_set specified.
 * PARAMETERS
 *  ClndrTime       [?]     
 *  TaskInDay       [?]     
 *  SelectedDate        [?](?)
 *  daylist             [?](?)
 * RETURNS
 *  void
 *****************************************************************************/
static void mmi_cal_weekly_set_cell_info(MYTIME *date_to_set, MYTIME *interval, U32 count)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    srv_tdl_search_filter_struct search_info;    
    MYTIME cell_time_begin, cell_time_end, temp_result;
    mmi_clndr_cell_struct *curr_cell;
    U32 i, j;
    srv_tdl_event_struct *pevent;
    MMI_BOOL ret;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	if(date_to_set->nYear >= 2031)
	{
        return;
	}
    curr_cell = g_clndr_cntx->weekly_cell_info;
    
    memcpy(&cell_time_begin, date_to_set, sizeof(MYTIME));

    for (j = 0; j < count; j ++)
    {
        applib_dt_increase_time(
                    (applib_time_struct*)&cell_time_begin,
                    (applib_time_struct*)interval,
                    (applib_time_struct*)&cell_time_end);
		
		search_info.type = SRV_TDL_SEARCH_TYPE_DURATION;
        memcpy(&search_info.u.duration[0], &cell_time_begin, sizeof(MYTIME));
        memcpy(&search_info.u.duration[1], &cell_time_end, sizeof(MYTIME));
        
	    for (i = 0; i < g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_cnt; i++)
	    {            
	        if(g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_buf[i].source_id == SRV_TDL_EVENT_SOURCE_LOCAL)
		 	{
				srv_tdl_get_cache(
							(void*)&pevent, 
							sizeof(srv_tdl_event_short_struct), 
							SRV_TDL_VCAL_EVENT,
							g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_buf[i].event_id);
		 	}
			else
			{
				 pevent = (srv_tdl_event_struct *)OslMalloc(sizeof(srv_tdl_event_struct));	
				 srv_tdl_event_get(
							 pevent, 
							 sizeof(srv_tdl_event_struct), 
							 g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_buf[i].source_id, 
							 g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_buf[i].event_id);
			}
	                                                
			ret = srv_tdl_search_default_check(pevent, SRV_TDL_VCAL_EVENT, search_info);

         #ifndef __SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__
		    //remove calendar event icon set;
			if(ret)
			{
	           #ifdef __MMI_CLNDR_EVENT_INFO__
	                curr_cell->icon = IMG_CLNDR_ICON_REMINDER;
	           #endif
               curr_cell->date++;    
			}
		 #endif/*__SWATCCH_FOR_CALENDAR_MONTHLY_VIEW_SLIM__*/
			if(g_tdl_cntx.weekly_search[date_to_set->DayIndex].event_buf[i].source_id != SRV_TDL_EVENT_SOURCE_LOCAL)
			{
			    OslMfree(pevent);
			}
		}
		curr_cell++;
		
		applib_dt_increase_time(
							(applib_time_struct*)&cell_time_begin,
							(applib_time_struct*)interval,
							(applib_time_struct*)&temp_result);
		memcpy(&cell_time_begin, &temp_result, sizeof(MYTIME));
    }

}                        

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_update_date
 * DESCRIPTION
 *  Help function.
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_update_date(MYTIME* date)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *main_scrn_data;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    main_scrn_data = mmi_frm_scrn_get_user_data(GRP_ID_CAL_MAIN, SCR_ID_CLNDR_SCREEN);
    if (main_scrn_data)
    {
        memcpy(&main_scrn_data->highlight_time, date, sizeof(MYTIME));
    }
}

#endif /* __MMI_CALENDAR_EVENT__ */




#if defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__)
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_pre_entry_settings
 * DESCRIPTION
 *  
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_pre_entry_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_clndr_cntx->CurrHighlightCalendar = (S32) g_clndr_cntx->lunar_state;
    ReadValueSlim(NVRAM_CLNDR_INFO_VAL, &(g_clndr_cntx->infodispval), DS_BYTE);
    g_clndr_cntx->CurrHighlightDisplay = (S32) g_clndr_cntx->infodispval;
    mmi_clndr_entry_settings();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_settings
 * DESCRIPTION
 *  
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_entry_settings(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    cui_inline_struct inline_data;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
#ifdef __MMI_MAINLCD_96X64__
    inline_data.items_count = 2;
    inline_data.title = cui_cal_settings_caption[0].string_id;
#else
    inline_data.items_count = 4;
    inline_data.title = STR_GLOBAL_SETTINGS;
#endif /* __MMI_MAINLCD_96X64__ */
    inline_data.title_icon = GetRootTitleIcon(ORGANIZER_CALENDER_MENU);
    inline_data.screen_flag = CUI_INLINE_SCREEN_DEFAULT_TEXT;
    inline_data.softkey = NULL;
    inline_data.items = cui_cal_settings;

    mmi_clndr_setting_child_gid = cui_inline_create(
                                        GRP_ID_CAL_MAIN,
                                        &inline_data);

    if (mmi_clndr_setting_child_gid != GRP_ID_INVALID)
    {        
        if (IsChineseSet())
        {
            g_clndr_cntx->clndrswitchstring[0] = GetString(CAL_STRING_LUNAR);
        }
        else
        {
            g_clndr_cntx->clndrswitchstring[0] = GetString(STR_CLNDR_ENGLISH);
        }
        g_clndr_cntx->clndrswitchstring[1] = GetString(STR_INDICAL_ONSCREEN_INDIAN);
        g_clndr_cntx->clndrswitchstring[2] = GetString(STR_HIJRI_ONSCREEN_HIJRI);
    
        g_clndr_cntx->onoffstring[0] = GetString(STR_GLOBAL_OFF);
        g_clndr_cntx->onoffstring[1] = GetString(STR_GLOBAL_ON);

        cui_inline_set_item_select(
            mmi_clndr_setting_child_gid,
            CUI_INLINE_ITEM_ID_BASE + 1,
            MMI_ONSCREEN_TOTAL,
            (PU8*)g_clndr_cntx->clndrswitchstring,
            (U8)g_clndr_cntx->CurrHighlightCalendar);

        cui_inline_set_item_select(
            mmi_clndr_setting_child_gid,
            CUI_INLINE_ITEM_ID_BASE + 3,
            2,
            (PU8*)g_clndr_cntx->onoffstring,
            (U8)g_clndr_cntx->CurrHighlightDisplay);

        cui_inline_run(mmi_clndr_setting_child_gid);
    }
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_settings_fill_inline_struct
 * DESCRIPTION
 *  
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_settings_fill_inline_struct(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
   CHAR inline_item_index = 0;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (IsChineseSet())
    {
        g_clndr_cntx->clndrswitchstring[0] = GetString(CAL_STRING_LUNAR);
    }
    else
    {
        g_clndr_cntx->clndrswitchstring[0] = GetString(STR_CLNDR_ENGLISH);
    }
    g_clndr_cntx->clndrswitchstring[1] = GetString(STR_INDICAL_ONSCREEN_INDIAN);
    g_clndr_cntx->clndrswitchstring[2] = GetString(STR_HIJRI_ONSCREEN_HIJRI);

    g_clndr_cntx->onoffstring[0] = GetString(STR_GLOBAL_OFF);
    g_clndr_cntx->onoffstring[1] = GetString(STR_GLOBAL_ON);

    SetInlineItemCaption(&(wgui_inline_items[inline_item_index]), (U8*) GetString(ORGANIZER_MENU_CALENDER_STRINGID));
    inline_item_index++;
    SetInlineItemActivation(&(wgui_inline_items[inline_item_index]), INLINE_ITEM_ACTIVATE_WITHOUT_KEY_EVENT, 0);
    SetInlineItemSelect(
        &(wgui_inline_items[inline_item_index]),
        (MMI_ONSCREEN_TOTAL),
        (U8 **) g_clndr_cntx->clndrswitchstring,
        &g_clndr_cntx->CurrHighlightCalendar);
    DisableInlineItemHighlight(&(wgui_inline_items[inline_item_index]));
    RegisterInlineSelectHighlightHandler(&wgui_inline_items[inline_item_index], mmi_clndr_highlight_inline_select_calendar_type);
    
    inline_item_index++;
    SetInlineItemCaption(&(wgui_inline_items[inline_item_index]), (U8*) GetString(STR_CLNDR_ONSCREEN_DISPLAY));
    inline_item_index++;
    SetInlineItemActivation(&(wgui_inline_items[inline_item_index]), INLINE_ITEM_ACTIVATE_WITHOUT_KEY_EVENT, 0);
    SetInlineItemSelect(
        &(wgui_inline_items[inline_item_index]),
        2,
        (U8 **) g_clndr_cntx->onoffstring,
        &g_clndr_cntx->CurrHighlightDisplay);
    DisableInlineItemHighlight(&(wgui_inline_items[inline_item_index]));    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_highlight_inline_select_calendar_type
 * DESCRIPTION
 *  
 * PARAMETERS
 *  index        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_highlight_inline_select_calendar_type(S32 index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!IsChineseSet() && g_clndr_cntx->CurrHighlightCalendar == MMI_CLNDR_ENGLISH)        
    {
        DisableInlineItem(&wgui_inline_items[3], 3);   
    }
    else
    {
        EnableInlineItem(&wgui_inline_items[3], 3);
    }
    RedrawCategory57Screen();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_go_to_options
 * DESCRIPTION
 *  Display indication screen and play azaan alarm tone when alarm expires.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_go_to_options(mmi_id parent_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*---------------------------------------------------------------*/
    cui_inline_close(mmi_clndr_setting_child_gid);
    mmi_frm_scrn_close_active_id();    
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_save_settings
 * DESCRIPTION
 *  
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_save_settings(mmi_id parent_id)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    //S16 error;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/   
    cui_inline_get_value(
                    mmi_clndr_setting_child_gid,
                    CUI_INLINE_ITEM_ID_BASE + 1,
                    &g_clndr_cntx->CurrHighlightCalendar);
    cui_inline_get_value(
                    mmi_clndr_setting_child_gid,
                    CUI_INLINE_ITEM_ID_BASE + 3,
                    &g_clndr_cntx->CurrHighlightDisplay);

    g_clndr_cntx->infodispval = (U8) g_clndr_cntx->CurrHighlightDisplay;
    g_clndr_cntx->lunar_state = (U8) g_clndr_cntx->CurrHighlightCalendar;
    WriteValueSlim(NVRAM_CLNDR_INFO_VAL, &(g_clndr_cntx->infodispval), DS_BYTE);
    WriteValueSlim(LUNAR_CALENDAR, &g_clndr_cntx->lunar_state, DS_BYTE);
    //DeleteUptoScrID(SCR_ID_CLNDR_SCREEN);

    mmi_popup_display_simple_ext(
                        STR_GLOBAL_SAVED,
                        MMI_EVENT_SUCCESS,
                        parent_id,
                        0);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_help
 * DESCRIPTION
 *  Help function.
 * PARAMETERS
 *  none        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_entry_help(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 str = STR_GLOBAL_HELP;
    U8 *guiBuffer;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
//    EntryNewScreen(SCR_ID_CLNDR_HELP, NULL, mmi_clndr_entry_help, NULL);
    mmi_frm_scrn_enter(
            GRP_ID_CAL_MAIN,
            SCR_ID_CLNDR_HELP,
            NULL,
            mmi_clndr_entry_help,
            MMI_FRM_FULL_SCRN);
            
    guiBuffer = mmi_frm_scrn_get_active_gui_buf();
    
    RegisterHighlightHandler(ExecuteCurrHiliteHandler);
    switch (g_clndr_cntx->lunar_state)
    {
        case MMI_CLNDR_ENGLISH:
            if (IsChineseSet())
            {
                str = STR_CLNDR_CHINESE_HELP;
            }
            else
            {
                str = STR_CLNDR_ENGLISH_HELP;
            }
            break;
    #ifdef __MMI_INDICAL__
        case MMI_CLNDR_INDIAN_LUNISOLAR:
            str = STR_INDICAL_HELP;
            break;
    #endif /* __MMI_INDICAL__ */
    #ifdef __MMI_HIJRI_CALENDAR__
        case MMI_CLNDR_HIJRI_LUNAR:
            str = STR_HIJRI_CALENDAR_HELP;
            break;
    #endif /* __MMI_HIJRI_CALENDAR__ */
        default:
            break;
    }

    ShowCategory74Screen(
        STR_GLOBAL_HELP,
        GetRootTitleIcon(ORGANIZER_CALENDER_MENU),
        0,
        0,
        STR_GLOBAL_BACK,
        IMG_GLOBAL_BACK,
        (PU8) GetString(str),
        mmi_ucs2strlen(GetString(str)),
        guiBuffer);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
}
/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_get_updated_date_time_after_jump_to_date
 * DESCRIPTION
 *  Get the updated time after jump to date
 * PARAMETERS
 *  MYTIME*
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_get_updated_date_time_after_jump_to_date(MYTIME *t)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *scrn_data;    

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                       GRP_ID_CAL_MAIN, 
                                                       SCR_ID_CLNDR_SCREEN);
	memcpy(t, &scrn_data->highlight_time, sizeof(MYTIME));
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_set_jump_to_date
 * DESCRIPTION
 *  This function set the jump to date time
 * PARAMETERS
 *  MYTIME
  * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_set_jump_to_date(MYTIME t)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_cal_main_scrn_info *scrn_data;    

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    scrn_data = (mmi_cal_main_scrn_info*)mmi_frm_scrn_get_user_data(
                                                       GRP_ID_CAL_MAIN, 
                                                       SCR_ID_CLNDR_SCREEN);
	memcpy(&scrn_data->highlight_time, &t, sizeof(MYTIME));
}

#endif /* defined(__MMI_INDICAL__) || defined(__MMI_HIJRI_CALENDAR__) */

#ifdef __MMI_AP_DCM_CLNDR__
#pragma arm section code, rodata
#endif

#define MMI_CLNDR_SECTION_DCM_END

#define MMI_CLNDR_SECTION_NOT_DCM_BEGIN

/*
moved  by lhm for MAUI_03368863
remove mmi_clndr_reset_event_search_state() and 
mmi_clndr_reset_event_search_state_exclude_all_search() out of DCM
*/
#ifdef __MMI_CALENDAR_EVENT__
void mmi_clndr_reset_event_search_state(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    int i = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	if(g_tdl_cntx.all_search.state == MMI_CAL_EVENT_SEARCH_GOING)
	{
		srv_tdl_event_search_end(g_tdl_cntx.all_search.search_id);
	}
	if(g_tdl_cntx.monthly_search.state == MMI_CAL_EVENT_SEARCH_GOING)
	{
		srv_tdl_event_search_end(g_tdl_cntx.monthly_search.search_id);
	}
	if(g_tdl_cntx.daily_search.state == MMI_CAL_EVENT_SEARCH_GOING)
	{
		srv_tdl_event_search_end(g_tdl_cntx.daily_search.search_id);
	}
	
	if(g_tdl_cntx.all_search.event_buf)
	{
		OslMfree(g_tdl_cntx.all_search.event_buf);
	}
	if(g_tdl_cntx.monthly_search.event_buf)
	{
		OslMfree(g_tdl_cntx.monthly_search.event_buf);
	}
	if(g_tdl_cntx.daily_search.event_buf)
	{
		OslMfree(g_tdl_cntx.daily_search.event_buf);
	}  
	if(g_tdl_cntx.special_search.event_buf)
	{
		OslMfree(g_tdl_cntx.special_search.event_buf);
	}
	
	for(i = 0; i < 7; i++)
	{
		if(g_tdl_cntx.weekly_search[i].state == MMI_CAL_EVENT_SEARCH_GOING)
		{
			srv_tdl_event_search_end(g_tdl_cntx.weekly_search[i].search_id);
		}
		if(g_tdl_cntx.weekly_search[i].event_buf)
		{
			OslMfree(g_tdl_cntx.weekly_search[i].event_buf);
		}
		 memset(&g_tdl_cntx.weekly_search[i], 0 , sizeof(mmi_tdl_event_search_struct));
	}
	
	memset(&g_tdl_cntx.all_search, 0 , sizeof(mmi_tdl_event_search_struct));
	memset(&g_tdl_cntx.monthly_search, 0 , sizeof(mmi_tdl_event_search_struct));
	memset(&g_tdl_cntx.daily_search, 0 , sizeof(mmi_tdl_event_search_struct));
	memset(&g_tdl_cntx.special_search, 0 , sizeof(mmi_tdl_event_search_struct));

}

void mmi_clndr_reset_event_search_state_exclude_all_search(void)
{
     /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/    
    int i = 0;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

	if(g_tdl_cntx.monthly_search.state == MMI_CAL_EVENT_SEARCH_GOING)
	{
		srv_tdl_event_search_end(g_tdl_cntx.monthly_search.search_id);
	}
	if(g_tdl_cntx.daily_search.state == MMI_CAL_EVENT_SEARCH_GOING)
	{
		srv_tdl_event_search_end(g_tdl_cntx.daily_search.search_id);
	}
	
	if(g_tdl_cntx.monthly_search.event_buf)
	{
		OslMfree(g_tdl_cntx.monthly_search.event_buf);
	}
	if(g_tdl_cntx.daily_search.event_buf)
	{
		OslMfree(g_tdl_cntx.daily_search.event_buf);
	}  
	if(g_tdl_cntx.special_search.event_buf)
	{
		OslMfree(g_tdl_cntx.special_search.event_buf);
	}
	
	for(i = 0; i < 7; i++)
	{
		if(g_tdl_cntx.weekly_search[i].state == MMI_CAL_EVENT_SEARCH_GOING)
		{
			srv_tdl_event_search_end(g_tdl_cntx.weekly_search[i].search_id);
		}
		if(g_tdl_cntx.weekly_search[i].event_buf)
		{
			OslMfree(g_tdl_cntx.weekly_search[i].event_buf);
		}
		 memset(&g_tdl_cntx.weekly_search[i], 0 , sizeof(mmi_tdl_event_search_struct));
	}
	
	memset(&g_tdl_cntx.monthly_search, 0 , sizeof(mmi_tdl_event_search_struct));
	memset(&g_tdl_cntx.daily_search, 0 , sizeof(mmi_tdl_event_search_struct));
	memset(&g_tdl_cntx.special_search, 0 , sizeof(mmi_tdl_event_search_struct));
}
#endif /*MMI_CALENDAR_EVENT__*/


/*****************************************************************************
 * FUNCTION
 *  HighlightClndrMenu
 * DESCRIPTION
 *  Highlight handler of Calendar menu item.
 *  Register key handlers.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void HighlightClndrMenu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    ChangeLeftSoftkey(STR_GLOBAL_OK, IMG_GLOBAL_OK);
    ChangeRightSoftkey(STR_GLOBAL_BACK, IMG_GLOBAL_BACK);
    ChangeCenterSoftkey(0, IMG_GLOBAL_COMMON_CSK);
    SetLeftSoftkeyFunction(mmi_clndr_entry_main_menu, KEY_EVENT_UP);
    SetRightSoftkeyFunction(mmi_frm_scrn_close_active_id, KEY_EVENT_UP);
    SetCenterSoftkeyFunction(mmi_clndr_entry_main_menu, KEY_EVENT_UP);  
}


/*****************************************************************************
 * FUNCTION
 *  ClndrPreEntryApp
 * DESCRIPTION
 *  Initialize variables and go to calendar screen.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void ClndrPreEntryApp(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    //mmi_clndr_launch(GRP_ID_ROOT, MMI_CAL_LAUNCH_TYPE_AUTO, NULL);
    mmi_clndr_entry_main_menu();
}


/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_entry_main_menu
 * DESCRIPTION
 *  Entry calendar main menu.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_entry_main_menu(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/    
  #ifdef __SWATCCH_FOR_CALENDAR_MAIN_SCREEN__
    //必须要加的处理；screen lock退回idle，没有释放；所以再次进入时，需要free res;
    //mmi_swatch_common_pen_handle_exit();
  #endif
    mmi_clndr_launch(GRP_ID_ROOT, MMI_CAL_LAUNCH_TYPE_AUTO, NULL);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_launch
 * DESCRIPTION
 *  Launch calendar without parameter.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_launch(mmi_id parent_id, mmi_cal_launch_type_enum dis_type, MYTIME *curr_time)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
#ifdef __MMI_AP_DCM_CLNDR__
    mmi_ap_send_dcm_load_evt(DYNAMIC_CODE_COMPRESS_CALENDAR);
#endif
    mmi_clndr_launch_int(parent_id, dis_type, curr_time);
}


/*****************************************************************************
 * FUNCTION
 *  mmi_entry_calendar
 * DESCRIPTION
 *  Entry calendar with highlight time.
 *  Register key handlers.
 * PARAMETERS
 *  calTime     [IN]    the highlight caledar time.
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_entry_calendar(MYTIME calTime)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (!applib_dt_check_valid_by_app(DT_UTC_BASE_YEAR, DT_MAX_YEAR, (applib_time_struct*)&calTime))
    {
        mmi_popup_display_simple_ext(
                            STR_CLNDR_WRONG_DATE,
                            MMI_EVENT_DEFAULT,
                            GRP_ID_ROOT,
                            0);
        return;
    }        
    mmi_clndr_launch(GRP_ID_ROOT, MMI_CAL_LAUNCH_TYPE_AUTO, &calTime);
}

/*****************************************************************************
 * FUNCTION
 *  mmi_cal_is_busy
 * DESCRIPTION
 *  CAL is busy now?
 * PARAMETERS
 *  void
 * RETURNS
 *  MMI_TRUE CAL is busy now
 *  MMI_FALSE CAL isn't busy now
 *****************************************************************************/
#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
MMI_BOOL mmi_cal_is_busy(void)
{
    
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    U16 i;
    U16 sg_id[3] =
    {
        GRP_ID_CAL_MAIN,          /* Entry from main menu */
    #ifdef __MMI_CALENDAR_EVENT__
        GRP_ID_TDL_HOME_SCREEN,   /* Entry from home screen */
        GRP_ID_TDL_EDIT  
    #endif
    };

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    for (i = 0; i < 2; i++)
    {
        if (mmi_frm_group_is_present(sg_id[i]))
        {
            return MMI_TRUE;
        }
    }

    return MMI_FALSE;
}
#endif

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_set_swith_mode_flag
 * DESCRIPTION
 *  Set the flag to judge if swithing mode.
 * PARAMETERS
 *  flag       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_clndr_set_swith_mode_flag(MMI_BOOL flag)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    g_current_view_mode_context.switch_setting_flag = flag;
}

#if 0
#if defined( __MMI_OP11_HOMESCREEN_0301__) || defined(__MMI_OP11_HOMESCREEN_0302__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_CALENDAR_EVENT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_SYNCML_SYNC_CALENDAR_SUPPORT__ */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_CALENDAR_EVENT__ */
#endif /* defined( __MMI_OP11_HOMESCREEN_0301__) || defined(__MMI_OP11_HOMESCREEN_0302__) */
#endif //if 0

/*****************************************************************************
 * FUNCTION
 *  mmi_clndr_get_week_first_day
 * DESCRIPTION
 *  
 * PARAMETERS
 *  nIndex      [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
U8 mmi_clndr_get_week_first_day()
{    
	 /*----------------------------------------------------------------*/
	 /* Local Variables 											   */
	 /*----------------------------------------------------------------*/
	 //S16 error;
	 
	 /*----------------------------------------------------------------*/
	 /* Code Body													   */
	 /*----------------------------------------------------------------*/
#ifdef	__MMI_CALENDAR_FDOW__	 
	 ReadValueSlim(NVRAM_CLNDR_FIRST_DAY_OF_WEEK, &g_clndr_cntx->first_day_of_week, DS_BYTE);
	 return g_clndr_cntx->first_day_of_week;
#else
     return MMI_CALENDAR_FDOW;
#endif
}

#define MMI_CLNDR_SECTION_NOT_DCM_END

#endif /* __MMI_CALENDAR__ */

#if 0
#ifdef  __MMI_CALENDAR_ON_IDLE_SCREEN__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* __MMI_CALENDAR_ON_IDLE_SCREEN__*/
#endif

