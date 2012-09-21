/*
 *
 * @Component			OMAPCONF
 * @Filename			emif44xx.h
 * @Description			OMAP4 EMIF PRCM Definitions & Functions
 * @Author			Patrick Titiano (p-titiano@ti.com)
 * @Date			2010
 * @Copyright			Texas Instruments Incorporated
 *
 *
 * Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


#ifndef __EMIF44XX_H__
#define __EMIF44XX_H__

#include <lib44xx.h>


/* Base address */
#define OMAP44XX_EMIF1_BASE			0x4c000000
#define OMAP44XX_EMIF2_BASE			0x4d000000

/* Registers offset */
#define OMAP44XX_EMIF_MOD_ID_REV		0x0000
#define OMAP44XX_EMIF_STATUS			0x0004
#define OMAP44XX_EMIF_SDRAM_CONFIG		0x0008
#define OMAP44XX_EMIF_SDRAM_CONFIG_2		0x000c
#define OMAP44XX_EMIF_SDRAM_REF_CTRL		0x0010
#define OMAP44XX_EMIF_SDRAM_REF_CTRL_SHDW	0x0014
#define OMAP44XX_EMIF_SDRAM_TIM_1		0x0018
#define OMAP44XX_EMIF_SDRAM_TIM_1_SHDW		0x001c
#define OMAP44XX_EMIF_SDRAM_TIM_2		0x0020
#define OMAP44XX_EMIF_SDRAM_TIM_2_SHDW		0x0024
#define OMAP44XX_EMIF_SDRAM_TIM_3		0x0028
#define OMAP44XX_EMIF_SDRAM_TIM_3_SHDW		0x002c
#define OMAP44XX_EMIF_LPDDR2_NVM_TIM		0x0030
#define OMAP44XX_EMIF_LPDDR2_NVM_TIM_SHDW	0x0034
#define OMAP44XX_EMIF_PWR_MGMT_CTRL		0x0038
#define OMAP44XX_EMIF_PWR_MGMT_CTRL_SHDW	0x003c
#define OMAP44XX_EMIF_LPDDR2_MODE_REG_DATA	0x0040
#define OMAP44XX_EMIF_LPDDR2_MODE_REG_CFG	0x0050
#define OMAP44XX_EMIF_OCP_CONFIG		0x0054
#define OMAP44XX_EMIF_OCP_CFG_VAL_1		0x0058
#define OMAP44XX_EMIF_OCP_CFG_VAL_2		0x005c
#define OMAP44XX_EMIF_IODFT_TLGC		0x0060
#define OMAP44XX_EMIF_IODFT_CTRL_MISR_RSLT	0x0064
#define OMAP44XX_EMIF_IODFT_ADDR_MISR_RSLT	0x0068
#define OMAP44XX_EMIF_IODFT_DATA_MISR_RSLT_1	0x006c
#define OMAP44XX_EMIF_IODFT_DATA_MISR_RSLT_2	0x0070
#define OMAP44XX_EMIF_IODFT_DATA_MISR_RSLT_3	0x0074
#define OMAP44XX_EMIF_PERF_CNT_1		0x0080
#define OMAP44XX_EMIF_PERF_CNT_2		0x0084
#define OMAP44XX_EMIF_PERF_CNT_CFG		0x0088
#define OMAP44XX_EMIF_PERF_CNT_SEL		0x008c
#define OMAP44XX_EMIF_PERF_CNT_TIM		0x0090
#define OMAP44XX_EMIF_READ_IDLE_CTRL		0x0098
#define OMAP44XX_EMIF_READ_IDLE_CTRL_SHDW	0x009c
#define OMAP44XX_EMIF_IRQ_EOI			0x00a0
#define OMAP44XX_EMIF_IRQSTATUS_RAW_SYS		0x00a4
#define OMAP44XX_EMIF_IRQSTATUS_RAW_LL		0x00a8
#define OMAP44XX_EMIF_IRQSTATUS_SYS		0x00ac
#define OMAP44XX_EMIF_IRQSTATUS_LL		0x00b0
#define OMAP44XX_EMIF_IRQENABLE_SET_SYS		0x00b4
#define OMAP44XX_EMIF_IRQENABLE_SET_LL		0x00b8
#define OMAP44XX_EMIF_IRQENABLE_CLR_SYS		0x00bc
#define OMAP44XX_EMIF_IRQENABLE_CLR_LL		0x00c0
#define OMAP44XX_EMIF_ZQ_CONFIG			0x00c8
#define OMAP44XX_EMIF_TEMP_ALERT_CONFIG		0x00cc
#define OMAP44XX_EMIF_OCP_ERR_LOG		0x00d0
#define OMAP44XX_EMIF_DDR_PHY_CTRL_1		0x00e4
#define OMAP44XX_EMIF_DDR_PHY_CTRL_1_SHDW	0x00e8
#define OMAP44XX_EMIF_DDR_PHY_CTRL_2		0x00ec

