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
 * Wlansrvscanonlyata.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   ATA CMD for scan only wlan service.
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
 * removed!
 *****************************************************************************/
#ifdef __GAS_SUPPORT__

#include "stack_msgs.h"
#include "kal_public_api.h"
#include "mmi_frm_queue_gprot.h"
#include "EventsGprot.h"
#include "rmmi_struct.h"
#include "stack_ltlcom.h"
#include "task_config.h"
#include "MMI_conn_app_trc.h"
#include "kal_trace.h"
#include "wlansrvscanonly.h"
#include "wlansrvscanonlyata.h"
#include "wndrv_mmi_scanonly_msg.h"


void wlan_scan_only_ata_snd_gas_cnf(gas_data_req_struct *cnf)
{
    ilm_struct *ilm_ptr = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_SND_MSG);
	
    ilm_ptr = allocate_ilm(MOD_MMI);
    ilm_ptr->msg_id = MSG_ID_GAS_DATA_REQ;
    ilm_ptr->local_para_ptr = (local_para_struct*)cnf;
    ilm_ptr->peer_buff_ptr = NULL;
    SEND_ILM(MOD_MMI, MOD_ATCI, ATCI_SAP, ilm_ptr);
}


void wlan_scan_only_ata_init_cb(void *user_data, wlan_init_cnf_struct *cnf)
{
	gas_data_req_struct *gas_cnf = NULL;

	MMI_TRACE(MMI_CONN_TRC_FUNC, 
 			  WLAN_SO_ATA_TRC_INIT_CB,
 			  user_data ? *((kal_uint8*)user_data) : -1, cnf);
	
	if (cnf && user_data)
	{
		gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
        gas_cnf->src_id = *((kal_uint8 *)user_data);
        gas_cnf->data_type = GAS_OUTPUT_NORMAL;
		
		if (SCANONLY_SUCCESS == cnf->status || SCANONLY_INIT_FAIL__ALREAD_INITED == cnf->status)
		{
	        strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_OK);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_OK);        	
		}
		else
		{
			strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_ERROR);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_ERROR);
		}
		
		wlan_scan_only_ata_snd_gas_cnf(gas_cnf);

		free_ctrl_buffer((kal_uint8 *)user_data);
		user_data = NULL;
	}
	else
	{
		MMI_TRACE(MMI_CONN_TRC_INFO, WLAN_SO_ATA_TRC_PARAM_ERR);
	}
}


static wlan_result_enum wlan_scan_only_ata_init_hdlr(gas_data_ind_struct *ind)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	wlan_init_req_struct req = {0};
	kal_uint8 *src_id = NULL;

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_INIT_HDLR);
	
	if (ind)
	{
		src_id = get_ctrl_buffer(sizeof(kal_uint8));
		*src_id = ind->src_id;
		return wlan_init(&req, wlan_scan_only_ata_init_cb, src_id);
	}

	return WLAN_RESULT_FAIL;
}


void wlan_scan_only_ata_deinit_cb(void *user_data, wlan_deinit_cnf_struct *cnf)
{
	gas_data_req_struct *gas_cnf = NULL;

	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_DEINIT_CB);
	
	if (cnf && user_data)
	{
		gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
        gas_cnf->src_id = *((kal_uint8 *)user_data);
        gas_cnf->data_type = GAS_OUTPUT_NORMAL;
		
		if (SCANONLY_SUCCESS == cnf->status || SCANONLY_DEINIT_FAIL__ALREAD_DEINITED == cnf->status)
		{
	        strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_OK);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_OK);        	
		}
		else
		{
			strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_ERROR);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_ERROR);
		}
		
		wlan_scan_only_ata_snd_gas_cnf(gas_cnf);

		free_ctrl_buffer((kal_uint8 *)user_data);
		user_data = NULL;
	}
	else
	{	
		MMI_TRACE(MMI_CONN_TRC_INFO, WLAN_SO_ATA_TRC_PARAM_ERR);
	}
}


static wlan_result_enum wlan_scan_only_ata_deinit_hdlr(gas_data_ind_struct *ind)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	wlan_deinit_req_struct req = {0};
	kal_uint8 *src_id = NULL;

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/	
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_DEINIT_HDLR);
	
	if (ind)
	{
		src_id = get_ctrl_buffer(sizeof(kal_uint8));
		*src_id = ind->src_id;
		return wlan_deinit(&req, wlan_scan_only_ata_deinit_cb, src_id);
	}

	return WLAN_RESULT_FAIL;
}


