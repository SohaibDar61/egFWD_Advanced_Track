
/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *
 -------------------------------------------------------------------------------------------------------------------
 *         File: Dio.h
 *       Module: Dio
 *
 *  Description:  Header file Contains all Configuration of Dio Driver
 *
 *********************************************************************************/
#ifndef DIO_H
#define DIO_H

/**********************************************************************************************************************
 *                                         INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Utiltes.h"
#include "DIO_Cfg.h"


/*******************************************************************************
 *                                      Definitions MACROS                                 *
 *******************************************************************************/

#define PORTA 1
#define PORTB 2
#define PORTC 3
#define PORTD 4
#define PORTE 5
#define PORTF 6

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7


/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/

/* Type definition for Dio_ChannelType used by the DIO APIs */
typedef uint8_t Dio_ChannelType;

/* Type definition for Dio_PortType used by the DIO APIs */
typedef uint8_t Dio_PortType;

/* Type definition for Dio_LevelType used by the DIO APIs */
typedef uint8_t Dio_LevelType;

/* Type definition for Dio_PortLevelType used by the DIO APIs */
typedef uint32_t Dio_PortLevelType;



/*******************************************************************************
 *                              CONFIGURATION STRUCTURE                        *
 *******************************************************************************/

/* Structure for Dio_ChannelGroup */
typedef struct
{
  /* Mask which defines the positions of the channel group */
  uint8_t mask;
  /* Position of the group from LSB */
  uint8_t offset;
  /* This shall be the port ID which the Channel group is defined. */
  Dio_PortType PortIndex;
	
} Dio_ChannelGroupType;

typedef struct
{
	/* Member contains the ID of the Port that this channel belongs to */
	Dio_PortType Port_Num;
	/* Member contains the ID of the Channel*/
	Dio_ChannelType Ch_Num;
}Dio_ConfigChannel;

/* Data Structure required for initializing the Dio Driver */
typedef struct 
{
	Dio_ConfigChannel Channels[DIO_CONFIGURED_CHANNLES];
} Dio_ConfigType;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

/* Function for DIO Initialization API */
void Dio_Init(const Dio_ConfigType * ConfigPtr);

/* Function for DIO read Channel API */
Dio_PortLevelType DIO_ReadPort(Dio_PortType PortId);

/* Function for DIO write Channel API */
void DIO_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);

/* Function for DIO read Port API */
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);

/* Function for DIO write Port API */
void Dio_WriteChannel(Dio_PortType PortID,Dio_ChannelType ChannelId, Dio_LevelType Level);

/* Function for DIO flip channel API */
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by Dio and other modules */
extern const Dio_ConfigType Dio_Configuration;

#endif
