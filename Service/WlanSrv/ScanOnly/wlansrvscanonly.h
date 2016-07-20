#ifndef __WLAN_SRV_SCAN_ONLY_H__
#define __WLAN_SRV_SCAN_ONLY_H__

#include "wndrv_mmi_scanonly_msg.h"

/* Result enum */
typedef enum
{
    WLAN_RESULT_SUCCESS,
    WLAN_RESULT_WOULDBLOCK,
    WLAN_RESULT_FAIL,
    
    WLAN_RESULT_TOTAL
} wlan_result_enum;

/* Struct */
typedef struct
{
    // Reserved struct
    void *para;
} wlan_init_req_struct;

typedef struct
{
    SCANONLY_STATUS_ENUM status;
} wlan_init_cnf_struct;

typedef struct
{
    // Reserved struct
    void *para;
} wlan_deinit_req_struct;

typedef struct
{
    SCANONLY_STATUS_ENUM status;
} wlan_deinit_cnf_struct;

typedef struct
{
    // Reserved struct
    void *para;
    kal_uint8 scan_type;
} wlan_scan_req_struct;

typedef struct
{
    SCANONLY_STATUS_ENUM                 status;
    kal_uint8                            scan_ap_num;
    scanonly_scan_ap_info_struct         scan_ap[SCANONLY_MAX_SCAN_AP_NUM];
} wlan_scan_cnf_struct;

/* Callback */
typedef void (*wlan_init_cb_func_ptr) (void *user_data, wlan_init_cnf_struct *cnf);
typedef void (*wlan_deinit_cb_func_ptr) (void *user_data, wlan_deinit_cnf_struct *cnf);
typedef void (*wlan_scan_cb_func_ptr) (void *user_data, wlan_scan_cnf_struct *cnf);

/* Bootup */
extern void wlan_scan_only_bootup(void);

/* REQ */
extern wlan_result_enum wlan_init(wlan_init_req_struct *req, wlan_init_cb_func_ptr callback, void *user_data);
extern wlan_result_enum wlan_deinit(wlan_deinit_req_struct *req, wlan_deinit_cb_func_ptr callback, void *user_data);
extern wlan_result_enum wlan_scan(wlan_scan_req_struct *req, wlan_scan_cb_func_ptr callback, void *user_data);

#endif /* __WLAN_SRV_SCAN_ONLY_H__ */
