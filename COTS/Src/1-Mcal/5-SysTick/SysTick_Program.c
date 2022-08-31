/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  SysTick_Program.c
*		   \brief 
*
*		\details
*
*
***********************************************************************************/

/***********************************************************************************
*	                                   INCLUDES
***********************************************************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "SysTick_Interface.h"
#include "SysTick_Config.h"
#include "SysTick_Private.h"

#include"Dio_Interface.h"


/*Global Pointer to function*/
static void (*SysTick_PtrNotificationFunc)(void) = NULL;

/***********************************************************************************
*	                    FUNCTIONS IMPLEMENTATION
***********************************************************************************/
void SysTick_Init()
{
    /*enable FAULTMASK, PRIMASK, BASEPRI, NVIC/SCB , PERIP*/

      /* Program the value in the STRELOAD register.*/
     STRELOAD = STRELOAD_VAL;  
	  
   /* Configure the STCTRL register for the required operation*/
    #if CLOCK == SYSTEM_CLOCK
         SET_BIT(STCTRL , 2);         
    #elif CLOCK == PIOSC_DIV_BY_4
         CLR_BIT(STCTRL , 2); 
    #else 
    #error "Wrong CLOCK CONFIGURATION"

    #endif

    #if INTERRUPT_GENERATION == ENABLED
         SET_BIT(STCTRL , 1);         
    #elif INTERRUPT_GENERATION == DISABLED
         CLR_BIT(STCTRL , 1); 
    #else 
    #error "Wrong CLOCK CONFIGURATION"

    #endif
}

void SysTick_StartTimer()
{
    /*Enables the counter*/
    SET_BIT(STCTRL , 0);   
}

void SysTick_StopTimer()
{
    /*Enables the counter*/
    CLR_BIT(STCTRL , 0); 
}

void SysTick_SetCallBack( void(*Copy_pvCallBackFunc)(void) )
{
	/*Initialize the call back notification function globally*/
      SysTick_PtrNotificationFunc =  Copy_pvCallBackFunc;
}
	
void SysTick_Handler()
{
	/*Invoke the call back notification*/
    SysTick_PtrNotificationFunc();
}
/***********************************************************************************
*	END OF FILE SysTick_Program.c
***********************************************************************************/
