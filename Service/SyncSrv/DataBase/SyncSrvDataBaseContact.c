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
 * SyncSrvDatabaseContact.c
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * This file implements sync supported contact database
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "MMI_include.h"

/*****************************************************************************
* Header files
*****************************************************************************/
#include "app_mine.h"
#include "custom_mmi_default_value.h"
#include "syncml_common_customize.h"
#include "mmi2syncml_struct.h"

#include "mmi_rp_srv_sync_def.h"
#include "PhbSrvGprot.h"

#include "SyncSrvGprot.h"
#include "SyncSrv.h"
#include "SyncSrvChangeLog.h"

#include "SyncSrvDataBase.h"
#include "SyncSrvDataBaseCfg.h"
#include "SyncSrvDataBaseContact.h"

/*****************************************************************************
* Typedef 
*****************************************************************************/

/*****************************************************************************
* Global Variables 
*****************************************************************************/

/*****************************************************************************
* Local Variables 
*****************************************************************************/
static srv_sync_database_type *g_srv_sync_db_cont_handle;

/*****************************************************************************
* FUNCTION
*   srv_sync_database_create
* DESCRIPTION
*	create database type
* PARAMETERS
*	type		:[IN]	database type
* RETURNS
*   srv_sync_database_type
*****************************************************************************/
static MMI_BOOL srv_sync_database_contact_match(srv_sync_database_type *obj, U32 type)
{
	RETURN_VAL_IF_FAIL(obj != NULL, KAL_FALSE);

	SRV_SYNC_LOG1(MMI_SYNC_SRV_DB_CONT_MATCH, (type == SYNCML_DB_PHONEBOOK));
	
	return (MMI_BOOL)(type == SYNCML_DB_PHONEBOOK);
}


/*****************************************************************************
* FUNCTION
* 	srv_sync_database_contact_is_ready
* DESCRIPTION
*	test database ready status
* PARAMETERS
*	type		:[IN]	database type
* RETURNS
*   srv_sync_database_type
*****************************************************************************/
static MMI_BOOL srv_sync_database_contact_ready(srv_sync_database_type *obj)
{
	MMI_BOOL ret = MMI_TRUE;
	
	if (!srv_phb_startup_is_phb_ready())// || mmi_phb_check_processing())
	{
		ret = MMI_FALSE;
	}
	
	SRV_SYNC_LOG1(MMI_SYNC_SRV_DB_CONT_IS_READY, ret);
	
	return ret;
}


/*****************************************************************************
* FUNCTION
* 	srv_sync_database_contact_lock
* DESCRIPTION
*	test database ready status
* PARAMETERS
*	type		:[IN]	database type
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_lock(srv_sync_database_type *obj)
{
	RETURN_IF_FAIL(obj != NULL);

	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_LOCK);
}


/*****************************************************************************
* FUNCTION
* 	srv_sync_database_contact_unlock
* DESCRIPTION
*	test database ready status
* PARAMETERS
*	type		:[IN]	database type
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_unlock(srv_sync_database_type *obj)
{
	RETURN_IF_FAIL(obj != NULL);

	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_UNLOCK);
}


static void srv_sync_database_contact_on_record_rsp(U16 result, U16 store_index, void *usr_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                					*/
    /*----------------------------------------------------------------*/
	srv_sync_database_type *obj = (srv_sync_database_type *)usr_data;
	srv_sync_request_struct *req = (srv_sync_request_struct *)obj->priv;
	srv_sync_action_enum action;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      					*/
    /*----------------------------------------------------------------*/
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_RECORD_RSP);
	MMI_ASSERT(obj != NULL && req != NULL);
	
	
    switch (result)
    {
        case SRV_PHB_SYNC_SUCCESS:
           req->result = SYNCML_OK;
           break;

        case SRV_PHB_SYNC_STORAGE_FULL:
           req->result = SYNCML_DEVICE_FULL;
           break;
           
        case SRV_PHB_SYNC_NOT_FOUND:
           req->result = SYNCML_NOT_FOUND;
           break;
            
        default:
           req->result = SYNCML_FAIL;
           break;
    }

	if (req->operation == SYNCML_RECORD_GET)
	{
		srv_sync_get_record_rsp(req);
		
		action = SRV_SYNC_ACTION_SEND;
	}
	else
	{
		if (req->operation == SYNCML_RECORD_ADD)
		{
			req->luid = store_index;
		}
		
		if (req->more_data == 0)
		{
			FS_Delete(SYNCML_VOBJ_PATH);
		}
		
		srv_sync_set_record_rsp(req);
		
		action = SRV_SYNC_ACTION_RECV;
	}

	SRV_SYNC_LOG2(MMI_SYNC_SRV_DB_CONT_UPDATE_STATE, result, action);
	srv_sync_database_update_stat(obj, req->result, action);
	srv_sync_database_progress_notify(obj, action);
}


