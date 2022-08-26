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
*	INCLUDES
***********************************************************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "SysTick_Interface.h"
#include "SysTick_Config.h"
#include "SysTick_Private.h"

static void (*SysTick_PtrNotificationFunc)(void) = NULL;

/*
1. Program the value in the STRELOAD register.
2. Clear the STCURRENT register by writing to it with any value.
3. Configure the STCTRL register for the required operation
*/
void SysTick_Init()
{
    /*enable FAULTMASK, PRIMASK, BASEPRI, NVIC/SCB , PERIP*/

   /* A SysTick exception is active as SCB GATE */
     SET_BIT(SYSHNDCTRL , 11);

    /*Enables SysTick to operate in a multi-shot way*/
    SET_BIT(STCTRL , 0);   //Set_Bit_BB_Perip(STCTRL , 0);

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

    // STRELOAD = 0x00FFFFFF;
	    STRELOAD = 0xf;
   
}
void SysTick_SetCallBack( void(*Copy_pvCallBackFunc)(void) )
{
      SysTick_PtrNotificationFunc =  Copy_pvCallBackFunc;
}
	
void SysTick_Handler(void)
{
	//static uint8 Conuter = 0;

  //  if(Conuter == 5)
   // {
      SysTick_PtrNotificationFunc();
   // }
   // else
  //  {
   //   Conuter ++;
   // }
	
}
/***********************************************************************************
*	END OF FILE SysTick_Program.c
***********************************************************************************/


