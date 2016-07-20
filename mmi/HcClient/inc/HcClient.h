#ifndef __HC_CLIENT_H__
#define __HC_CLIENT_H__


typedef enum{
	HC_CLIENT_EVENT_CONNECT = 0,
	HC_CLIENT_EVENT_CONNECTING,	
	HC_CLIENT_EVENT_CONNECT_ERROR,
	HC_CLIENT_EVENT_REQUEST,
	HC_CLIENT_EVENT_REQUEST_ERROR,
	HC_CLIENT_EVENT_DOWNLOAD,
	HC_CLIENT_EVENT_DOWNLOAD_ERROR,
	HC_CLIENT_EVENT_DISCONNECT,
	HC_CLIENT_EVENT_CLOSE,
	HC_CLIENT_EVENT_TIMEOUT,
	HC_CLIENT_EVENT_ERROR,
	HC_CLIENT_EVENT_MAX = 0xff	
}hc_client_event;


typedef struct __hc_client_data
{
	//INUint32 http_id;
	//INUint8 header[IN_HTTP_REQ_HEADER_MAX_LENGTH];
	//INInt32 head_data_length; //请求头长度
	hc_socket_data * socket_data_ptr;
	//INInt32 status; //http处理状态
	//INUint8 resend_count; //重复请求的次数
	void (*app_callback)(struct __hc_client_data *client_data, hc_client_event event);//app callback
	//in_http_ret_info http_ret_info;
	//INUint8 gprs_type;

	//time out handler
	//void (*http_timeout_handler)(void);
	//INUint32 time_interval;

}hc_client_data;


typedef void (*hc_app_callback)(hc_client_data *client_data, hc_client_event event);

extern hc_client_data *g_hc_client_data_ptr;
extern hc_client_data *g_hc_epo_client_ptr;

HVOID hc_client_start(HVOID);  
HVOID hc_release_client(hc_client_data ** http_data_pp);

hc_client_data *hc_create_client(hc_app_callback app_callback);
#endif