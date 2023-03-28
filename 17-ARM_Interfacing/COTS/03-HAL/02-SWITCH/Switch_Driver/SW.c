#include "STD_Types.h"

#include "GPIO.h"
#include "SW.h"

Switch_tenu_ErrorStatus Switch_enuInit(void)
{
	Switch_tenu_ErrorStatus LocalErrorStatus = Switch_enuOK;

	u8 LocalIterator;
	GPIO_tsrt_PortConfig_t GPIO_Switch;

	for (LocalIterator =0; LocalIterator< Switch_enu_NumberOfPins; LocalIterator++)
	{
		GPIO_Switch.GPIO_Mode = Switch_tstr_Config[LocalIterator].Switch_PUPD;
		GPIO_Switch.GPIO_Port = Switch_tstr_Config[LocalIterator].Switch_Port;
		GPIO_Switch.GPIO_Pin = Switch_tstr_Config[LocalIterator].Switch_Pin;

		GPIO_enuInit(&GPIO_Switch);
	}
	return LocalErrorStatus;
}
/***********************************************************************************/
Switch_tenu_ErrorStatus Switch_enuGetSwitchState (Switch_tenuPorts Cpy_u8Port, Switch_tenuPins Cpy_u16Pin , u8 *Add_u8State)
{
	Switch_tenu_ErrorStatus LocalErrorStatus = Switch_enuOK;

	u8 LocalIterator;
	u8 LocalCounter=0;

	/* To handle debouncing */
	for (LocalIterator=0; LocalIterator<=5; LocalIterator++)
	{
		GPIO_GetPinValue_(Switch_tstr_Config[Cpy_u8Port].Switch_Port,Switch_tstr_Config[Cpy_u16Pin].Switch_Pin, &Add_u8State);

		if (*Add_u8State == Switch_enuPressed)
		{
			LocalCounter ++;
		}
	}

	if (LocalCounter >= 3)
	{
		*Add_u8State = Switch_enuPressed;
	}

	else
	{
		*Add_u8State = Switch_enuReleased;
	}

	return LocalErrorStatus;
}
/***********************************************************************************/
