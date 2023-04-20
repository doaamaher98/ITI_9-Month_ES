/***************************
 * Author: Raouf Magdy     *
 * Date: 27/1/2023         *
 * Version: V01            *
 ***************************/
 
 
 #include "Led_Config.h"
 #include "GPIO_Interface.h"
 
 
 //creating an array of struct "Led_cfg_t" for Led configurations:
 Led_cfg_t Leds_Config[Led_Count] = 
 {
	 
	 [Led_Red]   = {.GPIO_Port = GPIO_PORTA, .GPIO_Pin = GPIO_PIN0, .GPIO_Mode_Speed = GPIO_OUTPUT_PP_VHS},
	 [Led_Green] = {.GPIO_Port = GPIO_PORTA, .GPIO_Pin = GPIO_PIN1, .GPIO_Mode_Speed = GPIO_OUTPUT_PP_VHS},
	 [Led_Blue]  = {.GPIO_Port = GPIO_PORTC, .GPIO_Pin = GPIO_PIN13, .GPIO_Mode_Speed = GPIO_OUTPUT_PP_VHS}
	 
	 
 };














