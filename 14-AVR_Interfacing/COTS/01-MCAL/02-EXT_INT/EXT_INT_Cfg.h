/********************************************************/
/* Author    : Doaa Maher                               */
/* Date      : 27 JAN 2023                              */
/* Version   : V.01                                     */
/* Target    : AVR32								    */
/* Descrip.  : Configurations file						*/
/********************************************************/
#ifndef MCUCR_CFG_H
#define MCUCR_CFG_H

#include "EXT_INT_Priv.h"

/********************* ENABLE/DISABLE ***************************/
#define			EXT_INT_0				EXT_INT_ENABLE
#define			EXT_INT_1				EXT_INT_DISABLE
#define			EXT_INT_2				EXT_INT_DISABLE

/******************* MODES **********************/
#define			EXT_INT_0_MODE			MCUCR_OnChange
#define			EXT_INT_1_MODE			MCUCR_LowLevel
#define			EXT_INT_2_MODE			MCUCR_LowLevel
	

#endif /* MCUCR_CFG_H */