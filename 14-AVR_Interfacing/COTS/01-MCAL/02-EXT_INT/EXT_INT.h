/*******************************************************/
/* Author    : Doaa Maher                              */
/* Date      : 27 JAN 2023                             */
/* Version   : V.01                                    */
/* Target    : AVR32								   */
/* Descrip.  : Interface file that includes :		   */
/*			   1- Functions prototypes [APIs]		   */
/*			   2- Parameters definitions			   */
/*******************************************************/
#ifndef MCUCR_H
#define MCUCR_H


/********************* Enum with the Error Status *********************/
typedef enum {
	MCUCR_enuOK  = 0,				// To Make sure Compiler will start from zero
	MCUCR_enuNOK,
	MCUCR_enuInvalidINTNum     		  
} EXT_INT_tenuErrorStatus;


void EXT_INT_INIT (void);

void EXT_INT_Enable_Interrupt_One (void);

void EXT_INT_Enable_Interrupt_Zero (void);

void EXT_INT_Enable_Interrupt_Two (void);
/***************************************************************/
#endif /* MCUCR_H */