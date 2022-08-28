/**********************************************************************************
*	FILE DESCRIPTION
*--------------------------------------------------------------------------------*/
/**			\file  Dio_Program.c
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
#include "Dio_Config.h"
#include "Dio_Private.h"


Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    Dio_PortType PortId = ChannelId / 8 ;               /*To Get the Port Number for the Enum*/
    uint8  Channel_No =  ChannelId % 8;                 /*To get the pin number (0 -> 7)*/
    Dio_LevelType Level;
    switch(PortId)
    {
        case Dio_Port_A:
                         Level= GET_BIT(PORTA_REG.GPIODATA, Channel_No); break;
        case Dio_Port_B: 
                         Level= GET_BIT(PORTB_REG.GPIODATA, Channel_No); break;
        case Dio_Port_C:   
                         Level= GET_BIT(PORTC_REG.GPIODATA, Channel_No); break;
        case Dio_Port_D:   
                         Level= GET_BIT(PORTD_REG.GPIODATA, Channel_No); break;
        case Dio_Port_E:   
                         Level= GET_BIT(PORTE_REG.GPIODATA, Channel_No); break;
        case Dio_Port_F:   
                         Level= GET_BIT(PORTF_REG.GPIODATA, Channel_No); break;
    }
    return Level;
}

void Dio_WriteChannel(Dio_ChannelType channelId  , Dio_LevelType Level)
{
    Dio_PortType PortId = channelId / 8 ; /*To Get the Port Number for the Enum*/
    uint8  Channel_No =  channelId % 8;   /*To get the pin number (0 -> 7)*/

	/*Enable the clock to the port by setting the appropriate bits in the RCGCGPIO register */
   // Set_Bit_BB_Perip(RCGCGPIO_REG.R0 , Channel_No); 

    /*Set the direction of the GPIO port pins(GPIODIR) 3FC-> 0b1111111100 */       	

    switch(PortId)
    {
        case Dio_Port_A:  
					RCGCGPIO_REG.R0 = Std_High;
             Set_Bit_BB_Perip(PORTA_REG.GPIODIR , Channel_No); 
             Clear_Bit_BB_Perip(PORTA_REG.GPIOAFSEL , Channel_No);
             Set_Bit_BB_Perip(PORTA_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTA_REG.GPIOAMSEL , Channel_No);
            if(Std_High == Level)
            {
                Set_Bit_BB_Perip(PORTA_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTA_REG.GPIODATA , Channel_No );
            }
            break;
        case Dio_Port_B:

          Set_Bit_BB_Perip(PORTB_REG.GPIODIR , Channel_No);  
          RCGCGPIO_REG.R1 = Std_High;  
           Clear_Bit_BB_Perip(PORTB_REG.GPIOAFSEL , Channel_No);
             Set_Bit_BB_Perip(PORTB_REG.GPIODEN , Channel_No);   
             Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);
          if(Std_High == Level)
            {
                Set_Bit_BB_Perip(PORTB_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTB_REG.GPIODATA , Channel_No );
            }
            break;

        case Dio_Port_C:  
          Set_Bit_BB_Perip(PORTC_REG.GPIODIR , Channel_No);  
           RCGCGPIO_REG.R2 = Std_High;
           Clear_Bit_BB_Perip(PORTC_REG.GPIOAFSEL , Channel_No);
          Set_Bit_BB_Perip(PORTC_REG.GPIODEN , Channel_No);   
          Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);     
         if(Std_High == Level)
            {  
                Set_Bit_BB_Perip(PORTC_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTC_REG.GPIODATA , Channel_No );
            }
            break;
        
        case Dio_Port_D:  
              Set_Bit_BB_Perip(PORTD_REG.GPIODIR , Channel_No);  
              RCGCGPIO_REG.R3 = Std_High; 
              Clear_Bit_BB_Perip(PORTD_REG.GPIOAFSEL , Channel_No);
              Set_Bit_BB_Perip(PORTD_REG.GPIODEN , Channel_No);
              Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);       
           if(Std_High == Level)
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
               Set_Bit_BB_Perip(PORTE_REG.GPIODEN , Channel_No);   
               Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);
       
          if(Std_High == Level)
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
             Set_Bit_BB_Perip(PORTF_REG.GPIODEN , Channel_No);
             Clear_Bit_BB_Perip(PORTF_REG.GPIOAMSEL , Channel_No);


        if(Std_High == Level)
            {
                Set_Bit_BB_Perip(PORTF_REG.GPIODATA , Channel_No );
            }
            else
            {
                 Clear_Bit_BB_Perip(PORTF_REG.GPIODATA , Channel_No );
            }
            break;
						/*
        default : 
            #error "Wrong passing parameters"
            break;*/
    }

	
    /*Configure the PIN as GPIO (GPIOAFSEL) */
    /*Set the drive strength for each of the pins through the GPIODR2R, GPIODR4R, and GPIODR8R registers*/
    /*Program each pad in the port to have either pull-up, pull-down, or open drain functionality through the GPIOPUR, GPIOPDR, GPIOODR register. Slew rate may also be programmed, if needed,
    through the GPIOSLR register*/

    /*To enable GPIO pins as digital I/Os, set the appropriate DEN bit in the GPIODEN register. To
    enable GPIO pins to their analog function (if available), set the GPIOAMSEL bit in the
    GPIOAMSEL register.*/
   
//    Set_Bit_BB_Perip( PORTA_REG.GPIODEN, 1 );

}

Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
    Dio_PortLevelType PortLevel;
    switch(PortId)
    {
        case Dio_Port_A: PortLevel = PORTA_REG.GPIODATA; break;
        case Dio_Port_B: PortLevel = PORTB_REG.GPIODATA; break;
        case Dio_Port_C: PortLevel = PORTC_REG.GPIODATA; break;
        case Dio_Port_D: PortLevel = PORTD_REG.GPIODATA; break;
        case Dio_Port_E: PortLevel = PORTE_REG.GPIODATA; break;
        case Dio_Port_F: PortLevel = PORTF_REG.GPIODATA; break;
    }
    return PortLevel;
}

void Dio_WritePort(Dio_PortType PortId , Dio_PortLevelType Level)
{
        switch (PortId)
        {
            case Dio_Port_A: RCGCGPIO_REG.R0 = Std_High;  
                             PORTA_REG.GPIODIR = 0xff;
                             PORTA_REG.GPIODATA = Level;   
                             break;
            case Dio_Port_B:  RCGCGPIO_REG.R1 = Std_High;  
                             PORTB_REG.GPIODIR = 0xff; 
                             PORTB_REG.GPIODATA = Level;  
                             break;
            case Dio_Port_C: RCGCGPIO_REG.R2 = Std_High;  
                             PORTC_REG.GPIODIR = 0xff;
                             PORTC_REG.GPIODATA = Level; 
                             break;
            case Dio_Port_D: RCGCGPIO_REG.R3 = Std_High;  
                             PORTD_REG.GPIODIR = 0xff;  
                             PORTD_REG.GPIODATA = Level; 
                             break;
            case Dio_Port_E: RCGCGPIO_REG.R4 = Std_High;  
                             PORTE_REG.GPIODIR = 0xff;
                             PORTE_REG.GPIODATA = Level;
                            break;
            case Dio_Port_F: RCGCGPIO_REG.R5 = Std_High;  
                             PORTF_REG.GPIODIR = 0xff; 
                            PORTF_REG.GPIODATA = Level;    
                            break;

        }

}

Dio_LevelType Dio_FlipChannel(Dio_ChannelType channelId)
{

    
}
/***********************************************************************************
*	END OF FILE Dio_Program.c
***********************************************************************************/