void mmi_syncml_phb_sync_rsp(U16 phb_result, U16 store_index)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(g_srv_sync_db_cont_handle != NULL);
	
	srv_sync_database_contact_on_record_rsp(phb_result, store_index, g_srv_sync_db_cont_handle);
}

MMI_BOOL srv_sync_database_contact_is_ready(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	return srv_sync_database_contact_ready(NULL);
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_on_finish
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
void srv_sync_database_contact_on_finish(srv_sync_database_type *obj, void *msg)
{
	/*----------------------------------------------------------------*/
	/* Local Variables                                                */
	/*----------------------------------------------------------------*/
	mmi_syncml_finish_sync_ind_struct *finish_ind;
	//WCHAR *path = NULL;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(obj != NULL &&  msg != NULL);
	
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_FINISH);
	
	finish_ind = (mmi_syncml_finish_sync_ind_struct *)msg;

	if (SYNCML_GET_SYNC_STATUS(finish_ind->result) == SYNCML_OK &&
		!obj->db_info.fail)
	{
		srv_sync_accnt_set_anchor(obj->accnt, SYNCML_DB_ID_CON, obj->db_info.next_anchor);

#ifdef __SYNCML_DEVICE_SYNC__
		/* is device sync*/
		if (finish_ind->f_is_device)
		{
			srv_sync_accnt_set_db_uri(
				obj->accnt, 
				SYNCML_DB_ID_CON,
				(const U8 *)finish_ind->d2d_info.contact_database_uri,
				MAX_SYNCML_DATABASE_ADDR_LEN);
			
			srv_sync_accnt_set_remote_anchor(
				obj->accnt,
				SYNCML_DB_ID_CON,
				(const U8 *)finish_ind->d2d_info.contact_remote_anchor,
				MAX_SYNCML_REMOTE_ANCHOR_SIZE);
		}
#endif /* __SYNCML_DEVICE_SYNC__ */
	}
	
	obj->db_info.srv_ok_cnt[0] = finish_ind->svr_contact_ok_cnt[0];
	obj->db_info.srv_ok_cnt[1] = finish_ind->svr_contact_ok_cnt[1];
	obj->db_info.srv_ok_cnt[2] = finish_ind->svr_contact_ok_cnt[2];
	obj->db_info.srv_fail_cnt = finish_ind->svr_contact_ng_cnt;
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_contact_on_start
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_on_start(srv_sync_database_type *obj, srv_sync_enum sync, U8 accnt_index, void *msg)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/	
	RETURN_IF_FAIL(obj != NULL &&  msg != NULL);
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_START);

	if (sync == SRV_SYNC_REMOTE)
	{
		mmi_syncml_start_sync_req_struct *start_req;
		
		start_req = (mmi_syncml_start_sync_req_struct *)msg;

	    strcpy((CHAR*)start_req->contact_database_uri, 	 (char *) obj->db_info.address);
	    strcpy((CHAR*)start_req->contact_database_username, (char *)obj->db_info.username);
	    strcpy((CHAR*)start_req->contact_database_password, (char *)obj->db_info.password);

	    if(obj->db_info.mime_type != NULL)
	    {
	        strcpy((CHAR*)start_req->contact_mime_type, (char *)obj->db_info.mime_type);
	    }
		
	    start_req->contact_last_anchor = obj->db_info.last_anchor;
	    start_req->contact_next_anchor = obj->db_info.next_anchor;

	    start_req->contact_free_id = obj->db_info.free_id;
	    start_req->contact_free_mem = obj->db_info.free_mem;
	}
#ifdef	__MMI_SYNCML_DEVICE_SYNC__
	else if (sync == SRV_SYNC_PHONE)
	{
		mmi_syncml_device_db_info_struct *db_info;
		
		db_info = (mmi_syncml_device_db_info_struct *)msg;
		
	    strcpy((CHAR*)db_info->contact_database_uri, 	 (char *) obj->db_info.address);

	    if(obj->db_info.mime_type != NULL)
	    {
	        strcpy((CHAR*)db_info->contact_mime_type, (char *)obj->db_info.mime_type);
	    }
		
	    db_info->contact_last_anchor = obj->db_info.last_anchor;
	    db_info->contact_next_anchor = obj->db_info.next_anchor;

		strcpy((CHAR*)db_info->contact_remote_anchor, (char *)obj->db_info.remote_anchor);
	}
