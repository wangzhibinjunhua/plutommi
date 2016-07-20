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
*  playlistcacheSrv.c
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

#include "MMI_include.h"
#include "MMI_media_app_trc.h"
#include "MMI_media_app_trc_gen.h"
#include "plcacheSrv_agent_audply.h"
#include "kal_trace.h"



/*
TODO:
put work to critical state, critical work will be executed first.
do not support 

*/


#ifdef __MMI_SRV_PLAYLIST_CACHE_SUPPORT__


plc_srv_instance plc_instance[PLC_TYPE_END];
plc_srv_work plc_work[PLC_WORK_TOTAL];

static plc_srv_job_queue temp_q;//used for remove jobs of one work

const plc_srv_instance_config plc_srv_instance_cfg[] = 
{
    {
        PLC_TYPE_AUDIO_PLAYER,
        PLC_WORK_AUDIO_PLAYER_START,
        PLC_WORK_AUDIO_PLAYER_END,
        PLC_JOB_AUDIO_PLAYER_START,
        PLC_JOB_AUDIO_PLAYER_END,
        KAL_TICKS_100_MSEC,
        plcache_audply_init,
    },
};



#define plc_get_instance_pointer(instance_type) &(plc_instance[instance_type])
#define plc_get_queue(instance_type) &((plc_instance[instance_type]).job_queue)
#define plc_get_work(work_type) &(plc_work[work_type])


mmi_ret srv_plc_init(mmi_event_struct *evt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    int i;
    kal_uint32 ticks_1,ticks_2;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_get_time(&ticks_1);
    memset(plc_instance,0,sizeof(plc_srv_instance)*PLC_TYPE_END);
    memset(plc_work,0,sizeof(plc_srv_work)*PLC_WORK_TOTAL);
    for(i=0;i<PLC_TYPE_END;i++)
        (plc_srv_instance_cfg[i]).init_func();  
    kal_get_time(&ticks_2);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_INSTANCE_INIT,ticks_1,ticks_2);    
	return MMI_RET_OK;
}


void srv_plc_instance_init(plc_srv_instance_type instance_type, plc_srv_job_proc job_proc)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_instance *is = plc_get_instance_pointer(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    is->instance_type = instance_type;
    is->state = PLC_STATE_IDLE;
    is->work_type_number = (plc_srv_instance_cfg[instance_type]).work_end - (plc_srv_instance_cfg[instance_type]).work_start;
    is->work = &(plc_work[(plc_srv_instance_cfg[instance_type]).work_start]);
    is->job_proc = job_proc;
    is->time_slot_len = (plc_srv_instance_cfg[instance_type]).time_slot_len;
    memset(&(is->job_queue),0,sizeof(plc_srv_job_queue));
}


void srv_plc_deinit(plc_srv_instance_type instance_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_instance *is = plc_get_instance_pointer(instance_type);
    int i;
    
    for(i=0;i<is->work_type_number;i++)
        srv_plc_cancel_work(instance_type,(plc_srv_instance_cfg[instance_type]).work_start+i);
    memset(is,0,sizeof(plc_srv_instance));
}

mmi_ret srv_plc_set_state(plc_srv_instance_type instance_type, plc_srv_instance_state state)
{
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_SET_STATE,instance_type,plc_instance[instance_type].state,state);
    if(plc_instance[instance_type].state > state)
        return MMI_RET_ERR;
    if(state == PLC_STATE_CRITICAL 
        && plc_instance[instance_type].state == PLC_STATE_CRITICAL)
        ASSERT(0);//trying to add another critical job. DO NOT SUPPORT
    plc_instance[instance_type].state = state;
    return MMI_RET_OK;
}

plc_srv_instance_state srv_plc_get_state(plc_srv_instance_type instance_type)
{
    return plc_instance[instance_type].state ;
}




