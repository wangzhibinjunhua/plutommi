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
*  playlistcacheSrv.h
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

#include "playlistcacheSrvCfg.h"
#include "mmi_rp_srv_pl_cache_def.h"


#ifdef __MMI_SRV_PLAYLIST_CACHE_SUPPORT__

#ifndef __PLC_SRV_H__
#define __PLC_SRV_H__

#define PLC_TRACE_GROUP TRACE_GROUP_1

typedef void (*plc_srv_work_proc) (plc_srv_work_state state, void * cntx);

typedef struct
{
    plc_srv_work_type type;
    plc_srv_work_state state;
    plc_srv_work_proc proc;
    void * work_cntx; // APP need to manage work context
}plc_srv_work;

typedef struct
{
    plc_srv_job_type type;
    plc_srv_work *work; // Job belong to work
}plc_srv_job;


typedef struct
{
    kal_uint8 head;
    kal_uint8 tail;
    kal_bool is_full;
    plc_srv_job _q[PLC_SRV_QUEUE_LENGTH];
}plc_srv_job_queue;

typedef void (*plc_srv_job_proc) (plc_srv_job *job);

typedef struct
{
    plc_srv_instance_type instance_type;
    plc_srv_instance_state state;
    kal_uint8 work_type_number;
    plc_srv_work *work;
    plc_srv_job_queue job_queue;
    plc_srv_job_proc job_proc;
    kal_uint8 time_slot_len;
}plc_srv_instance;

typedef struct
{
    MMI_EVT_PARAM_HEADER
    kal_bool is_canceled;
    plc_srv_work_type work_type;
    void * work_cntx;
}mmi_evt_plc_work_finish_struct;


mmi_ret srv_plc_init(mmi_event_struct *evt);
void srv_plc_instance_init(plc_srv_instance_type instance_type, plc_srv_job_proc job_proc);
void srv_plc_instance_deinit(plc_srv_instance_type instance_type);
//immediately run service, otherwise will wait till timer timeout
void srv_plc_run(void);
void srv_plc_post_run(void);



//set service to critical state, service will run till work finish
mmi_ret srv_plc_set_state(plc_srv_instance_type instance_type, plc_srv_instance_state state);
plc_srv_instance_state srv_plc_get_state(plc_srv_instance_type instance_type);


//mmi_ret srv_plc_set_critical_work(plc_srv_instance_type instance_type, plc_srv_work_type work_type);

//try to add work (only one work for each type)

mmi_ret srv_plc_add_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type, plc_srv_work_proc proc, void *cntx);


void srv_plc_remove_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type);

//cancel one work, can be called even work does not exist
void srv_plc_cancel_work(plc_srv_instance_type instance_type, plc_srv_work_type work_type);

plc_srv_work *srv_plc_get_alive_work(plc_srv_work_type work_type);

mmi_ret srv_plc_suspend_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type);

mmi_ret srv_plc_resume_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type);


mmi_ret srv_plc_add_job(plc_srv_instance_type instance_type,
    plc_srv_job_type type,plc_srv_work *work,kal_bool add_to_head);

#endif //__PLC_SRV_H__
#endif
