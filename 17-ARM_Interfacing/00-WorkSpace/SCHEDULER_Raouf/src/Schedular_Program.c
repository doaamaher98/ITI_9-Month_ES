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
 #include "Schedular_Interface.h"

 #include "SYSTICK_Interface.h"
 #include "Schedular_Config.h"
 
 #define TickTime	100
 
 typedef struct{
	 TasksData_t *TasksData;
	 u32 RemainingTime;
 }Tasks_t;


 u8 flag = 0;
 Tasks_t tasks[NumOfTasks];
 
 static void SchedCBF (void);
 static void Sched (void);
 

 void Sched_vidInit(void)
 {
	 u8 idx = 0;
	 
	 STK_SetClockSource(Processor_Clock);
	 STK_EnableSEQ();
	 STK_SetPeriod_ms(HSI, Processor_Clock, TickTime); //systick period must be less than or equal the least task period.
	 STK_CallBackFunction(SchedCBF);
	 
	 for(idx=0; idx<NumOfTasks; idx++)
	 {
		tasks[idx].TasksData=  &TasksDataArr[idx];
		tasks[idx].RemainingTime = TasksDataArr[idx].StartDelayms;
	 }
	 
 }
 
 
 void Sched_vidStart(void)
 {
	 STK_Start();
	 
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
 
 
 static void SchedCBF(void)
 {
	 flag = 1;
 }
 
 
 void Sched(void)
 {
	 u8 idx = 0;
	 
	 for(idx=0; idx<NumOfTasks; idx++)
	 {
		 tasks[idx].TasksData -> runnable();
		 tasks[idx].RemainingTime = tasks[idx].TasksData -> TaskPeriodms;
	 }
	 
	 tasks[idx].RemainingTime -= TickTime;
 }
 
 
 
 
 
 
