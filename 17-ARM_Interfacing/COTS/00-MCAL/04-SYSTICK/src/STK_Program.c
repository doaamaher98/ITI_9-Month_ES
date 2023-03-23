#include "Std_Types.h"

#include "STK_Interface.h"
#include "STK_Config.h"
#include "STK_Private.h"

/*********************** Global pointer to function to be used in callback *********************/
static systick_cbf_t App_cbf;
/***********************************************************************************************/
static u32 TIMEOUT = 200000;
static  u8 STK_Mode = 0;				// A flag for modes

/******************************************************************/
STK_tenuErrorStatus STK_enuInit(void)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/* Applying Clock Choice */
#if (SYSTICK_CLOCK_SOURCE == STK_CLK_SRC_AHB_DIV_8)
	{
		/* Choose the Clock Source */
		STK_CTRL |= STK_CLK_SRC_AHB_DIV_8;
	}
#elif (SYSTICK_CLOCK_SOURCE == STK_CLK_SRC_AHB)
	{
		/* Choose the Clock Source */
		STK_CTRL |= STK_CLK_SRC_AHB;
	}
#endif

	/* Disable Systick */
	STK_CTRL |= STK_COUNTER_DISABLED;

	/* Disable Systick interrupt */
	STK_CTRL &= STK_EXCEPTION_DISABLED;

	return LocalErrorStatus;
}
/******************************************************************/
STK_tenuErrorStatus STK_enuStartTimer (void)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/* Enable Systick */
	STK_CTRL |= STK_COUNTER_ENABLE;

	/* Clearing the Value Register */
	STK_VAL = 0;

	return LocalErrorStatus;
}
/******************************************************************/
STK_tenuErrorStatus STK_enuStopTimer (void)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/* Disable Counter */
	STK_CTRL |= STK_COUNTER_DISABLED;
	/* Disable Interrupt */
	STK_CTRL |= STK_EXCEPTION_DISABLED;

	/* Reset Load & Value Registers */
	STK_VAL = 0;
	STK_LOAD = 0;

	return LocalErrorStatus;
}
/******************************************************************/
// Synchronous
STK_tenuErrorStatus STK_enuSynchronousSetTickTimeMS (u32 Cpy_u32Ticks)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/* Load the ticks to load register */
	STK_LOAD = Cpy_u32Ticks;

	/* Start Timer */
	STK_enuStartTimer();

	/* Waiting until flag is raised */
	while (((STK_COUNTER_FLAG >> STK_COUNTER_BIT) == 0) && TIMEOUT > 0)
	{
		TIMEOUT--;
	}

	// Flag raised
	/* Stop Timer */
	STK_enuStopTimer();

	/* Resetting Load & Value registers */
	STK_LOAD = 0;
	STK_VAL = 0;

	return LocalErrorStatus;
}
/******************************************************************/
// Asynchronous
STK_tenuErrorStatus STK_enuAysnchSetIntervalSingle (u32 Cpy_u32Ticks, systick_cbf_t stk_single_interval)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/******************** Validation ************************/
	/* Loading ticks into LOAD register */
	STK_LOAD = Cpy_u32Ticks;

	/* Start Timer */
	STK_enuStartTimer();

	/* Calling the ISR */
	if (stk_single_interval != NULL_PTR)
	{
		App_cbf = stk_single_interval;
		/* Raising the flag mode to single interval */
		STK_Mode = STK_MODE_SINGLE_INTERVAL;
	}
	else
	{
		LocalErrorStatus = STK_enuNullPointer;
	}

	/* Enable Systick interrupt */
	STK_CTRL |= STK_EXCEPTION_ENABLE;

	return LocalErrorStatus;
}
/******************************************************************/
STK_tenuErrorStatus STK_enuAsynchSetIntervalPeriodic (u32 Cpy_u32Ticks, systick_cbf_t stk_periodic_interval)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/******************** Validation ************************/
	/* Loading ticks into LOAD register */
	STK_LOAD = Cpy_u32Ticks;

	/* Start Timer */
	STK_enuStartTimer();

	/* Calling the ISR */
	if (stk_periodic_interval != NULL_PTR)
	{
		App_cbf = stk_periodic_interval;
		/* Raising the flag mode to single interval */
		STK_Mode = STK_MODE_PERIODIC_INTERVAL;
	}
	else
	{
		LocalErrorStatus = STK_enuNullPointer;
	}

	/* Enable Systick interrupt */
	STK_CTRL |= STK_EXCEPTION_ENABLE;

	return LocalErrorStatus;
}
/******************************************************************/
/******************************************************************/
u32 STK_u32GetElapsedTime (void)
{
	/* Returning the elapsed time passed by [LOAD - VALUE] Registers */
	return (STK_VAL - STK_VAL);
}
/******************************************************************/
u32 STK_u32GetRemainingTime(void)
{
	/* Return the remaining time in VALUE Register */
	return STK_VAL;
}
/******************************************************************/
STK_tenuErrorStatus STK_enuSetCallback (systick_cbf_t Systick_CallbackFunc)
{
	STK_tenuErrorStatus LocalErrorStatus = STK_enuOK;

	/******************** Validation ************************/
	if (Systick_CallbackFunc != NULL_PTR)
	{
		App_cbf = Systick_CallbackFunc;
	}
	else
	{
		LocalErrorStatus = STK_enuNullPointer;
	}

	return LocalErrorStatus;

}
/******************************************************************/
/* ISR */
void SysTick_Handler(void)
{
	u8 LocalSTK_Mode;

	if (App_cbf != NULL_PTR)
	{
		if (STK_Mode == STK_MODE_SINGLE_INTERVAL)
		{
			STK_enuStopTimer();
		}

		/* Calling the function */
		App_cbf();

		/* Clearing the interrupt flag */
		STK_CTRL &= ~(STK_COUNTER_FLAG);
	}
	else
	{
		/* Do nothing */
	}
}
