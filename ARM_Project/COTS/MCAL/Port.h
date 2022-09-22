/******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: Ali Hany
 ******************************************************************************/

#ifndef PORT_H
#define PORT_H

/*
 * Macros for PORT Status
 */
#define PORT_INITIALIZED                (1U)
#define PORT_NOT_INITIALIZED            (0U)

/* Standard AUTOSAR types */
#include "Std_Types.h"

/* Port Pre-Compile Configuration Header file */
#include "Port_Cfg.h"

#include "Utiltes.h"

/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/
   
/* Description: Data type for the symbolic name of a port pin */
typedef uint8_t Port_PinType;

/* Description: Enum to hold PIN direction */
typedef enum
{
    PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;


/* Port pin mode from mode list for use with Port_Init() function */
typedef enum
{
	PORT_PIN_MODE_ADC,
	PORT_PIN_MODE_ALT1,
	PORT_PIN_MODE_ALT2,
	PORT_PIN_MODE_ALT3,
	PORT_PIN_MODE_ALT4,
	PORT_PIN_MODE_ALT5,
	PORT_PIN_MODE_ALT6,
	PORT_PIN_MODE_ALT7,
	PORT_PIN_MODE_ALT8,
	PORT_PIN_MODE_ALT9,
	PORT_PIN_MODE_DIO
}Port_PinModeType;

/* Description: Port Pin Level value from Port pin list */
typedef enum
{
	PORT_PIN_LEVEL_LOW,
	PORT_PIN_LEVEL_HIGH
}Port_PinLevelValue;

/*Description: Enum to choose internal current value for PIN */ 
typedef enum
{
	GPIODR2R,GPIODR4R,GPIODR8R
}Port_PinOutputCurrent;

/*Description: Enum to hold internal resistor type for PIN */ 
typedef enum
{
    OFF,PULL_UP,PULL_DOWN,OPEN_DRAIN
}Port_PinInternalAttachType;

/*************************************************************************************
 *  Description: Structure to configure each individual PIN:
 *  1. the PORT Which the pin belongs to. 0, 1, 2, 3, 4 or 5
 *  2. the number of the pin in the PORT.
 *  3. the direction of pin --> INPUT or OUTPUT
 *  4. the internal resistor --> Disable, Pull up or Pull down
 *  5. initial port pin value (HIGH, LOW)
 *  6. initial port pin mode  (ADC, PORT, ..)
*************************************************************************************/
typedef struct 
{
    uint8_t port_num; 
    Port_PinType pin_num; 
    Port_PinDirectionType direction;
    Port_PinInternalAttachType resistor;
    Port_PinLevelValue initial_value;	        /* PORT_PIN_LEVEL_LOW,PORT_PIN_LEVEL_HIGH */
    Port_PinModeType initial_mode;	        /* e.g. PORT_PIN_MODE_PORT */
	  Port_PinOutputCurrent electric_current_value;    /* e.g. 2mA,4mA,8mA */
}Port_ConfigPin;

/* Array of Port_ConfigPin */
typedef struct
{
	Port_ConfigPin Pin[PORT_CONFIGURED_PINS];
}Port_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/************************************************************************************
* Description        : Function to Initialize the Port Driver module.
* Reentrancy         : Reentrant
* Parameters (in)    : ConfigPtr - Pointer to configuration set
* Parameters (inout) : None
* Parameters (out)   : None
* Return value       : None
************************************************************************************/
void Port_Init( const Port_ConfigType* ConfigPtr );

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Post build structure used with Port_Init API */
extern const Port_ConfigType Port_PinConfig;

#endif /* PORT_H */
