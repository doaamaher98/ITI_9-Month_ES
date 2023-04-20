#include "APP3.h"
#include "LED.h"


void APP3_runnable(void)
{
	static u8 flag=0;
	if(flag == 0)
	{
		LED_Set_State(2, OFF);
		flag = 1;
	}

	else if(flag == 1)
	{
		LED_Set_State(2, ON);
		flag = 0;
	}

}
