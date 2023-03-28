
#ifndef SW_H_
#define SW_H_


// Error Status
typedef enum
{
	Switch_enuOK=0,
	Switch_enuNOK

}Switch_tenu_ErrorStatus;

// Switch Pins
typedef enum
{
	Switch_enu_Pin0=0,
//	Switch_enu_Pin1  ,
//	Switch_enu_Pin2  ,
//	Switch_enu_Pin3  ,
//	Switch_enu_Pin4  ,
//	Switch_enu_Pin5  ,
//	Switch_enu_Pin6  ,
//	Switch_enu_Pin7  ,
//	Switch_enu_Pin8  ,
//	Switch_enu_Pin9  ,
//	Switch_enu_Pin10  ,
//	Switch_enu_Pin11  ,
//	Switch_enu_Pin12  ,
//    Switch_enu_Pin13  ,
//    Switch_enu_Pin14  ,
//    Switch_enu_Pin15  ,
	Switch_enu_NumberOfPins
}Switch_tenuPins;


// Switch Ports
typedef enum
{
	Switch_enuPort_A=0,
	Switch_enuPort_B,
	Switch_enuPort_C,
	Switch_enuPort_D,
    Switch_enuPort_E,
    Switch_enuPort_H,
}Switch_tenuPorts;

// Switch Status
typedef enum
{
	Switch_enuPressed=0,
	Switch_enuReleased
}Switch_tenuStatus;

// Switch PullUp/ PullDown
typedef enum
{
	Switch_enuPullUp=0,
	Switch_enuPullDown
}Switch_tenuPUPD;

// Switch Name
typedef enum
{
	Switch_enu_On=0,
	Switch_enu_Off,
	Switch_enu_Display,
	Switch_enu_Clear,
	Switch_enu_Move
}Switch_tenuNames;




// Struct with Switch Configurations
typedef struct
{
	Switch_tenuPorts Switch_Port;
	Switch_tenuPins Switch_Pin;
	Switch_tenuNames Switch_Name;
	Switch_tenuPUPD Switch_PUPD;
}Switch_tstr_Config_t;


// Extern Array of Struct
extern const Switch_tstr_Config_t Switch_tstr_Config[Switch_enu_NumberOfPins];


/*************************************** APIs *****************************************/
Switch_tenu_ErrorStatus Switch_enuInit(void);

Switch_tenu_ErrorStatus Switch_enuGetSwitchState (Switch_tenuPorts Cpy_u8Port, Switch_tenuPins Cpy_u16Pin , u8 *Add_u8State);


#endif /* SW_H_ */
