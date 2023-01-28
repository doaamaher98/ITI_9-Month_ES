/********************************************************/
/* Author    : Doaa Maher                               */
/* Date      : 18 JAN 2023                              */
/* Version   : V.01                                     */
/* Target    : AVR32								    */
/* Descrip.  : Configurations implementation c file		*/ 
/********************************************************/
#include "DIO.h"
#include "PUSH_BUTTON.h"


PUSH_BUTTON_tstrPinCfg_t PUSH_BUTTON_strPinCfg[PUSH_BUTTON_enuNumberOfPins]=
{
	/*Pin0*/ {DIO_enuPin0 ,PUSH_BUTTON_enuPullDown},
	/*Pin1*/ {DIO_enuPin1 ,PUSH_BUTTON_enuPullDown},
	/*Pin2*/ {DIO_enuPin2 ,PUSH_BUTTON_enuPullDown},
	/*Pin3*/ {DIO_enuPin3 ,PUSH_BUTTON_enuPullDown},
	/*Pin4*/ {DIO_enuPin4 ,PUSH_BUTTON_enuPullDown},
	/*Pin5*/ {DIO_enuPin5 ,PUSH_BUTTON_enuPullDown},
	/*Pin6*/ {DIO_enuPin6 ,PUSH_BUTTON_enuPullDown},
	/*Pin7*/ {DIO_enuPin7 ,PUSH_BUTTON_enuPullDown},
		
	/*Pin8*/ {DIO_enuPin8 ,  PUSH_BUTTON_enuPullDown},
	/*Pin9*/ {DIO_enuPin9 ,  PUSH_BUTTON_enuPullDown},
	/*Pin10*/ {DIO_enuPin10 ,PUSH_BUTTON_enuPullDown},
	/*Pin11*/ {DIO_enuPin11 ,PUSH_BUTTON_enuPullDown},
	/*Pin12*/ {DIO_enuPin12 ,PUSH_BUTTON_enuPullDown},
	/*Pin13*/ {DIO_enuPin13 ,PUSH_BUTTON_enuPullDown},
	/*Pin14*/ {DIO_enuPin14 ,PUSH_BUTTON_enuPullDown},
	/*Pin15*/ {DIO_enuPin15 ,PUSH_BUTTON_enuPullDown},
		
	/*Pin16*/ {DIO_enuPin16 ,PUSH_BUTTON_enuPullUp},
	/*Pin17*/ {DIO_enuPin17 ,PUSH_BUTTON_enuPullUp},
	/*Pin18*/ {DIO_enuPin18 ,PUSH_BUTTON_enuPullDown},
	/*Pin19*/ {DIO_enuPin19 ,PUSH_BUTTON_enuPullDown},
	/*Pin20*/ {DIO_enuPin20 ,PUSH_BUTTON_enuPullDown},
	/*Pin21*/ {DIO_enuPin21 ,PUSH_BUTTON_enuPullDown},
	/*Pin22*/ {DIO_enuPin22 ,PUSH_BUTTON_enuPullDown},
	/*Pin23*/ {DIO_enuPin23 ,PUSH_BUTTON_enuPullDown},
			
	/*Pin24*/ {DIO_enuPin24 ,PUSH_BUTTON_enuPullDown},
	/*Pin25*/ {DIO_enuPin25 ,PUSH_BUTTON_enuPullDown},
	/*Pin26*/ {DIO_enuPin26 ,PUSH_BUTTON_enuPullDown},
	/*Pin27*/ {DIO_enuPin27 ,PUSH_BUTTON_enuPullDown},
	/*Pin28*/ {DIO_enuPin28 ,PUSH_BUTTON_enuPullDown},
	/*Pin29*/ {DIO_enuPin29 ,PUSH_BUTTON_enuPullDown},
	/*Pin30*/ {DIO_enuPin30 ,PUSH_BUTTON_enuPullDown},
	/*Pin31*/ {DIO_enuPin31 ,PUSH_BUTTON_enuPullDown},
			
};
