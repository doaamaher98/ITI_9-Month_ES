#include "SWITCH_APP.h"
#include "SWITCH.h"
#include "LED.h"


extern void SWITCH_Task(void);

void switch_runnable(void)
{
	static u8 flag = 0;
	static u8 state;
	if(flag == 0)
	{
		SWITCH_Init();
		flag = 1;
	}

	SWITCH_Task();
	state = SWITCH_Return_State(0);

	if(state == 0)
	{
		LED_Set_State(3, ON);
	}

	else if(state == 1)
	{
		LED_Set_State(3, OFF);
	}
}



