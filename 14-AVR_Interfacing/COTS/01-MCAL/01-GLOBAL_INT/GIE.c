/*******************************************************/
/* Author    : Doaa Maher                              */
/* Date      : 27 JAN 2023                             */
/* Version   : V.02                                    */
/* Target    : AVR32								   */
/* Descrip.   : C File with the Driver Functions	   */
/*				for Checking their Saftey.			   */
/*******************************************************/
#include "Bit_Math.h"
#include "Std_Types.h"

#include "GIE.h"
#include "GIE_Cfg.h"
#include "GIE_Priv.h"

/****************************************************************/
/*    GIE Init Function											*/
/*	  Input  : void												*/
/*	  Output : GIE_tenuErrorStatus to Report Errors				*/
/****************************************************************/
GIE_tenuErrorStatus GIE_enuInit_EnableGIE (void)
{
	GIE_tenuErrorStatus LocalErrorStatus = GIE_enuOK;
	
	u8 SREG_GIE_Bit = GET_BIT(SREG,SREG_GIE_Pin);
	
	if (SREG_GIE_Bit == GIE_DisableGIE)
	{
		LocalErrorStatus = GIE_enuNOK;
	}
	else
	{
		// Setting the GIE at Bit #7 [GIE = 1]
		SET_BIT(SREG,SREG_GIE_Pin);
	}

	return LocalErrorStatus;
}
	
/****************************************************************/
/*      GIE Disable Function									*/
/*		Input  : Void											*/
/*		Output : GIE_tenuErrorStatus to Report Errors		   	*/
/****************************************************************/
GIE_tenuErrorStatus GIE_enuInit_DisbaleGIE (void)
{
	GIE_tenuErrorStatus LocalErrorStatus = GIE_enuOK;
	
	u8 SREG_GIE_Bit = GET_BIT(SREG,SREG_GIE_Pin);
	
	if (SREG_GIE_Bit == GIE_EnableGIE)
	{
		LocalErrorStatus = GIE_enuNOK;
	}
	else
	{
		// Clearing the pin [GIE = 0]
		CLR_BIT(SREG,SREG_GIE_Pin);
	}

	return LocalErrorStatus;
}
