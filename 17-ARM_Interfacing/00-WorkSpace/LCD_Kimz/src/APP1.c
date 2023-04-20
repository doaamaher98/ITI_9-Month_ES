#include "APP1.h"
#include "LED.h"


void APP1_runnable(void)
{
	static u8 flag=0;
	if(flag == 0)
	{
		LED_Set_State(0, OFF);
		flag = 1;
	}

	else if(flag == 1)
	{
		LED_Set_State(0, ON);
		flag = 0;
	}

}
