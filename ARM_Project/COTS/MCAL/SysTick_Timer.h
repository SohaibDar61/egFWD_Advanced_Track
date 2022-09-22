/******************************************************************************
 *
 * File Name: SysTick_Timer.h
 *     Module: SysTick_Timer
 *
 * Description: Conguration of module SysTick_Timer
 *
 *******************************************************************************/
#ifndef _SYSTICK_TIMER_H
#define _SYSTICK_TIMER_H

/*******************************************************************************
 *                                  INCLUDES                         *
 *******************************************************************************/  
#include "Std_Types.h"


/*******************************************************************************
 *                                   MACROS                         *
 *******************************************************************************/
#define NVIC_ST_CTRL_R          (*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R        (*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R       (*((volatile unsigned long *)0xE000E018))



/*******************************************************************************
 *                              Functions Declarations                         *
 *******************************************************************************/
void SysTick_Disable(void);
void SysTick_Enable(void);
void SysTickPeriodSet(uint32_t Period);
uint8_t SysTick_Is_Time_out(void);


#endif  /*  _SYSTICK_TIMER_H */
