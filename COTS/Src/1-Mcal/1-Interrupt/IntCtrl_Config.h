/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  IntrCtrl.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef INTCTRL_CONFIG_H_
#define INTCTRL_CONFIG_H_


/***********************************************************************************
*	LOCAL MACROS CONSTANT\FUCTION
***********************************************************************************/

/***********************************************************************************
*	CONFIGURATION
*   Interrupt Peripheral Gates
*   Inetrrupt Group Priority
*   Inetrrupt Sub Group Priority
***********************************************************************************/


/* enable the BASEMASK
*Value Description
0x0 All exceptions are unmasked.
0x1 All exceptions with priority level 1-7 are masked.
0x2 All exceptions with priority level 2-7 are masked.
0x3 All exceptions with priority level 3-7 are masked.
0x4 All exceptions with priority level 4-7 are masked.
0x5 All exceptions with priority level 5-7 are masked.
0x6 All exceptions with priority level 6-7 are masked.
0x7 All exceptions with priority level 7 are masked./
//void __set_BASEPRI (uint32_t value);



/*
*Options:
*        GROUP_PRIORITY_X_X_X  
*        GROUP_PRIORITY_X_X_Y
*        GROUP_PRIORITY_X_Y_Y
*        GROUP_PRIORITY_Y_Y_Y  (No Preemption)
*      NOTE: X for group Priority and Y for  Subgroup
***/
#define NVIC_APINT_INTERRUPT_PRIORITY_LEVELS       GROUP_PRIORITY_X_X_X

/*Assign Group\Subgroup priority in NVIC_PRIx and SCB_SYSPRIx*/

/*take the group and subgroup number for each interrupt*/

#endif
/***********************************************************************************
*	END OF FILE IntrCtrl.h
***********************************************************************************/

