#include "GPIO.h"

#include "LED.h"

const LED_tstrConfig_t LED_tstrConfig [LED_enuLED_Count] =
{
	[LED_enuLED_Warning] =
	{
		.LED_Color = LED_enuLED_Red,
		.LED_Pin = GPIO_enuPin_0,
		.LED_Port = GPIO_enuPort_A,
		.LED_ActiveStatus = LED_enuActiveHigh,
		.LED_State = LED_enuLED_ON,
		.LED_Speed = GPIO_OUTPUT_SPEED_HIGH,
	},
};
