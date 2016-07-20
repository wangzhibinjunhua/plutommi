#include "MMI_include.h"
#include "TimerEvents.h"
#include "HcLed.h"
#include "HcBat.h"




extern hc_bat_cntx_struck g_bat_cntx;

void hc_led_red_on_timer_hdlr(void);
void hc_led_red_off_timer_hdlr(void);
void hc_led_green_on_timer_hdlr(void);
void hc_led_green_off_timer_hdlr(void);
void hc_led_blue_on_timer_hdlr(void);
void hc_led_blue_off_timer_hdlr(void);


void hc_led_red_on_timer_hdlr(void)
{
	StopTimer(HC_LED_R_BLINK_TIMER);
	phone_led_contral_open_red();
	StartTimer(HC_LED_R_BLINK_TIMER, HC_LED_BLINK_ON, hc_led_red_off_timer_hdlr);
}

void hc_led_red_off_timer_hdlr(void)
{
	StopTimer(HC_LED_R_BLINK_TIMER);
	phone_led_contral_close_red();
	StartTimer(HC_LED_R_BLINK_TIMER, HC_LED_BLINK_OFF, hc_led_red_on_timer_hdlr);
}

void hc_led_red_blink_start(void)
{
	hc_led_red_on_timer_hdlr();
}

void hc_led_red_blink_stop(void)
{
	StopTimer(HC_LED_R_BLINK_TIMER);
	phone_led_contral_close_red();
}

void hc_led_green_on_timer_hdlr(void)
{
	StopTimer(HC_LED_G_BLINK_TIMER);
	phone_led_contral_open_green();
	StartTimer(HC_LED_G_BLINK_TIMER, HC_LED_BLINK_ON, hc_led_green_off_timer_hdlr);
}

void hc_led_green_off_timer_hdlr(void)
{
	StopTimer(HC_LED_G_BLINK_TIMER);
	phone_led_contral_close_green();
	StartTimer(HC_LED_G_BLINK_TIMER, HC_LED_BLINK_OFF, hc_led_green_on_timer_hdlr);
}

void hc_led_green_blink_start(void)
{
	hc_led_green_on_timer_hdlr();
}

void hc_led_green_blink_stop(void)
{
	StopTimer(HC_LED_G_BLINK_TIMER);
	phone_led_contral_close_green();
}

void hc_led_blue_on_timer_hdlr(void)
{
	StopTimer(HC_LED_B_BLINK_TIMER);
	phone_led_contral_open_blue();
	StartTimer(HC_LED_B_BLINK_TIMER, HC_LED_BLINK_ON, hc_led_blue_off_timer_hdlr);
}

void hc_led_blue_off_timer_hdlr(void)
{
	StopTimer(HC_LED_B_BLINK_TIMER);
	phone_led_contral_close_blue();
	StartTimer(HC_LED_B_BLINK_TIMER, HC_LED_BLINK_OFF, hc_led_blue_on_timer_hdlr);
}

void hc_led_blue_blink_start(void)
{
	hc_led_blue_on_timer_hdlr();
}

void hc_led_blue_blink_stop(void)
{
	StopTimer(HC_LED_B_BLINK_TIMER);
	phone_led_contral_close_blue();
}

void hc_led_blink_set_work(hc_led led, MMI_BOOL on)
{
	hc_led_red_blink_stop();
	hc_led_green_blink_stop();
	hc_led_blue_blink_stop();	
	
	if (on)
	{
		switch (led)
		{
			case hc_led_red:
				hc_led_red_blink_start();
				break;
			case hc_led_green:
				hc_led_green_blink_start();	
				break;
			case hc_led_blue:
				hc_led_blue_blink_start();
				break;
			default:
				break;
		}
	}
	else
	{
		if (g_bat_cntx.lowbat_flag)
		{
			hc_led_red_blink_start();
		}
	}
}

void hc_led_blink_all_stop(void)
{
	hc_led_red_blink_stop();
	hc_led_green_blink_stop();
	hc_led_blue_blink_stop();	
	
	if (g_bat_cntx.lowbat_flag)
	{
		hc_led_red_blink_start();
	}	
}

