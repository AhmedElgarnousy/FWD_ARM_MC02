/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Bit_Math.h
*		   \brief 
*
*		\details
*
*
***********************************************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

/***********************************************************************************
*	GLOBAL CONSTANT MACROS 
***********************************************************************************/

/***********************************************************************************
*	GLOBAL FUNCTION MACROS
***********************************************************************************/

#define SET_BIT(VAR , BIT_NO)              (VAR |= (1<<BIT_NO)) 
#define CLR_BIT(VAR , BIT_NO)              (VAR &= ~(1<<BIT_NO)) 
#define TOGGLE_BIT(VAR , BIT_NO)           (VAR ^= (1<<BIT_NO)) 
#define GET_BIT(VAR , BIT_NO)              ((VAR >> BIT_NO) & 1) 


/***********************************************************************************
*	BIT BANDING 
***********************************************************************************/
#define BIT_BAND_BASE_PERIP               0x42000000   /*The starting address of the alias region*/
#define BIT_BAND_BASE_SRAM                0x22000000   /*The starting address of the alias region*/
   

#define  Set_Bit_BB_Perip( Reg , Bit_No)   ( ( *(( volatile uint32 *)( BIT_BAND_BASE_PERIP + ((( (uint32) (&Reg) - 0x40000000 ) * 32 ) +( (Bit_No) * 4) )))) = Std_High )  
#define  Set_Bit_BB_SRam( Reg , Bit_No)    ( ( *(( volatile uint32 *)( BIT_BAND_BASE_SRAM + ((( (uint32) (&Reg) - 0x20000000 ) * 32 ) +( (Bit_No) * 4) )))) =  Std_High )  

#define Clear_Bit_BB_Perip( Reg , Bit_No)     ( ( *(( volatile uint32 *)( BIT_BAND_BASE_PERIP + ((( (uint32) (&Reg) - 0x40000000 ) * 32) +((Bit_No) * 4))))) =  Std_Low )  
#define Clear_Bit_BB_SRam( Reg , Bit_No)     ( ( *(( volatile uint32 *)( BIT_BAND_BASE_SRAM + ((((uint32) (&Reg) - 0x20000000 ) * 32 ) +( (Bit_No) * 4))))) = Std_Low )  

#endif 
/***********************************************************************************
*	END OF FILE: Bit_Math.h
***********************************************************************************/