#endif /* __MMI_SYNCML_DEVICE_SYNC__ */
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_on_query_luid_list
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message pointer
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_on_query_luid_list(srv_sync_database_type *obj, srv_sync_request_struct *req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
	/*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(srv_sync_is_db_synchronizing(SYNCML_DB_PHONEBOOK));	
	RETURN_IF_FAIL(obj != NULL &&  req != NULL);
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_QUERY);

	if (req->operation == SYNCML_RECORD_ALL ||
		(req->operation == SYNCML_RECORD_ADD && 
		 (srv_sync_accnt_anchor(obj->accnt, SYNCML_DB_ID_CON) == 0)))
	{
		/* sync all records */
		req->count = srv_phb_sync_get_index_array(req->luid_buf, MAX_SYNC_ITEMS);
	
	}
	else if((srv_sync_accnt_anchor(obj->accnt, SYNCML_DB_ID_CON)) == 0)
	{
		req->count = 0;
	}
	else
	{
		req->count = srv_sync_database_query_clog(obj, req->luid_buf, req->operation);
	}

	srv_sync_query_luid_list_rsp(req);
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_on_clean_luid_list
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_on_clean_luid_list(srv_sync_database_type *obj, srv_sync_request_struct *req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(srv_sync_is_db_synchronizing(SYNCML_DB_PHONEBOOK));
	RETURN_IF_FAIL(obj != NULL &&  req != NULL);

	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_CLEAN);
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_contact_on_set_record
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_on_set_record(srv_sync_database_type *obj, srv_sync_request_struct *req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/	
	RETURN_IF_FAIL(srv_sync_is_db_synchronizing(SYNCML_DB_PHONEBOOK));
	RETURN_IF_FAIL(obj != NULL &&  req != NULL);
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_SET);

	obj->priv = (void *)req;
	
	if (req->operation == SYNCML_RECORD_MODIFY)
	{
		/*
		  *REPLACE: modify the record or
		  *		     add new record if LUID is not present
		  */
		if (!srv_phb_check_entry_exist(req->luid))
		{
			req->operation  = SYNCML_RECORD_ADD;
			req->luid = 0xFFFF;
		}
	}

	srv_phb_sync_vcard(req->operation, 
					   (U16 *)SYNCML_VOBJ_PATH, 
					   req->luid, 
					   req->charset);

}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_on_get_record
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
void srv_sync_database_contact_on_get_record(srv_sync_database_type *obj, srv_sync_request_struct *req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(srv_sync_is_db_synchronizing(SYNCML_DB_PHONEBOOK));
	RETURN_IF_FAIL(obj != NULL && req != NULL);
	obj->priv = (void *)req;
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ON_GET);
	
	srv_phb_sync_vcard(SRV_PHB_VCARD_READ, (U16 *)SYNCML_VOBJ_PATH, req->luid, 0);
}

static void srv_sync_database_contact_update_dbinfo(srv_sync_database_type *obj)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	srv_sync_db_info_type *db_info;
	applib_mime_type_struct *mime_type;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(obj != NULL && obj->accnt != NULL);

	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_UPDATE_DBINFO);
	
	db_info = &(obj->db_info);

	db_info->address  = srv_sync_accnt_db_addr(obj->accnt, SYNCML_DB_ID_CON);
	db_info->username = srv_sync_accnt_db_usrname(obj->accnt, SYNCML_DB_ID_CON);    
	db_info->password = srv_sync_accnt_db_pwd(obj->accnt, SYNCML_DB_ID_CON);
	db_info->remote_anchor = srv_sync_accnt_remote_anchor(obj->accnt, SYNCML_DB_ID_CON);

	mime_type = applib_mime_type_look_up(NULL, NULL, MIME_TYPE_NONE, MIME_SUBTYPE_XVCARD);
	
	db_info->mime_type = (U8 *)mime_type->mime_string;
  
	db_info->last_anchor = srv_sync_accnt_anchor(obj->accnt, SYNCML_DB_ID_CON);
	db_info->next_anchor = db_info->last_anchor + 1;

	db_info->free_id  = srv_phb_get_total_contact(PHB_STORAGE_NVRAM) - srv_phb_get_used_contact(PHB_STORAGE_NVRAM);
	db_info->free_mem = db_info->free_id * srv_phb_sync_get_record_size();
}

