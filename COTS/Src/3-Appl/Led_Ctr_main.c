/**********************************************
   				 INCLUDES
**********************************************/
#include "Std_Types.h"
#include "Bit_Math.h"
#include "Mcu_Hw.h"

#include "Dio_Interface.h"
#include "IntCtrl_Interface.h"
#include "SysTick_Interface.h"
#include "Led_Interface.h"


#include "TM4C123GH6PM.h"
#include "stdint.h"

/**********************************************
   				 MCU Driver
**********************************************/
#define GI_ENABLE_PRIMASK()             __asm("CPSIE I");
#define GI_DISABLE_PRIMASK()            __asm("CPSID I");

#define GI_ENABLE_FAULTMASK()             __asm("CPSIE F");
#define GI_DISABLE_FAULTMASK()            __asm("CPSID F");
    
/**********************************************
   				App APIs PROTOTYPES
**********************************************/
 void Systick_Notification(void);
 void App_BlinkLed();


/**********************************************
   				 MACROS
**********************************************/
#define ON_TIMEOUT					3
#define Off_TIMEOUT					6

int main()
{
  IntCtrl_Init();
	SysTick_Init();
	SysTick_StartTimer();
	SysTick_SetCallBack (App_BlinkLed);

	
	while(1)
	{
		
	}
}


void App_BlinkLed()
{
	static uint32 OnTimeCounter = 0;
	static uint32 OffTimeCounter = 0;

	if(OnTimeCounter ==  ON_TIMEOUT)
	{
		if(OffTimeCounter ==  Off_TIMEOUT)
		{
			OnTimeCounter = 0;
			OffTimeCounter = 0;
		}
		else
		{
			Led_TurnOff(Dio_Channel_F1);
			OffTimeCounter ++ ;	
		}
	}
	else
	{
		Led_TurnOn(Dio_Channel_F1);
		OnTimeCounter ++ ;	
	}

}