mmi_ret srv_plc_add_job(plc_srv_instance_type instance_type,
    plc_srv_job_type type,plc_srv_work *work,kal_bool add_to_head)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_job *job;
    plc_srv_job_queue *q = plc_get_queue(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_ADD_JOB,instance_type,type,q->head,q->tail);
    
    if(q->is_full == KAL_TRUE)
        return MMI_RET_ERR;
    if(add_to_head)
    {
        if(q->head == q->tail && q->is_full)
            return MMI_RET_ERR;
        q->head = (q->head + 1)%PLC_SRV_QUEUE_LENGTH;        
        job = &((q->_q)[q->head]);
        job->type = type;
        job->work = work;
		if(q->head == q->tail)
        {
            q->is_full = KAL_TRUE;
            return MMI_RET_ERR;
        }
    }
    else
    {
        job = &((q->_q)[q->tail]);
        job->type = type;
        job->work = work;
        q->tail = (q->tail + PLC_SRV_QUEUE_LENGTH - 1)%PLC_SRV_QUEUE_LENGTH;
        if(q->head == q->tail)
        {
            q->is_full = KAL_TRUE;
            return MMI_RET_ERR;
        }
    }
    srv_plc_set_state(instance_type,PLC_STATE_RUNNING);
    work->state = PLC_WORK_STATE_WORKING;
    return MMI_RET_OK;
}


mmi_ret plc_remove_first_job(plc_srv_instance_type instance_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_job_queue *q = plc_get_queue(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_REMOVE_JOB,instance_type,((q->_q)[(q->head + 1)%PLC_SRV_QUEUE_LENGTH]).type,q->head,q->tail);
    if(q->head > q->tail)
        q->head --;
    else if(q->head < q->tail)
        q->head = (q->head + PLC_SRV_QUEUE_LENGTH - 1)%PLC_SRV_QUEUE_LENGTH;
    else
        return MMI_RET_ERR;
    //((q->_q)[(q->head + 1)%PLC_SRV_QUEUE_LENGTH]).work = NULL;
    q->is_full = KAL_FALSE;
    return MMI_RET_OK;    
}

int plc_get_job_num_in_queue(plc_srv_instance_type instance_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_job_queue *q = plc_get_queue(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(q->is_full)
        return PLC_SRV_QUEUE_LENGTH;
    else
        return (q->head - q->tail + PLC_SRV_QUEUE_LENGTH)%PLC_SRV_QUEUE_LENGTH;
}

plc_srv_job * plc_get_job(plc_srv_instance_type instance_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_job_queue *q = plc_get_queue(instance_type);
    plc_srv_job *job;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(q->head == q->tail && q->is_full == KAL_FALSE)
        return NULL;
    else
    {
        job = &((q->_q)[q->head]);
    }
    return job;
}


mmi_ret plc_remove_jobs_for_work(plc_srv_instance_type instance_type,
    plc_srv_work *work)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_job_queue *q = plc_get_queue(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(q->head == q->tail && q->is_full == KAL_FALSE)
        return MMI_RET_OK;
    else
    {
        kal_uint8 i = q->tail + 1;
        kal_uint8 j = 0;
        kal_uint8 k = (q->head + 1)%PLC_SRV_QUEUE_LENGTH;
        plc_srv_work *work_t;
        memset(&temp_q,0,sizeof(plc_srv_job_queue));
        do
        {
            work_t = ((q->_q)[i]).work;
            if(work_t != work)
            {
                ((temp_q._q)[j + 1]).type =((q->_q)[i]).type;
                ((temp_q._q)[j + 1]).work = work_t; 
                j = (j++)%PLC_SRV_QUEUE_LENGTH;
            }
            i=((i+1)%PLC_SRV_QUEUE_LENGTH);
        }
        while(i != k);
        temp_q.head = j;
        temp_q.is_full = (j==(PLC_SRV_QUEUE_LENGTH - 1));        
        memcpy(q,&temp_q,sizeof(plc_srv_job_queue));
        return MMI_RET_OK;
    }
}

plc_srv_work *srv_plc_get_alive_work(plc_srv_work_type work_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if(w->state > PLC_WORK_STATE_NULL)
        return w;
    else return NULL;
}


mmi_ret srv_plc_add_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type, plc_srv_work_proc proc, void *cntx)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_ADD_WORK,instance_type,work_type);
    if(w->state != PLC_WORK_STATE_NULL)
        return MMI_RET_ERR;
    else
    {
        w->proc = proc;
        w->state = PLC_WORK_STATE_IDLE;
        w->type = work_type;
        w->work_cntx = cntx;
    } 
    w->proc(w->state,w->work_cntx);
    //execute work proc after adding work
    return MMI_RET_OK;
}



