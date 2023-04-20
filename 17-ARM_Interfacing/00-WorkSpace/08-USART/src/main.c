
#include "RCC_Driv.h"
#include "GPIO.h"
#include "NVIC.h"

#include "USART_Interface.h"

#include "LED.h"

void App1_Task(void)
{

}


void TX_Finished(void)
{
	LED_enuSetLEDValue(LED_enuLED_Warning,LED_enuLED_ON);
}

void RX_Finished (void)
{
	LED_enuSetLEDValue(LED_enuLED_Alarm,LED_enuLED_ON);
}

void main (void)
{
	u8 Data[2];

	RCC_enuSelectSysClk(RCC_enu_HSI);


	/* Enable GPIOA,B */
	RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOA);
	RCC_enuEnablePeripheralClk(RCC_enuAHB1,RCC_enuAHB1_GPIOB);

	/* Enable USART1 */
	RCC_enuEnablePeripheralClk(RCC_enuAPB2,RCC_enuAPB2_USART1);

	/* A0,A1 */
	LED_enuLEDInit();
	USART_enuInit();

	Sched_enuInit();
	Sched_enuStart();

	while (1)
	{
		USART_enuSendAsynchZeroCpy(USART_enuUSART1,Data,2,&TX_Finished);
		USART_enuReceiveAsynchZeroCpy(USART_enuUSART1,Data,2,&RX_Finished);

	}
}
