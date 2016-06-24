/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 3.0.0
 * stmp3600 version: 2.4.0
 * stmp3600 authors: Amaury Pouly
 *
 * Copyright (C) 2015 by the authors
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
#ifndef __HEADERGEN_STMP3600_GPMI_H__
#define __HEADERGEN_STMP3600_GPMI_H__

#define HW_GPMI_CTRL0                                   HW(GPMI_CTRL0)
#define HWA_GPMI_CTRL0                                  (0x8000c000 + 0x0)
#define HWT_GPMI_CTRL0                                  HWIO_32_RW
#define HWN_GPMI_CTRL0                                  GPMI_CTRL0
#define HWI_GPMI_CTRL0                                  
#define HW_GPMI_CTRL0_SET                               HW(GPMI_CTRL0_SET)
#define HWA_GPMI_CTRL0_SET                              (HWA_GPMI_CTRL0 + 0x4)
#define HWT_GPMI_CTRL0_SET                              HWIO_32_WO
#define HWN_GPMI_CTRL0_SET                              GPMI_CTRL0
#define HWI_GPMI_CTRL0_SET                              
#define HW_GPMI_CTRL0_CLR                               HW(GPMI_CTRL0_CLR)
#define HWA_GPMI_CTRL0_CLR                              (HWA_GPMI_CTRL0 + 0x8)
#define HWT_GPMI_CTRL0_CLR                              HWIO_32_WO
#define HWN_GPMI_CTRL0_CLR                              GPMI_CTRL0
#define HWI_GPMI_CTRL0_CLR                              
#define HW_GPMI_CTRL0_TOG                               HW(GPMI_CTRL0_TOG)
#define HWA_GPMI_CTRL0_TOG                              (HWA_GPMI_CTRL0 + 0xc)
#define HWT_GPMI_CTRL0_TOG                              HWIO_32_WO
#define HWN_GPMI_CTRL0_TOG                              GPMI_CTRL0
#define HWI_GPMI_CTRL0_TOG                              
#define BP_GPMI_CTRL0_SFTRST                            31
#define BM_GPMI_CTRL0_SFTRST                            0x80000000
#define BV_GPMI_CTRL0_SFTRST__RUN                       0x0
#define BV_GPMI_CTRL0_SFTRST__RESET                     0x1
#define BF_GPMI_CTRL0_SFTRST(v)                         (((v) & 0x1) << 31)
#define BFM_GPMI_CTRL0_SFTRST(v)                        BM_GPMI_CTRL0_SFTRST
#define BF_GPMI_CTRL0_SFTRST_V(e)                       BF_GPMI_CTRL0_SFTRST(BV_GPMI_CTRL0_SFTRST__##e)
#define BFM_GPMI_CTRL0_SFTRST_V(v)                      BM_GPMI_CTRL0_SFTRST
#define BP_GPMI_CTRL0_CLKGATE                           30
#define BM_GPMI_CTRL0_CLKGATE                           0x40000000
#define BV_GPMI_CTRL0_CLKGATE__RUN                      0x0
#define BV_GPMI_CTRL0_CLKGATE__NO_CLKS                  0x1
#define BF_GPMI_CTRL0_CLKGATE(v)                        (((v) & 0x1) << 30)
#define BFM_GPMI_CTRL0_CLKGATE(v)                       BM_GPMI_CTRL0_CLKGATE
#define BF_GPMI_CTRL0_CLKGATE_V(e)                      BF_GPMI_CTRL0_CLKGATE(BV_GPMI_CTRL0_CLKGATE__##e)
#define BFM_GPMI_CTRL0_CLKGATE_V(v)                     BM_GPMI_CTRL0_CLKGATE
#define BP_GPMI_CTRL0_RUN                               29
#define BM_GPMI_CTRL0_RUN                               0x20000000
#define BV_GPMI_CTRL0_RUN__IDLE                         0x0
#define BV_GPMI_CTRL0_RUN__BUSY                         0x1
#define BF_GPMI_CTRL0_RUN(v)                            (((v) & 0x1) << 29)
#define BFM_GPMI_CTRL0_RUN(v)                           BM_GPMI_CTRL0_RUN
#define BF_GPMI_CTRL0_RUN_V(e)                          BF_GPMI_CTRL0_RUN(BV_GPMI_CTRL0_RUN__##e)
#define BFM_GPMI_CTRL0_RUN_V(v)                         BM_GPMI_CTRL0_RUN
#define BP_GPMI_CTRL0_DEV_IRQ_EN                        28
#define BM_GPMI_CTRL0_DEV_IRQ_EN                        0x10000000
#define BF_GPMI_CTRL0_DEV_IRQ_EN(v)                     (((v) & 0x1) << 28)
#define BFM_GPMI_CTRL0_DEV_IRQ_EN(v)                    BM_GPMI_CTRL0_DEV_IRQ_EN
#define BF_GPMI_CTRL0_DEV_IRQ_EN_V(e)                   BF_GPMI_CTRL0_DEV_IRQ_EN(BV_GPMI_CTRL0_DEV_IRQ_EN__##e)
#define BFM_GPMI_CTRL0_DEV_IRQ_EN_V(v)                  BM_GPMI_CTRL0_DEV_IRQ_EN
#define BP_GPMI_CTRL0_TIMEOUT_IRQ_EN                    27
#define BM_GPMI_CTRL0_TIMEOUT_IRQ_EN                    0x8000000
#define BF_GPMI_CTRL0_TIMEOUT_IRQ_EN(v)                 (((v) & 0x1) << 27)
#define BFM_GPMI_CTRL0_TIMEOUT_IRQ_EN(v)                BM_GPMI_CTRL0_TIMEOUT_IRQ_EN
#define BF_GPMI_CTRL0_TIMEOUT_IRQ_EN_V(e)               BF_GPMI_CTRL0_TIMEOUT_IRQ_EN(BV_GPMI_CTRL0_TIMEOUT_IRQ_EN__##e)
#define BFM_GPMI_CTRL0_TIMEOUT_IRQ_EN_V(v)              BM_GPMI_CTRL0_TIMEOUT_IRQ_EN
#define BP_GPMI_CTRL0_UDMA                              26
#define BM_GPMI_CTRL0_UDMA                              0x4000000
#define BV_GPMI_CTRL0_UDMA__DISABLED                    0x0
#define BV_GPMI_CTRL0_UDMA__ENABLED                     0x1
#define BF_GPMI_CTRL0_UDMA(v)                           (((v) & 0x1) << 26)
#define BFM_GPMI_CTRL0_UDMA(v)                          BM_GPMI_CTRL0_UDMA
#define BF_GPMI_CTRL0_UDMA_V(e)                         BF_GPMI_CTRL0_UDMA(BV_GPMI_CTRL0_UDMA__##e)
#define BFM_GPMI_CTRL0_UDMA_V(v)                        BM_GPMI_CTRL0_UDMA
#define BP_GPMI_CTRL0_COMMAND_MODE                      24
#define BM_GPMI_CTRL0_COMMAND_MODE                      0x3000000
#define BV_GPMI_CTRL0_COMMAND_MODE__WRITE               0x0
#define BV_GPMI_CTRL0_COMMAND_MODE__READ                0x1
#define BV_GPMI_CTRL0_COMMAND_MODE__READ_AND_COMPARE    0x2
#define BV_GPMI_CTRL0_COMMAND_MODE__WAIT_FOR_READY      0x3
#define BF_GPMI_CTRL0_COMMAND_MODE(v)                   (((v) & 0x3) << 24)
#define BFM_GPMI_CTRL0_COMMAND_MODE(v)                  BM_GPMI_CTRL0_COMMAND_MODE
#define BF_GPMI_CTRL0_COMMAND_MODE_V(e)                 BF_GPMI_CTRL0_COMMAND_MODE(BV_GPMI_CTRL0_COMMAND_MODE__##e)
#define BFM_GPMI_CTRL0_COMMAND_MODE_V(v)                BM_GPMI_CTRL0_COMMAND_MODE
#define BP_GPMI_CTRL0_WORD_LENGTH                       23
#define BM_GPMI_CTRL0_WORD_LENGTH                       0x800000
#define BV_GPMI_CTRL0_WORD_LENGTH__16_BIT               0x0
#define BV_GPMI_CTRL0_WORD_LENGTH__8_BIT                0x1
#define BF_GPMI_CTRL0_WORD_LENGTH(v)                    (((v) & 0x1) << 23)
#define BFM_GPMI_CTRL0_WORD_LENGTH(v)                   BM_GPMI_CTRL0_WORD_LENGTH
#define BF_GPMI_CTRL0_WORD_LENGTH_V(e)                  BF_GPMI_CTRL0_WORD_LENGTH(BV_GPMI_CTRL0_WORD_LENGTH__##e)
#define BFM_GPMI_CTRL0_WORD_LENGTH_V(v)                 BM_GPMI_CTRL0_WORD_LENGTH
#define BP_GPMI_CTRL0_LOCK_CS                           22
#define BM_GPMI_CTRL0_LOCK_CS                           0x400000
#define BV_GPMI_CTRL0_LOCK_CS__DISABLED                 0x0
#define BV_GPMI_CTRL0_LOCK_CS__ENABLED                  0x1
#define BF_GPMI_CTRL0_LOCK_CS(v)                        (((v) & 0x1) << 22)
#define BFM_GPMI_CTRL0_LOCK_CS(v)                       BM_GPMI_CTRL0_LOCK_CS
#define BF_GPMI_CTRL0_LOCK_CS_V(e)                      BF_GPMI_CTRL0_LOCK_CS(BV_GPMI_CTRL0_LOCK_CS__##e)
#define BFM_GPMI_CTRL0_LOCK_CS_V(v)                     BM_GPMI_CTRL0_LOCK_CS
#define BP_GPMI_CTRL0_CS                                20
#define BM_GPMI_CTRL0_CS                                0x300000
#define BF_GPMI_CTRL0_CS(v)                             (((v) & 0x3) << 20)
#define BFM_GPMI_CTRL0_CS(v)                            BM_GPMI_CTRL0_CS
#define BF_GPMI_CTRL0_CS_V(e)                           BF_GPMI_CTRL0_CS(BV_GPMI_CTRL0_CS__##e)
#define BFM_GPMI_CTRL0_CS_V(v)                          BM_GPMI_CTRL0_CS
#define BP_GPMI_CTRL0_ADDRESS                           17
#define BM_GPMI_CTRL0_ADDRESS                           0xe0000
#define BV_GPMI_CTRL0_ADDRESS__NAND_DATA                0x0
#define BV_GPMI_CTRL0_ADDRESS__NAND_CLE                 0x1
#define BV_GPMI_CTRL0_ADDRESS__NAND_ALE                 0x2
#define BF_GPMI_CTRL0_ADDRESS(v)                        (((v) & 0x7) << 17)
#define BFM_GPMI_CTRL0_ADDRESS(v)                       BM_GPMI_CTRL0_ADDRESS
#define BF_GPMI_CTRL0_ADDRESS_V(e)                      BF_GPMI_CTRL0_ADDRESS(BV_GPMI_CTRL0_ADDRESS__##e)
#define BFM_GPMI_CTRL0_ADDRESS_V(v)                     BM_GPMI_CTRL0_ADDRESS
#define BP_GPMI_CTRL0_ADDRESS_INCREMENT                 16
#define BM_GPMI_CTRL0_ADDRESS_INCREMENT                 0x10000
#define BV_GPMI_CTRL0_ADDRESS_INCREMENT__DISABLED       0x0
#define BV_GPMI_CTRL0_ADDRESS_INCREMENT__ENABLED        0x1
#define BF_GPMI_CTRL0_ADDRESS_INCREMENT(v)              (((v) & 0x1) << 16)
#define BFM_GPMI_CTRL0_ADDRESS_INCREMENT(v)             BM_GPMI_CTRL0_ADDRESS_INCREMENT
#define BF_GPMI_CTRL0_ADDRESS_INCREMENT_V(e)            BF_GPMI_CTRL0_ADDRESS_INCREMENT(BV_GPMI_CTRL0_ADDRESS_INCREMENT__##e)
#define BFM_GPMI_CTRL0_ADDRESS_INCREMENT_V(v)           BM_GPMI_CTRL0_ADDRESS_INCREMENT
#define BP_GPMI_CTRL0_XFER_COUNT                        0
#define BM_GPMI_CTRL0_XFER_COUNT                        0xffff
#define BF_GPMI_CTRL0_XFER_COUNT(v)                     (((v) & 0xffff) << 0)
#define BFM_GPMI_CTRL0_XFER_COUNT(v)                    BM_GPMI_CTRL0_XFER_COUNT
#define BF_GPMI_CTRL0_XFER_COUNT_V(e)                   BF_GPMI_CTRL0_XFER_COUNT(BV_GPMI_CTRL0_XFER_COUNT__##e)
#define BFM_GPMI_CTRL0_XFER_COUNT_V(v)                  BM_GPMI_CTRL0_XFER_COUNT

