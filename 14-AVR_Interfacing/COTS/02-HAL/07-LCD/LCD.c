/**************************************************************/
/* Author    : Doaa Maher                               	  */
/* Date      : 10 FEB 2023                              	  */
/* Version   : V.01                                     	  */
/* Target    : AVR32								    	  */
/* Descrip.  : A file that includes the Source code of the    */
/*			   LCD Driver									  */
/**************************************************************/
#include "LCD.h"
#include "../01-MCAL/DIO.h"

LCD_tenuErrorStatus LCD_vidInit (void)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	// 8-bits //
	/* Delay 30msec */
	Delay_MS(30);
	/* Function Set */
	LCD_enuSendCommand(LCD_8_BitsFunctionSet);
	/* Delay 1msec */
	Delay_MS(1);
	/* Display ON/OFF Control */
	LCD_enuSendCommand(LCD_8_BitsDisplayControl);
	/* Delay 1msec */
	Delay_MS(1);
	/* Display Clear */
	LCD_enuSendCommand(LCD_8_BitsClearDisplay);
	/* Delay 2msec */
	Delay_MS(2);
	/* Entry Mode Set */
	
	return LocalErrorStatus;
}

LCD_tenuErrorStatus LCD_enuSendCommand (u8 Copy_u8Command)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	/* RS -> Command (RS = 0) */
	CLR_BIT(LCD_ControlPins_PORT,LCD_RS);
	
	/* R/W -> Write (R/W = 0) */
	CLR_BIT(LCD_ControlPins_PORT,LCD_RW);
	
	/* Command -> (D0,D7) */
	LCD_DataPins_PORT = Copy_u8Command;
	
	/* Enable pulse (high -> low) */
	// As the Value has changed, EN pin must change it's state
	SET_BIT(LCD_ControlPins_PORT,LCD_EN);
	Delay_MS(1);
	CLR_BIT(LCD_ControlPins_PORT,LCD_EN);
	
	return LocalErrorStatus;
}

LCD_tenuErrorStatus LCD_enuSendData    (u8 Copy_u8Data)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	/* RS -> Data (RS = 1) */
	SET_BIT(LCD_ControlPins_PORT,LCD_RS);
	
	/* R/W -> Write (R/W = 0) */
	CLR_BIT(LCD_ControlPins_PORT,LCD_RW);
	
	/* Command -> (D0,D7) */
	LCD_DataPins_PORT = Copy_u8Data;
	
	/* Enable pulse (high -> low) */
	// As the Value has changed, EN pin must change it's state
	SET_BIT(LCD_ControlPins_PORT,LCD_EN);
	Delay_MS(1);
	CLR_BIT(LCD_ControlPins_PORT,LCD_EN);
	
	return LocalErrorStatus;
}

LCD_tenuErrorStatus LCD_enuWriteString (char* Copy_pchString)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	u8 Iterator = 0;
	
	while (Copy_pchString[Iterator] != '\0')
	{
		LCD_enuSendData(Copy_pchString[Iterator]);
		Iterator++;
	} 
	
	return LocalErrorStatus;
}

LCD_tenuErrorStatus LCD_enuWriteNumber (u16 Copy_u16Number)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	char arr[5];
	itoa(Copy_u16Number,arr,10);
	LCD_enuWriteString(arr);
	
	return LocalErrorStatus;
}



LCD_tenuErrorStatus LCD_enuGotoXY      (u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	u8 u8LocalLocation=0;
	
	if (Copy_u8XPos == LCD_enuRow1)
	{
		u8LocalLocation = Copy_u8YPos;
	}
	else if (Copy_u8XPos == LCD_enuRow2)
	{
		u8LocalLocation = Copy_u8YPos + LCD_Row2_Line_StartAdd;
	}
	
	/* Set DDRAM Address & Set D7 = 1 */
	// Setting the AC (Address Counter) Points to this location
	LCD_enuSendCommand(u8LocalLocation + LCD_DataBit7);	
	
	return LocalErrorStatus;
}

LCD_tenuErrorStatus LCD_enuWriteSpecialPattern  (u8* Copy_pu8Pattern, u8 Copy_u8BlockNum, u8 Copy_u8XPos, u8 Copy_u8YPos)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	u8 LocalCGRAM_Add;
	u8 LocalIterator;

	/* Finding the CGRAM Address = Block Number * 8 */
	LocalCGRAM_Add = Copy_u8BlockNum * LCD_NumberOfBlocks;
	
	/* Setting CGRAM (to make the ptr points to CGRAM instead of the DDRAM) D6 is = 1 */
	/* To save the special character in the CGRAM */
	LCD_enuSendCommand(LocalCGRAM_Add + LCD_DataBit6);
	
	/* Writing the Pattern Sent */
	for (LocalIterator=0; LocalIterator < LCD_NumberOfBlocks ; LocalIterator ++)
	{
		/* Write Data of the Pattern in CGRAM */
		LCD_enuSendData(Copy_pu8Pattern[LocalIterator]);
	}
	
	/* Send Command to Set DDRAM Address to be displayed [Moving AC to DDRAM] */
	LCD_enuGotoXY(Copy_u8XPos,Copy_u8YPos);
	
	/* Send Block from CGRAM */
	LCD_enuSendData(Copy_u8BlockNum); 

	return LocalErrorStatus;
}


LCD_tenuErrorStatus LCD_enuClearDisplay (void)
{
	LCD_tenuErrorStatus LocalErrorStatus = LCD_enuOK;
	
	/* Clearing the Screen */
	LCD_enuSendCommand(LCD_8_BitsClearDisplay);	
	
	/* Going back to starting location */
	LCD_enuSendCommand(LCD_8_BitsStartingLoc);
	
	return LocalErrorStatus;
}

