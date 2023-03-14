#include "GPIO.h"
#include "SW.h"

const Switch_tstr_Config_t Switch_tstr_Config[Switch_enu_NumberOfPins]=
{
		[Switch_enu_On]=
		{
				.Switch_Port = GPIO_enuPort_A,
				.Switch_Pin = GPIO_enuPin_1,
				.Switch_PUPD = GPIO_MODE_INPUT_PU,
		},

//		[Switch_enu_Off]=
//		{
//				.Switch_Port = GPIO_enuPort_A,
//				.Switch_Pin = GPIO_enuPin_1,
//				.Switch_PUPD = GPIO_MODE_INPUT_PU,
//
//		},
};


