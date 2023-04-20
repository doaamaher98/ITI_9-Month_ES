/********************************
 *  Author: Raouf Magdy         *
 *                              *
 *  Date: 11-03-2023            *
 *                              *
 *  Version: V_01               *
 *                              *
 ********************************/
 
 

 #include "STD_Types.h"
 #include "BIT_MATHs.h"
 #include "SYSTICK_Private.h"
 #include "SYSTICK_Interface.h"
 
 
 
 
 static STK_CBF_t STK_SEQ; //System Exception Requist
 
 //========================================================================================================//
 //============================================ SYSTICK START =============================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_Start(void)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 SET_BIT(STK_CTRL,0);
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //============================================ SYSTICK STOP ==============================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_Stop(void)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 CLR_BIT(STK_CTRL,0);
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //============================= SYSTICK ENABLE SYSTEM EXCEPTION REQUIST ==================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_EnableSEQ(void)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 SET_BIT(STK_CTRL,1);
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //============================= SYSTICK DISABLE SYSTEM EXCEPTION REQUIST =================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_DisableSEQ(void)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 CLR_BIT(STK_CTRL,1);
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //======================================== SYSTICK CLOCK SELECT ==========================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_SetClockSource(u8 Copy_u8ClkSource)
 {
	STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	
	switch(Copy_u8ClkSource)
	{
		case AHB_8_Clock:
			 CLR_BIT(STK_CTRL,2);
		break;
		
		case Processor_Clock:
			 SET_BIT(STK_CTRL,2);
		break;
		
		default:  STK_ErrorStatus = STK_enuNotOK; break;
	}
	
	return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //======================================== SYSTICK SET COUNTS ============================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_SetCounts(u32 Copy_u32Counts)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 
	 u32 Loc_u32Counts = 0;
	 
	 if(Copy_u32Counts >= MIN_LOAD && Copy_u32Counts <= MAX_LOAD)
	 {
		 Loc_u32Counts = (Copy_u32Counts - 1);
		 STK_LOAD &= CLR_LOAD_REG;
		 STK_LOAD |= Loc_u32Counts;
	 }
	 else
	 {
		 STK_ErrorStatus = STK_enuNotOK;
	 }
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //============================== SYSTICK SET PERIOD TIME IN MILLISECONDS =================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_SetPeriod_ms(u8 Copy_u8ClockSelection, u8 Copy_u8ClkSource, u16 Copy_u16Period)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 
	 switch(Copy_u8ClockSelection)
	 {
		 case HSI: //16MHz
			  switch(Copy_u8ClkSource)
			  {
				  case AHB_8_Clock: //2_MHz			  
					   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSI_AHB_8_MS); //get the period from the user in ms and multiply it with 2000 to get the delay
				  break;
				  
				  case Processor_Clock: //16_MHz				  
				  	   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSI_ProcessorClock_MS); //get the period from the user in ms and multiply it with 16000 to get the delay
				  break;
				  
				  default:  STK_ErrorStatus = STK_enuNotOK; break;  
			  }
		 break;
		 
		 case HSE: //25MHz
			  switch(Copy_u8ClkSource)
			  {
				  case AHB_8_Clock: //3.125_MHz			  
					   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSE_AHB_8_MS); //get the period from the user in ms and multiply it with 3125 to get the delay
				  break;
				  
				  case Processor_Clock: //25_MHz				  
				  	   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSE_ProcessorClock_MS); //get the period from the user in ms and multiply it with 25000 to get the delay
				  break;
				  
				  default:  STK_ErrorStatus = STK_enuNotOK; break;  
			  }
		 break;
		 
		 default: STK_ErrorStatus = STK_enuNotOK; break;
	 }
	 	 
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //============================== SYSTICK SET PERIOD TIME IN MICROSECONDS =================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_SetPeriod_us(u8 Copy_u8ClockSelection, u8 Copy_u8ClkSource, u16 Copy_u16Period)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 
	 switch(Copy_u8ClockSelection)
	 {
		 case HSI: //16MHz
			  switch(Copy_u8ClkSource)
			  {
				  case AHB_8_Clock: //2_MHz			  
					   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSI_AHB_8_US); //get the period from the user in ms and multiply it with 2 to get the delay
				  break;
				  
				  case Processor_Clock: //16_MHz				  
				  	   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSI_ProcessorClock_US); //get the period from the user in ms and multiply it with 16 to get the delay
				  break;
				  
				  default:  STK_ErrorStatus = STK_enuNotOK; break;  
			  }
		 break;
		 
		 case HSE: //25MHz
			  switch(Copy_u8ClkSource)
			  {
				  case AHB_8_Clock: //3.125_MHz			  
					   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSE_AHB_8_US); //get the period from the user in ms and multiply it with 3 to get the delay
				  break;
				  
				  case Processor_Clock: //25_MHz				  
				  	   STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
					   STK_LOAD |= (Copy_u16Period * HSE_ProcessorClock_US); //get the period from the user in ms and multiply it with 25 to get the delay
				  break;
				  
				  default:  STK_ErrorStatus = STK_enuNotOK; break;  
			  }
		 break;
		 
		 default: STK_ErrorStatus = STK_enuNotOK; break;
	 }
	 	 
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //===================================== SYSTICK CLEAR LOAD VALUE =========================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_ClearValue(void)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 STK_LOAD &= CLR_LOAD_REG; //clear LOAD register
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //===================================== SYSTICK GET CURRENT VALUE ========================================//
 //========================================================================================================//
 
 u32 STK_GetCurrentValue(void)
 {
	 u32 Loc_u32CurrentValue = 0;
	 
	 Loc_u32CurrentValue = ((u32)STK_VAL & STK_VAL_MASK);
	 
	 return Loc_u32CurrentValue;
 }
 
 
 //========================================================================================================//
 //===================================== SYSTICK CALLBACK FUNCTION ========================================//
 //========================================================================================================//
 
 STK_enuErrorStatus STK_CallBackFunction(STK_CBF_t CallBackFunction)
 {
	 STK_enuErrorStatus STK_ErrorStatus = STK_enuOK;
	 
	 
	 if(CallBackFunction != NULL) {
		 STK_SEQ = CallBackFunction;
	 } else {
		 STK_ErrorStatus = STK_enuNullPtr;
	 }
	 
	 return STK_ErrorStatus;
 }
 
 
 //========================================================================================================//
 //========================================== SYSTICK HANDLER =============================================//
 //========================================================================================================//
 
 void STK_Handler(void)
 {
	 if(STK_SEQ){
		 STK_SEQ(); /* call STK_SystemExceptionRequist */
	 } else{
		 /* Do Nothing */
	 }
 }
 
 
 //========================================================================================================//
 //========================================================================================================//
 //========================================================================================================//
 

