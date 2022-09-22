/******************************************************************************
 *
 * Module: Tm4c123gh6pm_HWMAP
 *
 * File Name: Tm4c123gh6pm_HWMAP.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller Registers
 *
 * Author: Sohaib Dar
 ******************************************************************************/

#ifndef _TM4C123GH6PM_HWMAP_H_
#define _TM4C123GH6PM_HWMAP_H_


#include "Std_Types.h"

/*******************************************************************************
 *                              Module Definitions                             *
 *******************************************************************************/


/*****************************************************************************
GPIO registers (PORTA)
*****************************************************************************/
/* GPIO Registers base addresses */

#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000


#define GPIO_PORTA_DATA_REG       (*((vuint32_t *)0x400043FC))
#define GPIO_PORTB_DATA_REG       (*((vuint32_t *)0x400053FC))
#define GPIO_PORTC_DATA_REG       (*((vuint32_t *)0x400063FC))
#define GPIO_PORTD_DATA_REG       (*((vuint32_t *)0x400073FC))
#define GPIO_PORTE_DATA_REG       (*((vuint32_t *)0x400243FC))
#define GPIO_PORTF_DATA_REG       (*((vuint32_t *)0x400253FC))

/* GPIO Registers offset addresses */
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_GPIODR2R_REG_OFFSET          0x500
#define PORT_GPIODR4R_REG_OFFSET          0x504
#define PORT_GPIODR8R_REG_OFFSET          0x508
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

/* RCC Registers */
#define SYSCTL_REGCGC2_REG                (*((vuint32_t *)0x400FE108)) 


/* GPT Registers base addresses */
#define GPT_TIMER0_BASE_ADDRESS           0x40030000
#define GPT_TIMER1_BASE_ADDRESS           0x40031000
#define GPT_TIMER2_BASE_ADDRESS           0x40032000
#define GPT_TIMER3_BASE_ADDRESS           0x40033000
#define GPT_TIMER4_BASE_ADDRESS           0x40034000
#define GPT_TIMER5_BASE_ADDRESS           0x40035000
#define GPT_WIDE_TIMER0_BASE_ADDRESS      0x40036000
#define GPT_WIDE_TIMER1_BASE_ADDRESS      0x40037000
#define GPT_WIDE_TIMER2_BASE_ADDRESS      0x4004C000
#define GPT_WIDE_TIMER3_BASE_ADDRESS      0x4004D000
#define GPT_WIDE_TIMER4_BASE_ADDRESS      0x4004E000
#define GPT_WIDE_TIMER5_BASE_ADDRESS      0x4004F000

/* Timers Registers offset addresses */
#define GPT_GPTMCFG_REG_OFFSET              0x000
#define GPT_GPTMTAMR_REG_OFFSET             0x004
#define GPT_GPTMTBMR_REG_OFFSET             0x008
#define GPT_GPTMCTL_REG_OFFSET              0x00C
#define GPT_GPTMSYNC_REG_OFFSET             0x010
#define GPT_GPTMIMR_REG_OFFSET              0x018
#define GPT_GPTMRIS_REG_OFFSET              0x01C
#define GPT_GPTMMIS_REG_OFFSET              0x020
#define GPT_GPTMICR_REG_OFFSET              0x024
#define GPT_GPTMTAILR_REG_OFFSET            0x028
#define GPT_GPTMTBILR_REG_OFFSET            0x02C
#define GPT_GPTMTAMATCHR_REG_OFFSET         0x030
#define GPT_GPTMTBMATCHR_REG_OFFSET         0x034
#define GPT_GPTMTAPR_REG_OFFSET             0x038
#define GPT_GPTMTBPR_REG_OFFSET             0x03C
#define GPT_GPTMTAPMR_REG_OFFSET            0x040
#define GPT_GPTMTBPMR_REG_OFFSET            0x044
#define GPT_GPTMTAR_REG_OFFSET              0x048
#define GPT_GPTMTBR_REG_OFFSET              0x04C
#define GPT_GPTMTAV_REG_OFFSET              0x050
#define GPT_GPTMTBV_REG_OFFSET              0x054
#define GPT_GPTMRTCPD_REG_OFFSET            0x058
#define GPT_GPTMTAPS_REG_OFFSET             0x05C
#define GPT_GPTMTBPS_REG_OFFSET             0x060
#define GPT_GPTMTAPV_REG_OFFSET             0x064
#define GPT_GPTMTBPV_REG_OFFSET             0x068


