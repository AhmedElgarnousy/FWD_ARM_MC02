
#include "Std_Types.h"
#include "Mcu_Hw.h"

#include "Dio_Interface.h"
#include "Dio_Config.h"
#include "Dio_Private.h"
//#include "TM4C123.h"



int main()
{
	 Dio_WriteChannel(Dio_Channel_D4, Std_High);
	while(1)
	{
		
		/*Remeber to check if u want to modify Clock in Startup codes*/
	}

}