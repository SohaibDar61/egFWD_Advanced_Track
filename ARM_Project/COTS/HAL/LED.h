/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <LED>
 *       Module:  TIVA-C LEDS 
 *
 *  Description: 
 *  
 *********************************************************************************************************************/
#ifndef LED_H
#define LED_H

/**********************************************************************************************************************
 *                                         INCLUDES
 *********************************************************************************************************************/
#include "Dio.h"

/**********************************************************************************************************************
 *                                  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define RED_LED     0x02
#define BLUE_LED    0x04
#define GREEN_LED   0x08

/**********************************************************************************************************************
 *                                 GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *                             GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *                                   GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *                                 GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LED_TURN_ON(uint8_t ID);
void LED_TURN_OFF(uint8_t ID);
 
#endif  /* LED_H */

/**********************************************************************************************************************
 *  END OF FILE: LED.h
 *********************************************************************************************************************/