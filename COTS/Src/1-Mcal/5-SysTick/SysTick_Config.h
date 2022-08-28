/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  SysTick_Config.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/

#ifndef SYSTICK_CONFIG_H_
#define SYSTICK_CONFIG_H_

/***********************************************************************************
*	                               CONFIGURATIONS
***********************************************************************************/


//Value for 1 sec for clock 12MHz 
#define  STRELOAD_VAL                    STRELOAD_VAL_1SEC_12MHZ


/*
    Options:
            1-SYSTEM_CLOCK
            2-PIOSC_DIV_BY_4
*/
#define CLOCK                              SYSTEM_CLOCK 

/*
    Options:
            1-ENABLED (An interrupt is generated to the NVIC when SysTick counts to 0)
            2-DISABLED
*/
#define INTERRUPT_GENERATION                       ENABLED 


#endif

/***********************************************************************************
*	END OF FILE SysTick_Config.h
***********************************************************************************/

