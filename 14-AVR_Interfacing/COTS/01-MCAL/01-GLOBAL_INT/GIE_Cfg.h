/********************************************************/
/* Author    : Doaa Maher                               */
/* Date      : 27 JAN 2023                              */
/* Version   : V.01                                     */
/* Target    : AVR32								    */
/* Descrip.  : Configurations file						*/
/********************************************************/
#ifndef GIE_CFG_H
#define GIE_CFG_H

/****************** REG BITS **********************/
#define			SREG_GIE_Pin			7
#define			SREG_CS_Pin				6
#define			SREG_HalfCarry_Pin		5
#define			SREG_SingBit_Pin		4
#define			SREG_OverFlow_Pin		3
#define			SREG_NegativeFlag_Pin	2
#define			SREG_ZeroFlag_Pin		1
#define			SREG_CarryFlag			0

/************ REG MODES **********************/
#define			GIE_DisableGIE			0
#define			GIE_EnableGIE			1



#endif /* GIE_CFG_H */