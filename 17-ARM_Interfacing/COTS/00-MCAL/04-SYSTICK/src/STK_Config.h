/*
 * STK_Config.h
 *
 *  Created on: Mar 17, 2023
 *      Author: Doaa
 */

#ifndef STK_CONFIG_H_
#define STK_CONFIG_H_


/* Options :
 * 1- STK_CLK_SRC_AHB
 * 2- STK_CLK_SRC_AHB_DIV_8
 */

#define				SYSTICK_CLOCK_SOURCE			STK_CLK_SRC_AHB_DIV_8

/* Options :
 * 1- STK_INTERRUPT_ON
 * 2- STK_INTERRUPT_OFF
 */
#define				SYSTICK_EXCEPTION_REQ			STK_INTERRUPT_ON



#endif /* STK_CONFIG_H_ */