#define OMAP44XX_EMIF_REGADDR(module, reg) ((module) + (reg))

/* EMIF1 Registers */
#define OMAP44XX_EMIF1_MOD_ID_REV		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0000)
#define OMAP44XX_EMIF1_STATUS			OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0004)
#define OMAP44XX_EMIF1_SDRAM_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0008)
#define OMAP44XX_EMIF1_SDRAM_CONFIG_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x000c)
#define OMAP44XX_EMIF1_SDRAM_REF_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0010)
#define OMAP44XX_EMIF1_SDRAM_REF_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0014)
#define OMAP44XX_EMIF1_SDRAM_TIM_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0018)
#define OMAP44XX_EMIF1_SDRAM_TIM_1_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x001c)
#define OMAP44XX_EMIF1_SDRAM_TIM_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0020)
#define OMAP44XX_EMIF1_SDRAM_TIM_2_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0024)
#define OMAP44XX_EMIF1_SDRAM_TIM_3		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0028)
#define OMAP44XX_EMIF1_SDRAM_TIM_3_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x002c)
#define OMAP44XX_EMIF1_LPDDR2_NVM_TIM		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0030)
#define OMAP44XX_EMIF1_LPDDR2_NVM_TIM_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0034)
#define OMAP44XX_EMIF1_PWR_MGMT_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0038)
#define OMAP44XX_EMIF1_PWR_MGMT_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x003c)
#define OMAP44XX_EMIF1_LPDDR2_MODE_REG_DATA	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0040)
#define OMAP44XX_EMIF1_LPDDR2_MODE_REG_CFG	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0050)
#define OMAP44XX_EMIF1_OCP_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0054)
#define OMAP44XX_EMIF1_OCP_CFG_VAL_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0058)
#define OMAP44XX_EMIF1_OCP_CFG_VAL_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x005c)
#define OMAP44XX_EMIF1_IODFT_TLGC		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0060)
#define OMAP44XX_EMIF1_IODFT_CTRL_MISR_RSLT	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0064)
#define OMAP44XX_EMIF1_IODFT_ADDR_MISR_RSLT	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0068)
#define OMAP44XX_EMIF1_IODFT_DATA_MISR_RSLT_1	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x006c)
#define OMAP44XX_EMIF1_IODFT_DATA_MISR_RSLT_2	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0070)
#define OMAP44XX_EMIF1_IODFT_DATA_MISR_RSLT_3	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0074)
#define OMAP44XX_EMIF1_PERF_CNT_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0080)
#define OMAP44XX_EMIF1_PERF_CNT_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0084)
#define OMAP44XX_EMIF1_PERF_CNT_CFG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0088)
#define OMAP44XX_EMIF1_PERF_CNT_SEL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x008c)
#define OMAP44XX_EMIF1_PERF_CNT_TIM		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0090)
#define OMAP44XX_EMIF1_READ_IDLE_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x0098)
#define OMAP44XX_EMIF1_READ_IDLE_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x009c)
#define OMAP44XX_EMIF1_IRQ_EOI			OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00a0)
#define OMAP44XX_EMIF1_IRQSTATUS_RAW_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00a4)
#define OMAP44XX_EMIF1_IRQSTATUS_RAW_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00a8)
#define OMAP44XX_EMIF1_IRQSTATUS_SYS		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00ac)
#define OMAP44XX_EMIF1_IRQSTATUS_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00b0)
#define OMAP44XX_EMIF1_IRQENABLE_SET_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00b4)
#define OMAP44XX_EMIF1_IRQENABLE_SET_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00b8)
#define OMAP44XX_EMIF1_IRQENABLE_CLR_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00bc)
#define OMAP44XX_EMIF1_IRQENABLE_CLR_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00c0)
#define OMAP44XX_EMIF1_ZQ_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00c8)
#define OMAP44XX_EMIF1_TEMP_ALERT_CONFIG	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00cc)
#define OMAP44XX_EMIF1_OCP_ERR_LOG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00d0)
#define OMAP44XX_EMIF1_DDR_PHY_CTRL_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00e4)
#define OMAP44XX_EMIF1_DDR_PHY_CTRL_1_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00e8)
#define OMAP44XX_EMIF1_DDR_PHY_CTRL_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF1_BASE, 0x00ec)


