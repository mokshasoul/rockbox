/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2012 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/

#include "icoll-imx233.h"
#include "rtc-imx233.h"
#include "kernel-imx233.h"
#include "string.h"
#include "timrot-imx233.h"

#define default_interrupt(name) \
    extern __attribute__((weak, alias("UIRQ"))) void name(void)

static void UIRQ (void) __attribute__((interrupt ("IRQ")));
void irq_handler(void) __attribute__((interrupt("IRQ")));
void fiq_handler(void) __attribute__((interrupt("FIQ")));

default_interrupt(INT_USB_CTRL);
default_interrupt(INT_TIMER0);
default_interrupt(INT_TIMER1);
default_interrupt(INT_TIMER2);
default_interrupt(INT_TIMER3);
default_interrupt(INT_SSP1_DMA);
default_interrupt(INT_SSP1_ERROR);
default_interrupt(INT_I2C_DMA);
default_interrupt(INT_I2C_ERROR);
default_interrupt(INT_GPIO0);
default_interrupt(INT_GPIO1);
default_interrupt(INT_GPIO2);
default_interrupt(INT_VDD5V);
default_interrupt(INT_LRADC_CH0);
default_interrupt(INT_LRADC_CH1);
default_interrupt(INT_LRADC_CH2);
default_interrupt(INT_LRADC_CH3);
default_interrupt(INT_LRADC_CH4);
default_interrupt(INT_LRADC_CH5);
default_interrupt(INT_LRADC_CH6);
default_interrupt(INT_LRADC_CH7);
default_interrupt(INT_DAC_DMA);
default_interrupt(INT_DAC_ERROR);
default_interrupt(INT_ADC_DMA);
default_interrupt(INT_ADC_ERROR);
default_interrupt(INT_TOUCH_DETECT);
default_interrupt(INT_RTC_1MSEC);
/* STMP3700+ specific */
#if IMX233_SUBTARGET >= 3700
default_interrupt(INT_SSP2_DMA);
default_interrupt(INT_SSP2_ERROR);
default_interrupt(INT_DCP);
default_interrupt(INT_LCDIF_DMA);
default_interrupt(INT_LCDIF_ERROR);
#endif
/* STMP3780+ specific */
#if IMX233_SUBTARGET >= 3780
#endif

typedef void (*isr_t)(void);

static isr_t isr_table[INT_SRC_NR_SOURCES] =
{
    [INT_SRC_USB_CTRL] = INT_USB_CTRL,
    [INT_SRC_TIMER(0)] = INT_TIMER0,
    [INT_SRC_TIMER(1)] = INT_TIMER1,
    [INT_SRC_TIMER(2)] = INT_TIMER2,
    [INT_SRC_TIMER(3)] = INT_TIMER3,
    [INT_SRC_SSP1_DMA] = INT_SSP1_DMA,
    [INT_SRC_SSP1_ERROR] = INT_SSP1_ERROR,
    [INT_SRC_I2C_DMA] = INT_I2C_DMA,
    [INT_SRC_I2C_ERROR] = INT_I2C_ERROR,
    [INT_SRC_GPIO0] = INT_GPIO0,
    [INT_SRC_GPIO1] = INT_GPIO1,
    [INT_SRC_GPIO2] = INT_GPIO2,
    [INT_SRC_VDD5V] = INT_VDD5V,
    [INT_SRC_LRADC_CHx(0)] = INT_LRADC_CH0,
    [INT_SRC_LRADC_CHx(1)] = INT_LRADC_CH1,
    [INT_SRC_LRADC_CHx(2)] = INT_LRADC_CH2,
    [INT_SRC_LRADC_CHx(3)] = INT_LRADC_CH3,
    [INT_SRC_LRADC_CHx(4)] = INT_LRADC_CH4,
    [INT_SRC_LRADC_CHx(5)] = INT_LRADC_CH5,
    [INT_SRC_LRADC_CHx(6)] = INT_LRADC_CH6,
    [INT_SRC_LRADC_CHx(7)] = INT_LRADC_CH7,
    [INT_SRC_DAC_DMA] = INT_DAC_DMA,
    [INT_SRC_DAC_ERROR] = INT_DAC_ERROR,
    [INT_SRC_ADC_DMA] = INT_ADC_DMA,
    [INT_SRC_ADC_ERROR] = INT_ADC_ERROR,
    [INT_SRC_TOUCH_DETECT] = INT_TOUCH_DETECT,
    [INT_SRC_RTC_1MSEC] = INT_RTC_1MSEC,
#if IMX233_SUBTARGET >= 3700
    [INT_SRC_SSP2_DMA] = INT_SSP2_DMA,
    [INT_SRC_SSP2_ERROR] = INT_SSP2_ERROR,
    [INT_SRC_DCP] = INT_DCP,
    [INT_SRC_LCDIF_DMA] = INT_LCDIF_DMA,
    [INT_SRC_LCDIF_ERROR] = INT_LCDIF_ERROR,
#endif
#if IMX233_SUBTARGET >= 3780
#endif
};

