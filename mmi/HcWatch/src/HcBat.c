#if defined(__HC_BAT__)
#include "MMIDataType.h"
#include "TimerEvents.h"

#include "HcWatchDefine.h"
#include "HcBat.h"
#include "HcLed.h"


hc_bat_cntx_struck g_bat_cntx;

U8 hc_bat_get_level(void)
{
#if 1
	if((mmi_gpio_get_current_battery_level() - BATTERY_LEVEL_0) < 0)
	{
		return 0;
	}
		
	if ((mmi_gpio_get_current_battery_level() - BATTERY_LEVEL_0) * 33 == 99)
		return 100;
	else
		return (mmi_gpio_get_current_battery_level() - BATTERY_LEVEL_0) * 33;
#else
	S8 battery_level = mmi_gpio_get_current_battery_level() - BATTERY_LEVEL_0;
	U8 ret;
	
	if(battery_level < 0)
	{
		return 0;
	}	

	ret = (battery_level * 1.0) / (BATTERY_LEVEL_6 - BATTERY_LEVEL_0) * 100;
	if (ret > 100)
	{
		ret = 100;
	}

	return ret;
#endif
}

void hc_bat_check_timer(void)
{
	//U32 delay = g_bat_cntx.check_interval;

	StopTimer(HC_BAT_CHECK_TIMER);

	g_bat_cntx.pct = hc_bat_get_level();
	
	if (g_bat_cntx.pct == 0)
	{
		g_bat_cntx.lowbat_flag = 1;
	#if defined(__HC_SMS__)
		if (!g_bat_cntx.sms_sent_flag)
		{
			// send sms
			if (user_config_bat_send_sms())
			{
				g_bat_cntx.sms_sent_flag = 1;
			}
		}
	#endif
	#if defined(__CUSTOM_LED__)
		if (!g_bat_cntx.led_blink_flag)
		{
			g_bat_cntx.led_blink_flag = 1;
			hc_led_blink_set_work(hc_led_red, MMI_TRUE);
		}
	#endif
	#if defined(__HC_SMS__)
		if (hc_client_ready())
		{
			hc_al_hdlr();
		}
	#endif
	}
	else
	{
		g_bat_cntx.lowbat_flag = 0;
	#if defined(__HC_SMS__)
		if (g_bat_cntx.sms_sent_flag)
		{
			g_bat_cntx.sms_sent_flag = 0;
		}
	#endif
	#if defined(__CUSTOM_LED__)
		if (g_bat_cntx.led_blink_flag)
		{
			g_bat_cntx.led_blink_flag = 0;
			hc_led_blink_set_work(hc_led_red, MMI_FALSE);
		}
	#endif	
	}

	kal_prompt_trace(MOD_BT,"[BAT] Check Bat, interval: %d, pct: %d", g_bat_cntx.check_interval, g_bat_cntx.pct);
	StartTimer(HC_BAT_CHECK_TIMER, g_bat_cntx.check_interval, hc_bat_check_timer);
}

void hc_bat_init(void)
{
	memset(&g_bat_cntx, 0, sizeof(hc_bat_cntx_struck));
	g_bat_cntx.check_interval = 60*1000;
	g_bat_cntx.lowbat_flag = 0;
	g_bat_cntx.sms_sent_flag = 0;
}

#endif
