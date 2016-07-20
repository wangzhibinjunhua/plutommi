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

/*******************************************************************************
* Filename:
* ---------
*  playlistcacheSrvCfg.h
*
* Project:
* --------
*   MAUI
*
* Description:
* ------------
*   
*
* Author:
* -------
 * -------
*
*==============================================================================
*           HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
*==============================================================================
*******************************************************************************/

#include "mmi_features.h"

#ifdef __MMI_AUDPLY_WALK_PLAY__
#define __MMI_SRV_PLAYLIST_CACHE_SUPPORT__
#endif  //__MMI_AUDPLY_WALK_PLAY__

#ifdef __MMI_SRV_PLAYLIST_CACHE_SUPPORT__

#ifndef __PLC_SRV_CFG_H__
#define __PLC_SRV_CFG_H__

#include "MMI_include.h"

#define PLC_SRV_QUEUE_LENGTH 10
#define PLC_SRV_TIME_SLOT_LEN KAL_TICKS_100_MSEC //ticks
#define PLC_SRV_TIMER_OUT_TIME 1000  //ms, should be time of 5ms
#define PLC_SRV_POST_RUN_TIME 300  //ms, should be time of 5ms


typedef void (*InitFun) (void);

typedef enum
{
    PLC_TYPE_AUDIO_PLAYER = 0,
    PLC_TYPE_END
}plc_srv_instance_type;

typedef enum
{
    PLC_STATE_NULL = 0,
    PLC_STATE_IDLE,
    PLC_STATE_RUNNING,
    PLC_STATE_CRITICAL,//only one work can be critical for each instance
    PLC_STATE_TOTAL
}plc_srv_instance_state;

typedef enum
{
    PLC_WORK_AUDIO_PLAYER_START = 0,
    PLC_WORK_CACHE_VALIDATION,
    PLC_WORK_UPDATE_STACK,
    PLC_WORK_LOAD_CACHE,
    PLC_WORK_NEW_CACHE,
    PLC_WORK_AUDIO_PLAYER_END = PLC_WORK_NEW_CACHE,
    PLC_WORK_TOTAL = PLC_WORK_AUDIO_PLAYER_END
}plc_srv_work_type;

typedef enum
{
    PLC_WORK_STATE_NULL = 0,        
    PLC_WORK_STATE_SUSPEND = 0x01,
    PLC_WORK_STATE_CANCEL = 0x02,
    PLC_WORK_STATE_IDLE = 0x04,
    PLC_WORK_STATE_WORKING = 0x10,
    PLC_WORK_STATE_END = 0x20
}plc_srv_work_state;

typedef enum
{
    PLC_JOB_AUDIO_PLAYER_START,
    PLC_JOB_CHECK_FIRST_FOLDER,
    PLC_JOB_GET_PREV_FILE_FOLDER,
    PLC_JOB_GET_STACK_INFO,
    PLC_JOB_ADD_CACHE_TEMP,
    PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP,
    PLC_JOB_ADD_CACHE,
    PLC_JOB_ADD_CACHE_PREV_FOLDER,
    PLC_JOB_AUDIO_PLAYER_END = PLC_JOB_ADD_CACHE_PREV_FOLDER
}plc_srv_job_type;

typedef struct
{
    plc_srv_instance_type instance;
    plc_srv_work_type work_start;
    plc_srv_work_type work_end;
    plc_srv_job_type job_start;
    plc_srv_job_type job_end;
    kal_uint8 time_slot_len;
    InitFun init_func;
}plc_srv_instance_config;

#endif //__PLC_SRV_CFG_H__

#endif


