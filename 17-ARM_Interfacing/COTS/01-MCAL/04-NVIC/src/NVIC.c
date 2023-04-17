/****************************************************************************************/
/* Author 	: Doaa Maher								*/
/* Date   	: 13 MAR 2023								*/
/* Version 	: V01									*/	
/****************************************************************************************/

#include "NVIC.h"
#include "NVIC_Config.h"

/******************************* Pointers to struct with every register's base address *********************************/
NVIC_tstrISER_Reg_t * const volatile NVIC_ISER = (NVIC_tstrISER_Reg_t *) 0xE000E100;
NVIC_tstrICER_Reg_t * const volatile NVIC_ICER = (NVIC_tstrICER_Reg_t *) 0xE000E180;
NVIC_tstrISPR_Reg_t * const volatile NVIC_ISPR = (NVIC_tstrISPR_Reg_t *) 0xE000E200;
NVIC_tstrICPR_Reg_t * const volatile NVIC_ICPR = (NVIC_tstrICPR_Reg_t *) 0xE000E280;
NVIC_tstrIABR_Reg_t * const volatile NVIC_IABR = (NVIC_tstrIABR_Reg_t *) 0xE000E300;
NVIC_tstrIPR_Reg_t  * const volatile NVIC_IPR  = (NVIC_tstrIPR_Reg_t *)  0xE000E400;
NVIC_tstrSTIR_Reg_t * const volatile NVIC_STIR = (NVIC_tstrSTIR_Reg_t *) 0xE000EF00;


// Array of Pointer to function : Vector Table Declaration
void (* ISR_Handler[NVIC_IRQ_NUMBERS])(void)= {NULL_PTR};


/************************************************************************************************************************/
/* Notes :-
 * -------
 * To enable an external interrupt, we must :
 * 1- Set the Enable bit in ISER
 * 2- Clear the pending flag in ICPR
 */
NVIC_tenuErrorStatus NVIC_enuEnableIRQ (NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* A local counter */
	u8 LocalCounter;

	/* Setting ISER Register */
	NVIC_tstrISER_Reg_t *NVIC_ISER = Add_strNVIC_Cfg -> NVIC_Reg;
	/* Setting ICPR Register*/
	NVIC_tstrICPR_Reg_t *NVIC_ICPR = Add_strNVIC_Cfg -> NVIC_Reg;

	/* Checking for NULL pointer */
	if (Add_strNVIC_Cfg == NULL_PTR)
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}
	else
	{
		/* Looping through all the Register bits */
		for (LocalCounter = 0; LocalCounter < NVIC_enuNumberOfBits ; LocalCounter++)
		{
			/* Getting the Current Bit */
			if (((Add_strNVIC_Cfg -> NVIC_Bit >> LocalCounter) & 1) == 1)
			{
				/* Switching the Registers */
				switch (Add_strNVIC_Cfg -> NVIC_Reg_Number)
				{
				case NVIC_enuISER0:
					/* Before enabling the interrupt, we must clear the Pending to make it work immediately */
					/* We must also CLR the Bit in register to make sure a new one comes */
					NVIC_ICPR->NVIC_ICPR0 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER0 |= (NVIC_ISER_SET << LocalCounter);

					break;

				case NVIC_enuISER1:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR1 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER1 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER2:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR2 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER2 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER3:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR3 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER3 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER4:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR4 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER4 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER5:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR5 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER5 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER6:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR6 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER6 |= (NVIC_ISER_SET << LocalCounter);
					break;

				case NVIC_enuISER7:
					/* Before enabling the interrupt, we must clear the pending to make it work immediately */
					NVIC_ICPR->NVIC_ICPR7 &= (NVIC_ICPR_CLR << LocalCounter);
					/* Setting the Bit in Register ISER */
					NVIC_ISER->NVIC_ISER7 |= (NVIC_ISER_SET << LocalCounter);
					break;

				default:
					LocalErrorStatus = NVIC_enuNOK;
					break;
				}
			}
			else
			{
				LocalErrorStatus = NVIC_enuInvalidBit;
			}
		}
	}
	return LocalErrorStatus;
}
/************************************************************************************************************************/
/* Notes :-
 * -------
 * To Disable an external interrupt, we must :
 * 1- Set the Disable bit in ICER
 * 2- Set the pending flag in ISPR
 */