#define IRQ_STORM_DELAY         100 /* ms */
#define IRQ_STORM_THRESHOLD     100000 /* allows irq / delay */

static uint32_t irq_count_old[INT_SRC_NR_SOURCES];
static uint32_t irq_count[INT_SRC_NR_SOURCES];

struct imx233_icoll_irq_info_t imx233_icoll_get_irq_info(int src)
{
    struct imx233_icoll_irq_info_t info;
#if IMX233_SUBTARGET < 3780
    info.enabled = BF_RDn(ICOLL_PRIORITYn, src / 4, ENABLEx(src % 4));
#else
    info.enabled = BF_RDn(ICOLL_INTERRUPTn, src, ENABLE);
#endif
#if IMX233_SUBTARGET < 3780
    info.priority = BF_RDn(ICOLL_PRIORITYn, src / 4, PRIORITYx(src % 4));
#else
    info.priority = BF_RDn(ICOLL_INTERRUPTn, src, PRIORITY);
#endif
    info.freq = irq_count_old[src];
    return info;
}

static void do_irq_stat(void)
{
    static unsigned counter = 0;
    if(counter++ >= HZ)
    {
        counter = 0;
        memcpy(irq_count_old, irq_count, sizeof(irq_count));
        memset(irq_count, 0, sizeof(irq_count));
    }
}

static void UIRQ(void)
{
    panicf("Unhandled IRQ %02X",
        (unsigned int)(HW_ICOLL_VECTOR - (uint32_t)isr_table) / 4);
}

void irq_handler(void)
{
    HW_ICOLL_VECTOR = HW_ICOLL_VECTOR; /* notify icoll that we entered ISR */
    int irq_nr = (HW_ICOLL_VECTOR - HW_ICOLL_VBASE) / 4;
    if(irq_count[irq_nr]++ > IRQ_STORM_THRESHOLD)
        panicf("IRQ %d: storm detected", irq_nr);
    if(irq_nr == INT_SRC_TIMER(TIMER_TICK))
        do_irq_stat();
    (*(isr_t *)HW_ICOLL_VECTOR)();
    /* acknowledge completion of IRQ (all use the same priority 0) */
    HW_ICOLL_LEVELACK = BV_ICOLL_LEVELACK_IRQLEVELACK__LEVEL0;
}

void fiq_handler(void)
{
}

void imx233_icoll_force_irq(unsigned src, bool enable)
{
#if IMX233_SUBTARGET < 3780
    if(enable)
        BF_SETn(ICOLL_PRIORITYn, src / 4, SOFTIRQx(src % 4));
    else
        BF_CLRn(ICOLL_PRIORITYn, src / 4, SOFTIRQx(src % 4));
#else
    if(enable)
        BF_SETn(ICOLL_INTERRUPTn, src, SOFTIRQ);
    else
        BF_CLRn(ICOLL_INTERRUPTn, src, SOFTIRQ);
#endif
}

void imx233_icoll_enable_interrupt(int src, bool enable)
{
#if IMX233_SUBTARGET < 3780
    if(enable)
        BF_SETn(ICOLL_PRIORITYn, src / 4, ENABLEx(src % 4));
    else
        BF_CLRn(ICOLL_PRIORITYn, src / 4, ENABLEx(src % 4));
#else
    if(enable)
        BF_SETn(ICOLL_INTERRUPTn, src, ENABLE);
    else
        BF_CLRn(ICOLL_INTERRUPTn, src, ENABLE);
#endif
}

void imx233_icoll_set_priority(int src, unsigned prio)
{
#if IMX233_SUBTARGET < 3780
    BF_WRn(ICOLL_PRIORITYn, src / 4, PRIORITYx(src % 4), prio);
#else
    BF_WRn(ICOLL_INTERRUPTn, src, PRIORITY, prio);
#endif
}

void imx233_icoll_init(void)
{
    imx233_reset_block(&HW_ICOLL_CTRL);
    /* disable all interrupts */
    /* priority = 0, disable, disable fiq */
#if IMX233_SUBTARGET >= 3780
    for(int i = 0; i < INT_SRC_NR_SOURCES; i++)
        HW_ICOLL_INTERRUPTn(i) = 0;
#else
    for(int i = 0; i < INT_SRC_NR_SOURCES / 4; i++)
        HW_ICOLL_PRIORITYn(i) = 0;
#endif
    /* setup vbase as isr_table */
    HW_ICOLL_VBASE = (uint32_t)&isr_table;
    /* enable final irq bit */
    BF_SET(ICOLL_CTRL, IRQ_FINAL_ENABLE);
}

