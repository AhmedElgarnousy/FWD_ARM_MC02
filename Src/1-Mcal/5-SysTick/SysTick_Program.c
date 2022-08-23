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


void SysTick_Init()
{
    /*enable FAULTMASK, PRIMASK, BASEPRI, NVIC/SCB , PERIP*/

   /* A SysTick exception is active as SCB GATE */
     SET_BIT(SYSHNDCTRL , 11);

    /*Enables SysTick to operate in a multi-shot way*/
     
  //Set_Bit_BB_Perip(STCTRL , 0);
     SET_BIT(STCTRL , 0);

    /*An interrupt is generated to the NVIC when SysTick counts to 0.*/
     SET_BIT(STCTRL , 1);

     /*Enable the System clock */
     SET_BIT(STCTRL , 1);
   
}
	
SysTick_Handler()
{
	static uint8 Conuter;
	
}
/***********************************************************************************
*	END OF FILE SysTick_Program.c
***********************************************************************************/