void srv_plc_cancel_work(plc_srv_instance_type instance_type, plc_srv_work_type work_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_CANCEL_WORK,instance_type,work_type);
    if(w->state == PLC_WORK_STATE_NULL)
        return;
    else
        w->state = PLC_WORK_STATE_CANCEL;
    w->proc(w->state,w->work_cntx); //handle case w->state = CALCEL
}




void srv_plc_remove_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type);  
    plc_srv_instance *is = plc_get_instance_pointer(instance_type);
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/  
    plc_remove_jobs_for_work(instance_type,w);
    memset(w,0,sizeof(plc_srv_work));
    if(is->state == PLC_STATE_CRITICAL)
        is->state = PLC_STATE_RUNNING; //critical work finish
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_REMOVE_WORK,instance_type,work_type);
}

mmi_ret srv_plc_suspend_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type); 
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_SUSPEND_WORK,instance_type,work_type);
    if(w->state < PLC_WORK_STATE_IDLE)
        return MMI_RET_ERR;
    w->state = w->state | PLC_WORK_STATE_SUSPEND;
    return MMI_RET_OK;
}

mmi_ret srv_plc_resume_work(plc_srv_instance_type instance_type, 
    plc_srv_work_type work_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_work *w = plc_get_work(work_type); 
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_RESUME_WORK,instance_type,work_type);
    if(w->state & PLC_WORK_STATE_SUSPEND)
    {
        w->state = w->state & (~PLC_WORK_STATE_SUSPEND);
        return MMI_RET_OK;
    }
    else
        return MMI_RET_ERR;
}


kal_bool srv_plc_instance_run(plc_srv_instance_type instance_type)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    plc_srv_instance *is = plc_get_instance_pointer(instance_type);
    kal_uint32 ticks_1,ticks_2;
    plc_srv_job * job_to_run;
    kal_uint8 time_slot_len = is->time_slot_len;
    kal_bool want_to_run = KAL_FALSE;
    int skip_suspend_job_count = 0;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_get_time(&ticks_2);
    ticks_1 = ticks_2;
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_INSTANCE_START_RUN,instance_type,ticks_1,is->state);
    while((ticks_2 - ticks_1 < time_slot_len) || is->state == PLC_STATE_CRITICAL)
        //|| mmi_frm_check_wait_to_run() == MMI_STATUS_NONE_WANT_TO_RUN)
    {
        job_to_run = plc_get_job(instance_type);
        if(job_to_run == NULL)
        {
            is->state = PLC_STATE_IDLE;
            want_to_run = KAL_FALSE;
            break;
        }
        else
        {
            if(job_to_run->work->state & PLC_WORK_STATE_SUSPEND)
            {
                plc_remove_first_job(instance_type);
                srv_plc_add_job(instance_type,job_to_run->type,job_to_run->work,KAL_FALSE);
                skip_suspend_job_count++;
                if(skip_suspend_job_count == plc_get_job_num_in_queue(instance_type))
                {
                    want_to_run = KAL_FALSE;
                    break; // all jobs remain in queue are suspend jobs
                }
                continue;
            }
            plc_remove_first_job(instance_type);
            is->job_proc(job_to_run);
            kal_trace(PLC_TRACE_GROUP,PLC_SRV_EXECUTE_JOB,instance_type,job_to_run->type);
            kal_get_time(&ticks_2);            
            want_to_run = KAL_TRUE; 
        }
    }
    
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_INSTANCE_FINISH_RUN,instance_type,ticks_2 - ticks_1,is->state);
    return want_to_run;
}




void srv_plc_run(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    int i;
    kal_bool want_to_run = KAL_FALSE;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    StopTimer(SRV_PL_CACHE_TIMER);
    for(i=0;i<PLC_TYPE_END;i++)
    {
        if((plc_instance[i]).state > PLC_STATE_IDLE)
        {
            want_to_run = srv_plc_instance_run(i);
            want_to_run = KAL_TRUE;
        }
    }
    if(want_to_run)
        StartTimer(SRV_PL_CACHE_TIMER,PLC_SRV_TIMER_OUT_TIME,srv_plc_run);
    else
        StartTimer(SRV_PL_CACHE_TIMER,PLC_SRV_TIMER_OUT_TIME*5,srv_plc_run);
}

void srv_plc_post_run(void)
{
    StopTimer(SRV_PL_CACHE_TIMER);
    StartTimer(SRV_PL_CACHE_TIMER,PLC_SRV_POST_RUN_TIME,srv_plc_run);
}

#endif



