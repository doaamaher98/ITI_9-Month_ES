#include "RCC_Driv.h"
#include "GPIO.h"

#include "LED.h"
#include "../Switch_Driver/SW.h"

void main(void)
{
	RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOA);

	u8 Status =0;

	LED_enuLEDInit();
	Switch_enuInit();

  while (1)
    {
	  Switch_enuGetSwitchState(GPIO_enuPort_A,GPIO_enuPin_0,&Status);
	  if (Status == Switch_enuPressed)
	  {
		  LED_enuSetLEDValue(LED_enuLED0,LED_enuLED_ON);
	  }
	  else if (Status == Switch_enuReleased)
	  {
		  LED_enuSetLEDValue(LED_enuLED0,LED_enuLED_OFF);
	  }
    }
}