NVIC_tenuErrorStatus NVIC_enuDisableIRQ (NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* A local counter */
	u8 LocalCounter;

	/* Setting ICER Register */
	NVIC_tstrICER_Reg_t *NVIC_ICER = Add_strNVIC_Cfg -> NVIC_Reg;
	/* Setting ICPR Register*/
	NVIC_tstrICPR_Reg_t *NVIC_ICPR = Add_strNVIC_Cfg -> NVIC_Reg;

	/* Checking for NULL pointer */
	if (Add_strNVIC_Cfg == NULL_PTR)
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}
	else
	{
		/* Looping through all the Register bits */
		for (LocalCounter = 0; LocalCounter < NVIC_enuNumberOfBits ; LocalCounter++)
		{
			/* Getting the Current Bit */
			if (((Add_strNVIC_Cfg -> NVIC_Bit >> LocalCounter) & 1) == 1)
			{
				/* Switching the Registers */
				switch (Add_strNVIC_Cfg -> NVIC_Reg_Number)
				{
				case NVIC_enuICER0:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR0 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER0 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER1:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR1 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER1 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER2:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR2 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER2 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER3:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR3 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER3 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER4:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR4 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER4 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER5:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR5 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER5 |= (NVIC_ICER_SET << LocalCounter);
					break;
				case NVIC_enuICER6:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR6 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER6 |= (NVIC_ICER_SET << LocalCounter);
					break;

				case NVIC_enuICER7:
					/* Before disabling the interrupt, we must set the Pending */
					NVIC_ICPR-> NVIC_ICPR7 |= (NVIC_ICPR_SET << LocalCounter);
					/* Setting the Bit in Register ICER */
					NVIC_ICER -> NVIC_ICER7 |= (NVIC_ICER_SET << LocalCounter);
					break;

				default:
					LocalErrorStatus = NVIC_enuNOK;
					break;
				}
			}
			else
			{
				LocalErrorStatus = NVIC_enuInvalidBit;
			}
		}
	}
	return LocalErrorStatus;
}
/************************************************************************************************************************/
/* Notes :
 * To set pending flag we must :
 * 1- Set Pending ISPR flag
 */
NVIC_tenuErrorStatus NVIC_enuSetPendingIRQ(NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* Local counter */
	u8 LocalCounter;

	/* Setting the ISPR Register */
	NVIC_tstrISPR_Reg_t *NVIC_ISPR = Add_strNVIC_Cfg -> NVIC_Reg;

	/* Setting the Bit */
	NVIC_tenu_Bits Current_Bit = Add_strNVIC_Cfg -> NVIC_Bit;

	/* Checking if NULL PTR */
	if (Add_strNVIC_Cfg == NULL_PTR)
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}
	else
	{
		for (LocalCounter =0; LocalCounter < NVIC_enuNumberOfBits ; LocalCounter++)
		{
			/* Selecting Current Bit Number */
			if (((Current_Bit << LocalCounter) & 1) == 1 )
			{
				/* Switch registers */
				switch (Add_strNVIC_Cfg -> NVIC_Reg_Number)
				{
				case NVIC_enuISPR0:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR0 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR1:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR1 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR2:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR2 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR3:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR3 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR4:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR4 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR5:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR5 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR6:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR6 |= NVIC_ISPR_SET;
					break;

				case NVIC_enuISPR7:
					/* Setting the Pending Set Register */
					NVIC_ISPR->NVIC_ISPR7 |= NVIC_ISPR_SET;
					break;
				}
			}
			else
			{
				LocalErrorStatus = NVIC_enuInvalidISPR;
			}
		}
	}

	return LocalErrorStatus;
}
/************************************************************************************************************************/
/* Notes :
 * To clear pending flag we must :
 * 1- Set Pending ICPR flag
 */