/* GPT Registers base addresses */
#define GPT_TIMER0_BASE_ADDRESS           0x40030000
#define GPT_TIMER1_BASE_ADDRESS           0x40031000
#define GPT_TIMER2_BASE_ADDRESS           0x40032000
#define GPT_TIMER3_BASE_ADDRESS           0x40033000
#define GPT_TIMER4_BASE_ADDRESS           0x40034000
#define GPT_TIMER5_BASE_ADDRESS           0x40035000
#define GPT_WIDE_TIMER0_BASE_ADDRESS      0x40036000
#define GPT_WIDE_TIMER1_BASE_ADDRESS      0x40037000
#define GPT_WIDE_TIMER2_BASE_ADDRESS      0x4004C000
#define GPT_WIDE_TIMER3_BASE_ADDRESS      0x4004D000
#define GPT_WIDE_TIMER4_BASE_ADDRESS      0x4004E000
#define GPT_WIDE_TIMER5_BASE_ADDRESS      0x4004F000

/* Timers Registers offset addresses */
#define GPT_GPTMCFG_REG_OFFSET              0x000
#define GPT_GPTMTAMR_REG_OFFSET             0x004
#define GPT_GPTMTBMR_REG_OFFSET             0x008
#define GPT_GPTMCTL_REG_OFFSET              0x00C
#define GPT_GPTMSYNC_REG_OFFSET             0x010
#define GPT_GPTMIMR_REG_OFFSET              0x018
#define GPT_GPTMRIS_REG_OFFSET              0x01C
#define GPT_GPTMMIS_REG_OFFSET              0x020
#define GPT_GPTMICR_REG_OFFSET              0x024
#define GPT_GPTMTAILR_REG_OFFSET            0x028
#define GPT_GPTMTBILR_REG_OFFSET            0x02C
#define GPT_GPTMTAMATCHR_REG_OFFSET         0x030
#define GPT_GPTMTBMATCHR_REG_OFFSET         0x034
#define GPT_GPTMTAPR_REG_OFFSET             0x038
#define GPT_GPTMTBPR_REG_OFFSET             0x03C
#define GPT_GPTMTAPMR_REG_OFFSET            0x040
#define GPT_GPTMTBPMR_REG_OFFSET            0x044
#define GPT_GPTMTAR_REG_OFFSET              0x048
#define GPT_GPTMTBR_REG_OFFSET              0x04C
#define GPT_GPTMTAV_REG_OFFSET              0x050
#define GPT_GPTMTBV_REG_OFFSET              0x054
#define GPT_GPTMRTCPD_REG_OFFSET            0x058
#define GPT_GPTMTAPS_REG_OFFSET             0x05C
#define GPT_GPTMTBPS_REG_OFFSET             0x060
#define GPT_GPTMTAPV_REG_OFFSET             0x064
#define GPT_GPTMTBPV_REG_OFFSET             0x068


/*****************************************************************************
Systick Timer Registers
*****************************************************************************/
#define SYSTICK_CTRL_REG          (*((vuint32_t *)0xE000E010))
#define SYSTICK_RELOAD_REG        (*((vuint32_t *)0xE000E014))
#define SYSTICK_CURRENT_REG       (*((vuint32_t *)0xE000E018))

/*****************************************************************************
PLL Registers
*****************************************************************************/
#define SYSCTL_RIS_REG            (*((vuint32_t *)0x400FE050))
#define SYSCTL_RCC_REG            (*((vuint32_t *)0x400FE060))
#define SYSCTL_RCC2_REG           (*((vuint32_t *)0x400FE070))

