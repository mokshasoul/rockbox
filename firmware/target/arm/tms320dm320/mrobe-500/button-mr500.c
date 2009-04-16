/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2007, 2009 by Karl Kurbjun
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

/* this file also handles the touch screen driver interface */

#include "config.h"
#include "cpu.h"
#include "system.h"
#include "button.h"
#include "kernel.h"
#include "backlight.h"
#include "adc.h"
#include "system.h"
#include "backlight-target.h"
#include "uart-target.h"
#include "tsc2100.h"
#include "string.h"
#include "touchscreen.h"

#define BUTTON_TIMEOUT 50

#define BUTTON_START_BYTE 0xF0
#define BUTTON_START_BYTE2 0xF4 /* not sure why, but sometimes you get F0 or F4, */
                                /* but always the same one for the session? */
static short last_x, last_y, last_z1, last_z2; /* for the touch screen */
static bool touch_available = false;
static bool hold_button        = false;

static struct touch_calibration_point topleft, bottomright;

/* Jd's tests.. These will hopefully work for everyone so we dont have to
 *  create a calibration screen.
 *  Portait:
 *      (0,0) = 200, 3900
 *      (480,640) = 3880, 270
 *  Landscape:
 *      (0,0) = 200, 270
 *      (640,480) = 3880, 3900
*/

static int touch_to_pixels(short val_x, short val_y)
{
    short x,y;

#if CONFIG_ORIENTATION == SCREEN_PORTRAIT
    x=val_x;
    y=val_y;
#else
    x=val_y;
    y=val_x;
#endif

    x = (x-topleft.val_x)*(bottomright.px_x - topleft.px_x) / (bottomright.val_x - topleft.val_x) + topleft.px_x;
    y = (y-topleft.val_y)*(bottomright.px_y - topleft.px_y) / (bottomright.val_y - topleft.val_y) + topleft.px_y;

    if (x < 0)
        x = 0;
    else if (x>=LCD_WIDTH)
        x=LCD_WIDTH-1;
        
    if (y < 0)
        y = 0;
    else if (y>=LCD_HEIGHT)
        y=LCD_HEIGHT-1;


    return (x<<16)|y;
}

void button_init_device(void)
{
    touch_available = false;
    /* GIO is the power button, set as input */
    IO_GIO_DIR0 |= 0x01;

#if CONFIG_ORIENTATION == SCREEN_PORTRAIT
    topleft.val_x = 200;        
    topleft.val_y = 3900;
    
    bottomright.val_x = 3880;
    bottomright.val_y = 270;
#else
    topleft.val_x = 270;
    topleft.val_y = 200;
    
    bottomright.val_x = 3900;
    bottomright.val_y = 3880;
#endif

    topleft.px_x = 0;
    topleft.px_y = 0;

    bottomright.px_x = LCD_WIDTH;
    bottomright.px_y = LCD_HEIGHT;

    /* Enable the touchscreen interrupt */
    IO_INTC_EINT2 |= (1<<3); /* IRQ_GIO14 */
#if 0
    tsc2100_writereg(TSADC_PAGE, TSADC_ADDRESS, 
                     TSADC_PSTCM|
                     (0x2<<TSADC_ADSCM_SHIFT)| /* scan x,y,z1,z2 */
                     (0x1<<TSADC_RESOL_SHIFT) /* 8 bit resolution */
                     );
    /* doesnt work for some reason... 
        setting to 8bit would probably be better than the 12bit currently */
#endif
}

inline bool button_hold(void)
{
    return hold_button;
}

#define TOUCH_MARGIN 8
char r_buffer[5];
int r_button = BUTTON_NONE;
int button_read_device(int *data)
{
    int retval, button1_location, button2_location;
    static int oldbutton = BUTTON_NONE;
    static bool oldhold = false;
    
    static long last_touch = 0;
    
    r_button=BUTTON_NONE;
    *data = 0;

    if (touch_available)
    {
        short x,y;
        bool send_touch = false;
        tsc2100_read_values(&x,  &y, &last_z1, &last_z2);
        if (TIME_BEFORE(last_touch + HZ/5, current_tick))
        {
            if ((x > last_x + TOUCH_MARGIN) ||
                (x < last_x - TOUCH_MARGIN) ||
                (y > last_y + TOUCH_MARGIN) ||
                (y < last_y - TOUCH_MARGIN))
            {
                send_touch = true;
            }
        }
        else
            send_touch = true;
        if (send_touch)
        {
            last_x = x;
            last_y = y;
            *data = touch_to_pixels(x, y);
            r_button |= touchscreen_to_pixels((*data&0xffff0000)>>16,
                                              *data&0x0000ffff, data);
            oldbutton = r_button;
        }
        last_touch = current_tick;
        touch_available = false;
    }
    else
    {
        /* Touch hasn't happened in a while, clear the bits */
        if(last_touch+3>current_tick)
        {
            oldbutton&=(0xFF);
        }
    }

    if ((IO_GIO_BITSET0&0x01) == 0)
    {
        r_button |= BUTTON_POWER;
        oldbutton=r_button;
    }

    retval=uart1_gets_queue(r_buffer, 5);
    
    for(button1_location=0;button1_location<4;button1_location++)
    {
        if((r_buffer[button1_location]&0xF0)==0xF0 
            && (r_buffer[button1_location+1]&0xF0)!=0xF0)
            break;
    }
    button1_location++;
    if(button1_location==5)
        button1_location=0;
        
    if(button1_location==4)
        button2_location=0;
    else
        button2_location=button1_location+1;
        
    if(retval>=0)
    {
        uart1_clear_queue();
        r_button |= r_buffer[button1_location];
        oldbutton=r_button;
        hold_button=((r_buffer[button2_location]&0x80)?true:false);
    }
    else
    {
        r_button=oldbutton;
    }

#ifndef BOOTLOADER
    /* give BL notice if HB state chaged */
    if (hold_button != oldhold)
    {
        backlight_hold_changed(hold_button);
        oldhold=hold_button;
    }
#endif

    if (hold_button)
    {
        r_button=BUTTON_NONE;
        oldbutton=r_button;
    }
    
    return r_button;
}

/* Touchscreen data available interupt */
void read_battery_inputs(void);
void GIO14(void)
{
    short tsadc = tsc2100_readreg(TSADC_PAGE, TSADC_ADDRESS);
    short adscm = (tsadc&TSADC_ADSCM_MASK)>>TSADC_ADSCM_SHIFT;
    switch (adscm)
    {
        case 1:
        case 2:
            touch_available = true;
            break;
        case 0xb:
            read_battery_inputs();
            break;
    }
    IO_INTC_IRQ2 = (1<<3); /* IRQ_GIO14 == 35 */
}
