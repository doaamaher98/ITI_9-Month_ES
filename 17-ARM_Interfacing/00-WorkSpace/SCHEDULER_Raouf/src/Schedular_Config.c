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
 
 extern void App1_Task(void);
 extern void App2_Task(void);
 extern void App3_Task(void);
 extern void App4_Task(void);
 
 const TasksData_t TasksDataArr[NumOfTasks] = {

		[0] = {
					.name = "Task One 1s",
					.runnable = App1_Task,
					.TaskPeriodms = 1000,
					.StartDelayms = 0,
			  },
			  
	    [1] = {
					.name = "Task Two 1.5s",
					.runnable = App2_Task,
					.TaskPeriodms = 1500,
					.StartDelayms = 0,
	          },
	      
	    [2] = {
					.name = "Task Three 0.5s",
					.runnable = App3_Task,
					.TaskPeriodms = 500,
					.StartDelayms = 0,
			  },
			  
	    [3] = {
					.name = "Task Four 1s",
					.runnable = App4_Task,
					.TaskPeriodms = 1000,
					.StartDelayms = 0,
			  }		  
			  
 };

 
 
 
 
 
 