/* EMIF2 Registers */
#define OMAP44XX_EMIF2_MOD_ID_REV		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0000)
#define OMAP44XX_EMIF2_STATUS			OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0004)
#define OMAP44XX_EMIF2_SDRAM_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0008)
#define OMAP44XX_EMIF2_SDRAM_CONFIG_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x000c)
#define OMAP44XX_EMIF2_SDRAM_REF_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0010)
#define OMAP44XX_EMIF2_SDRAM_REF_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0014)
#define OMAP44XX_EMIF2_SDRAM_TIM_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0018)
#define OMAP44XX_EMIF2_SDRAM_TIM_1_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x001c)
#define OMAP44XX_EMIF2_SDRAM_TIM_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0020)
#define OMAP44XX_EMIF2_SDRAM_TIM_2_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0024)
#define OMAP44XX_EMIF2_SDRAM_TIM_3		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0028)
#define OMAP44XX_EMIF2_SDRAM_TIM_3_SHDW		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x002c)
#define OMAP44XX_EMIF2_LPDDR2_NVM_TIM		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0030)
#define OMAP44XX_EMIF2_LPDDR2_NVM_TIM_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0034)
#define OMAP44XX_EMIF2_PWR_MGMT_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0038)
#define OMAP44XX_EMIF2_PWR_MGMT_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x003c)
#define OMAP44XX_EMIF2_LPDDR2_MODE_REG_DATA	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0040)
#define OMAP44XX_EMIF2_LPDDR2_MODE_REG_CFG	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0050)
#define OMAP44XX_EMIF2_OCP_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0054)
#define OMAP44XX_EMIF2_OCP_CFG_VAL_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0058)
#define OMAP44XX_EMIF2_OCP_CFG_VAL_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x005c)
#define OMAP44XX_EMIF2_IODFT_TLGC		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0060)
#define OMAP44XX_EMIF2_IODFT_CTRL_MISR_RSLT	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0064)
#define OMAP44XX_EMIF2_IODFT_ADDR_MISR_RSLT	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0068)
#define OMAP44XX_EMIF2_IODFT_DATA_MISR_RSLT_1	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x006c)
#define OMAP44XX_EMIF2_IODFT_DATA_MISR_RSLT_2	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0070)
#define OMAP44XX_EMIF2_IODFT_DATA_MISR_RSLT_3	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0074)
#define OMAP44XX_EMIF2_PERF_CNT_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0080)
#define OMAP44XX_EMIF2_PERF_CNT_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0084)
#define OMAP44XX_EMIF2_PERF_CNT_CFG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0088)
#define OMAP44XX_EMIF2_PERF_CNT_SEL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x008c)
#define OMAP44XX_EMIF2_PERF_CNT_TIM		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0090)
#define OMAP44XX_EMIF2_READ_IDLE_CTRL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x0098)
#define OMAP44XX_EMIF2_READ_IDLE_CTRL_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x009c)
#define OMAP44XX_EMIF2_IRQ_EOI			OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00a0)
#define OMAP44XX_EMIF2_IRQSTATUS_RAW_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00a4)
#define OMAP44XX_EMIF2_IRQSTATUS_RAW_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00a8)
#define OMAP44XX_EMIF2_IRQSTATUS_SYS		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00ac)
#define OMAP44XX_EMIF2_IRQSTATUS_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00b0)
#define OMAP44XX_EMIF2_IRQENABLE_SET_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00b4)
#define OMAP44XX_EMIF2_IRQENABLE_SET_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00b8)
#define OMAP44XX_EMIF2_IRQENABLE_CLR_SYS	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00bc)
#define OMAP44XX_EMIF2_IRQENABLE_CLR_LL		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00c0)
#define OMAP44XX_EMIF2_ZQ_CONFIG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00c8)
#define OMAP44XX_EMIF2_TEMP_ALERT_CONFIG	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00cc)
#define OMAP44XX_EMIF2_OCP_ERR_LOG		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00d0)
#define OMAP44XX_EMIF2_DDR_PHY_CTRL_1		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00e4)
#define OMAP44XX_EMIF2_DDR_PHY_CTRL_1_SHDW	OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00e8)
#define OMAP44XX_EMIF2_DDR_PHY_CTRL_2		OMAP44XX_EMIF_REGADDR(OMAP44XX_EMIF2_BASE, 0x00ec)


