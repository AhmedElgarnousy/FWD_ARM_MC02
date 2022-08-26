/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  IntCtrl_Interface.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef INTCTRL_INTERFACE_H_
#define INTCTRL_INTERFACE_H_

/***********************************************************************************
*	GLOBAL CONSTANT MACROS 
***********************************************************************************/

/***********************************************************************************
*	GLOBAL FUNCTION MACROS
***********************************************************************************/
void IntCtrl_Init(void);
/***********************************************************************************
*	\Syntax				:Std_ReturnType FunctionName(AnyType ParamterName)
*	\Description		:Describe this service
*
*	\Sync\Async			:Synchronous
*	\Reentrancy			:Non Reentrant
*	\Parameters  (in)	:ParamterName Paramter Description
*	\Parameters  (out)	:None
*	\Return Value		:Std_ReturnType  E_OK
*										 E_NOK_OK
***********************************************************************************/

#define VECTKEY                  (uint32)0x05FA

/***********************************************************************************
*	GLOBAL DATA TYPES AND STRUCTURES
***********************************************************************************/

typedef enum   
{  
    GPIO_Port_A                             = 0,
    GPIO_Port_B                             = 1,
    GPIO_Port_C                             = 2,
    GPIO_Port_D                             = 3,
    GPIO_Port_E                             = 4,
    UART_0                                  = 5,
    UART_1                                  = 6,
    SSI0                                    = 7,
    I2C0                                    = 8,
    PWM0_FAULT                              = 9,
    PWM0_GENERTOR_0                         = 10,
    PWM0_GENERTOR_1                         = 11,
    PWM0_GENERTOR_2                         = 12,
    QEI0                                    = 13,
    ADC0_Sequence_0                         = 14,
    ADC0_Sequence_1                         = 15,
    ADC0_Sequence_2                         = 16,
    ADC0_Sequence_3                         = 17,
    Watchdog_Timer_0_And_1                  = 18,
    Timer_0A_16_32_BIT                      = 19,
    Timer_0B_16_32_BIT                      = 20,
    Timer_1A_16_32_BIT                      = 21,
    Timer_1B_16_32_BIT                      = 22,
    Timer_2A_16_32_BIT                      = 23,
    Timer_2B_16_32_BIT                      = 24,
    Analog_Comparator_0                     = 25,
    Analog_Comparator_1                     = 26,

    System_Control                          = 28,
    Flash_Memory_Control_And_EEPROM_CONTROL = 29,
    GPIO_Port_F                             = 30,

    UART_2                                  = 33,
    SSI1                                    = 34,
    Bit_Timer_3A_16_32                      = 35,
    Bit_Timer_3B_16_32                      = 36,               
    I2C1                                    = 37,
    QEI1                                    = 38,
    CAN0                                    = 39,
    CAN1                                    = 40,
    Hibernation_Module                      = 43,
    USB                                     = 44,
    PWM_Generator_3                         = 45,
    uDMA_Software                           = 46,
    uDMA_Error                              = 47,
    ADC1_Sequence_0                         = 48,
    ADC1_Sequence_1                         = 49,
    ADC1_Sequence_2                         = 50,
    ADC1_Sequence_3                         = 51,
    SSI2                                    = 57,
    SSI3                                    = 58,
    UART_3                                  = 59,
    UART_4                                  = 60,
    UART_5                                  = 61,
    UART_6                                  = 62,
    UART_7                                  = 63,
    I2C2                                    = 68,
    I2C3                                    = 69,
    Timer_4A_16_32_BIT                      = 70,
    Timer_4B_16_32_BIT                      = 71,
    Timer_5A_16_32_BIT                      = 92,
    Timer_5B_16_32_BIT                      = 93,
    Timer_0A_32_64_BIT                      = 94,
    Timer_0B_32_64_BIT                      = 95,
    Timer_1A_32_64_BIT                      = 96,

    Timer_1B_32_64_BIT                      = 97,
    Timer_2A_32_64_BIT                      = 98,
    Timer_2B_32_64_BIT                      = 99,
    Timer_3A_32_64_BIT                      = 100,
    Timer_3B_32_64_BIT                      = 101,
    Timer_4A_32_64_BIT                      = 102,
    Timer_4B_32_64_BIT                      = 103,
    Timer_5A_32_64_BIT                      = 104,
    Timer_5B_32_64_BIT                      = 105,

    System_Exception_imprecise              = 106,

    PWM1_Generartor_0                       = 134,
    PWM1_Generartor_1                       = 135,
    PWM1_Generartor_2                       = 136,
    PWM1_Generartor_3                       = 137,
    PWM1_Fault                              = 138,

}IntCtrl_InterruptType;

/*
typedef enum
{
  

}IntCtrl_ExceptionType;
*/

#endif

/***********************************************************************************
*	END OF FILE IntCtrl_Interface.h
***********************************************************************************/

