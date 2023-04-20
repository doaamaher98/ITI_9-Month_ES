/*
 * LED_Cfg.c
 *
 *  Created on: 1 Mar 2023
 *      Author: HP
 */


#include "LED.h"
#include "LED_Cfg.h"


const LED_Cfg_t ledcfg[LED_count] =
{
		[LED_0] = {.LED_PORT= LED_PORT_C,
		.LED_PIN= LED_PIN_13,
		.LED_MODE= ACTIVE_LOW,
		.LED_SPEED = LED_SPEED_VERY_HIGH},

		[LED_1] = {.LED_PORT= LED_PORT_A,
		.LED_PIN= LED_PIN_1,
		.LED_MODE= ACTIVE_HIGH,
		.LED_SPEED = LED_SPEED_VERY_HIGH},

		[LED_2] = {.LED_PORT= LED_PORT_A,
		.LED_PIN= LED_PIN_2,
		.LED_MODE= ACTIVE_HIGH,
		.LED_SPEED = LED_SPEED_VERY_HIGH},
};
