#include "SYSTICK_Interface.h"



void main (void)
{
	STK_SetClockSource(Processor_Clock);

	STK_SetCounts(100);
  // Infinite loop
  while (1)
    {
       // Add your code here.
    }
}
