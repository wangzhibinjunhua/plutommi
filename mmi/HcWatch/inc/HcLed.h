#ifndef __HC_LED_H
#define __HC_LED_H

#define HC_LED_BLINK_ON		(500)
#define HC_LED_BLINK_OFF	(4*1000)

typedef enum
{
	hc_led_red,
	hc_led_green,
	hc_led_blue,
	hc_led_max
} hc_led;

#endif
