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
 
#include "STD_Types.h"
 
 #define SCHEDULAR_TICK_MS         1 //tick time
 #define SCHEDULAR_RUNNABLE_COUNT  3 //number of runnable tasks
 
 
 
 #define Tasks_Number		4

 typedef enum{
	Task1 = 0,
	Task2,
	Task3,
	Task4,
	NumOfTasks
 }enuNumOfTasks;

 typedef struct {
	char* name;
	RunnableCBF_t runnable;
	u32 TaskPeriodms;
	u32 StartDelayms;
 }TasksData_t;

 extern const TasksData_t TasksDataArr[NumOfTasks];

 
 
 #endif
 
 
 
 
 
 
 
 
