#include "APP2.h"
#include "LED.h"


void APP2_runnable(void)
{
	static u8 flag=0;
	if(flag == 0)
	{
		LED_Set_State(1, OFF);
		flag = 1;
	}

	else if(flag == 1)
	{
		LED_Set_State(1, ON);
		flag = 0;
	}

}
