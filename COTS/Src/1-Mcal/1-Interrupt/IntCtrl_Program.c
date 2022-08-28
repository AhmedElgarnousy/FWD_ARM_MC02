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




void IntCtrl_Init(void)
{	
	/*Enabling the NVIC Gate(ENx Registers) for IRQ and SCB Gate for Processor Exceptions */
	/*To do Configure Grouping\SubGrouping System in APINT Register in SCB*/   
    APINT = NVIC_APINT_INTERRUPT_PRIORITY_LEVELS;

 /*Another Solution to take the configuration
 *APINT = VECTKEY | NVIC_APINT_INTERRUPT_PRIORITY_LEVELS;*/

    /*To Do : Assign Group\Subgroup priority in NVIC_PRIx and SCB_SYSPRIx*/
    //PRI0 = (uint32)0xE0;


    /*To Do : Enable\Disable based on user configuration in NVIC_ENx and SCB_Sys Register*/
    //EN0 = (uint32) 1;

     /* A SysTick exception is active as SCB GATE */
    // SET_BIT(SYSHNDCTRL , 11);

     /**/
     SYSPRI3 = 0xF000;

	
}
/***********************************************************************************
*	END OF FILE FileName.c
***********************************************************************************/


