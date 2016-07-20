#ifndef __HC_WATCH_MAIN_H
#define __HC_WATCH_MAIN_H


typedef struct
{
	MMI_BOOL lk_rsp_state;
	MMI_BOOL handshake;
	U8 lk_error_cout;
}hc_lk_struck;


void hc_link_keep_hdlr(void);
void hc_link_keep_timeout_hdlr(void);
U32 hc_make_send_data(CHAR *dest, CHAR *cont, U32 cont_len);
void hc_soc_upload_hdlr(void);
S32 hc_soc_recv_hdlr(U8 *rbuf, S32 rbuf_size);
void hc_al_hdlr(void);
S32 hc_turnover_detect_hdlr(void* msg);
void hc_upload_timer_hdlr(void);
S32 hc_ud2_hdlr(void* msg);
void hc_reconnect_server_hdlr(void);
#endif