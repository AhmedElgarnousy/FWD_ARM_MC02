/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Led_Program.c
*		   \brief 
*
*		\details
*
*
***********************************************************************************/

/***********************************************************************************
*	INCLUDES
***********************************************************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"


#include "Dio_Interface.h"
#include "Led_Interface.h"
#include "Led_Config.h"
#include "Led_Private.h"


void Led_TurnOn(Dio_ChannelType ChannelId)
{
	Dio_WriteChannel( ChannelId  , Std_High );
}

void Led_TurnOff(Dio_ChannelType ChannelId)
{
	Dio_WriteChannel( ChannelId  , Std_Low );
}
/***********************************************************************************
*	END OF FILE Led_Program.c
***********************************************************************************/


