#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "Dio_Interface.h"

#include "Led_Interface.h"
#include "Led_Config.h"
#include "Led_Private.h"



int main()
{
	 Led_TurnOn(Dio_Channel_F1);
	 Led_TurnOn(Dio_Channel_F2);
	 Led_TurnOn(Dio_Channel_F3);
	while(1)
	{
		
		/*Remeber to check if u want to modify Clock in Startup codes*/
	}

}