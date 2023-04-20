/********************************
 *  Author: Raouf Magdy         *
 *                              *
 *  Date: 21-03-2023            *
 *                              *
 *  Version: V_01               *
 *                              *
 ********************************/
 
 
 #include "STD_Types.h"
 #include "Schedular_Interface.h"
 #include "Schedular_Config.h"


extern void App_Task1(void);
extern void App_Task2(void);
extern void App_Task3(void);
extern void App_Task4(void);


TasksData_t TasksDataArr[NumOfTasks] = {

		[0] = {
					.name = "Task One 1s",
					.Runnable = App_Task1,
					.TaskPeriodms = 1000,
					.StartDelayms = 0,
			  },
			  
	    [1] = {
					.name = "Task Two 0.8s",
					.Runnable = App_Task2,
					.TaskPeriodms = 600,
					.StartDelayms = 0,
	          },
	      
	    [2] = {
					.name = "Task Three 0.5s",
					.Runnable = App_Task3,
					.TaskPeriodms = 200,
					.StartDelayms = 0,
			  },
			  
	    [3] = {
					.name = "Task Four 0.25s",
					.Runnable = App_Task4,
					.TaskPeriodms = 2000,
					.StartDelayms = 0,
			  }		  	  
 };

 
 
 
 
 
 