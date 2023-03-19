#include "RCC.h"
#include "STK_Interface.h"

#include "GPIO.h"

#include "LED.h"

void func1(void)
{
	LED_enuSetLEDValue(LED_enuLED1,LED_enuActiveHigh);
}


void main(void)
{
	RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOA);
	STK_enuInit();


	LED_tstrConfig_t Led;

	LED_enuLEDInit();

	LED_enuSetLEDValue(LED_enuLED0,LED_enuActiveHigh);
	STK_enuSynchronousSetTickTimeMS(10000000000);
	LED_enuSetLEDValue(LED_enuLED1,LED_enuActiveHigh);


//	LED_enuSetLEDValue(LED_enuLED1,LED_enuActiveHigh);
//	LED_enuSetLEDValue(LED_enuLED2,LED_enuActiveHigh);
//	LED_enuSetLEDValue(LED_enuLED3,LED_enuActiveHigh);


	while(1)
	{

	}
}