static void srv_sync_database_contact_attatch_accnt(srv_sync_database_type *obj, srv_sync_accnt_type *accnt)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(obj != NULL && accnt!= NULL);
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_ATTCH_ACCNT);

	obj->accnt = accnt;

	srv_sync_database_contact_update_dbinfo(obj);
}

static void srv_sync_database_contact_on_progress(srv_sync_database_type *obj, void *req)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	mmi_syncml_progress_info_ind_struct *progress_info;
	srv_sync_db_info_type *db_info;
	
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	RETURN_IF_FAIL(obj != NULL && req != NULL);
	progress_info = (mmi_syncml_progress_info_ind_struct *)req;
	db_info = &obj->db_info;
	
	SRV_SYNC_LOG1(MMI_SYNC_SRV_DB_CONT_PROG, progress_info->progress_info);
	/*	get numberofchanges and sending progress info*/
	switch (progress_info->progress_info)
	{
		case PROGRESS_CONTACT_LOCAL_NOC:
			db_info->send_noc = progress_info->numberofchange;
			break;
			

		case PROGRESS_CONTACT_REMOTE_NOC:
			db_info->recv_noc = progress_info->numberofchange;
			break;

		case PROGRESS_CONTACT_DATASTORE_FAILED:
			db_info->fail = MMI_TRUE;
			break;

        case PROGRESS_CONTACT_DATASTORE_SENDING:
			srv_sync_database_progress_notify(obj, SRV_SYNC_ACTION_SEND);
            break;
			
        case PROGRESS_CONTACT_DATASTORE_RECEIVED:			
            srv_sync_database_progress_notify(obj, SRV_SYNC_ACTION_RECV);
            break;

		default:
			break;
			
	}

}

/*****************************************************************************
* FUNCTION
*   srv_sync_database_destroy
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
* RETURNS
*   void
*****************************************************************************/
static void srv_sync_database_contact_destroy(srv_sync_database_type *obj)
{
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_DESTROY);
	
	if (obj != NULL && obj->destroy != NULL)
	{	
		OslMfree(obj);
		obj = NULL;
		g_srv_sync_db_cont_handle = NULL;
	}
}


/*****************************************************************************
* FUNCTION
*   srv_sync_database_contact_create
* DESCRIPTION
*	create database type
* PARAMETERS
*	obj		:[IN]	database object
*	msg		:[IN]	message
* RETURNS
*   void
*****************************************************************************/
srv_sync_database_type *srv_sync_database_contact_create(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
	srv_sync_database_type *obj = (srv_sync_database_type *)OslMalloc(sizeof(srv_sync_database_type));

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	SRV_SYNC_LOG0(MMI_SYNC_SRV_DB_CONT_CREATE);

	if (obj != NULL)
	{
		memset(obj, 0, sizeof(srv_sync_database_type));
		
		obj->on_query_luid_list = (srv_sync_database_on_sync_evt_funcptr)srv_sync_database_contact_on_query_luid_list;
		obj->on_clean_luid_list = (srv_sync_database_on_sync_evt_funcptr)srv_sync_database_contact_on_clean_luid_list;
		obj->on_set_record 		= (srv_sync_database_on_sync_evt_funcptr)srv_sync_database_contact_on_set_record;
		obj->on_get_record 		= (srv_sync_database_on_sync_evt_funcptr)srv_sync_database_contact_on_get_record;
		obj->on_finish 			= srv_sync_database_contact_on_finish;
		obj->on_start 			= srv_sync_database_contact_on_start;
		obj->on_progress		= srv_sync_database_contact_on_progress;
		
		obj->match 	  =	srv_sync_database_contact_match;
		obj->destroy  = srv_sync_database_contact_destroy;
		obj->is_ready = srv_sync_database_contact_ready;
		obj->lock 	  =	srv_sync_database_contact_lock;
		obj->unlock   =	srv_sync_database_contact_unlock;

		obj->accatch_accnt = srv_sync_database_contact_attatch_accnt;
		
		obj->db_info.db_type = SYNCML_DB_PHONEBOOK;
		obj->db_info.id = SYNCML_DB_ID_CON;
		
		/* because phb srv sync API hasn't usr_data, so we have to save the handle by self. */
		g_srv_sync_db_cont_handle = obj;
	}
	
	return obj;
}

