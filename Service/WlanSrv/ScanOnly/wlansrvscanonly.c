#include "stack_msgs.h"
#include "mmi_frm_queue_gprot.h"
#include "wlansrvscanonly.h"
#include "EventsGprot.h"
#include "MMI_conn_app_trc.h"
#if defined (__WIFI_SCAN_ONLY_AT_CMD__) && defined (__GAS_SUPPORT__)
#include "wlansrvscanonlyata.h"
#endif

/* Fucntion Declaration */
static void wlan_init_cnf_hdlr(void *info); /* type of info: wndrv_mmi_scanonly_init_cnf_struct */
static void wlan_deinit_cnf_hdlr(void *info); /* type of info: wndrv_mmi_scanonly_deinit_cnf_struct */
static void wlan_scan_cnf_hdlr(void *info); /* type of info: wndrv_mmi_scanonly_scan_ind_struct */


/*****************************************************************************
 * FUNCTION
 *  wlan_init
 * DESCRIPTION
 *  The function is used to init the WLAN.
 * PARAMETERS
 *  callback    :   [IN]    callback function to notify applications the init operation is done
 *  user_data   :   [IN]    application piggyback data 
 * RETURN VALUES
 *  WLAN_RESULT_WOULDBLOCK    : waiting callback
 *****************************************************************************/
wlan_result_enum wlan_init(wlan_init_req_struct *req, wlan_init_cb_func_ptr callback, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_init_req_struct *p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_INIT);
	
    p = OslAllocDataPtr(wndrv_mmi_scanonly_init_req_struct);
    p->init_cb = (scanonly_wndrv_mmi_callback_func_ptr)callback;
    p->init_userdata = (scanonly_wndrv_mmi_user_data_ptr)user_data;

    mmi_frm_send_ilm(MOD_WNDRV, MSG_ID_WNDRV_MMI_SCANONLY_INIT_REQ, (oslParaType *)p, NULL);

    return WLAN_RESULT_WOULDBLOCK;
}


/*****************************************************************************
 * FUNCTION
 *  wlan_init_cnf_hdlr
 * DESCRIPTION
 *  Response for wlan init
 * PARAMETERS
 *  info        [IN]        Local parameters from protocol
 * RETURNS
 *  void
 *****************************************************************************/
void wlan_init_cnf_hdlr(void *info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_init_cnf_struct *cnf = (wndrv_mmi_scanonly_init_cnf_struct *)info;
    wlan_init_cnf_struct package_cnf = {0};
        
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_INIT_CNF);
	
    package_cnf.status = cnf->status;
    cnf->init_cb(cnf->init_userdata, &package_cnf);
}


/*****************************************************************************
 * FUNCTION
 *  wlan_deinit
 * DESCRIPTION
 *  The function is used to deinit the WLAN.
 * PARAMETERS
 *  callback    :   [IN]    callback function to notify applications the init operation is done
 *  user_data   :   [IN]    application piggyback data 
 * RETURN VALUES
 *  WLAN_RESULT_WOULDBLOCK    : waiting callback
 *****************************************************************************/
wlan_result_enum wlan_deinit(wlan_deinit_req_struct *req, wlan_deinit_cb_func_ptr callback, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_deinit_req_struct *p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_DEINIT);
	
    p = OslAllocDataPtr(wndrv_mmi_scanonly_deinit_req_struct);
    p->deinit_cb = (scanonly_wndrv_mmi_callback_func_ptr)callback;
    p->deinit_userdata = (scanonly_wndrv_mmi_user_data_ptr)user_data;

    mmi_frm_send_ilm(MOD_WNDRV, MSG_ID_WNDRV_MMI_SCANONLY_DEINIT_REQ, (oslParaType *)p, NULL);

    return WLAN_RESULT_WOULDBLOCK;
}


/*****************************************************************************
 * FUNCTION
 *  wlan_deinit_cnf_hdlr
 * DESCRIPTION
 *  Response for wlan deinit
 * PARAMETERS
 *  info        [IN]        Local parameters from protocol
 * RETURNS
 *  void
 *****************************************************************************/
void wlan_deinit_cnf_hdlr(void *info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_deinit_cnf_struct *cnf = (wndrv_mmi_scanonly_deinit_cnf_struct *)info;
    wlan_deinit_cnf_struct package_cnf = {0};
        
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_DEINIT_CNF);
	
    package_cnf.status = cnf->status;
    cnf->deinit_cb(cnf->deinit_userdata, &package_cnf);
}


/*****************************************************************************
 * FUNCTION
 *  wlan_scan
 * DESCRIPTION
 *  The function is used to scan.
 * PARAMETERS
 *  callback    :   [IN]    callback function to notify applications the init operation is done
 *  user_data   :   [IN]    application piggyback data 
 * RETURN VALUES
 *  WLAN_RESULT_WOULDBLOCK    : waiting callback
 *****************************************************************************/
wlan_result_enum wlan_scan(wlan_scan_req_struct *req, wlan_scan_cb_func_ptr callback, void *user_data)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_scan_req_struct *p;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_SCAN);
	
    p = OslAllocDataPtr(wndrv_mmi_scanonly_scan_req_struct);
	p->scantype = req->scan_type; // !0: active scan ; 0: passive scan	
    p->scan_cb = (scanonly_wndrv_mmi_callback_func_ptr)callback;
    p->scan_userdata = (scanonly_wndrv_mmi_user_data_ptr)user_data;

    mmi_frm_send_ilm(MOD_WNDRV, MSG_ID_WNDRV_MMI_SCANONLY_SCAN_REQ, (oslParaType *)p, NULL);

    return WLAN_RESULT_WOULDBLOCK;
}


/*****************************************************************************
 * FUNCTION
 *  wlan_scan_cnf_hdlr
 * DESCRIPTION
 *  Response for scan
 * PARAMETERS
 *  info        [IN]        Local parameters from protocol
 * RETURNS
 *  void
 *****************************************************************************/
void wlan_scan_cnf_hdlr(void *info)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    wndrv_mmi_scanonly_scan_ind_struct *cnf = (wndrv_mmi_scanonly_scan_ind_struct *)info;   
    wlan_scan_cnf_struct package_cnf = {0};
    
    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_SCAN_CNF);
	
    package_cnf.status = cnf->status;
    package_cnf.scan_ap_num = cnf->scan_ap_num > SCANONLY_MAX_SCAN_AP_NUM ? SCANONLY_MAX_SCAN_AP_NUM : cnf->scan_ap_num;
    memcpy(package_cnf.scan_ap, cnf->scan_ap, SCANONLY_MAX_SCAN_AP_NUM * sizeof(scanonly_scan_ap_info_struct));    
    cnf->scan_cb(cnf->scan_userdata, &package_cnf);
}


void wlan_scan_only_bootup(void)
{    
	MMI_TRACE(MMI_CONN_TRC_FUNC, WLAN_SO_TRC_BOOTUP);

    SetProtocolEventHandler(wlan_init_cnf_hdlr, MSG_ID_WNDRV_MMI_SCANONLY_INIT_CNF);
    SetProtocolEventHandler(wlan_deinit_cnf_hdlr, MSG_ID_WNDRV_MMI_SCANONLY_DEINIT_CNF);
    SetProtocolEventHandler(wlan_scan_cnf_hdlr, MSG_ID_WNDRV_MMI_SCANONLY_SCAN_IND);  

	#if defined (__WIFI_SCAN_ONLY_AT_CMD__) && defined (__GAS_SUPPORT__)
	wlan_scan_only_ata_bootup();
	#endif
}
