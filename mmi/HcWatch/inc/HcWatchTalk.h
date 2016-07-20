#ifndef __HC_WATCH_TALK_H
#define __HC_WATCH_TALK_H

#define HC_TK_UPLOAD_PACK_SIZE 1280	//1024
#define TALK_UNREAD_MAX	3

//#define HCTALK_FILE_LEN	128
#define HCTALK_UD_PATH     L":\\Audio\\"
#define HCTALK_DL_PATH     L":\\HcDownload\\"

typedef enum
{
	hc_tk_download_idle,
	hc_tk_downloading,
	hc_tk_download_wait
} hc_tk_download_state;

typedef enum
{
	hc_tk_upload_idle,
	hc_tk_upload_begin,
	hc_tk_uploading,
	hc_tk_upload_wait,
	hc_tk_upload_end,
	hc_tk_upload_error
} hc_tk_upload_state;

typedef struct
{
	U8 drive;
	U32 remindsize;
	U16 udpath[HC_PATH_BUFFER_SIZE];
	CHAR dlpath[SRV_FMGR_PATH_BUFFER_SIZE];

    CHAR dl_filepath[SRV_FMGR_PATH_BUFFER_SIZE];
	U8 dl_state;

    U16 ud_filepath[HC_PATH_BUFFER_SIZE];
	CHAR ud_filename[HC_PATH_BUFFER_SIZE];
    U8 upload_state;
	U8 ud_curr_pack;
	U8 ud_total_pack;
	U32 ud_total_size;

	U8 repeat;
	U32 timeout;
	U32 tkq_interval;
} hctalk_cntx; 

typedef struct
{
	CHAR curr_read_path[SRV_FMGR_PATH_BUFFER_SIZE];
	U8 unread_total;
	#if defined(__CUSTOM_LED__)
	U8 led_blink_flag;
	#endif	
} hc_talk_unread_struct;

#endif
