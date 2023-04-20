#include "BIT_MATHs.h"
#include "STD_Types.h"
#include "NVIC_Interface.h"


void main(void)
{
	NVIC_Config_t INT1_TEST;

	INT1_TEST.NVIC_Reg = NVIC_ISER;
	INT1_TEST.NVIC_Bit = NVIC_BIT0;
	INT1_TEST.NVIC_RegNum = ISER0;

	NVIC_EnableIRQ(&INT1_TEST);

	while(1)
	{

	}
}
