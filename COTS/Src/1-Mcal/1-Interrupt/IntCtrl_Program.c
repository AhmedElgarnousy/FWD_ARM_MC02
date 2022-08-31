/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  IntCtrl_Program.c
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

#include "IntCtrl_Interface.h"
#include "IntCtrl_Config.h"
#include "IntCtrl_Private.h"

#define GI_ENABLE_PRIMASK()             __asm("CPSIE I");
#define GI_DISABLE_PRIMASK()            __asm("CPSID I");

#define GI_ENABLE_FAULTMASK()             __asm("CPSIE F");
#define GI_DISABLE_FAULTMASK()            __asm("CPSID F");


void IntCtrl_Init(void)
{	
   GI_ENABLE_FAULTMASK()
	 GI_ENABLE_PRIMASK()
	
	/*Enabling the NVIC Gate(ENx Registers) for IRQ and SCB Gate for Processor Exceptions */
	/*To do Configure Grouping\SubGrouping System in APINT Register in SCB*/   
    APINT = NVIC_APINT_INTERRUPT_PRIORITY_LEVELS;

 /*Another Solution to take the configuration
 *APINT = VECTKEY | NVIC_APINT_INTERRUPT_PRIORITY_LEVELS;*/

    /*To Do : Assign Group\Subgroup priority in NVIC_PRIx and SCB_SYSPRIx*/

    /*To Do : Enable\Disable based on user configuration in NVIC_ENx and SCB_Sys Register*/

     /* A SysTick exception is active as SCB GATE */
    // SET_BIT(SYSHNDCTRL , 11);

     /**/
     SYSPRI3 = 0xF000;

	
}
/***********************************************************************************
*	END OF FILE FileName.c
***********************************************************************************/