typedef enum {
	EMIF44XX_0 = 0,
	EMIF44XX_1 = 1,
	EMIF44XX_MAX = 2
} emif44xx_ids;


typedef enum {
	EMIF44XX_PERF_CNT_0 = 0,
	EMIF44XX_PERF_CNT_1 = 1,
	EMIF44XX_PERF_CNT_MAX = 2
} emif44xx_perf_cnt_ids;


/*
 * NB:	When MReqDbg (cemudbg) is set to '1' for a command on the
 *	EMIF bus, perf. counters will not increment for
 *	counts of filter type 0,1,2,3 and A.
 * NB:	Filter types 0,1,2,3 and 8 work when MConnID(MSTID) filtering enabled.
 *	Filter types 2,3,8 work when region MAddrSpace(crsel) filtering
 *	is enabled.
 */

typedef enum {
	EMIF44XX_PERF_CNT_FILTER_TOTAL_ACCESS = 0x0,
	EMIF44XX_PERF_CNT_FILTER_TOTAL_ACT = 0x1,
	EMIF44XX_PERF_CNT_FILTER_TOTAL_READ = 0x2,
	EMIF44XX_PERF_CNT_FILTER_TOTAL_WRITE = 0x3,
	EMIF44XX_PERF_CNT_FILTER_CMDFIFO_FULL_CYC = 0x4,
	EMIF44XX_PERF_CNT_FILTER_WRBUF_FULL_CYC = 0x5,
	EMIF44XX_PERF_CNT_FILTER_RDFIFO_FULL_CYC = 0x6,
	EMIF44XX_PERF_CNT_FILTER_WSFIFO_FULL_CYC = 0x7,
	EMIF44XX_PERF_CNT_FILTER_PRIORITY_ELEV_CNT = 0x8,
	EMIF44XX_PERF_CNT_FILTER_CMD_PENDING_CYC = 0x9,
	EMIF44XX_PERF_CNT_FILTER_DATA_TRANSFER_CYCLES = 0xA,
	EMIF44XX_PERF_CNT_FILTER_DISABLED = 0x10, /* Like MAX below, this value is not used in the EMIF. */
	EMIF44XX_PERF_CNT_FILTER_MAX = 0x11 /* Value is not used. */
} emif44xx_perf_cnt_filter_ids;


typedef enum {
	EMIF44XX_MEMADDRSPACE_CS1ANDCS0 = 0x0, /* These match EMIF fields (i.e. enum numbering is intentional.) */
	EMIF44XX_MEMADDRSPACE_CS0       = 0x1,
	EMIF44XX_MEMADDRSPACE_RESERVED  = 0x2,
	EMIF44XX_MEMADDRSPACE_INTERNAL  = 0x3,
	EMIF44XX_MEMADDRSPACE_DISABLED  = 0x4, /* Like MAX below, this value is not used in the EMIF. */
	EMIF44XX_MEMADDRSPACE_MAX       = 0x5  /* Value is not used. */
} emif44xx_memaddrspace;


