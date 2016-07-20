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
*  plcacheSrv_agent_audply.h
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
*==============================================================================
*******************************************************************************/

#include "MMI_include.h"
#include "AudioPlayerWalk.h"
#include "playlistcacheSrv.h"

#ifdef __MMI_AUDPLY_WALK_PLAY__

#ifndef __PLC_AGENT_AUDPLY__
#define __PLC_AGENT_AUDPLY__


typedef struct
{
    kal_bool add_job_to_head;
    kal_uint8 last_job_status;
    plc_srv_job_type last_job;
    int job_count;
}validation_work_cntx;

typedef struct
{
    kal_bool add_job_to_head;
    kal_uint8 last_job_status;
    plc_srv_job_type last_job;
}update_satck_work_cntx;

typedef struct
{
    kal_bool add_job_to_head;
    kal_uint8 last_job_status;
    plc_srv_job_type last_job;
    CHAR *file_path;
}load_cache_work_cntx;

typedef struct
{
    kal_bool add_job_to_head;
    kal_uint8 last_job_status;
    plc_srv_job_type last_job;
    CHAR *file_path;
	mmi_audply_walk_stack_node_struct *stack;
}new_cache_work_cntx;

#define srv_plc_audply_set_state(state) srv_plc_set_state(PLC_TYPE_AUDIO_PLAYER,state)
#define srv_plc_audply_cancel_work(work_type) srv_plc_cancel_work(PLC_TYPE_AUDIO_PLAYER,work_type)

void plcache_audply_init(void);

mmi_ret plcache_audply_load_cache(CHAR *file_path);

mmi_ret plcache_audply_new_cache(CHAR *file_path,mmi_audply_walk_stack_node_struct *stack);
#endif

#endif  //__MMI_AUDPLY_WALK_PLAY__
