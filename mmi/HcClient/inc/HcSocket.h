#ifndef __HC_SOCKET_H__
#define __HC_SOCKET_H__

typedef enum {
	HC_SOC_IDLE = 0,
	HC_SOC_GETIP,//only for cmnet and pc simulator
	HC_SOC_CONNECTING,
	HC_SOC_CONNECTED,
	HC_SOC_SENDING,
	HC_SOC_SENDED,
	HC_SOC_RECIEVING,
	HC_SOC_SERV_CLOSE,
	HC_SOC_DICONNECT,
	HC_SOC_ERROR = 0xff
}hc_soc_status;

typedef enum{
	HC_SOC_EVENT_GETIP = 0,
	HC_SOC_EVENT_GETIP_ERROR,
	HC_SOC_EVENT_CONNECTING,
	HC_SOC_EVENT_CONNECT_ERROR,
	HC_SOC_EVENT_CONNECTED,
	HC_SOC_EVENT_SEND_DATA,
	HC_SOC_EVENT_SEND_ERROR,
	HC_SOC_EVENT_SEND_END,
	HC_SOC_EVENT_RECV_DATA,
	HC_SOC_EVENT_RECV_ERROR,
	HC_SOC_EVENT_RECV_BUFFER_FULL,
	HC_SOC_EVENT_CLOSE,
	HC_SOC_EVENT_ERROR = 0xff
}hc_soc_event;

typedef struct __hc_socket_data
{
	HINT socket_id;
	HUINT account_id; //帐号
	HUINT socket_status; //连接状态
	HUINT net_sim_num; //上网卡号，双待机有效
	HUINT8 gprs_type;
	
	HUINT8 send_buffer[HC_SOC_SEND_BUFFER_SIZE + 1];
	HUINT8 recv_buffer[HC_SOC_RECV_BUFFER_SIZE + 1];
	HUINT send_buffer_size;
	HUINT recv_buffer_size;
	HUINT send_data_size;
	HUINT recv_data_size;
	HUINT send_lenth_once;
	HUINT recv_lenth_once;

	HVOID (*client_callback)(struct __hc_socket_data *socket_data, hc_soc_event event);
	
	//HCHAR ip[50]; //dns解析后需要的
	//HUINT port; //dns解析后需要的

	
	//缓冲数据预处理
	//INUint32 peek_data_length;
	//INUint32 peek_state;
	
	//INUint32 protocol_id; //协议ID

	//Timeout handler
	//void (*socket_timeout_handler)(void);
	HUINT time_interval;

	//pointer to the http data
	void *client_data;
}hc_socket_data;

typedef void(*hc_client_callback_func)(struct __hc_socket_data *socket_data, hc_soc_event soc_event);

extern hc_socket_data *hc_create_soc(HUINT send_buffer_size, HUINT recv_buffer_size, hc_client_callback_func client_callback);
void hc_soc_close(hc_socket_data* socket_data_ptr);

#endif
