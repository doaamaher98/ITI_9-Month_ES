/*
 * LM35TempSensor.c
 *
 * Created: 2/11/2023 1:12:33 AM
 *  Author: engdo
 */ 

#include "LM35TempSensor.h"
#include "LM35TempSensor_Cfg.h"

#include "../01-MCAL/ADC.h"

LM35_tenuErrorStatus LM35_ReadSensorValue (u8 Cpy_u8Channel, u16 *Add_u16SensorVal)
{
	LM35_tenuErrorStatus LocalErrorStatus = LM35_enuOK;
	
	u16 LM35_Reading;
	
	ADC_SetChannelNumber (Cpy_u8Channel);
	ADC_ReadADC_Channel10_Bit(&LM35_Reading);
	
	*Add_u16SensorVal = LM35_Reading;
	
	return LocalErrorStatus;
}