NVIC_tenuErrorStatus NVIC_enuClearPendingIRQ(NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* Local counter */
	u8 LocalCounter;

	/* Setting the ISPR & ICPR Registers */
	NVIC_tstrICPR_Reg_t *NVIC_ICPR = Add_strNVIC_Cfg -> NVIC_Reg;
	//	NVIC_tstrIABR_Reg_t *NVIC_IABR = Add_strNVIC_Cfg -> NVIC_Reg;

	/* Setting the Bit */
	NVIC_tenu_Bits Current_Bit = Add_strNVIC_Cfg -> NVIC_Bit;

	/* Checking if NULL PTR */
	if (Add_strNVIC_Cfg == NULL_PTR)
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}
	else
	{
		for (LocalCounter =0; LocalCounter < NVIC_enuNumberOfBits ; LocalCounter++)
		{
			/* Selecting Current Bit Number */
			if (((Current_Bit << LocalCounter) & 1) == 1 )
			{
				/* Switch registers */
				switch (Add_strNVIC_Cfg -> NVIC_Reg_Number)
				{
				case NVIC_enuICPR0:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR0 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR1:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR1 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR2:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR2 |= NVIC_ICPR_SET;;
					break;

				case NVIC_enuICPR3:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR3 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR4:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR4 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR5:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR5 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR6:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR6 |= NVIC_ICPR_SET;
					break;

				case NVIC_enuICPR7:
					/* Setting the Clear Pending Register */
					NVIC_ICPR->NVIC_ICPR7 |= NVIC_ICPR_SET;
					break;
				}

			}
			else
			{
				LocalErrorStatus = NVIC_enuInvalidISPR;
			}
		}
	}

	return LocalErrorStatus;
}
/************************************************************************************************************************/
u8 NVIC_u32ReadPendingIRQ (NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* Setting the Bit */
	NVIC_tenu_Bits Current_Bit = Add_strNVIC_Cfg -> NVIC_Bit;
	u8 LocalCounter;

	/* Setting the ISPR */
	//	NVIC_tstrISPR_Reg_t *NVIC_ISPR = Add_strNVIC_Cfg-> NVIC_Reg;
	/* Setting the Pending Status */
	u8 LocalPendingStatus;

	/*	Checking for NULL Pointer */
	if (Add_strNVIC_Cfg != NULL_PTR)
	{
		for (LocalCounter =0; LocalCounter < NVIC_IRQ_NUMBERS ; LocalCounter++)
		{
			if ((Current_Bit << LocalCounter ) && 1 == 1)
			{
				switch(Add_strNVIC_Cfg-> NVIC_Reg_Number)
				{
				case NVIC_enuISPR0:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;
				case NVIC_enuISPR1:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR2:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR3:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR4:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR5:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR6:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				case NVIC_enuISPR7:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalPendingStatus = 1;
					}
					else {
						LocalPendingStatus = 0;
					}

					break;

				}
				LocalErrorStatus = LocalPendingStatus;
			}
		}

	}
	else
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}


	return LocalErrorStatus;
}
/************************************************************************************************************************/
u8 NVIC_u32ReadActiveStatus (NVIC_tstrConfig_t *Add_strNVIC_Cfg)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;
	u8 LocalActiveStatus ;

	/* Setting the Bit */
	NVIC_tenu_Bits Current_Bit = Add_strNVIC_Cfg -> NVIC_Bit;
	u8 LocalCounter;

	/* Setting the IABR */
	//	NVIC_tstrIABR_Reg_t *NVIC_IABR = Add_strNVIC_Cfg ->NVIC_Reg;

	/*	Checking for NULL Pointer */
	if (Add_strNVIC_Cfg != NULL_PTR)
	{
		for (LocalCounter=0; LocalCounter < NVIC_IRQ_NUMBERS ; LocalCounter++)
		{
			if ((Current_Bit << LocalCounter) && 1 == 1)
			{
				switch(Add_strNVIC_Cfg-> NVIC_Reg_Number)
				{
				case NVIC_enuIABR0:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;
				case NVIC_enuIABR1:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR2:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR3:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR4:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR5:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR6:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				case NVIC_enuIABR7:
					if (Add_strNVIC_Cfg -> NVIC_Bit == 1)
					{
						LocalActiveStatus = 1;
					}
					else {
						LocalActiveStatus = 0;
					}

					break;

				}
				LocalErrorStatus = LocalActiveStatus;
			}
		}
	}
	else
	{
		LocalErrorStatus = NVIC_enuNullPointer;
	}



	return LocalErrorStatus;
}
/************************************************************************************************************************/
NVIC_tenuErrorStatus NVIC_enuSetPriority(u8 Cpy_u8PriorityID, u32 Cpy_u8Priority)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	u8 Loc_u8Register;

	/* Checking interrupts */
	if(Cpy_u8PriorityID > NVIC_IPR_IRQS)
	{
		LocalErrorStatus = NVIC_enuInvalidIRQ;
	}

	else
	{
		/* GET REGISTER NUMBER */
		Loc_u8Register = Cpy_u8PriorityID / 4;

		SCB_AIRCR = NVIC_Group_4_Sub_0;

		/* SET THE PRIORITY */
		NVIC_IPR->NVIC_IPRx[Loc_u8Register] |= Cpy_u8Priority;

	}
	return LocalErrorStatus;
}
/************************************************************************************************************************/
//u32 NVIC_u32ReadPriority(NVIC_tstrConfig_t *Add_strNVIC_Cfg)
//{
//
//}





/************************************************************************************************************************/
//NVIC_tenuErrorStatus NVIC_enuSetPriorityGrouping(NVIC_tstrConfig_t *Add_strNVIC_Cfg)
//{
//
//}
/************************************************************************************************************************/
NVIC_tenuErrorStatus NVIC_enuSystemReset (void)
{
	NVIC_tenuErrorStatus LocalErrorStatus = NVIC_enuOK;

	/* Reset all major components except for debugging */
	SCB_AIRCR |= SCB_AIRCR_CLR;

	return LocalErrorStatus;
}
/************************************************************************************************************************/