/**************************************************************/
/* Author    : Doaa Maher                               	  */
/* Date      : 18 JAN 2023                              	  */
/* Version   : V.01                                     	  */
/* Target    : AVR32								    	  */
/* Descrip.  : A c file that includes the PUSH_BUTTON 	      */
/*			   function to get it's State [Pressed, Released] */   	 
/**************************************************************/
#include "../../00-LIB/Std_Types.h"

#include "../../01-MCAL/DIO.h"
#include "PUSH_BUTTON.h"

#include "PUSH_BUTTON_Prv.h"

#define 			REG_BITS					8				// For not using Magic Numbers

/*********************************************************************************/
/*    Get Value on Push Button Function											 */
/*	  Input  : Pin number that needs to be set & Address of the Pin Value To Get */
/*	  Output : LED_tenuErrorStatus to Report Errors								 */
/*********************************************************************************/

PUSH_BUTTON_tenuErrorStatus Get_PUSH_BUTTON_State(PUSH_BUTTON_tenuPins Cpy_u8PinNumber, u8 *Addpu8PUSH_BUTTON_State)
{
	PUSH_BUTTON_tenuErrorStatus Local_ErrorStatus = PUSH_BUTTON_enuOK;      	// Assuming the current status is OK
	
	u8 Loc_u8PortNumber = Cpy_u8PinNumber /REG_BITS;
	u8 Loc_u8PinNumber  = Cpy_u8PinNumber %REG_BITS;
	
	/**************************** VALIDATION ***************************/
	if(Loc_u8PortNumber > DIO_enuPORTD)
	{
		Local_ErrorStatus = DIO_enuInvalidPortNum;
	}
	else if (Loc_u8PinNumber > DIO_enuPin31)
	{
		Local_ErrorStatus = DIO_enuInvalidPinNum;
	}
	else if (Addpu8PUSH_BUTTON_State == NULL)
	{
		Local_ErrorStatus = DIO_enuNULLPtr;
	}
	
	else if (Local_ErrorStatus == PUSH_BUTTON_enuOK)
	{
		// If Pull up
		if (PUSH_BUTTON_strPinCfg[Cpy_u8PinNumber].PUSH_BUTTON_Mode == PUSH_BUTTON_enuPullUp)
		{
			Local_ErrorStatus = DIO_enuGetPin(Cpy_u8PinNumber, Addpu8PUSH_BUTTON_State);
			Delay_MS(100);
			
			if (PUSH_BUTTON_strPinCfg[Cpy_u8PinNumber].PUSH_BUTTON_Mode == PUSH_BUTTON_enuPullUp)
			{
				Local_ErrorStatus = DIO_enuGetPin(Cpy_u8PinNumber, Addpu8PUSH_BUTTON_State);		
				
			}	
		}
		
		/*******************************************************************************************/
		
		// If pull down
		if(PUSH_BUTTON_strPinCfg[Cpy_u8PinNumber].PUSH_BUTTON_Mode == PUSH_BUTTON_enuPullDown)
		{
			Local_ErrorStatus = DIO_enuGetPin(Cpy_u8PinNumber, Addpu8PUSH_BUTTON_State);
			Delay_MS(100);
			
			if (PUSH_BUTTON_strPinCfg[Cpy_u8PinNumber].PUSH_BUTTON_Mode == PUSH_BUTTON_enuPullDown)
			{
				Local_ErrorStatus = DIO_enuGetPin(Cpy_u8PinNumber, Addpu8PUSH_BUTTON_State);	
			}
		}
	}
		
		
	else
	{
		Local_ErrorStatus = PUSH_BUTTON_enuNOK;
	}
	
	return Local_ErrorStatus;
}