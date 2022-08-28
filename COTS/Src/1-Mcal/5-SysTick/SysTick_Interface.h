/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  SysTick_Interface.h
*		   \brief 
*
*		\details
*
***********************************************************************************/

#ifndef SYSTICK_INTERFACE_H_
#define SYSTICK_INTERFACE_H_

/***********************************************************************************
*	                        FUNCTIONS PROTOTYPES
***********************************************************************************/

/***********************************************************************************
*	\Syntax				:SysTick_Init()
*	\Description		:this function Initialize the SysTick 
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Non Reentrant
*	\Parameters  (in)	:void
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void SysTick_Init();

/***********************************************************************************
*	\Syntax				:SysTick_SetCallBack( void(*Copy_pvCallBackFunc)(void) )
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Non Reentrant
*	\Parameters  (in)	:void(*Copy_pvCallBackFunc)(void)
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void SysTick_SetCallBack( void(*Copy_pvCallBackFunc)(void) );

/***********************************************************************************
*	\Syntax				:SysTick_StartTimer()
*	\Description		:enable the systick to start counting
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Non Reentrant
*	\Parameters  (in)	:void
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void SysTick_StartTimer();

/***********************************************************************************
*	\Syntax				:SysTick_StopTimer()
*	\Description		: Stops the Systick counter
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Non Reentrant
*	\Parameters  (in)	:void
*	\Parameters  (out)	:None
*	\Return Value		:void
***********************************************************************************/
void SysTick_StopTimer();



#endif

/***********************************************************************************
*	END OF FILE SysTick_Interface.h
***********************************************************************************/