#define HW_GPMI_COMPARE                 HW(GPMI_COMPARE)
#define HWA_GPMI_COMPARE                (0x8000c000 + 0x10)
#define HWT_GPMI_COMPARE                HWIO_32_RW
#define HWN_GPMI_COMPARE                GPMI_COMPARE
#define HWI_GPMI_COMPARE                
#define BP_GPMI_COMPARE_MASK            16
#define BM_GPMI_COMPARE_MASK            0xffff0000
#define BF_GPMI_COMPARE_MASK(v)         (((v) & 0xffff) << 16)
#define BFM_GPMI_COMPARE_MASK(v)        BM_GPMI_COMPARE_MASK
#define BF_GPMI_COMPARE_MASK_V(e)       BF_GPMI_COMPARE_MASK(BV_GPMI_COMPARE_MASK__##e)
#define BFM_GPMI_COMPARE_MASK_V(v)      BM_GPMI_COMPARE_MASK
#define BP_GPMI_COMPARE_REFERENCE       0
#define BM_GPMI_COMPARE_REFERENCE       0xffff
#define BF_GPMI_COMPARE_REFERENCE(v)    (((v) & 0xffff) << 0)
#define BFM_GPMI_COMPARE_REFERENCE(v)   BM_GPMI_COMPARE_REFERENCE
#define BF_GPMI_COMPARE_REFERENCE_V(e)  BF_GPMI_COMPARE_REFERENCE(BV_GPMI_COMPARE_REFERENCE__##e)
#define BFM_GPMI_COMPARE_REFERENCE_V(v) BM_GPMI_COMPARE_REFERENCE

