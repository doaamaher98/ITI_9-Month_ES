/*
 * Chat_Interface.h
 *
 *  Created on: Apr 14, 2023
 *      Author: Doaa Maher
 */

#ifndef CHAT_INTERFACE_H_
#define CHAT_INTERFACE_H_

#include "Std_Types.h"
#include "USART_Interface.h"

// Error Status
typedef enum
{
	Chat_enuOK=0,
	Chat_enuNOK,
}Chat_tenuErrorStatus;

// Chat Type
typedef enum
{
	Chat_enuUSART=0,
	Chat_enuSPI,
	Chat_enuI2C,
}Chat_tenuCommunicationType;

// USART
extern USART_tstrConfig_t USART_Cfg [NUMBER_OF_USART_CHANNELS];

/* ==================================== APIs =========================================== */
Chat_tenuErrorStatus Chat_enuInit (void);

Chat_tenuErrorStatus Chat_enuSend (USART_enuChannels USART_Channel ,u8 *Cpy_u8DataBuffer, u8 Cpy_u8Size, Callback_t TX_CBF );

Chat_tenuErrorStatus Chat_u8Receive (USART_enuChannels USART_Channel ,u8 *Cpy_u8DataBuffer, u8 Cpy_u8Size, Callback_t RX_CBF );






#endif /* CHAT_INTERFACE_H_ */