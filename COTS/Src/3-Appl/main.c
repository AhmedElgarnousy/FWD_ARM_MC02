#include "Std_Types.h"
#include "Bit_Math.h"

#include "IntCtrl_Interface.h"
#include "Mcu_Hw.h"

#define GI_ENABLE_PRIMASK()             __asm("CPSIE I");
#define GI_DISABLE_PRIMASK()            __asm("CPSID I");

#define GI_ENABLE_FAULTMASK()             __asm("CPSIE F");
#define GI_DISABLE_FAULTMASK()            __asm("CPSID F");

main(void )
{
	/*Enable the BASEPRI register*/
	
	IntCtrl_Init();
	
 
	
/*__asm("MOV R0, 0x0");*/
	
	while(1)
	{

	}

}