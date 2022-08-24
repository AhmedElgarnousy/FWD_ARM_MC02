/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Mcu_Hw.H
*		   \Module:Mcu_Hw 
*
*		\Description: Header file for Register Definition 
*
*
***********************************************************************************/
#ifndef MCU_HW_H_
#define MCU_HW_H_


/***********************************************************************************
*	GLOBAL CONSTANT MACROS 
***********************************************************************************/
#define CORTEXM4_PERI_BASE_ADDRESS              0xE000E000


/***********************************************************************************
*	                              NVIC REGISTERS
***********************************************************************************/

#define EN0       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x100))
#define EN1       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x104))
#define EN2       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x108))
#define EN3       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x10C))

#define DIS0       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x180))
#define DIS1       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x184))
#define DIS2       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x188))
#define DIS3       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x18C))

#define PRI0        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x400))
#define PRI1        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x404))
#define PRI2        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x408))
#define PRI3        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x40C))
#define PRI4        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x410))
#define PRI5        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x414))
#define PRI6        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x418))
#define PRI7        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x41C))
#define PRI8        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x420))
#define PRI9        *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x424))
#define PRI10       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x428))
#define PRI11       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x42C))
#define PRI12       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x430))
#define PRI13       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x434))
#define PRI14       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x438))
#define PRI15       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x43C))
#define PRI16       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x440))
#define PRI17       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x444))
#define PRI18       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x448))
#define PRI19       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x44C))
#define PRI20       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x450))
#define PRI21       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x454))
#define PRI22       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x458))
#define PRI23       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x45C))
#define PRI24       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x460))
#define PRI25       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x464))
#define PRI26       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x468))
#define PRI27       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x46C))
#define PRI28       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x470))
#define PRI29       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x474))
#define PRI30       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x478))
#define PRI31       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x47C))
#define PRI32       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x480))
#define PRI33       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x484))
#define PRI34       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0x488))

#define SWTRIG      *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xF00))


/***********************************************************************************
*	                    SYSTEM CONTROL BLOCK(SCB) REGISTERS 
***********************************************************************************/
#define APINT            *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD0c))
#define INTCTRL          *((volatile INTCTRL_Tag* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD04))
#define SYSHNDCTRL       *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD24))
#define SYSPRI1          *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD18))
#define SYSPRI2          *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD1C))
#define SYSPRI3          *((volatile uint32* )(CORTEXM4_PERI_BASE_ADDRESS + 0xD20))

#define SYSHNDCTRL                          (*((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0xD24)))     /*System Handler Control and State*/

typedef struct 
{
  uint32 VECACT           :8 ;
  uint32 RETBASE          :1 ;
  uint32                  :3 ;
  uint32 VECPEND          :8 ;
  uint32                  :2 ;
  uint32 ISRPEND          :1 ;
  uint32 ISRPRE           :1 ;
  uint32                  :1 ;
  uint32 PENDSTCLR        :1 ;
  uint32 PENDSTSET        :1 ;
  uint32 UNPENDSV         :1 ;
  uint32 PENDSV           :1 ;
  uint32                  :2 ;
  uint32 NMISET           :1 ;

}INTRCTRL_BF;

typedef union
{
    uint32 R;
    INTRCTRL_BF B; 

}INTCTRL_Tag;


/***********************************************************************************
*                   	SYSTEM TIMER 
***********************************************************************************/
#define STCTRL                             (*((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0x010)))     /*SysTick and Status Register*/
#define STRELOAD                           (*((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0x014)))     /*SysTick Reload Value Register */
#define STCURRENT                          (*((volatile uint32 *)(CORTEXM4_PERI_BASE_ADDRESS + 0x018)))     /*SysTick Current Value Regsiter*/



/***********************************************************************************
*                   	Memory Protection UnIt (MPU)   Register
***********************************************************************************/

/***********************************************************************************
*                   	Floating Point Unit (FPU))  Register
***********************************************************************************/

/***********************************************************************************
*                   	GPIO REGISTERS 
***********************************************************************************/
#define PORTA_REG     (*((volatile Dio_PortRegType *)0x400043FC))
#define PORTB_REG     (*((volatile Dio_PortRegType *)0x400053FC))
#define PORTC_REG     (*((volatile Dio_PortRegType *)0x400063FC))
#define PORTD_REG     (*((volatile Dio_PortRegType *)0x400073FC))
#define PORTE_REG     (*((volatile Dio_PortRegType *)0x400243FC))
#define PORTF_REG     (*((volatile Dio_PortRegType *)0x400253FC))

typedef struct
{
    uint32 GPIODATA    ;
    uint32 GPIODIR     ;
    uint32 GPIOIS      ;
    uint32 GPIOIBE     ;
    uint32 GPIOIEV     ;
    uint32 GPIOIM      ;
    uint32 GPIORIS     ;
    uint32 GPIOMIS     ;
    uint32 GPIOICR     ;
    uint32 GPIOAFSEL   ; /*offset : 0x420 -> 424 */

    uint8 Reserved_2[0xDC];
    uint32 GPIODR2R    ; /*offset : 0x500 */
    uint32 GPIODR4R    ;
    uint32 GPIODR8R    ;
    uint32 GPIOODR     ;
    uint32 GPIOPUR     ;
    uint32 GPIOPDR     ;
    uint32 GPIOSLR     ;
    uint32 GPIODEN     ;
    uint32 GPIOLOCK    ;
    uint32 GPIOCR      ;
    uint32 GPIOAMSEL   ;
    uint32 GPIOPCTL    ;
    uint32 GPIOADCCTL  ;
    uint32 GPIODMACTL  ;
    
}Dio_PortRegType;

/***********************************************************************************
*                   	TIMER REGISTERS 
***********************************************************************************/


/***********************************************************************************
*                   	RCC REGISTERS 
***********************************************************************************/

typedef struct
{
    uint32 R0:1;            /*Enable Clock for PortA */       
    uint32 R1:1;            /*Enable Clock for PortB */
    uint32 R2:1;            /*Enable Clock for PortC */
    uint32 R3:1;            /*Enable Clock for PortD */
    uint32 R4:1;            /*Enable Clock for PortE */
    uint32 R5:1;            /*Enable Clock for PortF */

}RCGCGPIO_TagType;

#define RCGCGPIO_REG    (*((volatile RCGCGPIO_TagType*)0x400FE608))

//#define RCGCGPIO                  (*(volatile uint32*)( 0x400FE000 + 0x608 ))

#endif
/***********************************************************************************
*	END OF FILE Mcu_Hw.h
***********************************************************************************/
