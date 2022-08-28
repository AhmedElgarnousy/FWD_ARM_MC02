/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Led_Program.c
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


#include "Dio_Interface.h"
#include "Led_Interface.h"
#include "Led_Config.h"
#include "Led_Private.h"


void Led_TurnOn(Dio_ChannelType ChannelId)
{
	Dio_WriteChannel( ChannelId  , Std_High );
}

void Led_TurnOff(Dio_ChannelType ChannelId)
{
	Dio_WriteChannel( ChannelId  , Std_Low );
}
void Led_ToggleChannel(Dio_ChannelType ChannelId)
{
	Dio_PortType PortId = ChannelId / 8 ; /*To Get the Port Number for the Enum*/
    uint8  Channel_No =  ChannelId % 8;   /*To get the pin number (0 -> 7)*/
	uint8 status;

 switch(PortId)
    {
        case Dio_Port_A: 
					 RCGCGPIO_REG.R0 = Std_High;
				   Set_Bit_BB_Perip(PORTA_REG.GPIODIR , Channel_No); 
           Clear_Bit_BB_Perip(PORTA_REG.GPIOAFSEL , Channel_No);
			     status = GET_BIT(PORTA_REG.GPIODATA , Channel_No);
	     
             Set_Bit_BB_Perip(PORTA_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTA_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTA_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTA_REG.GPIODATA , Channel_No );
            }
            break;
        case Dio_Port_B:
					RCGCGPIO_REG.R1 = Std_High;

          status = GET_BIT(PORTB_REG.GPIODATA , Channel_No);
	     Set_Bit_BB_Perip(PORTB_REG.GPIODIR , Channel_No); 
             
             Clear_Bit_BB_Perip(PORTB_REG.GPIOAFSEL , Channel_No);
             Set_Bit_BB_Perip(PORTB_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTB_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTB_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTB_REG.GPIODATA , Channel_No );
            }
            break;

        case Dio_Port_C: 
						RCGCGPIO_REG.R2 = Std_High;
				 Set_Bit_BB_Perip(PORTC_REG.GPIODIR , Channel_No); 
             Clear_Bit_BB_Perip(PORTC_REG.GPIOAFSEL , Channel_No);
         status = GET_BIT(PORTC_REG.GPIODATA , Channel_No);
	    
             Set_Bit_BB_Perip(PORTC_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTC_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTC_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTC_REG.GPIODATA , Channel_No );
            }
            break;
        
        case Dio_Port_D: 
							RCGCGPIO_REG.R3 = Std_High;	
Set_Bit_BB_Perip(PORTD_REG.GPIODIR , Channel_No);    
             Clear_Bit_BB_Perip(PORTD_REG.GPIOAFSEL , Channel_No);				
              status = GET_BIT(PORTD_REG.GPIODATA , Channel_No);
	     
             Set_Bit_BB_Perip(PORTD_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTD_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTD_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTD_REG.GPIODATA , Channel_No );
            }
            break;
        case Dio_Port_E: 
					RCGCGPIO_REG.R4 = Std_High;
				Set_Bit_BB_Perip(PORTE_REG.GPIODIR , Channel_No);             
             Clear_Bit_BB_Perip(PORTE_REG.GPIOAFSEL , Channel_No);
              status = GET_BIT(PORTE_REG.GPIODATA , Channel_No);
	     
             Set_Bit_BB_Perip(PORTE_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTE_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTE_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTE_REG.GPIODATA , Channel_No );
            }
            break;
        case Dio_Port_F: 
					RCGCGPIO_REG.R5 = Std_High;
				Set_Bit_BB_Perip(PORTF_REG.GPIODIR , Channel_No); 
             Clear_Bit_BB_Perip(PORTF_REG.GPIOAFSEL , Channel_No);
	        status = GET_BIT(PORTF_REG.GPIODATA , Channel_No);
	     
             Set_Bit_BB_Perip(PORTF_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);
            if(status == 0)
            {
                Set_Bit_BB_Perip(PORTF_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTF_REG.GPIODATA , Channel_No );
            }
            break;
}	
}
/***********************************************************************************
*	END OF FILE Led_Program.c
***********************************************************************************/


