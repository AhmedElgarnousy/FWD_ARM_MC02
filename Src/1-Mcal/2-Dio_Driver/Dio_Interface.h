/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  IntCtrl_Interface.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


/***********************************************************************************
*	                    INCLUDES
***********************************************************************************/
#include "Std_Types.h"

/***********************************************************************************
*	                    GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************/

typedef enum
{
	 Dio_Channel_A0 ,
	 Dio_Channel_A1 ,
	 Dio_Channel_A2 ,
	 Dio_Channel_A3 ,
	 Dio_Channel_A4 ,
	 Dio_Channel_A5 ,
	 Dio_Channel_A6 ,
	 Dio_Channel_A7 ,

	 Dio_Channel_B0 ,
	 Dio_Channel_B1 ,
	 Dio_Channel_B2 ,
	 Dio_Channel_B3 ,
	 Dio_Channel_B4 ,
	 Dio_Channel_B5 ,
	 Dio_Channel_B6 ,
	 Dio_Channel_B7 ,

	 Dio_Channel_C0 ,
	 Dio_Channel_C1 ,
	 Dio_Channel_C2 ,
	 Dio_Channel_C3 ,
	 Dio_Channel_C4 ,
	 Dio_Channel_C5 ,
	 Dio_Channel_C6 ,
	 Dio_Channel_C7 ,

	 Dio_Channel_D0 ,
	 Dio_Channel_D1 ,
	 Dio_Channel_D2 ,
	 Dio_Channel_D3 ,
	 Dio_Channel_D4 ,
	 Dio_Channel_D5 ,
	 Dio_Channel_D6 ,
	 Dio_Channel_D7 ,

	 Dio_Channel_E0 ,
	 Dio_Channel_E1 ,
	 Dio_Channel_E2 ,
	 Dio_Channel_E3 ,
	 Dio_Channel_E4 ,
	 Dio_Channel_E5 ,
	 Dio_Channel_E6_NA ,
	 Dio_Channel_E7_NA ,

	 Dio_Channel_F0 ,
	 Dio_Channel_F1 ,
	 Dio_Channel_F2 ,
	 Dio_Channel_F3 ,
	 Dio_Channel_F4 

}Dio_ChannelType;

typedef enum
{
    Dio_Port_A,
    Dio_Port_B,
    Dio_Port_C,
    Dio_Port_D,
    Dio_Port_E,
    Dio_Port_F
}Dio_PortType;

typedef enum
{
	Dio_Channel_Low  =  0,
   /* Dio_Channel_High =! 0 */
	Dio_Channel_High = 1
	
}Dio_LevelType; 


typedef  uint8 Dio_PortLevelType;  /*number 0 to 255 */


/***********************************************************************************
*	PROTOTYPES API FUNCTIONS 
***********************************************************************************/
/***********************************************************************************
*	\Syntax				:Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/***********************************************************************************
*	\Syntax				:Dio_WriteChannel(Dio_ChannelType channelId  , Dio_LevelType Level)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
void Dio_WriteChannel(Dio_ChannelType channelId  , Dio_LevelType Level);


/***********************************************************************************
*	\Syntax				:Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);


/***********************************************************************************
*	\Syntax				:void Dio_WritePort(Dio_PortType PortId , Dio_PortLevelType Level)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
void Dio_WritePort(Dio_PortType PortId , Dio_PortLevelType Level);


/***********************************************************************************
*	\Syntax				:Dio_LevelType Dio_FlipChannel(Dio_ChannelType channelId)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Dio_LevelType Dio_FlipChannel(Dio_ChannelType channelId);

#endif

/***********************************************************************************
*	END OF FILE IntCtrl_Interface.h
***********************************************************************************/

