#include <stdio.h>
#include <stdlib.h>
#include "GPIO.H"
#include "RCC.h"
#include "LED.h"
#include "SWITCH.h"


int main()
{
	RCC_EnablePeri(BUS_AHB1, GPIO_A);
	LED_Init();
	SWITCH_Init();
	u16 state;

  while (1)
    {
	  SWITCH_Get_State(0,&state);
	  if(state == 1)
	  {
		  LED_Set_State(0, ON);
	  }

	  else
	  {
		  LED_Set_State(0, OFF);
	  }

    }
}

