/**************************************************************/
/* Author    : Doaa Maher                               	  */
/* Date      : 18 JAN 2023                              	  */
/* Version   : V.01                                     	  */
/* Target    : AVR32								    	  */
/* Descrip.  : A c file that includes the SSEGMENT function	  */
/**************************************************************/
#include "Std_Types.h"

#include "../../01-MCAL/00-DIO/DIO.h"
#include "../../01-MCAL/00-DIO/DIO_Cfg.h"

#include "SSEGMENT_Cfg.h"
#include "SSEGMENT_Prv.h"
/*********************************************************************************/
/*    Get Value on SSEG Function												 */
/*	  Input  : Port Number & Value 												 */
/*	  Output : SSEG_tenuErrorStatus to Report Errors							 */
/*********************************************************************************/
SSEG_tenuErrorStatus HAL_SSEG_Display(DIO_tenuPort Cpy7SEGMENT_u8Port ,u8 Cpy7SEGMENT_u8Value)
{
	SSEG_tenuErrorStatus Local_ErrorStatus = SSEG_enuOK;      	// Assuming the current status is OK
	
	if (Cpy7SEGMENT_u8Port > DIO_enuPORTD)
	{
		Local_ErrorStatus = SSEG_enuInvalidPortNum;
	}
	
	else if (Local_ErrorStatus == SSEG_enuOK)
	{
		DIO_enuSetPort(Cpy7SEGMENT_u8Port,SSEG_LookupTable[Cpy7SEGMENT_u8Value]);
	}
	

	
	return Local_ErrorStatus;
}