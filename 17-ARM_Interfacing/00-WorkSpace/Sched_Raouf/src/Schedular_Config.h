/********************************
 *  Author: Raouf Magdy         *
 *                              *
 *  Date: 21-03-2023            *
 *                              *
 *  Version: V_01               *
 *                              *
 ********************************/
 
 
 
 #ifndef SCHEDULAR_CONFIG_H
 #define SCHEDULAR_CONFIG_H
 
 #include "Sched_App.h"
 
 #define SCHEDULAR_TICK_MS         100 //tick time
 #define SCHEDULAR_RUNNABLE_COUNT  4 //number of runnable tasks
 
 typedef void(*RunnableCBF_t)(void);
 
 
 #define Tasks_Number		4

 typedef enum
 {
	Task1 = 0,
	Task2,
	Task3,
	Task4,
	NumOfTasks
 }enuNumOfTasks;

 typedef struct 
 {
	char* name;
	RunnableCBF_t Runnable;
	u32 TaskPeriodms;
	u32 StartDelayms;
 }TasksData_t;

 extern TasksData_t TasksDataArr[NumOfTasks];

 
 
 #endif
 
 
 
 
 
 
 
 