#include "RCC_Interface.h"
#include "GPIO_Interface.h"
#include "NVIC_Interface.h"
#include "SYSTICK_Interface.h"
#include "Led_Interface.h"



void Blink(void)
{
	static u8 count = 0;

	if(count == 0)
	{
		Led_vidSetState(Led_Blue,LED_LOW);
		count = 1;
	}
	else
	{
		Led_vidSetState(Led_Blue,LED_HIGH);
		count = 0;
	}
}

int main(void)
{
	RCC_enuSelectSystemClock(RCC_HSI);
	RCC_enuPeripheralEnable(AHB1,RCC_GPIOC);

	Led_vidInit();
	Led_vidSetState(Led_Blue,LED_HIGH);


	STK_EnableSEQ();
	STK_SetClockSource(Processor_Clock);
	STK_SetPeriod_ms(HSI, Processor_Clock, 1000);

	STK_CallBackFunction(Blink);

	STK_Start();



	while(1)
	{

	}

	return 0;
}