/*****************************************************************************
NVIC Registers
*****************************************************************************/
#define NVIC_PRI0_REG             (*((vuint32_t *)0xE000E400))
#define NVIC_PRI1_REG             (*((vuint32_t *)0xE000E404))
#define NVIC_PRI2_REG             (*((vuint32_t *)0xE000E408))
#define NVIC_PRI3_REG             (*((vuint32_t *)0xE000E40C))
#define NVIC_PRI4_REG             (*((vuint32_t *)0xE000E410))
#define NVIC_PRI5_REG             (*((vuint32_t *)0xE000E414))
#define NVIC_PRI6_REG             (*((vuint32_t *)0xE000E418))
#define NVIC_PRI7_REG             (*((vuint32_t *)0xE000E41C))
#define NVIC_PRI8_REG             (*((vuint32_t *)0xE000E420))
#define NVIC_PRI9_REG             (*((vuint32_t *)0xE000E424))
#define NVIC_PRI10_REG            (*((vuint32_t *)0xE000E428))
#define NVIC_PRI11_REG            (*((vuint32_t *)0xE000E42C))
#define NVIC_PRI12_REG            (*((vuint32_t *)0xE000E430))
#define NVIC_PRI13_REG            (*((vuint32_t *)0xE000E434))
#define NVIC_PRI14_REG            (*((vuint32_t *)0xE000E438))
#define NVIC_PRI15_REG            (*((vuint32_t *)0xE000E43C))
#define NVIC_PRI16_REG            (*((vuint32_t *)0xE000E440))
#define NVIC_PRI17_REG            (*((vuint32_t *)0xE000E444))
#define NVIC_PRI18_REG            (*((vuint32_t *)0xE000E448))
#define NVIC_PRI19_REG            (*((vuint32_t *)0xE000E44C))
#define NVIC_PRI20_REG            (*((vuint32_t *)0xE000E450))
#define NVIC_PRI21_REG            (*((vuint32_t *)0xE000E454))
#define NVIC_PRI22_REG            (*((vuint32_t *)0xE000E458))
#define NVIC_PRI23_REG            (*((vuint32_t *)0xE000E45C))
#define NVIC_PRI24_REG            (*((vuint32_t *)0xE000E460))
#define NVIC_PRI25_REG            (*((vuint32_t *)0xE000E464))
#define NVIC_PRI26_REG            (*((vuint32_t *)0xE000E468))
#define NVIC_PRI27_REG            (*((vuint32_t *)0xE000E46C))
#define NVIC_PRI28_REG            (*((vuint32_t *)0xE000E470))
#define NVIC_PRI29_REG            (*((vuint32_t *)0xE000E474))
#define NVIC_PRI30_REG            (*((vuint32_t *)0xE000E478))
#define NVIC_PRI31_REG            (*((vuint32_t *)0xE000E47C))
#define NVIC_PRI32_REG            (*((vuint32_t *)0xE000E480))
#define NVIC_PRI33_REG            (*((vuint32_t *)0xE000E484))
#define NVIC_PRI34_REG            (*((vuint32_t *)0xE000E488))

#define NVIC_EN0_REG              (*((vuint32_t *)0xE000E100))
#define NVIC_EN1_REG              (*((vuint32_t *)0xE000E104))
#define NVIC_EN2_REG              (*((vuint32_t *)0xE000E108))
#define NVIC_EN3_REG              (*((vuint32_t *)0xE000E10C))
#define NVIC_EN4_REG              (*((vuint32_t *)0xE000E110))
#define NVIC_DIS0_REG             (*((vuint32_t *)0xE000E180))
#define NVIC_DIS1_REG             (*((vuint32_t *)0xE000E184))
#define NVIC_DIS2_REG             (*((vuint32_t *)0xE000E188))
#define NVIC_DIS3_REG             (*((vuint32_t *)0xE000E18C))
#define NVIC_DIS4_REG             (*((vuint32_t *)0xE000E190))

#define NVIC_SYSTEM_PRI1_REG      (*((vuint32_t *)0xE000ED18))
#define NVIC_SYSTEM_PRI2_REG      (*((vuint32_t *)0xE000ED1C))
#define NVIC_SYSTEM_PRI3_REG      (*((vuint32_t *)0xE000ED20))
#define NVIC_SYSTEM_SYSHNDCTRL    (*((vuint32_t *)0xE000ED24))

   
#endif     /* _TM4C123GH6PM_HWMAP_H_ */
