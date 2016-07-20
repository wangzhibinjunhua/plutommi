#ifndef __HC_WATCH_DEFINE_H
#define __HC_WATCH_DEFINE_H

#include "UcmSrvGprot.h"


#define HC_APP_ASM_BUF_SIZE (100*1024)
#define CHECK_SOS_RSP_TIME	(10*1000)


#define UD2_CACHE_MAX	50
#define UD2_CACHE_SIZE	256



#define HC_CUSTOMER_ID	"HC"	//"3G"
//#define HC_DEVICE_ID	"4522398242"

#define HC_SOC_LINK_KEEP_TIME	(3*60*1000)  //(5*60*1000)	// 5 min
#define HC_SOC_LK_RSP_CHECK_TIME	(60*1000)	// 60 s
#define HC_SOC_AL_RSP_CHECK_TIME	(30*1000)	// 30 s

#define HC_PATH_BUFFER_SIZE	128 //256
#define HC_PACK_SIZE 1280	//1024

#define SILENCE_MODE_MAX 4

// TX
#define HC_PROTL_LK	"LK"
#define HC_PROTL_UD	"UD"
#define HC_PROTL_UD2	"UD2"
#define HC_PROTL_AL	"AL"


// RX
#define HC_BRACKETS_HEAD '['
#define HC_BRACKETS_END ']'
#define HC_SEPARTOR	'*'
#define HC_CONTENT_SEPARTOR	','
#define HC_RX_CUSTOMER_ID	"HC"	//"SG"
#define HC_PROTL_UPLOAD	"UPLOAD"
#define HC_PROTL_FLOWER	"FLOWER"
#define HC_PROTL_SOS	"SOS"
#define HC_PROTL_MONITOR	"MONITOR"
#define HC_PROTL_REMOVE	"REMOVE"
#define HC_PROTL_POWEROFF	"POWEROFF"
#define HC_PROTL_FIND	"FIND"
#define HC_PROTL_PEDO	"PEDO"
#define HC_PROTL_WHITELIST1	"WHITELIST1"
#define HC_PROTL_WHITELIST2	"WHITELIST2"
#define HC_PROTL_FACTORY "FACTORY"
#define HC_PROTL_REMIND "REMIND"
#define HC_PROTL_LOWBAT "LOWBAT"
#define HC_PROTL_SOSSMS "SOSSMS"
#define HC_PROTL_PHOTO "PHOTO"
#define HC_PROTL_PHOTO2 "PHOTO2"
#define HC_PROTL_SILENCETIME "SILENCETIME"
#define HC_PROTL_TKQ	"TKQ"
#define HC_PROTL_TK	"TK"
#define HC_PROTL_CENTER "CENTER"
#define HC_PROTL_CR "CR"
#define HC_PROTL_EPO "EPO"

typedef struct
{
	U8  family_num[3][SRV_UCM_MAX_NUM_URI_LEN];		//0为sos，1和2亲情号码
}family_num_struct;

typedef struct
{
	U8  whitelist1_num[5][SRV_UCM_MAX_NUM_URI_LEN];		//0为sos，1和2亲情号码
}whitelist1_num_struct;

typedef struct
{
	U8 cache[UD2_CACHE_MAX][UD2_CACHE_SIZE];
	U8 cur_index;
}hc_ud2_cache_struck;


typedef struct
{
	U8 sos_warning;
	
	U8 lowbat_state;			// 0: 非低电量状态;   1: 低电量状态
	U8 lowbat_warning_en;		// 0: 电量不报警;    1: 低电量报警

	U8 ps_state;				// 0 -设备穿戴状态；1 - 设备脱落状态
	U8 ps_warning_en;			// 0 - 设备脱落不报警；1 - 设备脱落报警
}hc_watch_state_struck;


typedef struct
{
	MMI_BOOL en;
	U32 count;
} hc_turnover_detect_struck;

typedef enum
{
	AL_IDLE,
	AL_SENDING,
	AL_WAITE_RSP
} hc_AL_STATE;


#if 0
typedef struct
{
	MYTIME start;
	MYTIME end;
}hc_silence_mode_time_struck;

typedef struct
{
	hc_silence_mode_time_struck time[SILENCE_MODE_MAX];
}hc_silence_mode_struck;
#endif
#endif
