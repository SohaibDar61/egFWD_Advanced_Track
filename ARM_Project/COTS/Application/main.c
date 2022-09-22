/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <DIO_CFG>
 *       Module:  -
 *
 *  Description:      
 *  
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *                                    INCLUDES
 *********************************************************************************************************************/
#include "Port.h"
#include "Dio.h"
#include "NVIC.h"
#include "LED.h"
#include "SysTick_Timer.h"


/**********************************************************************************************************************
 *                                    GLOBAL variables section
 *********************************************************************************************************************/
volatile static uint8_t ticks = 0;



/**********************************************************************************************************************
 *                                    GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
static void Init_Hardware();
void SysTick_Handler();



/* E */
int main ()
{
	  Init_Hardware();

    while(1)
    {
			
			if(ticks <= 5)
			{
				LED_TURN_ON(RED_LED);
			}
			else if(ticks > 5 && ticks <= 7)
			{
				LED_TURN_OFF(RED_LED);
			}
			else if(ticks > 7 && ticks <= 11)
			{
				LED_TURN_ON(BLUE_LED);
			}
			else if(ticks > 11 && ticks <= 14)
			{
				LED_TURN_OFF(BLUE_LED);
			}
			else if(ticks > 14 && ticks <= 17)
			{
				LED_TURN_ON(GREEN_LED);
			}
			else if(ticks > 17 && ticks <= 20)
			{
				LED_TURN_OFF(GREEN_LED);
				ticks = 0;
			}
    }
}





void SysTick_Handler()
{
  ticks++;
}


static void Init_Hardware()
{
	  Port_Init(&Port_PinConfig);

    Dio_Init(&Dio_Configuration);
	
    SysTick_Disable();
  
    SysTickPeriodSet(1000);  //Time in ms //
  
    SysTick_Enable();
}