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
*  plcacheSrv_agent_audply.c
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
#include "plcacheSrv_agent_audply.h"
#include "nvram_common_defs.h"
#include "fs_type.h"
#include "fs_errcode.h"

#ifdef __MMI_AUDPLY_WALK_PLAY__

validation_work_cntx validation_cntx;
update_satck_work_cntx update_satck_cntx;
load_cache_work_cntx load_cache_cntx;
new_cache_work_cntx new_cache_cntx;


static void add_job(plc_srv_job_type type,
    plc_srv_work_type work,kal_bool add_job_to_head)
{
    srv_plc_add_job(PLC_TYPE_AUDIO_PLAYER,type,
                srv_plc_get_alive_work(work),add_job_to_head);
}


static void check_is_the_first_file(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    if(work->type == PLC_WORK_NEW_CACHE)
    {
        last_job = &(((new_cache_work_cntx *)work->work_cntx)->last_job);
        last_job_status = &(((new_cache_work_cntx *)work->work_cntx)->last_job_status);
        file_path = ((new_cache_work_cntx *)work->work_cntx)->file_path;
        *last_job = PLC_JOB_CHECK_FIRST_FOLDER;
        *last_job_status = (kal_uint8)mmi_audply_check_is_the_first_file(file_path);
        kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_CHECK_IS_FIRST_FILE,*last_job_status);
    }
    else if(work->type == PLC_WORK_LOAD_CACHE)
    {
        last_job = &(((load_cache_work_cntx *)work->work_cntx)->last_job);
        last_job_status = &(((load_cache_work_cntx *)work->work_cntx)->last_job_status);
        file_path = ((load_cache_work_cntx *)work->work_cntx)->file_path;
        *last_job = PLC_JOB_CHECK_FIRST_FOLDER;
        *last_job_status = (kal_uint8)mmi_audply_check_is_the_first_file(file_path);
        kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_CHECK_IS_FIRST_FILE,*last_job_status);
    }
}
static void add_cache(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    last_job = &(((new_cache_work_cntx *)work->work_cntx)->last_job);
    last_job_status = &(((new_cache_work_cntx *)work->work_cntx)->last_job_status);
    file_path = ((new_cache_work_cntx *)work->work_cntx)->file_path;
    *last_job = PLC_JOB_ADD_CACHE;
    *last_job_status = (kal_uint8)mmi_audply_add_cache(file_path);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_ADD_CACHE,*last_job_status);
}
static void add_cache_previous_folder(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    last_job = &(((new_cache_work_cntx *)work->work_cntx)->last_job);
    last_job_status = &(((new_cache_work_cntx *)work->work_cntx)->last_job_status);
    file_path = ((new_cache_work_cntx *)work->work_cntx)->file_path;
    *last_job = PLC_JOB_ADD_CACHE_PREV_FOLDER;
    *last_job_status = (kal_uint8)mmi_audply_add_cache_previous_folder(file_path);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_ADD_CACHE_PREV_FOLDER,*last_job_status);
}
static void get_prev_media_file_folder(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    mmi_audply_walk_stack_node_struct *stack;
    if(work->type == PLC_WORK_NEW_CACHE)
    {
        last_job = &(((new_cache_work_cntx *)work->work_cntx)->last_job);
        last_job_status = &(((new_cache_work_cntx *)work->work_cntx)->last_job_status);
        file_path = ((new_cache_work_cntx *)work->work_cntx)->file_path;
        stack = ((new_cache_work_cntx *)work->work_cntx)->stack;
        *last_job = PLC_JOB_GET_PREV_FILE_FOLDER;
        *last_job_status = (kal_uint8)mmi_audply_get_prev_media_file_folder_ext(file_path,stack);
        kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_GET_PREV_FOLDER,*last_job_status);
    }
    else if(work->type == PLC_WORK_LOAD_CACHE)
    {
        last_job = &(((load_cache_work_cntx *)work->work_cntx)->last_job);
        last_job_status = &(((load_cache_work_cntx *)work->work_cntx)->last_job_status);
        file_path = ((load_cache_work_cntx *)work->work_cntx)->file_path;
        *last_job = PLC_JOB_GET_PREV_FILE_FOLDER;
        *last_job_status = (kal_uint8)mmi_audply_get_prev_media_file_folder(file_path);
        kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_GET_PREV_FOLDER,*last_job_status);
    }
}