static const name_desc_val_table emif_event_counters[] =  {
	{"TOTAL_ACCESS",	"Total SDRAM Accesses.",					EMIF44XX_PERF_CNT_FILTER_TOTAL_ACCESS},
	{"TOTAL_ACT",		"Total SDRAM Activates.",					EMIF44XX_PERF_CNT_FILTER_TOTAL_ACT},
	{"TOTAL_READ",		"Total READs.",							EMIF44XX_PERF_CNT_FILTER_TOTAL_READ},
	{"TOTAL_WRITE",		"Total WRITES.",						EMIF44XX_PERF_CNT_FILTER_TOTAL_WRITE},
	{"CMDFIFO_FULL",	"Number of m_clk cycles OCP Command FIFO is full.",		EMIF44XX_PERF_CNT_FILTER_CMDFIFO_FULL_CYC},
	{"WRBUF_FULL",		"Number of m_clk cycles OCP Write Data FIFO is full.",		EMIF44XX_PERF_CNT_FILTER_WRBUF_FULL_CYC},
	{"RDFIFO_FULL",		"Number of m_clk cycles OCP Read Data FIFO is full.",		EMIF44XX_PERF_CNT_FILTER_RDFIFO_FULL_CYC},
	{"WSFIFO_FULL",		"Number of m_clk cycles OCP Return Command FIFO is full.",	EMIF44XX_PERF_CNT_FILTER_WSFIFO_FULL_CYC},
	{"PRIORITY_ELEV",	"Number of priority elevations.",				EMIF44XX_PERF_CNT_FILTER_PRIORITY_ELEV_CNT},
	{"CMD_PENDING",		"Number of m_clk cycles that a command was pending.",		EMIF44XX_PERF_CNT_FILTER_CMD_PENDING_CYC},
	{"DATA_TRANSFER",	"Number of m_clk cycles memory bus xferring data.",		EMIF44XX_PERF_CNT_FILTER_DATA_TRANSFER_CYCLES},
	{"DISABLED",		"Counts Disabled.",						EMIF44XX_PERF_CNT_FILTER_DISABLED},
	/* END OF TABLE IS REQUIRED! */
	{"END",			"End of Table.",						0} };


static const name_desc_val_table emif_event_memaddrspace[] =  {
	{"CS_1_AND_0",	"Count for access to PAD_CS_N[1] and PAD_CS_N[0] regions.",		EMIF44XX_MEMADDRSPACE_CS1ANDCS0},
	{"CS_0",	"Count for access to PAD_CS_N[0] region.",				EMIF44XX_MEMADDRSPACE_CS0},
	{"RESERVED",	"Reserved. Usage is unpredictable.",					EMIF44XX_MEMADDRSPACE_RESERVED},
	{"INTERNAL",	"Count for access to internal registers.",				EMIF44XX_MEMADDRSPACE_INTERNAL},
	{"DISABLED",	"Count All. Region filtering is disabled.",				EMIF44XX_MEMADDRSPACE_DISABLED},
	/* END OF TABLEIS REQUIRED! */
	{"END",		"End of Table.",							0} };


int emif44xx_name2addr(char *name, unsigned int *addr);
int emif44xx_dump(void);
int emif44xx_main(int argc, char *argv[]);

int emif44xx_perf_cnt_configure(emif44xx_ids emif_id,
	emif44xx_perf_cnt_ids cnt_id, emif44xx_perf_cnt_filter_ids filter,
	int conn_id, emif44xx_memaddrspace addr_sel);
unsigned int emif44xx_perf_cnt_get_time(emif44xx_ids emif_id);
unsigned int emif44xx_perf_cnt_get_count(emif44xx_ids emif_id,
	emif44xx_perf_cnt_ids cnt_id);


unsigned char emif44xx_cs_count_get(void);


#endif