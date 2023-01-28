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
#include "EXT_INT_Cfg.h"
#include "EXT_INT.h"
#include "EXT_INT_Priv.h"

void EXT_INT_INIT (void)
{	
	/* Setting the GIE */
	GIE_enuInit_EnableGIE();
	
	/********************************** INT0 ******************************/
	/* Enabling INT0 */
	#if (INT0 == EXT_INT_ENABLE)
		EXT_INT_Enable_Interrupt_Zero();
	
		/* Configuring INT0 */
		#if EXT_INT_0_MODE == MCUCR_LowLevel
			CLR_BIT(MCUCR,MCUCR_ISC00);
			CLR_BIT(MCUCR,MCUCR_ISC01);
		
		#elif EXT_INT_0_MODE == MCUCR_OnChange
			SET_BIT(MCUCR,MCUCR_ISC00);
			CLR_BIT(MCUCR,MCUCR_ISC01);
		
		#elif EXT_INT_0_MODE == MCUCR_FallingEdge
			CLR_BIT(MCUCR,MCUCR_ISC00);
			SET_BIT(MCUCR,MCUCR_ISC01);
		
		#else //EXT_INT_0_MODE == MCUCR_RaisingEdge
			SET_BIT(MCUCR,MCUCR_ISC00);
			SET_BIT(MCUCR,MCUCR_ISC01);
				
		#endif
	/*****************************************************************************************/	
	
	/********************************** INT1 ******************************/
	/* Enabling INT1 */
	#elif (INT0 == EXT_INT_ENABLE)
		EXT_INT_Enable_Interrupt_One();
	
		/* Configuring INT1 */
		#if EXT_INT_1_MODE == MCUCR_LowLevel
			CLR_BIT(MCUCR,MCUCR_ISC10);
			CLR_BIT(MCUCR,MCUCR_ISC11);
	
		#elif EXT_INT_1_MODE == MCUCR_OnChange
			SET_BIT(MCUCR,MCUCR_ISC10);
			CLR_BIT(MCUCR,MCUCR_ISC11);
	
		#elif EXT_INT_1_MODE == MCUCR_FallingEdge
			CLR_BIT(MCUCR,MCUCR_ISC10);
			SET_BIT(MCUCR,MCUCR_ISC11);
	
		#else //EXT_INT_1_MODE == MCUCR_RaisingEdge
			SET_BIT(MCUCR,MCUCR_ISC10);
			SET_BIT(MCUCR,MCUCR_ISC11);

		#endif
	/*****************************************************************************************/
	
	/********************************** INT2 ******************************/
	/* Enabling INT2 */
	#else //(INT2 == EXT_INT_ENABLE)
		EXT_INT_Enable_Interrupt_Two();
	
		/* Configuring INT2 */
		#if EXT_INT_2_MODE == MCUCR_FallingEdge
			CLR_BIT(MCUCSR,MCUCSR_ISC2);
	
		#else // EXT_INT_2_MODE == MCUCR_RaisingEdge
			SET_BIT(MCUCSR,MCUCSR_ISC2);
		
		#endif
#endif
	/*****************************************************************************************/
	
}

/*************************************** ENABLE ***************************************************/
void EXT_INT_Enable_Interrupt_One (void)
{
	SET_BIT(GICR,GICR_INT1);
}

void EXT_INT_Enable_Interrupt_Zero (void)
{
	SET_BIT(GICR,GICR_INT0);
}

void EXT_INT_Enable_Interrupt_Two (void)
{
	SET_BIT(GICR,GICR_INT2);
}