/*
 * LCD_Application.c
 *
 *  Created on: Apr 6, 2023
 *      Author: Doaa Maher
 */


#include "GPIO.h"
#include "LCD_Interface.h"


// LCD Runnable Function
void LCD_voidRunnable(void)
{
	LCD_enuWriteStringAsynch("Doaa Maher",11,3,0);
//	LCD_enuWriteStringAsynch("Maher",6,1,0);
}
