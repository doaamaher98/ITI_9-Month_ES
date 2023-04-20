/********************************
 *  Author: Raouf Magdy         *
 *                              *
 *  Date: 21-03-2023            *
 *                              *
 *  Version: V_01               *
 *                              *
 ********************************/




#include "STD_Types.h"
#include "BIT_MATHs.h"
#include "SYSTICK_Interface.h"
#include "Schedular_Interface.h"

#define TickTime		100

static u8 flag = 0;

static void SchedCBF (void);
static void Sched (void);

typedef struct
{
	TasksData_t *TasksData;
	u32 RemainingTime;
}Tasks_t;

Tasks_t tasks[NumOfTasks] = {NULL};

static void SchedCBF(void)
{
	if (flag == 0)
	{
		flag = 1;
	}

}

void Sched_vidInit(void)
{
	u8 idx = 0;

	SysTick_SetClockSource(Processor_Clock);
	SysTick_EnableSEQ();
	SysTick_SetPeriod_ms(HSI, Processor_Clock, TickTime); //systick period must be less than or equal the least task period.
	SysTick_CallBackFunction(SchedCBF);

	for(idx=0; idx<NumOfTasks; idx++)
	{
		tasks[idx].TasksData     = &TasksDataArr[idx];
		tasks[idx].RemainingTime = TasksDataArr[idx].TaskPeriodms;
	}

}


void Sched_vidStart(void)
{
	SysTick_Start();

	while(1)
	{
		//polling until the new tick.
		if(flag == 1)
		{
			Sched();
			flag = 0;
		}
	}
}





void Sched(void)
{
	u8 idx = 0;

	for(idx=0; idx<NumOfTasks; idx++)
	{
		if (tasks[idx].TasksData->Runnable)
		{
			if (tasks[idx].RemainingTime == 0)
			{
				tasks[idx].TasksData -> Runnable();
				tasks[idx].RemainingTime = tasks[idx].TasksData -> TaskPeriodms;
			}
		}

		tasks[idx].RemainingTime -= TickTime;
	}

}





