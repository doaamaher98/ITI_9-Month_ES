
#ifndef LM35TEMPSENSOR_H_
#define LM35TEMPSENSOR_H_

#include "../01-MCAL/DIO.h"

/****************** Error Status User Defined Enum *******************/
typedef enum
{
	LM35_enuOK=0,
	LM35_enuNOK
	}LM35_tenuErrorStatus;



/************************ API *************************/
LM35_tenuErrorStatus LM35_ReadSensorValue (u8 Cpy_u8Channel, u16 *Add_u16SensorVal);


#endif /* LM35TEMPSENSOR_H_ */