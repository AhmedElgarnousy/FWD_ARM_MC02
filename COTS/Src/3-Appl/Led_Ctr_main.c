#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "Dio_Interface.h"
#include "IntCtrl_Interface.h"
#include "SysTick_Interface.h"
#include "Led_Interface.h"


void Systick_Notification(void);



/**********************************************
    MCU Driver
**********************************************/
void Systick_Notification(void)
{
	Led_TurnOn(Dio_Channel_F1);
}

int main()
{
	SysTick_SetCallBack (Systick_Notification);
	
	while(1)
	{
		
	}

}


