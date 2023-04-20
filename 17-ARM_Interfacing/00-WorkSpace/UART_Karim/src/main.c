#include <stdio.h>
#include <stdlib.h>
#include "SYSTICK.h"
#include "GPIO.h"
#include "RCC.h"
#include "LED.h"
#include "scheduler.h"
#include "UART.h"


u8 arr[2] = "Hi";


u8 arr2[3];


void Tx_Finish(void)
{
	LED_Set_State(1, ON);
}


void Rx_Finish(void)
{
	//UART_SendAsynchZeroCpy(UART_1, arr2, 2,Tx_Finish);
	static u8 flag = 0;
	flag^=1;
	LED_Set_State(2, flag);
	UART_SendAsynchZeroCpy(UART_1, arr2, 3,Tx_Finish);
}

void UART_TAsk(void)
{

	if(get_status() == IDLE)
	{
		UART_ReceiveAsynchZeroCpy(UART_1, arr2, 2,Rx_Finish);
	}
}


UART_Cfg_t UART_Cfg =
{


			.Channel = UART_1,
			.DataLength = bits_8,
			.Parity_Control = PARITY_DISABLE,
			.Parity_Type = PARITY_ODD,
			.StopBits = STOP_bits_1,
			.OverSampling = OVERSAMPLING_16,
			.BaudRate = 9600,
			.UART_Pins =
			{
					.Tx =
					{
							.GPIO_PORT = GPIO_PORT_A,
							.GPIO_PIN = GPIO_PIN_9,
							.GPIO_MODE = GPIO_AF_PP,
							.GPIO_SPEED = GPIO_SPEED_VERY_HIGH
					},

					.Rx =
					{
							.GPIO_PORT = GPIO_PORT_A,
							.GPIO_PIN = GPIO_PIN_10,
							.GPIO_MODE = GPIO_AF_PP_PU,
							.GPIO_SPEED = GPIO_SPEED_VERY_HIGH
					}
			}


};


int main()
{
	RCC_Set_HSI_ON();
	RCC_SelectSystemClock(CLK_HSI);
	RCC_EnablePeri(BUS_APB2,USART_1);
	RCC_EnablePeri(BUS_AHB1, GPIO_A);
	RCC_EnablePeri(BUS_AHB1, GPIO_C);
	LED_Init();
	UART_Init(&UART_Cfg);

//	UART_SendAsynchZeroCpy(UART_1, arr, 2,Tx_Finish);
//	UART_ReceiveAsynchZeroCpy(UART_1, arr2, 2,Rx_Finish);


	/*sched_init();
	sched_start();
*/
 while (1)
    {
		//UART_SendAsynchZeroCpy(UART_1, arr, 3,Tx_Finish);
		//UART_ReceiveAsynchZeroCpy(UART_1, arr2, 1,Rx_Finish);
	  UART_ReceiveAsynchZeroCpy(UART_1, arr2, 3,Rx_Finish);
    }
}
