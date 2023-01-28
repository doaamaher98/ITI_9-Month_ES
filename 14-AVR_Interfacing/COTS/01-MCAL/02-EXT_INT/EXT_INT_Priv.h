/**************************************************************/
/* Author    : Doaa Maher                               	  */
/* Date      : 27 JAN 2023                              	  */
/* Version   : V.01                                     	  */
/* Target    : AVR32								    	  */
/* Descrip.  : A file that includes the Base Addresses of the */
/*			   Register										  */
/**************************************************************/

#ifndef MCUCR_PRIV_H
#define MCUCR_PRIV_H

/*********************** Register Addresses ****************************/
#define 	MCUCR			(*(volatile u8*) 0x55)
#define		MCUCSR			(*(volatile u8*) 0x54)
#define		GICR			(*(volatile u8*) 0x5B)
#define		GIFR			(*(volatile u8*) 0x5A)  

/***************************** NULL POINTER ************************************/
#define 	NULL 			((void*) 0)


/****************** REG BITS **********************/
#define			MCUCR_RaisingEdge				3
#define			MCUCR_FallingEdge				2
#define			MCUCR_OnChange					1
#define			MCUCR_LowLevel					0
/***************************************************/
#define			MCUCR_ISC00						0
#define			MCUCR_ISC01						1

#define			MCUCR_ISC10						2
#define			MCUCR_ISC11						3

#define			MCUCSR_ISC2						6
/***************************************************/
#define			GICR_INT0						6
#define			GICR_INT1						7
#define			GICR_INT2						5
/***************************************************/
#define			EXT_INT_DISABLE					0
#define			EXT_INT_ENABLE					1


#endif /* GIE_PRIV_H */