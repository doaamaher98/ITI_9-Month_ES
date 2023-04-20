/***************************
 * Author: Raouf Magdy     *
 * Date: 27/1/2023         *
 * Version: V01            *
 ***************************/
 
 
 
 #ifndef LED_INTERFACE_H
 #define LED_INTERFACE_H
 
 
 #include "Led_Config.h"
 
 
 typedef enum{
	 
	 Led_OK = 0,
	 Led_NotOK
	 
 }LedErrorStatus;
 
 
 #define LED_SET	0x00000001
 #define LED_RESET	0x00010000
 #define LED_HIGH	0x00000001
 #define LED_LOW	0x00010000
 #define HIGH	    0x00000001
 #define LOW	    0x00010000
 
 //Leds Initialization
 LedErrorStatus Led_vidInit(void);
 
 //Leds Set State:
 void Led_vidSetState(u8 Led, u32 State);
 
 
 
 
 
 
 
 
 #endif
 