static void add_cache_temp(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    last_job = &(((load_cache_work_cntx *)work->work_cntx)->last_job);
    last_job_status = &(((load_cache_work_cntx *)work->work_cntx)->last_job_status);
    file_path = ((load_cache_work_cntx *)work->work_cntx)->file_path;
    *last_job = PLC_JOB_ADD_CACHE_TEMP;
    *last_job_status = (kal_uint8)mmi_audply_add_cache_temp(file_path);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_ADD_CACHE_TEMP,*last_job_status);
}

static void get_stack_info(plc_srv_work* work)
{
    ((load_cache_work_cntx *)work->work_cntx)->last_job = PLC_JOB_GET_STACK_INFO;
    mmi_audply_walk_get_stack_info_by_path(((load_cache_work_cntx *)work->work_cntx)->file_path);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_GET_STACK_INFO);
}

static void add_cache_prev_folder_temp(plc_srv_work* work)
{
    plc_srv_job_type *last_job;
    kal_uint8 *last_job_status;
    CHAR * file_path;
    last_job = &(((load_cache_work_cntx *)work->work_cntx)->last_job);
    last_job_status = &(((load_cache_work_cntx *)work->work_cntx)->last_job_status);
    file_path = ((load_cache_work_cntx *)work->work_cntx)->file_path;
    *last_job = PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP;
    *last_job_status = (kal_uint8)mmi_audply_add_temp_cache_previous_folder(file_path);
    kal_trace(PLC_TRACE_GROUP,PLC_SRV_JOB_CACHE_PREV_FOLDER_TEMP,*last_job_status);
}









/*
void plcache_audply_validation_proc(plc_srv_work_state state, void * cntx)
{
    mmi_evt_plc_work_finish_struct evt;
    validation_work_cntx *context = (validation_work_cntx *)cntx;
    switch(state)
    {
        case PLC_WORK_STATE_CANCEL:
            goto WORK_FINISHED;
        case PLC_WORK_STATE_IDLE:
        {
            add_job(PLC_JOB_AUDIO_PLAYER_START,PLC_WORK_CACHE_VALIDATION,
                        KAL_FALSE);
			break;
        }
        case PLC_WORK_STATE_WORKING:
        {
            add_job(PLC_JOB_AUDIO_PLAYER_START,PLC_WORK_CACHE_VALIDATION,
                        KAL_TRUE);
            add_job(PLC_JOB_AUDIO_PLAYER_START,PLC_WORK_CACHE_VALIDATION,
                        KAL_FALSE);
            context->job_count ++;
            if(context->job_count > 5)
                goto WORK_FINISHED;
           
        }
        default:
            break;
                
    }
    return;

WORK_FINISHED:
    MMI_FRM_INIT_EVENT(&evt, EVT_ID_PLC_WORK_FINISH);
    evt.is_canceled = KAL_FALSE;
    evt.work_type = PLC_WORK_CACHE_VALIDATION;
    evt.work_cntx = cntx;
    if(state == PLC_WORK_STATE_CANCEL)
    {
        evt.is_canceled = KAL_TRUE;
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt);
    }
    else if(srv_plc_get_state(PLC_TYPE_AUDIO_PLAYER) != PLC_STATE_CRITICAL)
        MMI_FRM_CB_EMIT_POST_EVENT((mmi_event_struct *)&evt);
    else
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt); 
   
    srv_plc_remove_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_CACHE_VALIDATION);


}*/
/*
void plcache_audply_update_stack_proc(plc_srv_work_state state, void * cntx)
{
    mmi_evt_plc_work_finish_struct evt;
    switch(state)
    {
        case PLC_WORK_STATE_CANCEL:
            goto WORK_FINISHED;
        case PLC_WORK_STATE_IDLE:
        case PLC_WORK_STATE_WORKING:
        {
            ;
        }
        default:
            break;
                
    }
    return;

WORK_FINISHED:
    MMI_FRM_INIT_EVENT(&evt, EVT_ID_PLC_WORK_FINISH);
    evt.is_canceled = KAL_FALSE;
    evt.work_type = PLC_WORK_CACHE_VALIDATION;
    evt.work_cntx = cntx;
    if(state == PLC_WORK_STATE_CANCEL)
    {
        evt.is_canceled = KAL_TRUE;
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt);
    }
    else if(srv_plc_get_state(PLC_TYPE_AUDIO_PLAYER) != PLC_STATE_CRITICAL)
        MMI_FRM_CB_EMIT_POST_EVENT((mmi_event_struct *)&evt);
    else
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt); 
    srv_plc_remove_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_CACHE_VALIDATION);
}
*/


