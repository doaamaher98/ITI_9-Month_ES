#include "RCC_Interface.h"
#include "GPIO_Interface.h"
#include "NVIC_Interface.h"
#include "SYSTICK_Interface.h"
#include "Schedular_Interface.h"
#include "Sched_App.h"
#include "Led_Interface.h"


int main(void)
{
	RCC_enuSelectSystemClock(RCC_HSI);
	RCC_enuPeripheralEnable(AHB1, RCC_GPIOA);

	Led_vidInit();
//	Led_vidSetState(Led_1, LED_HIGH);
//	Led_vidSetState(Led_2, LED_HIGH);
//	Led_vidSetState(Led_3, LED_HIGH);
//	Led_vidSetState(Led_4, LED_HIGH);

	Sched_vidInit();


	Sched_vidStart();


}