void wlan_scan_only_ata_scan_cb(void *user_data, wlan_scan_cnf_struct *cnf)
{
	gas_data_req_struct *gas_cnf = NULL;
	kal_uint8 i, j, a1, a2, cnt;
	kal_char tmp_str[SCANONLY_SSID_MAX_LEN + 1] = {0};

	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_SCAN_CB);	
	
	if (cnf && user_data)
	{		
		if (SCANONLY_SUCCESS == cnf->status)
		{
			for (i = 0; i < cnf->scan_ap_num && i < SCANONLY_MAX_SCAN_AP_NUM; i++)
			{
				gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
				gas_cnf->src_id = *((kal_uint8 *)user_data);
				gas_cnf->data_type = GAS_OUTPUT_URC;
				
				strncpy(tmp_str, cnf->scan_ap[i].ssid, cnf->scan_ap[i].ssid_len);
				tmp_str[cnf->scan_ap[i].ssid_len] = '\0';
				
				gas_cnf->size = kal_sprintf(
	                                (kal_char*)gas_cnf->data,
	                                WLAN_SCAN_ONLY_ATA_APLIST_SSID,
	                                tmp_str);

				for (j = 0, cnt = 0; j < SCANONLY_MAC_ADDRESS_LEN; j++)
				{
					a1 = (cnf->scan_ap[i].bssid[j] >> 4) & 0x0f;
	                a2 = cnf->scan_ap[i].bssid[j] & 0x0f;
	                tmp_str[cnt] = a1 < 10 ? (a1 + '0') : (a1 - 10 + 'a');
	                tmp_str[cnt + 1] = a2 < 10 ? (a2 + '0') : (a2 - 10 + 'a');
	                tmp_str[cnt + 2] = ':';
	                cnt += 3;
				}
				
				tmp_str[cnt - 1] = '\0';

				gas_cnf->size += kal_sprintf(
	                                (kal_char*)gas_cnf->data + gas_cnf->size,
	                                WLAN_SCAN_ONLY_ATA_APLIST_OTHER,
	                                tmp_str,
	                                cnf->scan_ap[i].rssi,
	                                cnf->scan_ap[i].channel_number);

				wlan_scan_only_ata_snd_gas_cnf(gas_cnf);
			}	

			gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
        	gas_cnf->src_id = *((kal_uint8 *)user_data);
        	gas_cnf->data_type = GAS_OUTPUT_NORMAL;
			strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_APLIST_END);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_APLIST_END);
			
			wlan_scan_only_ata_snd_gas_cnf(gas_cnf);
	                	
		}
		else if (SCANONLY_SCAN_BUSY__IS_SCANNING != cnf->status)
		{
			gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
        	gas_cnf->src_id = *((kal_uint8 *)user_data);
        	gas_cnf->data_type = GAS_OUTPUT_NORMAL;
			strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_ERROR);
	        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_ERROR);
			
			wlan_scan_only_ata_snd_gas_cnf(gas_cnf);
		}

		free_ctrl_buffer((kal_uint8 *)user_data);
		user_data = NULL;
	}
	else
	{	
		MMI_TRACE(MMI_CONN_TRC_INFO, WLAN_SO_ATA_TRC_PARAM_ERR);
	}
}


static wlan_result_enum wlan_scan_only_ata_scan_hdlr(gas_data_ind_struct *ind)
{
	/*----------------------------------------------------------------*/
	/* Local Variables												  */
	/*----------------------------------------------------------------*/
	wlan_scan_req_struct req = {0};
	kal_uint8 *src_id = NULL;

	/*----------------------------------------------------------------*/
	/* Code Body													  */
	/*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_SCAN_HDLR);	
	
	if (ind)
	{
		req.scan_type = 1;
		
		src_id = get_ctrl_buffer(sizeof(kal_uint8));
		*src_id = ind->src_id;
		return wlan_scan(&req, wlan_scan_only_ata_scan_cb, src_id);
	}

	return WLAN_RESULT_FAIL;
}


void wlan_scan_only_ata_msg_hdlr(void *info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    gas_data_ind_struct *ind = (gas_data_ind_struct *)info;
    kal_bool chip_valid;
	wlan_result_enum ret = WLAN_RESULT_FAIL;
    kal_uint16 i;
	gas_data_req_struct *gas_cnf = NULL;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_MSG_HDLR);	
	
    chip_valid = wndrv_chip_isOK();

    if (chip_valid)
    {
        for (i = 0; i < ind->size; i++)
        {
            if (ind->data[i] == 0x0d || ind->data[i] == 0x0a)
            {
                ind->data[i] = 0;
                break;
            }
        }

        if (app_stricmp((kal_char*)ind->data, WLAN_SCAN_ONLY_ATA_ON) == 0)
        {
        	ret = wlan_scan_only_ata_init_hdlr(ind);
        }
        else if (app_stricmp((kal_char*)ind->data, WLAN_SCAN_ONLY_ATA_OFF) == 0)
        {
        	ret = wlan_scan_only_ata_deinit_hdlr(ind);
        }
        else if (app_stricmp((kal_char*)ind->data, WLAN_SCAN_ONLY_ATA_SCAN) == 0)
        {
        	ret = wlan_scan_only_ata_scan_hdlr(ind);
        }
		/*else
		{
			kal_prompt_trace(MOD_MMI_CONN_APP,"[WLAN Srv SO ATA] Unrecoginzed ATA CMD");
		}*/
    }    
	else
	{
		MMI_TRACE(MMI_CONN_TRC_INFO, WLAN_SO_ATA_TRC_WNDRV_ERR);
	}	

	if (WLAN_RESULT_WOULDBLOCK != ret && WLAN_RESULT_SUCCESS != ret)
	{
		gas_cnf = construct_local_para(sizeof(gas_data_req_struct), TD_RESET);
        gas_cnf->src_id = ind->src_id;
        strcpy((kal_char*)gas_cnf->data, WLAN_SCAN_ONLY_ATA_ERROR);
        gas_cnf->size = strlen(WLAN_SCAN_ONLY_ATA_ERROR);
        gas_cnf->data_type = GAS_OUTPUT_NORMAL;

        wlan_scan_only_ata_snd_gas_cnf(gas_cnf);
	}
}


void wlan_scan_only_ata_bootup(void)
{
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_ATA_TRC_BOOTUP);	
	SetProtocolEventHandler(wlan_scan_only_ata_msg_hdlr, MSG_ID_GAS_DATA_IND);
}

#endif /* __GAS_SUPPORT__ */
