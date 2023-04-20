/*
 * Chat.c
 *
 *  Created on: Apr 14, 2023
 *      Author: Doaa Maher
 */
#include "Chat_Interface.h"
/*****************************************************************************************************/

Chat_tenuErrorStatus Chat_enuInit (void)
{
	Chat_tenuErrorStatus LocalErrorStatus = Chat_enuOK;

	u8 LocalIterator=0;

	for (LocalIterator=0; LocalIterator< NUMBER_OF_USART_CHANNELS; LocalIterator++)
	{
		USART_enuInit(&USART_Cfg[LocalIterator]);
	}
	return LocalErrorStatus;
}
/*****************************************************************************************************/
Chat_tenuErrorStatus Chat_enuSend (USART_enuChannels USART_Channel ,u8 *Cpy_u8DataBuffer, u8 Cpy_u8Size, Callback_t TX_CBF )
{
	Chat_tenuErrorStatus LocalErrorStatus = Chat_enuOK;

	USART_enuSendAsynchZeroCpy(USART_Channel,Cpy_u8DataBuffer,Cpy_u8Size,TX_CBF);

	return LocalErrorStatus;
}
/*****************************************************************************************************/
Chat_tenuErrorStatus Chat_u8Receive (USART_enuChannels USART_Channel ,u8 *Cpy_u8DataBuffer, u8 Cpy_u8Size, Callback_t RX_CBF )
{
	Chat_tenuErrorStatus LocalErrorStatus = Chat_enuOK;

	USART_enuReceiveAsynchZeroCpy(USART_Channel,Cpy_u8DataBuffer,Cpy_u8Size,RX_CBF);

	return LocalErrorStatus;
}
/*****************************************************************************************************/
