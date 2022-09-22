 /******************************************************************************
 *
 * Module: Utiltes
 *
 * File Name: Utiltes.h
 *
 * Description: Commonly used Macros
 *
 *******************************************************************************/

#ifndef _UTILITES_H_
#define _UTILITES_H_

/**********************************************************************************************************************
 *                                               GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* GET a certain bit in any register */
#define GET_BIT(reg,n)				 (((reg)>>(n))&1)
/* Set a certain bit in any register */
#define SET_BIT(reg,n)				 (reg|=(1<<n))
/* Clear a certain bit in any register */
#define CLR_BIT(reg,n)				 (reg&=~(1<<n))
/* Toggle a certain bit in any register */
#define TOGGLE_BIT(reg,n)			 (reg^=(1<<n))
/* GET all bits in any register */
#define GET_REG(reg)				   (reg)
/* SET all bits in any register */
#define SET_REG(reg)				   ((reg)=0XFF)
/* CLR all bits in any register */
#define CLR_REG(reg)				   ((reg)=0X00)
/* Toggle all bits in any register */
#define TOGGLE_REG(reg)				 ((reg)^=0xFF)
/* ASSIGN a certain value in any register */
#define ASSIGN_REG(reg,value)	 ((reg)=(value))
/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG = (REG>>num) | (REG << ((sizeof(REG) * 8)-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG = (REG<<num) | (REG >> ((sizeof(REG) * 8)-num)) )

/* Checks if a certain bit in the specified register is set and return True if yes. */
#define BIT_IS_SET(REG,BIT)   ((*REG) & (1<<BIT))

/* Checks if a certain bit in the specified register is cleared and return True if yes. */
#define BIT_IS_CLR(REG,BIT)   (!((*REG) & (1<<BIT)))


/* This is used to define the void pointer to zero definition */
#define NULL_PTR                  ((void *)0)


#define GET_LOW_NIB(reg)		    	((reg)&0X0F)
#define SET_LOW_NIB(reg)			    ((reg)|=0X0F)
#define CLR_LOW_BIT(reg)			    ((reg)&=0XF0)
#define TOGGLE_LOW_NIB(reg)			  ((reg)^=0X0F)
#define ASSIGN_LOW_NIB(reg,value)	((reg)=(((reg)&0XF0)|((value)&0x0F))) 

#define GET_HIGH_NIB(reg)			  (((reg)&0XF0)>>4)
#define SET_HIGH_NIB(reg)			  ((reg)|=0XF0)
#define CLR_HIGH_BIT(reg)			  ((reg)&=0X0F)
#define TOGGLE_HIGH_NIB(reg)		((reg)^=0XF0)
#define ASSIGN_HIGH_NIB(reg)		((reg)=((value<<4)|(reg&0X0F)))



/**********************************************************************************************************************
 *                                    GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *                                         GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *                                    GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/



#endif   /* UTILITES_H_ */



/**********************************************************************************************************************
 *  END OF FILE: Utils.h
 *********************************************************************************************************************/