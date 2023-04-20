/********************************
 *  Author: Raouf Magdy         *
 *                              *
 *  Date: 21-03-2023            *
 *                              *
 *  Version: V_01               *
 *                              *
 ********************************/
 
 
 
 #ifndef SCHEDULAR_INTERFACE_H
 #define SCHEDULAR_INTERFACE_H
 
 
 
typedef void (*RunnableCBF_t)(void);




void Sched_Init(void);
void Sched_Start(void);
//void Sched_Pause(u16 Copy_u16PausePeriod);
 
 
 
 #endif
 