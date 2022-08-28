/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Led_Interface.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

/***********************************************************************************
*	                    API PROTOTYPES FUNCTIONS
***********************************************************************************/

//void Led_BlinkLed( OnTime , OffTime);
/***********************************************************************************
*	\Syntax				:Led_TurnOn(Dio_ChannelType ChannelId)
*	\Description		:Turn on the LED
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Dio_ChannelType ChannelId
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void Led_TurnOn(Dio_ChannelType ChannelId);

/***********************************************************************************
*	\Syntax				:Led_TurnOff(Dio_ChannelType ChannelId)
*	\Description		:Turn off the LED
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Dio_ChannelType ChannelId 
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void Led_TurnOff(Dio_ChannelType ChannelId);

/***********************************************************************************
*	\Syntax				:Led_ToggleChannel(Dio_ChannelType ChannelId)
*	\Description		:Toggle the LED
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Dio_ChannelType ChannelId 
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void Led_ToggleChannel(Dio_ChannelType ChannelId);



#endif

/***********************************************************************************
*	END OF FILE Led_Interface.h
***********************************************************************************/