#define HW_GPMI_CTRL1                                   HW(GPMI_CTRL1)
#define HWA_GPMI_CTRL1                                  (0x8000c000 + 0x20)
#define HWT_GPMI_CTRL1                                  HWIO_32_RW
#define HWN_GPMI_CTRL1                                  GPMI_CTRL1
#define HWI_GPMI_CTRL1                                  
#define HW_GPMI_CTRL1_SET                               HW(GPMI_CTRL1_SET)
#define HWA_GPMI_CTRL1_SET                              (HWA_GPMI_CTRL1 + 0x4)
#define HWT_GPMI_CTRL1_SET                              HWIO_32_WO
#define HWN_GPMI_CTRL1_SET                              GPMI_CTRL1
#define HWI_GPMI_CTRL1_SET                              
#define HW_GPMI_CTRL1_CLR                               HW(GPMI_CTRL1_CLR)
#define HWA_GPMI_CTRL1_CLR                              (HWA_GPMI_CTRL1 + 0x8)
#define HWT_GPMI_CTRL1_CLR                              HWIO_32_WO
#define HWN_GPMI_CTRL1_CLR                              GPMI_CTRL1
#define HWI_GPMI_CTRL1_CLR                              
#define HW_GPMI_CTRL1_TOG                               HW(GPMI_CTRL1_TOG)
#define HWA_GPMI_CTRL1_TOG                              (HWA_GPMI_CTRL1 + 0xc)
#define HWT_GPMI_CTRL1_TOG                              HWIO_32_WO
#define HWN_GPMI_CTRL1_TOG                              GPMI_CTRL1
#define HWI_GPMI_CTRL1_TOG                              
#define BP_GPMI_CTRL1_DSAMPLE_TIME                      12
#define BM_GPMI_CTRL1_DSAMPLE_TIME                      0x3000
#define BF_GPMI_CTRL1_DSAMPLE_TIME(v)                   (((v) & 0x3) << 12)
#define BFM_GPMI_CTRL1_DSAMPLE_TIME(v)                  BM_GPMI_CTRL1_DSAMPLE_TIME
#define BF_GPMI_CTRL1_DSAMPLE_TIME_V(e)                 BF_GPMI_CTRL1_DSAMPLE_TIME(BV_GPMI_CTRL1_DSAMPLE_TIME__##e)
#define BFM_GPMI_CTRL1_DSAMPLE_TIME_V(v)                BM_GPMI_CTRL1_DSAMPLE_TIME
#define BP_GPMI_CTRL1_DEV_IRQ                           10
#define BM_GPMI_CTRL1_DEV_IRQ                           0x400
#define BF_GPMI_CTRL1_DEV_IRQ(v)                        (((v) & 0x1) << 10)
#define BFM_GPMI_CTRL1_DEV_IRQ(v)                       BM_GPMI_CTRL1_DEV_IRQ
#define BF_GPMI_CTRL1_DEV_IRQ_V(e)                      BF_GPMI_CTRL1_DEV_IRQ(BV_GPMI_CTRL1_DEV_IRQ__##e)
#define BFM_GPMI_CTRL1_DEV_IRQ_V(v)                     BM_GPMI_CTRL1_DEV_IRQ
#define BP_GPMI_CTRL1_TIMEOUT_IRQ                       9
#define BM_GPMI_CTRL1_TIMEOUT_IRQ                       0x200
#define BF_GPMI_CTRL1_TIMEOUT_IRQ(v)                    (((v) & 0x1) << 9)
#define BFM_GPMI_CTRL1_TIMEOUT_IRQ(v)                   BM_GPMI_CTRL1_TIMEOUT_IRQ
#define BF_GPMI_CTRL1_TIMEOUT_IRQ_V(e)                  BF_GPMI_CTRL1_TIMEOUT_IRQ(BV_GPMI_CTRL1_TIMEOUT_IRQ__##e)
#define BFM_GPMI_CTRL1_TIMEOUT_IRQ_V(v)                 BM_GPMI_CTRL1_TIMEOUT_IRQ
#define BP_GPMI_CTRL1_BURST_EN                          8
#define BM_GPMI_CTRL1_BURST_EN                          0x100
#define BF_GPMI_CTRL1_BURST_EN(v)                       (((v) & 0x1) << 8)
#define BFM_GPMI_CTRL1_BURST_EN(v)                      BM_GPMI_CTRL1_BURST_EN
#define BF_GPMI_CTRL1_BURST_EN_V(e)                     BF_GPMI_CTRL1_BURST_EN(BV_GPMI_CTRL1_BURST_EN__##e)
#define BFM_GPMI_CTRL1_BURST_EN_V(v)                    BM_GPMI_CTRL1_BURST_EN
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY3             7
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3             0x80
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY3(v)          (((v) & 0x1) << 7)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3(v)         BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY3_V(e)        BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY3(BV_GPMI_CTRL1_ABORT_WAIT_FOR_READY3__##e)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3_V(v)       BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY3
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY2             6
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2             0x40
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY2(v)          (((v) & 0x1) << 6)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2(v)         BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY2_V(e)        BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY2(BV_GPMI_CTRL1_ABORT_WAIT_FOR_READY2__##e)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2_V(v)       BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY2
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY1             5
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1             0x20
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY1(v)          (((v) & 0x1) << 5)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1(v)         BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY1_V(e)        BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY1(BV_GPMI_CTRL1_ABORT_WAIT_FOR_READY1__##e)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1_V(v)       BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY1
#define BP_GPMI_CTRL1_ABORT_WAIT_FOR_READY0             4
#define BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0             0x10
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY0(v)          (((v) & 0x1) << 4)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0(v)         BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0
#define BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY0_V(e)        BF_GPMI_CTRL1_ABORT_WAIT_FOR_READY0(BV_GPMI_CTRL1_ABORT_WAIT_FOR_READY0__##e)
#define BFM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0_V(v)       BM_GPMI_CTRL1_ABORT_WAIT_FOR_READY0
#define BP_GPMI_CTRL1_DEV_RESET                         3
#define BM_GPMI_CTRL1_DEV_RESET                         0x8
#define BV_GPMI_CTRL1_DEV_RESET__ENABLED                0x0
#define BV_GPMI_CTRL1_DEV_RESET__DISABLED               0x1
#define BF_GPMI_CTRL1_DEV_RESET(v)                      (((v) & 0x1) << 3)
#define BFM_GPMI_CTRL1_DEV_RESET(v)                     BM_GPMI_CTRL1_DEV_RESET
#define BF_GPMI_CTRL1_DEV_RESET_V(e)                    BF_GPMI_CTRL1_DEV_RESET(BV_GPMI_CTRL1_DEV_RESET__##e)
#define BFM_GPMI_CTRL1_DEV_RESET_V(v)                   BM_GPMI_CTRL1_DEV_RESET
#define BP_GPMI_CTRL1_ATA_IRQRDY_POLARITY               2
#define BM_GPMI_CTRL1_ATA_IRQRDY_POLARITY               0x4
#define BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__ACTIVELOW    0x0
#define BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__ACTIVEHIGH   0x1
#define BF_GPMI_CTRL1_ATA_IRQRDY_POLARITY(v)            (((v) & 0x1) << 2)
#define BFM_GPMI_CTRL1_ATA_IRQRDY_POLARITY(v)           BM_GPMI_CTRL1_ATA_IRQRDY_POLARITY
#define BF_GPMI_CTRL1_ATA_IRQRDY_POLARITY_V(e)          BF_GPMI_CTRL1_ATA_IRQRDY_POLARITY(BV_GPMI_CTRL1_ATA_IRQRDY_POLARITY__##e)
#define BFM_GPMI_CTRL1_ATA_IRQRDY_POLARITY_V(v)         BM_GPMI_CTRL1_ATA_IRQRDY_POLARITY
#define BP_GPMI_CTRL1_CAMERA_MODE                       1
#define BM_GPMI_CTRL1_CAMERA_MODE                       0x2
#define BF_GPMI_CTRL1_CAMERA_MODE(v)                    (((v) & 0x1) << 1)
#define BFM_GPMI_CTRL1_CAMERA_MODE(v)                   BM_GPMI_CTRL1_CAMERA_MODE
#define BF_GPMI_CTRL1_CAMERA_MODE_V(e)                  BF_GPMI_CTRL1_CAMERA_MODE(BV_GPMI_CTRL1_CAMERA_MODE__##e)
#define BFM_GPMI_CTRL1_CAMERA_MODE_V(v)                 BM_GPMI_CTRL1_CAMERA_MODE
#define BP_GPMI_CTRL1_GPMI_MODE                         0
#define BM_GPMI_CTRL1_GPMI_MODE                         0x1
#define BV_GPMI_CTRL1_GPMI_MODE__NAND                   0x0
#define BV_GPMI_CTRL1_GPMI_MODE__ATA                    0x1
#define BF_GPMI_CTRL1_GPMI_MODE(v)                      (((v) & 0x1) << 0)
#define BFM_GPMI_CTRL1_GPMI_MODE(v)                     BM_GPMI_CTRL1_GPMI_MODE
#define BF_GPMI_CTRL1_GPMI_MODE_V(e)                    BF_GPMI_CTRL1_GPMI_MODE(BV_GPMI_CTRL1_GPMI_MODE__##e)
#define BFM_GPMI_CTRL1_GPMI_MODE_V(v)                   BM_GPMI_CTRL1_GPMI_MODE

#define HW_GPMI_TIMING0                     HW(GPMI_TIMING0)
#define HWA_GPMI_TIMING0                    (0x8000c000 + 0x30)
#define HWT_GPMI_TIMING0                    HWIO_32_RW
#define HWN_GPMI_TIMING0                    GPMI_TIMING0
#define HWI_GPMI_TIMING0                    
#define BP_GPMI_TIMING0_ADDRESS_SETUP       16
#define BM_GPMI_TIMING0_ADDRESS_SETUP       0xff0000
#define BF_GPMI_TIMING0_ADDRESS_SETUP(v)    (((v) & 0xff) << 16)
#define BFM_GPMI_TIMING0_ADDRESS_SETUP(v)   BM_GPMI_TIMING0_ADDRESS_SETUP
#define BF_GPMI_TIMING0_ADDRESS_SETUP_V(e)  BF_GPMI_TIMING0_ADDRESS_SETUP(BV_GPMI_TIMING0_ADDRESS_SETUP__##e)
#define BFM_GPMI_TIMING0_ADDRESS_SETUP_V(v) BM_GPMI_TIMING0_ADDRESS_SETUP
#define BP_GPMI_TIMING0_DATA_HOLD           8
#define BM_GPMI_TIMING0_DATA_HOLD           0xff00
#define BF_GPMI_TIMING0_DATA_HOLD(v)        (((v) & 0xff) << 8)
#define BFM_GPMI_TIMING0_DATA_HOLD(v)       BM_GPMI_TIMING0_DATA_HOLD
#define BF_GPMI_TIMING0_DATA_HOLD_V(e)      BF_GPMI_TIMING0_DATA_HOLD(BV_GPMI_TIMING0_DATA_HOLD__##e)
#define BFM_GPMI_TIMING0_DATA_HOLD_V(v)     BM_GPMI_TIMING0_DATA_HOLD
#define BP_GPMI_TIMING0_DATA_SETUP          0
#define BM_GPMI_TIMING0_DATA_SETUP          0xff
#define BF_GPMI_TIMING0_DATA_SETUP(v)       (((v) & 0xff) << 0)
#define BFM_GPMI_TIMING0_DATA_SETUP(v)      BM_GPMI_TIMING0_DATA_SETUP
#define BF_GPMI_TIMING0_DATA_SETUP_V(e)     BF_GPMI_TIMING0_DATA_SETUP(BV_GPMI_TIMING0_DATA_SETUP__##e)
#define BFM_GPMI_TIMING0_DATA_SETUP_V(v)    BM_GPMI_TIMING0_DATA_SETUP

#define HW_GPMI_TIMING1                             HW(GPMI_TIMING1)
#define HWA_GPMI_TIMING1                            (0x8000c000 + 0x40)
#define HWT_GPMI_TIMING1                            HWIO_32_RW
#define HWN_GPMI_TIMING1                            GPMI_TIMING1
#define HWI_GPMI_TIMING1                            
#define BP_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT         16
#define BM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT         0xffff0000
#define BF_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT(v)      (((v) & 0xffff) << 16)
#define BFM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT(v)     BM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT
#define BF_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT_V(e)    BF_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT(BV_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT__##e)
#define BFM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT_V(v)   BM_GPMI_TIMING1_DEVICE_BUSY_TIMEOUT
#define BP_GPMI_TIMING1_ATA_READY_TIMEOUT           0
#define BM_GPMI_TIMING1_ATA_READY_TIMEOUT           0xffff
#define BF_GPMI_TIMING1_ATA_READY_TIMEOUT(v)        (((v) & 0xffff) << 0)
#define BFM_GPMI_TIMING1_ATA_READY_TIMEOUT(v)       BM_GPMI_TIMING1_ATA_READY_TIMEOUT
#define BF_GPMI_TIMING1_ATA_READY_TIMEOUT_V(e)      BF_GPMI_TIMING1_ATA_READY_TIMEOUT(BV_GPMI_TIMING1_ATA_READY_TIMEOUT__##e)
#define BFM_GPMI_TIMING1_ATA_READY_TIMEOUT_V(v)     BM_GPMI_TIMING1_ATA_READY_TIMEOUT

#define HW_GPMI_TIMING2                     HW(GPMI_TIMING2)
#define HWA_GPMI_TIMING2                    (0x8000c000 + 0x50)
#define HWT_GPMI_TIMING2                    HWIO_32_RW
#define HWN_GPMI_TIMING2                    GPMI_TIMING2
#define HWI_GPMI_TIMING2                    
#define BP_GPMI_TIMING2_UDMA_TRP            24
#define BM_GPMI_TIMING2_UDMA_TRP            0xff000000
#define BF_GPMI_TIMING2_UDMA_TRP(v)         (((v) & 0xff) << 24)
#define BFM_GPMI_TIMING2_UDMA_TRP(v)        BM_GPMI_TIMING2_UDMA_TRP
#define BF_GPMI_TIMING2_UDMA_TRP_V(e)       BF_GPMI_TIMING2_UDMA_TRP(BV_GPMI_TIMING2_UDMA_TRP__##e)
#define BFM_GPMI_TIMING2_UDMA_TRP_V(v)      BM_GPMI_TIMING2_UDMA_TRP
#define BP_GPMI_TIMING2_UDMA_ENV            16
#define BM_GPMI_TIMING2_UDMA_ENV            0xff0000
#define BF_GPMI_TIMING2_UDMA_ENV(v)         (((v) & 0xff) << 16)
#define BFM_GPMI_TIMING2_UDMA_ENV(v)        BM_GPMI_TIMING2_UDMA_ENV
#define BF_GPMI_TIMING2_UDMA_ENV_V(e)       BF_GPMI_TIMING2_UDMA_ENV(BV_GPMI_TIMING2_UDMA_ENV__##e)
#define BFM_GPMI_TIMING2_UDMA_ENV_V(v)      BM_GPMI_TIMING2_UDMA_ENV
#define BP_GPMI_TIMING2_UDMA_HOLD           8
#define BM_GPMI_TIMING2_UDMA_HOLD           0xff00
#define BF_GPMI_TIMING2_UDMA_HOLD(v)        (((v) & 0xff) << 8)
#define BFM_GPMI_TIMING2_UDMA_HOLD(v)       BM_GPMI_TIMING2_UDMA_HOLD
#define BF_GPMI_TIMING2_UDMA_HOLD_V(e)      BF_GPMI_TIMING2_UDMA_HOLD(BV_GPMI_TIMING2_UDMA_HOLD__##e)
#define BFM_GPMI_TIMING2_UDMA_HOLD_V(v)     BM_GPMI_TIMING2_UDMA_HOLD
#define BP_GPMI_TIMING2_UDMA_SETUP          0
#define BM_GPMI_TIMING2_UDMA_SETUP          0xff
#define BF_GPMI_TIMING2_UDMA_SETUP(v)       (((v) & 0xff) << 0)
#define BFM_GPMI_TIMING2_UDMA_SETUP(v)      BM_GPMI_TIMING2_UDMA_SETUP
#define BF_GPMI_TIMING2_UDMA_SETUP_V(e)     BF_GPMI_TIMING2_UDMA_SETUP(BV_GPMI_TIMING2_UDMA_SETUP__##e)
#define BFM_GPMI_TIMING2_UDMA_SETUP_V(v)    BM_GPMI_TIMING2_UDMA_SETUP

#define HW_GPMI_DATA            HW(GPMI_DATA)
#define HWA_GPMI_DATA           (0x8000c000 + 0x60)
#define HWT_GPMI_DATA           HWIO_32_RW
#define HWN_GPMI_DATA           GPMI_DATA
#define HWI_GPMI_DATA           
#define BP_GPMI_DATA_DATA       0
#define BM_GPMI_DATA_DATA       0xffffffff
#define BF_GPMI_DATA_DATA(v)    (((v) & 0xffffffff) << 0)
#define BFM_GPMI_DATA_DATA(v)   BM_GPMI_DATA_DATA
#define BF_GPMI_DATA_DATA_V(e)  BF_GPMI_DATA_DATA(BV_GPMI_DATA_DATA__##e)
#define BFM_GPMI_DATA_DATA_V(v) BM_GPMI_DATA_DATA

#define HW_GPMI_STAT                        HW(GPMI_STAT)
#define HWA_GPMI_STAT                       (0x8000c000 + 0x70)
#define HWT_GPMI_STAT                       HWIO_32_RW
#define HWN_GPMI_STAT                       GPMI_STAT
#define HWI_GPMI_STAT                       
#define BP_GPMI_STAT_PRESENT                31
#define BM_GPMI_STAT_PRESENT                0x80000000
#define BV_GPMI_STAT_PRESENT__UNAVAILABLE   0x0
#define BV_GPMI_STAT_PRESENT__AVAILABLE     0x1
#define BF_GPMI_STAT_PRESENT(v)             (((v) & 0x1) << 31)
#define BFM_GPMI_STAT_PRESENT(v)            BM_GPMI_STAT_PRESENT
#define BF_GPMI_STAT_PRESENT_V(e)           BF_GPMI_STAT_PRESENT(BV_GPMI_STAT_PRESENT__##e)
#define BFM_GPMI_STAT_PRESENT_V(v)          BM_GPMI_STAT_PRESENT
#define BP_GPMI_STAT_RDY_TIMEOUT            8
#define BM_GPMI_STAT_RDY_TIMEOUT            0xf00
#define BF_GPMI_STAT_RDY_TIMEOUT(v)         (((v) & 0xf) << 8)
#define BFM_GPMI_STAT_RDY_TIMEOUT(v)        BM_GPMI_STAT_RDY_TIMEOUT
#define BF_GPMI_STAT_RDY_TIMEOUT_V(e)       BF_GPMI_STAT_RDY_TIMEOUT(BV_GPMI_STAT_RDY_TIMEOUT__##e)
#define BFM_GPMI_STAT_RDY_TIMEOUT_V(v)      BM_GPMI_STAT_RDY_TIMEOUT
#define BP_GPMI_STAT_ATA_IRQ                7
#define BM_GPMI_STAT_ATA_IRQ                0x80
#define BF_GPMI_STAT_ATA_IRQ(v)             (((v) & 0x1) << 7)
#define BFM_GPMI_STAT_ATA_IRQ(v)            BM_GPMI_STAT_ATA_IRQ
#define BF_GPMI_STAT_ATA_IRQ_V(e)           BF_GPMI_STAT_ATA_IRQ(BV_GPMI_STAT_ATA_IRQ__##e)
#define BFM_GPMI_STAT_ATA_IRQ_V(v)          BM_GPMI_STAT_ATA_IRQ
#define BP_GPMI_STAT_FIFO_EMPTY             5
#define BM_GPMI_STAT_FIFO_EMPTY             0x20
#define BV_GPMI_STAT_FIFO_EMPTY__NOT_EMPTY  0x0
#define BV_GPMI_STAT_FIFO_EMPTY__EMPTY      0x1
#define BF_GPMI_STAT_FIFO_EMPTY(v)          (((v) & 0x1) << 5)
#define BFM_GPMI_STAT_FIFO_EMPTY(v)         BM_GPMI_STAT_FIFO_EMPTY
#define BF_GPMI_STAT_FIFO_EMPTY_V(e)        BF_GPMI_STAT_FIFO_EMPTY(BV_GPMI_STAT_FIFO_EMPTY__##e)
#define BFM_GPMI_STAT_FIFO_EMPTY_V(v)       BM_GPMI_STAT_FIFO_EMPTY
#define BP_GPMI_STAT_FIFO_FULL              4
#define BM_GPMI_STAT_FIFO_FULL              0x10
#define BV_GPMI_STAT_FIFO_FULL__NOT_FULL    0x0
#define BV_GPMI_STAT_FIFO_FULL__FULL        0x1
#define BF_GPMI_STAT_FIFO_FULL(v)           (((v) & 0x1) << 4)
#define BFM_GPMI_STAT_FIFO_FULL(v)          BM_GPMI_STAT_FIFO_FULL
#define BF_GPMI_STAT_FIFO_FULL_V(e)         BF_GPMI_STAT_FIFO_FULL(BV_GPMI_STAT_FIFO_FULL__##e)
#define BFM_GPMI_STAT_FIFO_FULL_V(v)        BM_GPMI_STAT_FIFO_FULL
#define BP_GPMI_STAT_DEV3_ERROR             3
#define BM_GPMI_STAT_DEV3_ERROR             0x8
#define BF_GPMI_STAT_DEV3_ERROR(v)          (((v) & 0x1) << 3)
#define BFM_GPMI_STAT_DEV3_ERROR(v)         BM_GPMI_STAT_DEV3_ERROR
#define BF_GPMI_STAT_DEV3_ERROR_V(e)        BF_GPMI_STAT_DEV3_ERROR(BV_GPMI_STAT_DEV3_ERROR__##e)
#define BFM_GPMI_STAT_DEV3_ERROR_V(v)       BM_GPMI_STAT_DEV3_ERROR
#define BP_GPMI_STAT_DEV2_ERROR             2
#define BM_GPMI_STAT_DEV2_ERROR             0x4
#define BF_GPMI_STAT_DEV2_ERROR(v)          (((v) & 0x1) << 2)
#define BFM_GPMI_STAT_DEV2_ERROR(v)         BM_GPMI_STAT_DEV2_ERROR
#define BF_GPMI_STAT_DEV2_ERROR_V(e)        BF_GPMI_STAT_DEV2_ERROR(BV_GPMI_STAT_DEV2_ERROR__##e)
#define BFM_GPMI_STAT_DEV2_ERROR_V(v)       BM_GPMI_STAT_DEV2_ERROR
#define BP_GPMI_STAT_DEV1_ERROR             1
#define BM_GPMI_STAT_DEV1_ERROR             0x2
#define BF_GPMI_STAT_DEV1_ERROR(v)          (((v) & 0x1) << 1)
#define BFM_GPMI_STAT_DEV1_ERROR(v)         BM_GPMI_STAT_DEV1_ERROR
#define BF_GPMI_STAT_DEV1_ERROR_V(e)        BF_GPMI_STAT_DEV1_ERROR(BV_GPMI_STAT_DEV1_ERROR__##e)
#define BFM_GPMI_STAT_DEV1_ERROR_V(v)       BM_GPMI_STAT_DEV1_ERROR
#define BP_GPMI_STAT_DEV0_ERROR             0
#define BM_GPMI_STAT_DEV0_ERROR             0x1
#define BF_GPMI_STAT_DEV0_ERROR(v)          (((v) & 0x1) << 0)
#define BFM_GPMI_STAT_DEV0_ERROR(v)         BM_GPMI_STAT_DEV0_ERROR
#define BF_GPMI_STAT_DEV0_ERROR_V(e)        BF_GPMI_STAT_DEV0_ERROR(BV_GPMI_STAT_DEV0_ERROR__##e)
#define BFM_GPMI_STAT_DEV0_ERROR_V(v)       BM_GPMI_STAT_DEV0_ERROR

#define HW_GPMI_DEBUG                           HW(GPMI_DEBUG)
#define HWA_GPMI_DEBUG                          (0x8000c000 + 0x80)
#define HWT_GPMI_DEBUG                          HWIO_32_RW
#define HWN_GPMI_DEBUG                          GPMI_DEBUG
#define HWI_GPMI_DEBUG                          
#define BP_GPMI_DEBUG_READY3                    31
#define BM_GPMI_DEBUG_READY3                    0x80000000
#define BF_GPMI_DEBUG_READY3(v)                 (((v) & 0x1) << 31)
#define BFM_GPMI_DEBUG_READY3(v)                BM_GPMI_DEBUG_READY3
#define BF_GPMI_DEBUG_READY3_V(e)               BF_GPMI_DEBUG_READY3(BV_GPMI_DEBUG_READY3__##e)
#define BFM_GPMI_DEBUG_READY3_V(v)              BM_GPMI_DEBUG_READY3
#define BP_GPMI_DEBUG_READY2                    30
#define BM_GPMI_DEBUG_READY2                    0x40000000
#define BF_GPMI_DEBUG_READY2(v)                 (((v) & 0x1) << 30)
#define BFM_GPMI_DEBUG_READY2(v)                BM_GPMI_DEBUG_READY2
#define BF_GPMI_DEBUG_READY2_V(e)               BF_GPMI_DEBUG_READY2(BV_GPMI_DEBUG_READY2__##e)
#define BFM_GPMI_DEBUG_READY2_V(v)              BM_GPMI_DEBUG_READY2
#define BP_GPMI_DEBUG_READY1                    29
#define BM_GPMI_DEBUG_READY1                    0x20000000
#define BF_GPMI_DEBUG_READY1(v)                 (((v) & 0x1) << 29)
#define BFM_GPMI_DEBUG_READY1(v)                BM_GPMI_DEBUG_READY1
#define BF_GPMI_DEBUG_READY1_V(e)               BF_GPMI_DEBUG_READY1(BV_GPMI_DEBUG_READY1__##e)
#define BFM_GPMI_DEBUG_READY1_V(v)              BM_GPMI_DEBUG_READY1
#define BP_GPMI_DEBUG_READY0                    28
#define BM_GPMI_DEBUG_READY0                    0x10000000
#define BF_GPMI_DEBUG_READY0(v)                 (((v) & 0x1) << 28)
#define BFM_GPMI_DEBUG_READY0(v)                BM_GPMI_DEBUG_READY0
#define BF_GPMI_DEBUG_READY0_V(e)               BF_GPMI_DEBUG_READY0(BV_GPMI_DEBUG_READY0__##e)
#define BFM_GPMI_DEBUG_READY0_V(v)              BM_GPMI_DEBUG_READY0
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END3       27
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END3       0x8000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END3(v)    (((v) & 0x1) << 27)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END3(v)   BM_GPMI_DEBUG_WAIT_FOR_READY_END3
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END3_V(e)  BF_GPMI_DEBUG_WAIT_FOR_READY_END3(BV_GPMI_DEBUG_WAIT_FOR_READY_END3__##e)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END3_V(v) BM_GPMI_DEBUG_WAIT_FOR_READY_END3
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END2       26
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END2       0x4000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END2(v)    (((v) & 0x1) << 26)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END2(v)   BM_GPMI_DEBUG_WAIT_FOR_READY_END2
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END2_V(e)  BF_GPMI_DEBUG_WAIT_FOR_READY_END2(BV_GPMI_DEBUG_WAIT_FOR_READY_END2__##e)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END2_V(v) BM_GPMI_DEBUG_WAIT_FOR_READY_END2
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END1       25
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END1       0x2000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END1(v)    (((v) & 0x1) << 25)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END1(v)   BM_GPMI_DEBUG_WAIT_FOR_READY_END1
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END1_V(e)  BF_GPMI_DEBUG_WAIT_FOR_READY_END1(BV_GPMI_DEBUG_WAIT_FOR_READY_END1__##e)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END1_V(v) BM_GPMI_DEBUG_WAIT_FOR_READY_END1
#define BP_GPMI_DEBUG_WAIT_FOR_READY_END0       24
#define BM_GPMI_DEBUG_WAIT_FOR_READY_END0       0x1000000
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END0(v)    (((v) & 0x1) << 24)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END0(v)   BM_GPMI_DEBUG_WAIT_FOR_READY_END0
#define BF_GPMI_DEBUG_WAIT_FOR_READY_END0_V(e)  BF_GPMI_DEBUG_WAIT_FOR_READY_END0(BV_GPMI_DEBUG_WAIT_FOR_READY_END0__##e)
#define BFM_GPMI_DEBUG_WAIT_FOR_READY_END0_V(v) BM_GPMI_DEBUG_WAIT_FOR_READY_END0
#define BP_GPMI_DEBUG_SENSE3                    23
#define BM_GPMI_DEBUG_SENSE3                    0x800000
#define BF_GPMI_DEBUG_SENSE3(v)                 (((v) & 0x1) << 23)
#define BFM_GPMI_DEBUG_SENSE3(v)                BM_GPMI_DEBUG_SENSE3
#define BF_GPMI_DEBUG_SENSE3_V(e)               BF_GPMI_DEBUG_SENSE3(BV_GPMI_DEBUG_SENSE3__##e)
#define BFM_GPMI_DEBUG_SENSE3_V(v)              BM_GPMI_DEBUG_SENSE3
#define BP_GPMI_DEBUG_SENSE2                    22
#define BM_GPMI_DEBUG_SENSE2                    0x400000
#define BF_GPMI_DEBUG_SENSE2(v)                 (((v) & 0x1) << 22)
#define BFM_GPMI_DEBUG_SENSE2(v)                BM_GPMI_DEBUG_SENSE2
#define BF_GPMI_DEBUG_SENSE2_V(e)               BF_GPMI_DEBUG_SENSE2(BV_GPMI_DEBUG_SENSE2__##e)
#define BFM_GPMI_DEBUG_SENSE2_V(v)              BM_GPMI_DEBUG_SENSE2
#define BP_GPMI_DEBUG_SENSE1                    21
#define BM_GPMI_DEBUG_SENSE1                    0x200000
#define BF_GPMI_DEBUG_SENSE1(v)                 (((v) & 0x1) << 21)
#define BFM_GPMI_DEBUG_SENSE1(v)                BM_GPMI_DEBUG_SENSE1
#define BF_GPMI_DEBUG_SENSE1_V(e)               BF_GPMI_DEBUG_SENSE1(BV_GPMI_DEBUG_SENSE1__##e)
#define BFM_GPMI_DEBUG_SENSE1_V(v)              BM_GPMI_DEBUG_SENSE1
#define BP_GPMI_DEBUG_SENSE0                    20
#define BM_GPMI_DEBUG_SENSE0                    0x100000
#define BF_GPMI_DEBUG_SENSE0(v)                 (((v) & 0x1) << 20)
#define BFM_GPMI_DEBUG_SENSE0(v)                BM_GPMI_DEBUG_SENSE0
#define BF_GPMI_DEBUG_SENSE0_V(e)               BF_GPMI_DEBUG_SENSE0(BV_GPMI_DEBUG_SENSE0__##e)
#define BFM_GPMI_DEBUG_SENSE0_V(v)              BM_GPMI_DEBUG_SENSE0
#define BP_GPMI_DEBUG_DMAREQ3                   19
#define BM_GPMI_DEBUG_DMAREQ3                   0x80000
#define BF_GPMI_DEBUG_DMAREQ3(v)                (((v) & 0x1) << 19)
#define BFM_GPMI_DEBUG_DMAREQ3(v)               BM_GPMI_DEBUG_DMAREQ3
#define BF_GPMI_DEBUG_DMAREQ3_V(e)              BF_GPMI_DEBUG_DMAREQ3(BV_GPMI_DEBUG_DMAREQ3__##e)
#define BFM_GPMI_DEBUG_DMAREQ3_V(v)             BM_GPMI_DEBUG_DMAREQ3
#define BP_GPMI_DEBUG_DMAREQ2                   18
#define BM_GPMI_DEBUG_DMAREQ2                   0x40000
#define BF_GPMI_DEBUG_DMAREQ2(v)                (((v) & 0x1) << 18)
#define BFM_GPMI_DEBUG_DMAREQ2(v)               BM_GPMI_DEBUG_DMAREQ2
#define BF_GPMI_DEBUG_DMAREQ2_V(e)              BF_GPMI_DEBUG_DMAREQ2(BV_GPMI_DEBUG_DMAREQ2__##e)
#define BFM_GPMI_DEBUG_DMAREQ2_V(v)             BM_GPMI_DEBUG_DMAREQ2
#define BP_GPMI_DEBUG_DMAREQ1                   17
#define BM_GPMI_DEBUG_DMAREQ1                   0x20000
#define BF_GPMI_DEBUG_DMAREQ1(v)                (((v) & 0x1) << 17)
#define BFM_GPMI_DEBUG_DMAREQ1(v)               BM_GPMI_DEBUG_DMAREQ1
#define BF_GPMI_DEBUG_DMAREQ1_V(e)              BF_GPMI_DEBUG_DMAREQ1(BV_GPMI_DEBUG_DMAREQ1__##e)
#define BFM_GPMI_DEBUG_DMAREQ1_V(v)             BM_GPMI_DEBUG_DMAREQ1
#define BP_GPMI_DEBUG_DMAREQ0                   16
#define BM_GPMI_DEBUG_DMAREQ0                   0x10000
#define BF_GPMI_DEBUG_DMAREQ0(v)                (((v) & 0x1) << 16)
#define BFM_GPMI_DEBUG_DMAREQ0(v)               BM_GPMI_DEBUG_DMAREQ0
#define BF_GPMI_DEBUG_DMAREQ0_V(e)              BF_GPMI_DEBUG_DMAREQ0(BV_GPMI_DEBUG_DMAREQ0__##e)
#define BFM_GPMI_DEBUG_DMAREQ0_V(v)             BM_GPMI_DEBUG_DMAREQ0
#define BP_GPMI_DEBUG_CMD_END                   12
#define BM_GPMI_DEBUG_CMD_END                   0xf000
#define BF_GPMI_DEBUG_CMD_END(v)                (((v) & 0xf) << 12)
#define BFM_GPMI_DEBUG_CMD_END(v)               BM_GPMI_DEBUG_CMD_END
#define BF_GPMI_DEBUG_CMD_END_V(e)              BF_GPMI_DEBUG_CMD_END(BV_GPMI_DEBUG_CMD_END__##e)
#define BFM_GPMI_DEBUG_CMD_END_V(v)             BM_GPMI_DEBUG_CMD_END
#define BP_GPMI_DEBUG_UDMA_STATE                8
#define BM_GPMI_DEBUG_UDMA_STATE                0xf00
#define BF_GPMI_DEBUG_UDMA_STATE(v)             (((v) & 0xf) << 8)
#define BFM_GPMI_DEBUG_UDMA_STATE(v)            BM_GPMI_DEBUG_UDMA_STATE
#define BF_GPMI_DEBUG_UDMA_STATE_V(e)           BF_GPMI_DEBUG_UDMA_STATE(BV_GPMI_DEBUG_UDMA_STATE__##e)
#define BFM_GPMI_DEBUG_UDMA_STATE_V(v)          BM_GPMI_DEBUG_UDMA_STATE
#define BP_GPMI_DEBUG_BUSY                      7
#define BM_GPMI_DEBUG_BUSY                      0x80
#define BV_GPMI_DEBUG_BUSY__DISABLED            0x0
#define BV_GPMI_DEBUG_BUSY__ENABLED             0x1
#define BF_GPMI_DEBUG_BUSY(v)                   (((v) & 0x1) << 7)
#define BFM_GPMI_DEBUG_BUSY(v)                  BM_GPMI_DEBUG_BUSY
#define BF_GPMI_DEBUG_BUSY_V(e)                 BF_GPMI_DEBUG_BUSY(BV_GPMI_DEBUG_BUSY__##e)
#define BFM_GPMI_DEBUG_BUSY_V(v)                BM_GPMI_DEBUG_BUSY
#define BP_GPMI_DEBUG_PIN_STATE                 4
#define BM_GPMI_DEBUG_PIN_STATE                 0x70
#define BV_GPMI_DEBUG_PIN_STATE__PSM_IDLE       0x0
#define BV_GPMI_DEBUG_PIN_STATE__PSM_BYTCNT     0x1
#define BV_GPMI_DEBUG_PIN_STATE__PSM_ADDR       0x2
#define BV_GPMI_DEBUG_PIN_STATE__PSM_STALL      0x3
#define BV_GPMI_DEBUG_PIN_STATE__PSM_STROBE     0x4
#define BV_GPMI_DEBUG_PIN_STATE__PSM_ATARDY     0x5
#define BV_GPMI_DEBUG_PIN_STATE__PSM_DHOLD      0x6
#define BV_GPMI_DEBUG_PIN_STATE__PSM_DONE       0x7
#define BF_GPMI_DEBUG_PIN_STATE(v)              (((v) & 0x7) << 4)
#define BFM_GPMI_DEBUG_PIN_STATE(v)             BM_GPMI_DEBUG_PIN_STATE
#define BF_GPMI_DEBUG_PIN_STATE_V(e)            BF_GPMI_DEBUG_PIN_STATE(BV_GPMI_DEBUG_PIN_STATE__##e)
#define BFM_GPMI_DEBUG_PIN_STATE_V(v)           BM_GPMI_DEBUG_PIN_STATE
#define BP_GPMI_DEBUG_MAIN_STATE                0
#define BM_GPMI_DEBUG_MAIN_STATE                0xf
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_IDLE      0x0
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_BYTCNT    0x1
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFE    0x2
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFR    0x3
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DMAREQ    0x4
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DMAACK    0x5
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_WAITFF    0x6
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_LDFIFO    0x7
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_LDDMAR    0x8
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_RDCMP     0x9
#define BV_GPMI_DEBUG_MAIN_STATE__MSM_DONE      0xa
#define BF_GPMI_DEBUG_MAIN_STATE(v)             (((v) & 0xf) << 0)
#define BFM_GPMI_DEBUG_MAIN_STATE(v)            BM_GPMI_DEBUG_MAIN_STATE
#define BF_GPMI_DEBUG_MAIN_STATE_V(e)           BF_GPMI_DEBUG_MAIN_STATE(BV_GPMI_DEBUG_MAIN_STATE__##e)
#define BFM_GPMI_DEBUG_MAIN_STATE_V(v)          BM_GPMI_DEBUG_MAIN_STATE

#endif /* __HEADERGEN_STMP3600_GPMI_H__*/
