#ifndef __HC_BAT_H
#define __HC_BAT_H

typedef struct
{
	U8 pct;
	U8 lowbat_flag;
	U32 check_interval;
	#if defined(__HC_SMS__)
	U8 sms_sent_flag;
	#endif
	#if defined(__CUSTOM_LED__)
	U8 led_blink_flag;
	#endif
} hc_bat_cntx_struck;

#endif
