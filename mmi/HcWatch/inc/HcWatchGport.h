#ifndef __HC_WATCH_GPORT_H
#define __HC_WATCH_GPORT_H

#if defined(__HC_CLIENT__)
#include "HcComm.h"
#include "HcSocket.h"
#include "HcClient.h"
#endif



//extern void HcWatch_init(void);
extern void hc_record_handle(void);
extern void hc_app_callback_hdlr(hc_client_data *client_data, hc_client_event event);
extern void hc_sntp_callback_hdlr(hc_client_data *client_data, hc_client_event event);
#endif

