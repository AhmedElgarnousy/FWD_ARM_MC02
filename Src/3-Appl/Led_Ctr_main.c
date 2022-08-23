#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "Dio_Interface.h"
#include "IntCtrl_Interface.h"
#include "SysTick_Interface.h"
#include "Led_Interface.h"

/**********************************************
    MCU Driver
**********************************************/
    RCGCGPIO_REG.R5 = Std_High;     //Enable Clock for PortF 


int main()
{

	while(1)
	{
		/*Remeber to check if u want to modify Clock in Startup codes*/
	}

}