
#ifndef __HC_COMM__H__
#define __HC_COMM__H__

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus

#if defined(__cplusplus)
#define EXTERN_C    extern "C"
#else
#define EXTERN_C    extern
#endif //defined(__cplusplus)

#define HC_CLIENT_DEBUG
#if defined (HC_CLIENT_DEBUG)
#define HCCLIENT_DBGTRACE(s)	kal_prompt_trace s
#else
#define HCCLIENT_DBGTRACE(s)
#endif

#define HC_SOC_SEND_BUFFER_SIZE 2*1024 /* 2K */
#define HC_SOC_RECV_BUFFER_SIZE 2*1024 /* 2k */

typedef unsigned char       HBOOL;
typedef void                HVOID;
typedef char                HCHAR;//
typedef unsigned char       HBYTE;
typedef unsigned short      HWCHAR;
typedef signed short        HSHORT;
typedef unsigned short      HUSHORT;
typedef signed long         HLONG;
typedef unsigned long       HULONG;
typedef signed int          HINT;
typedef unsigned int        HUINT;
typedef unsigned __int64    HU64;
typedef __int64             HS64;
typedef unsigned char       HUINT8;
typedef signed char         HINT8;
typedef unsigned short      HUINT16;
typedef signed short        HINT16;
typedef unsigned long       HUINT32;
typedef signed long         HINT32;
typedef unsigned __int64    HUINT64;
typedef __int64             HINT64;

#if 0
typedef enum _IN_BOOLEAN
{
  INTrue=1,
  INFalse=0
} IN_BOOLEAN;

typedef enum _IN_SOCKET_STATUS
{
    IN_SOCK_STATUS_READY=0,
    IN_SOCK_STATUS_ERROR=1
} IN_SOCKET_STATUS;

typedef struct _INCallback
{
    void (*iCallback)(void*param);
    void* iParam;
} INCallback;

#define INSMS_MAX_DIGITS_LEN        41
typedef struct _INSendSmsExReq
{
    INUint16 iStructSize;
    INUint16 iDestPort;
    INUint16 iSrcPort;
    INUint16 iFlags;
    INUint8  iDCS;
    INUint8  iNumberLen;
    INUint16 iMessageLen;
    char     iNumber[INSMS_MAX_DIGITS_LEN];
    const INUint8* iMessage;
} INGSendSmsExReq;

enum INPhoneStatus
{
    IN_PHONESTATUS_UNKNOWN=0,
    IN_PHONESTATUS_OFFLINE,
    IN_PHONESTATUS_IDLE,
    IN_PHONESTATUS_INCOMING,
    IN_PHONESTATUS_ORIG,
    IN_PHONESTATUS_CONVERSATION
};
typedef struct _INTAPIStatus
{
    INUint16 iStructSize;
    INUint8 iIndex;
    INUint8 iPhoneStatus;
    INUint8 bExist;
    INUint8 bActive;
    INUint8 bRegistered;
    INUint8 bRoaming;
    char PLMN[8];
} INTAPIStatus;

enum IN_SIM_USABLE
{
    IN_SIM1_USABLE=1,                               //!< SIM卡1可用
    IN_SIM2_USABLE=2,                               //!< SIM卡2可用
    IN_SIM12_USABLE=IN_SIM1_USABLE|IN_SIM2_USABLE,  //!< SIM卡1和SIM卡2都可用

    IN_SIM1_PRESENT,
    IN_SIM2_PRESENT,
    IN_SIM12_PRESENT=IN_SIM1_PRESENT|IN_SIM2_PRESENT,
};

enum IN_SELSIM_METHODS
{
    IN_SELSIM_GET_SIM_NUM,          //!< 获取系统支持的SIM卡数量
    IN_SELSIM_GET_SIM_USAGE,        //!< 获取当前系统邋SIM卡可用状态，返回值参见::IN_SIM_USABLE

    
    IN_SELSIM_SET_SMS_CHANNEL,      //!< 设置短信用SIM卡
    IN_SELSIM_SET_CALL_CHANNEL,     //!< 设置电话用SIM卡
    IN_SELSIM_SET_DATA_CHANNEL,     //!< 设置网络用SIM卡
    IN_SELSIM_SET_OP_CHANNEL,       //!< 设置其它操作用SIM卡

    IN_SELSIM_GET_SMS_CHANNEL,      //!< 获取短信用SIM卡
    IN_SELSIM_GET_CALL_CHANNEL,     //!< 获取电话用SIM卡
    IN_SELSIM_GET_DATA_CHANNEL,     //!< 获取网络用SIM卡
    IN_SELSIM_GET_OP_CHANNEL,       //!< 获取其它操作用SIM卡

    IN_SELSIM_GET_SIM_PRESENT,      //!< 获取存在性
    IN_SELSIM_GET_SIM_PLMN,         //!< 获取PLMN   (请先设置IN_SELSIM_SET_OP_CHANNEL)
    IN_SELSIM_GET_SIM_ICCID,        //!< 获取ICCID  (请先设置IN_SELSIM_SET_OP_CHANNEL)    
    
    IN_SELSIM_INIT_SIM_SMSC,		//!<初始化短信中心号码，因为是向系统发请求得到，所以不能与IN_SELSIM_GET_SIM_SMSC顺序调用
    IN_SELSIM_GET_SIM_SMSC,			//!< 获取短信中心号码  (请先设置IN_SELSIM_SET_OP_CHANNEL)
	IN_SELSIM_GET_SIM_LAC,			//!< 获取LAC  (请先设置IN_SELSIM_SET_OP_CHANNEL)
	IN_SELSIM_GET_SIM_CELLID,		//!< 获取CELL ID  (请先设置IN_SELSIM_SET_OP_CHANNEL)    
};
#endif
#ifdef __cplusplus
}
#endif //__cplusplus

#endif //!__IN_COMM__H__


