/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *
 -------------------------------------------------------------------------------------------------------------------
 *         File: Dio.c
 *       Module: Dio
 *
 *  Description:  Header file Contains all Functions Definitions of Dio Driver
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *                                         INCLUDES
 *********************************************************************************************************************/
#include "Dio.h"
#include "Tm4c123gh6pm_HWMAP.h"

/**********************************************************************************************************************
 *                                 GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

static const Dio_ConfigChannel * Dio_PortChannels = NULL_PTR;

/************************************************************************************
* Description       : Function to Initialize the Dio module.
* Service ID[hex]   : 0x10
* Sync/Async        : Synchronous
* Reentrancy        : Non reentrant
* Parameters (in)   : ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out)  : None
* Return value      : None
************************************************************************************/
void Dio_Init(const Dio_ConfigType * ConfigPtr)
{
	/* address of the first Channels struct --> Channels[0] */
	Dio_PortChannels = ConfigPtr -> Channels;  
}

/************************************************************************************
* Service Name: Dio_WriteChannel
* Parameters (in): ChannelId - ID of DIO channel.
*                  Level - Value to be written.
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to set a level of a channel.
************************************************************************************/
void Dio_WriteChannel(Dio_PortType PortID, Dio_ChannelType CH_Id, Dio_LevelType Level)
{
        if(Level == STD_LOW)
        {
                switch(PortID)
                {
                case PORTA: CLR_BIT(GPIO_PORTA_DATA_REG, CH_Id); break;
                case PORTB: CLR_BIT(GPIO_PORTB_DATA_REG, CH_Id); break;
                case PORTC: CLR_BIT(GPIO_PORTC_DATA_REG, CH_Id); break;
                case PORTD: CLR_BIT(GPIO_PORTD_DATA_REG, CH_Id); break;
                case PORTE: CLR_BIT(GPIO_PORTE_DATA_REG, CH_Id); break;
                case PORTF: CLR_BIT(GPIO_PORTF_DATA_REG, CH_Id); break;
                }
        }
        else if(Level == STD_HIGH)
        {
                switch(PortID)
                {
                case PORTA: SET_BIT(GPIO_PORTA_DATA_REG, CH_Id); break;
                case PORTB: SET_BIT(GPIO_PORTB_DATA_REG, CH_Id); break;
                case PORTC: SET_BIT(GPIO_PORTC_DATA_REG, CH_Id); break;
                case PORTD: SET_BIT(GPIO_PORTD_DATA_REG, CH_Id); break;
                case PORTE: SET_BIT(GPIO_PORTE_DATA_REG, CH_Id); break;
                case PORTF: SET_BIT(GPIO_PORTF_DATA_REG, CH_Id); break;
                }
        }
}

/************************************************************************************
* Description       : Function to return the value of the specified DIO channel.
* Parameters (in)   : CH_Id - ID of DIO channel.
* Parameters (inout): None
* Parameters (out)  : None
* Return value      : Dio_LevelType
************************************************************************************/
Dio_LevelType Dio_ReadChannel(Dio_ChannelType CH_Id)
{
	vuint32_t * Port_Ptr = NULL_PTR;
	Dio_LevelType output = STD_LOW;

    /* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
		switch(Dio_PortChannels[CH_Id].Port_Num)
		{
        case 0:    Port_Ptr = &GPIO_PORTA_DATA_REG;
		               break;
		    case 1:    Port_Ptr = &GPIO_PORTB_DATA_REG;
		               break;
		    case 2:    Port_Ptr = &GPIO_PORTC_DATA_REG;
		               break;
		    case 3:    Port_Ptr = &GPIO_PORTD_DATA_REG;
		               break;
        case 4:    Port_Ptr = &GPIO_PORTE_DATA_REG;
		               break;
        case 5:    Port_Ptr = &GPIO_PORTF_DATA_REG;
		               break;
		}
		/* Read the required channel */
		if(BIT_IS_SET(Port_Ptr,Dio_PortChannels[CH_Id].Ch_Num))
		{
			output = STD_HIGH;
		}
		else
		{
			output = STD_LOW;
		}
	
        return output;
}

/************************************************************************************
* Description       : Function to flip the level of a channel and return the level of the channel after flip.
* Parameters (in)   : CH_Id - ID of DIO channel.
* Parameters (inout): None
* Parameters (out)  : None
* Return value      : Dio_LevelType
************************************************************************************/
Dio_LevelType Dio_FlipChannel(Dio_ChannelType CH_Id)
{
	vuint32_t * Port_Ptr = NULL_PTR;
	Dio_LevelType output = STD_LOW;

    /* Point to the correct PORT register according to the Port Id stored in the Port_Num member */
		switch(Dio_PortChannels[CH_Id].Port_Num)
		{
        case 0:    Port_Ptr = &GPIO_PORTA_DATA_REG;
		               break;
		    case 1:    Port_Ptr = &GPIO_PORTB_DATA_REG;
		               break;
		    case 2:    Port_Ptr = &GPIO_PORTC_DATA_REG;
		               break;
		    case 3:    Port_Ptr = &GPIO_PORTD_DATA_REG;
		               break;
        case 4:    Port_Ptr = &GPIO_PORTE_DATA_REG;
		               break;
        case 5:    Port_Ptr = &GPIO_PORTF_DATA_REG;
		               break;
		}
		/* Read the required channel and write the required level */
		if(BIT_IS_SET(Port_Ptr,Dio_PortChannels[CH_Id].Ch_Num))
		{
			CLR_BIT(*Port_Ptr,Dio_PortChannels[CH_Id].Ch_Num);
			output = STD_LOW;
		}
		else
		{
			SET_BIT(*Port_Ptr,Dio_PortChannels[CH_Id].Ch_Num);
			output = STD_HIGH;
		}

        return output;
}

/************************************************************************************
* Description       : Function to return the value of the specified DIO Port.
* Parameters (in)   : PortID - ID of DIO Port.
* Parameters (inout): None
* Parameters (out)  : None
* Return value      : Dio_PortLevelType
************************************************************************************/
Dio_PortLevelType DIO_ReadPort(Dio_PortType PortID)
{
      uint32_t ret_value = 0;
      switch(PortID)
      {
      case PORTA: ret_value = GPIO_PORTA_DATA_REG; break;
      case PORTB: ret_value = GPIO_PORTB_DATA_REG; break;
      case PORTC: ret_value = GPIO_PORTC_DATA_REG; break;
      case PORTD: ret_value = GPIO_PORTD_DATA_REG; break;
      case PORTE: ret_value = GPIO_PORTE_DATA_REG; break;
      case PORTF: ret_value = GPIO_PORTF_DATA_REG; break;
      }
      return ret_value;
}

/************************************************************************************
* Description       : Function to set a level of a Port
* Parameters (in)   : PortID - ID of DIO Port.
* Parameters (in)   : Level - Value to be written.
* Parameters (inout): None
* Parameters (out)  : None
* Return value      : None
************************************************************************************/
void DIO_WritePort(Dio_PortType PortID,Dio_PortLevelType Level)
{
    switch(PortID)
      {
      case PORTA: GPIO_PORTA_DATA_REG = Level; break;
      case PORTB: GPIO_PORTB_DATA_REG = Level; break;
      case PORTC: GPIO_PORTC_DATA_REG = Level; break;
      case PORTD: GPIO_PORTD_DATA_REG = Level; break;
      case PORTE: GPIO_PORTE_DATA_REG = Level; break;
      case PORTF: GPIO_PORTF_DATA_REG = Level; break;
      }
}



/**********************************************************************************************************************
 *  END OF FILE: Dio.c
 *********************************************************************************************************************/