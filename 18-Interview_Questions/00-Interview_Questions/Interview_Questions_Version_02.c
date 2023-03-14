/* 								Interview Questions : V.02 
								============================
   Doaa Maher
   ITI_43
*/

/* ================================================ Problem Solving ===================================================== */
8]	C function returns the average of an array. (ADAS)
/*													==========
													 Solution 
													==========
*/

#include <stdio.h>

void AverageOfArray (int *arr, int size)
{
	int sum = 0;
	int average = 0;
	int i;
	
	for (i=0; i<size ; i++)
	{
		sum += arr[i];
	}
	average = sum / size;
	
	printf("Average of Array is : %d",average);
}


int main() 
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    
    AverageOfArray(arr,size);
    
    return 0;
}
/***********************************************************************************************************************/
9]	C function to count how many times it has been called in the system. (ADAS)
/*													==========
													 Solution 
													==========
*/

#include <stdio.h>

void CountFunctionCall (void)
{
    static int counter= 0;
	counter ++;
	
	printf("%d\n",counter);
}

int main()
{
	CountFunctionCall();
	CountFunctionCall();
	CountFunctionCall();
	CountFunctionCall();
	
	return 0;
}
/***********************************************************************************************************************/
10]	Fibonacci series without recursion. (ADAS)
/*													==========
													 Solution 
													==========
*/

#include <stdio.h>

void FibonacciSeries_NoRecursion (int max_num)
{
	int fib_start_0 = 0;
	int fib_start_1 =1;
	
	int i=0;
	int next=0;
	
	for (i=0; i<max_num-next ; i++)
	{
	    if (i == 0)
	    {
	        printf("%d ",fib_start_0);
	    }
	    else if(i == 1)
	    {
	        printf("%d ",fib_start_1);
	    }
	    else {
	        next = fib_start_0 + fib_start_1;
	        fib_start_0 = fib_start_1;
	        fib_start_1 = next;
	        
	        if (next <= max_num)
	        {
	            printf("%d ",next);
	        }
	        else
	        {
	            /* Do nothing */
	        }
	    }
	}
}


int main()
{
	FibonacciSeries_NoRecursion(50);

	return 0;
}
/***********************************************************************************************************************/

/* ============================================== General & Embedded C =================================================== */
8]	Usage of inline keyword. (ADAS)

Inline keyword is used to :
==============================
1- Replace the function call with the function code, this makes the execution faster.
2- Most common in small computations
/***********************************************************************************************************************/

9]	What is the error if the function does not have a prototype? (HMI)

Implicit declaration of function + [function name]
/***********************************************************************************************************************/

10] What is the Call Back function? (ADAS)

- The Call back function is the function that's passed as a (pointer to function) to another function to be called. (A function calls the callback function)
- The Call back function is used when a Lower Layer want to interface with Upper one, which ruins the Layered Architecture. 
  EX: if MCAL wants to interface with APP or HAL
/***********************************************************************************************************************/

11]	Can an ISR return value or receive a value? (ADAS)

ISR can never recieve or return any value.


/* ======================================== Embedded Sys. & Computer Architecture ======================================== */
4] What's IVT? Where is it in memory? (VLS)

IVT : Interrupt Vector Table :
------------------------------
- It's the Table that has all the interrupt sources in the microcontroller along with their addresses to tell where to find the ISR, & their numbers to be called & executed.
- It's Located at the ROM (.vector) section.
/***********************************************************************************************************************/

5] Differences between register, cache and RAM. (ADAS)
/* ================================================================================================================================= */
/* 		   		Register				|		    		Cache					| 					RAM	[Main Memory]			 */
/* ==================================== | ========================================= | ============================================== */
/*	Fast storage elements, they	  		|  The Fastest & smallest component     	| It communicates directly with the CPU      	 */
/*	exists in a very small amount 		|  in the Computer, inserted between    	|                     		                	 */
/*	in the processor to hold data.  	|  the CPU & the main memory, so it's 		|                      		                	 */
/*	It's Located on the CPU             |  faster than the main memory.         	|                       	                     */
/*	                                    |                                           |                                                */
/*	It's directly accessed by processor	|  Used when reading/writing processes from |  Biggest in size         		                 */
/*	can hold data as :					|  desk.                                    |                                                */
/*	1- Instruction						|                                           |                                                */
/*	2- Address,...                      |  Faster than RAM                          |  Not faster than Cache                         */       
/*										|                                           |                                                */
/*	EX : 1- AC                          |	EX :  1- Level 1 Cache                  |                                                */
/*	---	 2- PC                          |   ----  2- Level 2 Cache                  |                                                */
/*		 3- IR                          |		  3- Level 3 Cache                  |                                                */
/*										|                                           |                                                */
/*  More Cost /byte than cache			| Less Cost /byte than register             | The cheapest among Register & Cache			 */
/*										|											|	[Register > Cache > RAM]                     */
/*                                      |                                           |		                                         */
/*	                     				|              								|                                                */
/*	Stores the data that the 			|  Stores the recent used data				| Stores data that are currently executed by the */                                 
/*	CPU is currently processing.		|  of the computer							| CPU                                            */
/*										|                        					|                                                */
/*	Stores data in an unprocessed		| Stores data in a processed				|                                                */
/*	form					    		| form .                          			|                                                */
/*						        		|                           				|                                                */
/*	EX: Loop							|   EX:  Database cache,                	| EX :   1- Static RAM 	[SRAM]    	             */                     
/*	---				     	    		|   ---  Dynamic Paging cache               | -----  2- Dynamic RAM [DRAM] 					 */						
/* ================================================================================================================================= */
