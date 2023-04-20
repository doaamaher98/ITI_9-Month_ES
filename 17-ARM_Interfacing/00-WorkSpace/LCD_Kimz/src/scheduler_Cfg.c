#include "scheduler.h"
#include "APP1.h"
#include "APP2.h"
#include "APP3.h"
#include "SWITCH_APP.h"
#include "LCD_2.h"


extern void LCD_Runnable(void);


App_Info_t Apps[NUM] =
{

	[0] = {
			.name = "App1",
			.cbf = APP1_runnable,
			.period_ms = 1000,
			.start_delay_ms = 0
	},


	[1] = {
			.name = "App2",
			.cbf = LCD_Task,
			.period_ms = 2,
			.start_delay_ms = 0
	},

	[2] = {
			.name = "App3",
			.cbf = LCD_Runnable,
			.period_ms = 500,
			.start_delay_ms = 0
	}
};


