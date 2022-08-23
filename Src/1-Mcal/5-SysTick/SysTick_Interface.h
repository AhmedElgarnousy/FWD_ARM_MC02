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
*	GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************/
void SysTick_Init();
void (*pvNotificationFunc)(void);
u8 ADC_u8StartConversionAsynch(u8 Copy_u8Channel,u16* Copy_pu16Reading ,    void (*Copy_pvNotificationFunc)(void));

#endif

/***********************************************************************************
*	END OF FILE SysTick_Interface.h
***********************************************************************************/