void plcache_audply_load_cache_proc(plc_srv_work_state state, void * cntx)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_evt_plc_work_finish_struct evt;
    load_cache_work_cntx *context = (load_cache_work_cntx *)cntx;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(state)
    {
        case PLC_WORK_STATE_CANCEL:
            goto WORK_FINISHED;
        case PLC_WORK_STATE_IDLE:
        {
            add_job(PLC_JOB_CHECK_FIRST_FOLDER,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
            break;
        }
        case PLC_WORK_STATE_WORKING:
        {
            switch(context->last_job)
            {
                case PLC_JOB_CHECK_FIRST_FOLDER:
                {
                    if(context->last_job_status)
                        add_job(PLC_JOB_GET_STACK_INFO,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
                    else
                        add_job(PLC_JOB_ADD_CACHE_TEMP,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
                    break;
                }
                case PLC_JOB_ADD_CACHE_TEMP:
                {
                    if(context->last_job_status)
                    {
                        add_job(PLC_JOB_ADD_CACHE_TEMP,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
                        break;
                    }                    
                    goto WORK_FINISHED;
                }
                case PLC_JOB_GET_STACK_INFO:
                {
                    add_job(PLC_JOB_GET_PREV_FILE_FOLDER,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
                    break;
                }
                case PLC_JOB_GET_PREV_FILE_FOLDER:
                {
                    if((mmi_audply_walk_prev_folder_result_enum)context->last_job_status
                        == AUDPLY_WALK_PREV_FOLDER_RESULT_SUCCESS)
                    {
                        add_job(PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP,PLC_WORK_LOAD_CACHE,
                            context->add_job_to_head);                        
                        break;
                    }
                    else if((mmi_audply_walk_prev_folder_result_enum)context->last_job_status
                        == AUDPLY_WALK_PREV_FOLDER_RESULT_CONTINUE)
                    {
                        add_job(PLC_JOB_GET_PREV_FILE_FOLDER,PLC_WORK_LOAD_CACHE,
                        context->add_job_to_head);
                        break;
                    }
                    goto WORK_FINISHED;
                }
                case PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP:
                {
                    if(context->last_job_status)
                    {
                        add_job(PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP,PLC_WORK_LOAD_CACHE,
                            context->add_job_to_head);                        
                        break;
                    }
                    goto WORK_FINISHED;
                }
                default:
                    ASSERT(0);
            }
        }
        default:
            break;
                
    }
    return;

WORK_FINISHED:
	
    MMI_FRM_INIT_EVENT(&evt, EVT_ID_PLC_WORK_FINISH);
    evt.is_canceled = KAL_FALSE;
    evt.work_type = PLC_WORK_LOAD_CACHE;
    evt.work_cntx = cntx;
    if(state == PLC_WORK_STATE_CANCEL)
    {
        evt.is_canceled = KAL_TRUE;
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt);
    }
    else if(srv_plc_get_state(PLC_TYPE_AUDIO_PLAYER) != PLC_STATE_CRITICAL)
        MMI_FRM_CB_EMIT_POST_EVENT((mmi_event_struct *)&evt);
    else
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt); 
    srv_plc_remove_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_LOAD_CACHE);
}


void plcache_audply_new_cache_proc(plc_srv_work_state state, void * cntx)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_evt_plc_work_finish_struct evt;
    new_cache_work_cntx *context = (new_cache_work_cntx *)cntx;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(state)
    {
        case PLC_WORK_STATE_CANCEL:
            goto WORK_FINISHED;
        case PLC_WORK_STATE_IDLE:
        {
            add_job(PLC_JOB_CHECK_FIRST_FOLDER,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
            break;
        }

    
        case PLC_WORK_STATE_WORKING:
        {
            switch(context->last_job)
            {
                case PLC_JOB_CHECK_FIRST_FOLDER:
                {
                    if(context->last_job_status)
                        add_job(PLC_JOB_GET_PREV_FILE_FOLDER,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
                    else
                        add_job(PLC_JOB_ADD_CACHE,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
                    break;
                }
                case PLC_JOB_ADD_CACHE:
                {
                    if(context->last_job_status)
                    {
                        add_job(PLC_JOB_ADD_CACHE,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
                        break;
                    }
                    goto WORK_FINISHED;
                }
                case PLC_JOB_GET_PREV_FILE_FOLDER:
                {
                    if((mmi_audply_walk_prev_folder_result_enum)context->last_job_status
                        == AUDPLY_WALK_PREV_FOLDER_RESULT_SUCCESS)
                    {
                        add_job(PLC_JOB_ADD_CACHE_PREV_FOLDER,PLC_WORK_NEW_CACHE,
                            context->add_job_to_head);                        
                        break;
                    }
                    else if((mmi_audply_walk_prev_folder_result_enum)context->last_job_status
                        == AUDPLY_WALK_PREV_FOLDER_RESULT_CONTINUE)
                    {
                        add_job(PLC_JOB_GET_PREV_FILE_FOLDER,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
                        break;
                    }
                    goto WORK_FINISHED;                    
                }
                case PLC_JOB_ADD_CACHE_PREV_FOLDER:
                {
                    if(context->last_job_status)
                    {
                        add_job(PLC_JOB_ADD_CACHE_PREV_FOLDER,PLC_WORK_NEW_CACHE,
                        context->add_job_to_head);
                        break;
                    }
                    goto WORK_FINISHED;
                }
                default:
                    ASSERT(0);
            }
        }
        default:
            break;
                
    }
    return;

WORK_FINISHED:
    MMI_FRM_INIT_EVENT(&evt, EVT_ID_PLC_WORK_FINISH);
    evt.is_canceled = KAL_FALSE;
    evt.work_type = PLC_WORK_NEW_CACHE;
    evt.work_cntx = cntx;
    if(state == PLC_WORK_STATE_CANCEL)
    {
        evt.is_canceled = KAL_TRUE;
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt);
    }
    else if(srv_plc_get_state(PLC_TYPE_AUDIO_PLAYER) != PLC_STATE_CRITICAL)
        MMI_FRM_CB_EMIT_POST_EVENT((mmi_event_struct *)&evt);
    else
        MMI_FRM_CB_EMIT_EVENT((mmi_event_struct *)&evt); 
    srv_plc_remove_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_NEW_CACHE);
}


void plcache_audply_job_proc(plc_srv_job *job)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    void *cntx = job->work->work_cntx;
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    switch(job->type)
    {
        case PLC_JOB_CHECK_FIRST_FOLDER:
            check_is_the_first_file(job->work);
            break;
        case PLC_JOB_GET_PREV_FILE_FOLDER:
            get_prev_media_file_folder(job->work);
            break;
        case PLC_JOB_ADD_CACHE:
            add_cache(job->work);
            break;
        case PLC_JOB_ADD_CACHE_PREV_FOLDER:
            add_cache_previous_folder(job->work);
            break;
        case PLC_JOB_ADD_CACHE_TEMP:
            add_cache_temp(job->work);
            break;
        case PLC_JOB_GET_STACK_INFO:            
            get_stack_info(job->work);
            break;
        case PLC_JOB_ADD_CACHE_PREV_FOLDER_TEMP:            
            add_cache_prev_folder_temp(job->work);
            break;
    };
    job->work->proc((job->work)->state, (job->work)->work_cntx);
}



extern void mmi_audply_walk_cache_do_test();
void plcache_audply_init(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ret ret;
	mmi_audply_walk_record_struct walk_record;
	S16 error;
	FS_HANDLE File_handler;
    CHAR *File_path = NULL;
	mmi_audply_walk_stack_node_struct *stack = NULL;
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    srv_plc_instance_init(PLC_TYPE_AUDIO_PLAYER,plcache_audply_job_proc);    
    /*ret = srv_plc_add_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_CACHE_VALIDATION,
        plcache_audply_validation_proc,&validation_cntx);
    if(ret == MMI_RET_OK)
    {
        //srv_plc_set_state(PLC_TYPE_AUDIO_PLAYER,PLC_STATE_CRITICAL);
        srv_plc_run();//if require immediately run
    }
    else
    {
        ASSERT(0);
    }*/
    //mmi_audply_walk_cache_do_test();

	/*Get play file*/
	ReadRecord(NVRAM_EF_AUDPLY_WALK_LID, 1, (void*)&walk_record, sizeof(mmi_audply_walk_record_struct), &error);
	
	if (!mmi_audply_walk_is_audio_file((CHAR*)walk_record.current_path))
	{
		memset(walk_record.current_path, 0, sizeof(walk_record.current_path));
	}

	/*Init cache and temp cache struct*/
	mmi_audply_walk_cache_init();

	if(walk_record.stack_index >= MMI_AUDPLY_WALK_MAX_DEPTH_DIRECTORY) //First time play
	{
		return;
	}

	/*Check current play file */
	File_handler = FS_Open((WCHAR *)walk_record.current_path, FS_READ_ONLY);

	if(File_handler < FS_NO_ERROR)
	{
		walk_record.stack_index = 0xFF;
		WriteRecord(NVRAM_EF_AUDPLY_WALK_LID, 1, (void*)&walk_record, sizeof(mmi_audply_walk_record_struct), &error);
		return;
	}
	FS_Close(File_handler);

	/*Update current folder stack*/
	mmi_audply_walk_get_stack_info_by_path_ext((CHAR *)walk_record.current_path, (mmi_audply_walk_stack_node_struct*)walk_record.stack);
	WriteRecord(NVRAM_EF_AUDPLY_WALK_LID, 1, (void*)&walk_record, sizeof(mmi_audply_walk_record_struct), &error);

	/*Do caching*/
	File_path = mmi_audply_query_cache_cntx_pointer();
	stack = mmi_audply_query_cache_cntx_stack_pointer();
	
	mmi_ucs2cpy((CHAR *)File_path, (CHAR *)walk_record.current_path);
	memcpy(stack, &walk_record.stack, sizeof(mmi_audply_walk_stack_node_struct)*MMI_AUDPLY_WALK_MAX_DEPTH_DIRECTORY);
	
	plcache_audply_new_cache((CHAR *)File_path, stack);
}

mmi_ret plcache_audply_new_cache(CHAR *file_path,mmi_audply_walk_stack_node_struct *stack)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ret ret;  
    

    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memset(&new_cache_cntx,0,sizeof(new_cache_work_cntx));
    new_cache_cntx.file_path= file_path;
    new_cache_cntx.stack = stack;
	mmi_audply_cache_set_caching_state();
    
    ret = srv_plc_add_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_NEW_CACHE,
        plcache_audply_new_cache_proc,&new_cache_cntx);
    if(ret == MMI_RET_OK)
    {
        srv_plc_post_run();
        //srv_plc_set_state(PLC_TYPE_AUDIO_PLAYER,PLC_STATE_CRITICAL);
        //srv_plc_instance_run(PLC_TYPE_AUDIO_PLAYER);//if require immediately run
    }
    return ret;
}

mmi_ret plcache_audply_load_cache(CHAR *file_path)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    mmi_ret ret;  
    

    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    memset(&load_cache_cntx,0,sizeof(new_cache_work_cntx));
    load_cache_cntx.file_path= file_path;
    
    ret = srv_plc_add_work(PLC_TYPE_AUDIO_PLAYER,PLC_WORK_LOAD_CACHE,
        plcache_audply_load_cache_proc,&load_cache_cntx);
    if(ret == MMI_RET_OK)
    {
        srv_plc_post_run();
        //srv_plc_set_state(PLC_TYPE_AUDIO_PLAYER,PLC_STATE_CRITICAL);
        //srv_plc_instance_run(PLC_TYPE_AUDIO_PLAYER);//if require immediately run
    }
    return ret;
}


void plcache_audply_update_stack()
{
}

void plcache_audply_do_validation()
{
}

#endif  //__MMI_AUDPLY_WALK_PLAY__
