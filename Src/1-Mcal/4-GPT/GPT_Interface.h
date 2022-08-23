/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Gpt_Interface.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef GPT_INTERFACE_H_
#define GPT_INTERFACE_H_


/***********************************************************************************
*	                    INCLUDES
***********************************************************************************/
#include "Std_Types.h"

/***********************************************************************************
*	                    API TYPES, GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************/

typedef struct 
{
    /*structure Implementation Specfic*/
    
}Gpt_ConfigType;

typedef struct 
{
    /*Numeric  ID of a GPT Channel */

}Gpt_ChannelType;

typedef struct 
{
    /*Type for reading and setting the timer values (in number of ticks) */

}Gpt_ValueType;


/***********************************************************************************
*	                    PROTOTYPES API FUNCTIONS
***********************************************************************************/

/***********************************************************************************
*	\Syntax				:Gpt_Init(const Gpt_ConfigType * ConfigPtr)
*	\Description		:  . Initialize the hardware timer module according to a configuration set referenced by configPtr
                           . Disaable all interrupt notifications, controlled by the GPT Driver
                           . Shell Set the Operation Mode of the GPT Driver to "normal mode"
                           . shall start all enabled GPT Predef timers at value "0" 
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:const Gpt_ConfigType * ConfigPtr  
*	\Parameters  (out)	:None
*	\Return Value		:void  
*										 
***********************************************************************************/
void Gpt_Init(const Gpt_ConfigType * ConfigPtr);

/***********************************************************************************
*	\Syntax				:Gpt_DisableNotification( Gpt_ChannelType Channel)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Gpt_ChannelType Channel 
*	\Parameters  (out)	:None
*	\Return Value		:void  
***********************************************************************************/
void Gpt_DisableNotification( Gpt_ChannelType Channel);

/***********************************************************************************
*	\Syntax				:Gpt_EnableNotification( Gpt_ChannelType Channel)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Gpt_ChannelType Channel  
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void Gpt_EnableNotification( Gpt_ChannelType Channel);

/***********************************************************************************
*	\Syntax				:Gpt_StartTimer( Gpt_ChannelType Channel , Gpt_ValueType Value )
*	\Description		: . Shall start the selected timer channel with a defined target time 
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:Gpt_ChannelType Channel , Gpt_ValueType Value
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
void Gpt_StartTimer( Gpt_ChannelType Channel , Gpt_ValueType Value );

/***********************************************************************************
*	\Syntax				:Gpt_StopTimer(Gpt_ChannelType Channel)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant(but not for the same timer channel)
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
void Gpt_StopTimer(Gpt_ChannelType Channel);

/***********************************************************************************
*	\Syntax				:Gpt_Notification_<channel> (void)
*	\Description		:The Callback notification Gpt_Notification_<channel> shall be configurable as 
                         pointers to user defined functions within the configuration structure
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
void Gpt_Notification_<channel> (void);

/***********************************************************************************
*	\Syntax				:Gpt_GetTimeElaspsed( Gpt_ChannelType Channel )
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Gpt_ValueType Gpt_GetTimeElaspsed( Gpt_ChannelType Channel );

/***********************************************************************************
*	\Syntax				:Gpt_GetTimeRemaining( Gpt_ChannelType Channel )
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Gpt_ValueType Gpt_GetTimeRemaining( Gpt_ChannelType Channel );

/***********************************************************************************
*	\Syntax				:Gpt_GetPredefTimerValue ( Gpt_PredefTimerType PredefTimer , uint32* TimerValuePtr)
*	\Description		:Returns the remaining until the target time is reached 
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/
Std_Return Gpt_GetPredefTimerValue ( Gpt_PredefTimerType PredefTimer , uint32* TimerValuePtr); 

#endif
/***********************************************************************************
*	END OF FILE Gpt_Interface.h
***********************************************************************************/