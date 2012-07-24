/*
 * AM33XX mux data
 *
 * Copyright (C) 2011 Texas Instruments Incorporated - http://www.ti.com/
 *
 * Derived from: arch/arm/mach-omap2/mux34xx.c Original copyright follows:
 *
 * Copyright (C) 2009 Nokia
 * Copyright (C) 2009 Texas Instruments
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
#include <linux/init.h>

#include "mux.h"

#ifdef CONFIG_OMAP_MUX

#define _AM33XX_MUXENTRY(M0, g, m0, m1, m2, m3, m4, m5, m6, m7)		\
{									\
	.reg_offset	= (AM33XX_CONTROL_PADCONF_##M0##_OFFSET),	\
	.gpio		= (g),						\
	.muxnames	= { m0, m1, m2, m3, m4, m5, m6, m7 },		\
}

/* AM33XX pin mux super set */
static struct omap_mux __initdata am33xx_muxmodes[] = {
	_AM33XX_MUXENTRY(GPMC_AD0, 0,
		"gpmc_ad0", "mmc1_dat0", NULL, NULL,
		NULL, NULL, NULL, "gpio1_0"),
	_AM33XX_MUXENTRY(GPMC_AD1, 0,
		"gpmc_ad1", "mmc1_dat1", NULL, NULL,
		NULL, NULL, NULL, "gpio1_1"),
	_AM33XX_MUXENTRY(GPMC_AD2, 0,
		"gpmc_ad2", "mmc1_dat2", NULL, NULL,
		NULL, NULL, NULL, "gpio1_2"),
	_AM33XX_MUXENTRY(GPMC_AD3, 0,
		"gpmc_ad3", "mmc1_dat3", NULL, NULL,
		NULL, NULL, NULL, "gpio1_3"),
	_AM33XX_MUXENTRY(GPMC_AD4, 0,
		"gpmc_ad4", "mmc1_dat4", NULL, NULL,
		NULL, NULL, NULL, "gpio1_4"),
	_AM33XX_MUXENTRY(GPMC_AD5, 0,
		"gpmc_ad5", "mmc1_dat5", NULL, NULL,
		NULL, NULL, NULL, "gpio1_5"),
	_AM33XX_MUXENTRY(GPMC_AD6, 0,
		"gpmc_ad6", "mmc1_dat6", NULL, NULL,
		NULL, NULL, NULL, "gpio1_6"),
	_AM33XX_MUXENTRY(GPMC_AD7, 0,
		"gpmc_ad7", "mmc1_dat7", NULL, NULL,
		NULL, NULL, NULL, "gpio1_7"),
	_AM33XX_MUXENTRY(GPMC_AD8, 0,
		"gpmc_ad8", "lcd_data16", "mmc1_dat0", "mmc2_dat4",
		NULL, NULL, NULL, "gpio0_22"),
	_AM33XX_MUXENTRY(GPMC_AD9, 0,
		"gpmc_ad9", "lcd_data17", "mmc1_dat1", "mmc2_dat5",
		"ehrpwm2B", NULL, NULL, "gpio0_23"),
	_AM33XX_MUXENTRY(GPMC_AD10, 0,
		"gpmc_ad10", "lcd_data18", "mmc1_dat2", "mmc2_dat6",
		NULL, NULL, NULL, "gpio0_26"),
	_AM33XX_MUXENTRY(GPMC_AD11, 0,
		"gpmc_ad11", "lcd_data19", "mmc1_dat3", "mmc2_dat7",
		NULL, NULL, NULL, "gpio0_27"),
	_AM33XX_MUXENTRY(GPMC_AD12, 0,
		"gpmc_ad12", "lcd_data20", "mmc1_dat4", "mmc2_dat0",
		NULL, NULL, NULL, "gpio1_12"),
	_AM33XX_MUXENTRY(GPMC_AD13, 0,
		"gpmc_ad13", "lcd_data21", "mmc1_dat5", "mmc2_dat1",
		NULL, NULL, NULL, "gpio1_13"),
	_AM33XX_MUXENTRY(GPMC_AD14, 0,
		"gpmc_ad14", "lcd_data22", "mmc1_dat6", "mmc2_dat2",
		NULL, NULL, NULL, "gpio1_14"),
	_AM33XX_MUXENTRY(GPMC_AD15, 0,
		"gpmc_ad15", "lcd_data23", "mmc1_dat7", "mmc2_dat3",
		NULL, NULL, NULL, "gpio1_15"),
	_AM33XX_MUXENTRY(GPMC_A0, 0,
		"gpmc_a0", "mii2_txen", "rgmii2_tctl", "rmii2_txen",
		NULL, NULL, NULL, "gpio1_16"),
	_AM33XX_MUXENTRY(GPMC_A1, 0,
		"gpmc_a1", "mii2_rxdv", "rgmii2_rctl", "mmc2_dat0",
		NULL, NULL, NULL, "gpio1_17"),
	_AM33XX_MUXENTRY(GPMC_A2, 0,
		"gpmc_a2", "mii2_txd3", "rgmii2_td3", "mmc2_dat1",
		NULL, NULL, NULL, "gpio1_18"),
	_AM33XX_MUXENTRY(GPMC_A3, 0,
		"gpmc_a3", "mii2_txd2", "rgmii2_td2", "mmc2_dat2",
		NULL, NULL, NULL, "gpio1_19"),
	_AM33XX_MUXENTRY(GPMC_A4, 0,
		"gpmc_a4", "mii2_txd1", "rgmii2_td1", "rmii2_txd1",
		"gpmc_a20", NULL, NULL, "gpio1_20"),
	_AM33XX_MUXENTRY(GPMC_A5, 0,
		"gpmc_a5", "mii2_txd0", "rgmii2_td0", "rmii2_txd0",
		"gpmc_a21", NULL, NULL, "gpio1_21"),
	_AM33XX_MUXENTRY(GPMC_A6, 0,
		"gpmc_a6", "mii2_txclk", "rgmii2_tclk", "mmc2_dat4",
		"gpmc_a22", NULL, NULL, "gpio1_22"),
	_AM33XX_MUXENTRY(GPMC_A7, 0,
		"gpmc_a7", "mii2_rxclk", "rgmii2_rclk", "mmc2_dat5",
		NULL, NULL, NULL, "gpio1_23"),
	_AM33XX_MUXENTRY(GPMC_A8, 0,
		"gpmc_a8", "mii2_rxd3", "rgmii2_rd3", "mmc2_dat6",
		NULL, NULL, "mcasp0_aclkx", "gpio1_24"),
	_AM33XX_MUXENTRY(GPMC_A9, 0,
		"gpmc_a9", "mii2_rxd2", "rgmii2_rd2", "mmc2_dat7",
		NULL, NULL, "mcasp0_fsx", "gpio1_25"),
	_AM33XX_MUXENTRY(GPMC_A10, 0,
		"gpmc_a10", "mii2_rxd1", "rgmii2_rd1", "rmii2_rxd1",
		NULL, NULL, "mcasp0_axr0", "gpio1_26"),
	_AM33XX_MUXENTRY(GPMC_A11, 0,
		"gpmc_a11", "mii2_rxd0", "rgmii2_rd0", "rmii2_rxd0",
		NULL, NULL, "mcasp0_axr1", "gpio1_27"),
	_AM33XX_MUXENTRY(GPMC_WAIT0, 0,
		"gpmc_wait0", "mii2_crs", NULL, "rmii2_crs_dv",
		"mmc1_sdcd", NULL, NULL, "gpio0_30"),
	_AM33XX_MUXENTRY(GPMC_WPN, 0,
		"gpmc_wpn", "mii2_rxerr", NULL, "rmii2_rxerr",
		"mmc2_sdcd", NULL, NULL, "gpio0_31"),
	_AM33XX_MUXENTRY(GPMC_BEN1, 0,
		"gpmc_ben1", "mii2_col", NULL, "mmc2_dat3",
		NULL, NULL, "mcasp0_aclkr", "gpio1_28"),
	_AM33XX_MUXENTRY(GPMC_CSN0, 0,
		"gpmc_csn0", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio1_29"),
	_AM33XX_MUXENTRY(GPMC_CSN1, 0,
		"gpmc_csn1", NULL, "mmc1_clk", NULL,
		NULL, NULL, NULL, "gpio1_30"),
	_AM33XX_MUXENTRY(GPMC_CSN2, 0,
		"gpmc_csn2", NULL, "mmc1_cmd", NULL,
		NULL, NULL, NULL, "gpio1_31"),
	_AM33XX_MUXENTRY(GPMC_CSN3, 0,
		"gpmc_csn3", NULL, NULL, "mmc2_cmd",
		NULL, NULL, NULL, "gpio2_0"),
	_AM33XX_MUXENTRY(GPMC_CLK, 0,
		"gpmc_clk", "lcd_memory_clk_mux", NULL, "mmc2_clk",
		NULL, NULL, "mcasp0_fsr", "gpio2_1"),
	_AM33XX_MUXENTRY(GPMC_ADVN_ALE, 0,
		"gpmc_advn_ale", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_2"),
	_AM33XX_MUXENTRY(GPMC_OEN_REN, 0,
		"gpmc_oen_ren", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_3"),
	_AM33XX_MUXENTRY(GPMC_WEN, 0,
		"gpmc_wen", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_4"),
	_AM33XX_MUXENTRY(GPMC_BEN0_CLE, 0,
		"gpmc_ben0_cle", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_5"),
	_AM33XX_MUXENTRY(LCD_DATA0, 0,
		"lcd_data0", "gpmc_a0", NULL, NULL,
		NULL, NULL, NULL, "gpio2_6"),
	_AM33XX_MUXENTRY(LCD_DATA1, 0,
		"lcd_data1", "gpmc_a1", NULL, NULL,
		NULL, NULL, NULL, "gpio2_7"),
	_AM33XX_MUXENTRY(LCD_DATA2, 0,
		"lcd_data2", "gpmc_a2", NULL, NULL,
		NULL, NULL, NULL, "gpio2_8"),
	_AM33XX_MUXENTRY(LCD_DATA3, 0,
		"lcd_data3", "gpmc_a3", NULL, NULL,
		NULL, NULL, NULL, "gpio2_9"),
	_AM33XX_MUXENTRY(LCD_DATA4, 0,
		"lcd_data4", "gpmc_a4", NULL, NULL,
		NULL, NULL, NULL, "gpio2_10"),
	_AM33XX_MUXENTRY(LCD_DATA5, 0,
		"lcd_data5", "gpmc_a5", NULL, NULL,
		NULL, NULL, NULL, "gpio2_11"),
	_AM33XX_MUXENTRY(LCD_DATA6, 0,
		"lcd_data6", "gpmc_a6", NULL, NULL,
		NULL, NULL, NULL, "gpio2_12"),
	_AM33XX_MUXENTRY(LCD_DATA7, 0,
		"lcd_data7", "gpmc_a7", NULL, NULL,
		NULL, NULL, NULL, "gpio2_13"),
	_AM33XX_MUXENTRY(LCD_DATA8, 0,
		"lcd_data8", "gpmc_a12", NULL, "mcasp0_aclkx",
		NULL, NULL, "uart2_ctsn", "gpio2_14"),
	_AM33XX_MUXENTRY(LCD_DATA9, 0,
		"lcd_data9", "gpmc_a13", NULL, "mcasp0_fsx",
		NULL, NULL, "uart2_rtsn", "gpio2_15"),
	_AM33XX_MUXENTRY(LCD_DATA10, 0,
		"lcd_data10", "gpmc_a14", NULL, "mcasp0_axr0",
		NULL, NULL, NULL, "gpio2_16"),
	_AM33XX_MUXENTRY(LCD_DATA11, 0,
		"lcd_data11", "gpmc_a15", NULL, "mcasp0_ahclkr",
		"mcasp0_axr2", NULL, NULL, "gpio2_17"),
	_AM33XX_MUXENTRY(LCD_DATA12, 0,
		"lcd_data12", "gpmc_a16", NULL, "mcasp0_aclkr",
		"mcasp0_axr2", NULL, NULL, "gpio0_8"),
	_AM33XX_MUXENTRY(LCD_DATA13, 0,
		"lcd_data13", "gpmc_a17", NULL, "mcasp0_fsr",
		"mcasp0_axr3", NULL, NULL, "gpio0_9"),
	_AM33XX_MUXENTRY(LCD_DATA14, 0,
		"lcd_data14", "gpmc_a18", NULL, "mcasp0_axr1",
		NULL, NULL, NULL, "gpio0_10"),
	_AM33XX_MUXENTRY(LCD_DATA15, 0,
		"lcd_data15", "gpmc_a19", NULL, "mcasp0_ahclkx",
		"mcasp0_axr3", NULL, NULL, "gpio0_11"),
	_AM33XX_MUXENTRY(LCD_VSYNC, 0,
		"lcd_vsync", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_22"),
	_AM33XX_MUXENTRY(LCD_HSYNC, 0,
		"lcd_hsync", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_23"),
	_AM33XX_MUXENTRY(LCD_PCLK, 0,
		"lcd_pclk", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_24"),
	_AM33XX_MUXENTRY(LCD_AC_BIAS_EN, 0,
		"lcd_ac_bias_en", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_25"),
	_AM33XX_MUXENTRY(MMC0_DAT3, 0,
		"mmc0_dat3", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_26"),
	_AM33XX_MUXENTRY(MMC0_DAT2, 0,
		"mmc0_dat2", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_27"),
	_AM33XX_MUXENTRY(MMC0_DAT1, 0,
		"mmc0_dat1", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_28"),
	_AM33XX_MUXENTRY(MMC0_DAT0, 0,
		"mmc0_dat0", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_29"),
	_AM33XX_MUXENTRY(MMC0_CLK, 0,
		"mmc0_clk", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_30"),
	_AM33XX_MUXENTRY(MMC0_CMD, 0,
		"mmc0_cmd", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio2_31"),
	_AM33XX_MUXENTRY(MII1_COL, 0,
		"mii1_col", "rmii2_refclk", "spi1_sclk", NULL,
		"mcasp1_axr2", "mmc2_dat3", "mcasp0_axr2", "gpio3_0"),
	_AM33XX_MUXENTRY(MII1_CRS, 0,
		"mii1_crs", "rmii1_crs_dv", "spi1_d0", "i2c1_sda",
		"mcasp1_aclkx", NULL, NULL, "gpio3_1"),
	_AM33XX_MUXENTRY(MII1_RXERR, 0,
		"mii1_rxerr", "rmii1_rxerr", "spi1_d1", "i2c1_scl",
		"mcasp1_fsx", NULL, NULL, "gpio3_2"),
	_AM33XX_MUXENTRY(MII1_TXEN, 0,
		"mii1_txen", "rmii1_txen", "rgmii1_tctl", NULL,
		"mcasp1_axr0", NULL, "mmc2_cmd", "gpio3_3"),
	_AM33XX_MUXENTRY(MII1_RXDV, 0,
		"mii1_rxdv", NULL, "rgmii1_rctl", NULL,
		"mcasp1_aclx", "mmc2_dat0", "mcasp0_aclkr", "gpio3_4"),
	_AM33XX_MUXENTRY(MII1_TXD3, 0,
		"mii1_txd3", NULL, "rgmii1_td3", NULL,
		"mcasp1_fsx", "mmc2_dat1", "mcasp0_fsr", "gpio0_16"),
	_AM33XX_MUXENTRY(MII1_TXD2, 0,
		"mii1_txd2", NULL, "rgmii1_td2", NULL,
		"mcasp1_axr0", "mmc2_dat2", "mcasp0_ahclkx", "gpio0_17"),
	_AM33XX_MUXENTRY(MII1_TXD1, 0,
		"mii1_txd1", "rmii1_txd1", "rgmii1_td1", "mcasp1_fsr",
		"mcasp1_axr1", NULL, "mmc1_cmd", "gpio0_21"),
	_AM33XX_MUXENTRY(MII1_TXD0, 0,
		"mii1_txd0", "rmii1_txd0", "rgmii1_td0", "mcasp1_axr2",
		"mcasp1_aclkr", NULL, "mmc1_clk", "gpio0_28"),
	_AM33XX_MUXENTRY(MII1_TXCLK, 0,
		"mii1_txclk", NULL, "rgmii1_tclk", "mmc0_dat7",
		"mmc1_dat0", NULL, "mcasp0_aclkx", "gpio3_9"),
	_AM33XX_MUXENTRY(MII1_RXCLK, 0,
		"mii1_rxclk", NULL, "rgmii1_rclk", "mmc0_dat6",
		"mmc1_dat1", NULL, "mcasp0_fsx", "gpio3_10"),
	_AM33XX_MUXENTRY(MII1_RXD3, 0,
		"mii1_rxd3", NULL, "rgmii1_rd3", "mmc0_dat5",
		"mmc1_dat2", NULL, "mcasp0_axr0", "gpio2_18"),
	_AM33XX_MUXENTRY(MII1_RXD2, 0,
		"mii1_rxd2", "uart3_txd", "rgmii1_rd2", "mmc0_dat4",
		"mmc1_dat3", NULL, "mcasp0_axr1", "gpio2_19"),
	_AM33XX_MUXENTRY(MII1_RXD1, 0,
		"mii1_rxd1", "rmii1_rxd1", "rgmii1_rd1", "mcasp1_axr3",
		"mcasp1_fsr", NULL, "mmc2_clk", "gpio2_20"),
	_AM33XX_MUXENTRY(MII1_RXD0, 0,
		"mii1_rxd0", "rmii1_rxd0", "rgmii1_rd0", "mcasp1_ahclkx",
		"mcasp1_ahclkr", "mcasp1_aclkr", "mcasp0_axr3", "gpio2_21"),
	_AM33XX_MUXENTRY(MII1_REFCLK, 0,
		"rmii1_refclk", NULL, "spi1_cs0", NULL,
		"mcasp1_axr3", "mmc0_pow", "mcasp1_ahclkx", "gpio0_29"),
	_AM33XX_MUXENTRY(MDIO_DATA, 0,
		"mdio_data", NULL, NULL, NULL,
		"mmc0_sdcd", "mmc1_cmd", "mmc2_cmd", "gpio0_0"),
	_AM33XX_MUXENTRY(MDIO_CLK, 0,
		"mdio_clk", NULL, NULL, NULL,
		"mmc0_sdwp", "mmc1_clk", "mmc2_clk", "gpio0_1"),
	_AM33XX_MUXENTRY(SPI0_SCLK, 0,
		"spi0_sclk", "uart2_rxd", "i2c2_sda", NULL,
		NULL, NULL, NULL, "gpio0_2"),
	_AM33XX_MUXENTRY(SPI0_D0, 0,
		"spi0_d0", "uart2_txd", "i2c2_scl", NULL,
		NULL, NULL, NULL, "gpio0_3"),
	_AM33XX_MUXENTRY(SPI0_D1, 0,
		"spi0_d1", "mmc1_sdwp", "i2c1_sda", NULL,
		NULL, NULL, NULL, "gpio0_4"),
	_AM33XX_MUXENTRY(SPI0_CS0, 0,
		"spi0_cs0", "mmc2_sdwp", "i2c1_scl", NULL,
		NULL, NULL, NULL, "gpio0_5"),
	_AM33XX_MUXENTRY(SPI0_CS1, 0,
		"spi0_cs1", "uart3_rxd", NULL, "mmc0_pow",
		NULL, "mmc0_sdcd", NULL, "gpio0_6"),
	_AM33XX_MUXENTRY(ECAP0_IN_PWM0_OUT, 0,
		"ecap0_in_pwm0_out", "uart3_txd", "spi1_cs1", NULL,
		"spi1_sclk", "mmc0_sdwp", NULL, "gpio0_7"),
	_AM33XX_MUXENTRY(UART0_CTSN, 0,
		"uart0_ctsn", NULL, "d_can1_tx", "i2c1_sda",
		"spi1_d0", NULL, NULL, "gpio1_8"),
	_AM33XX_MUXENTRY(UART0_RTSN, 0,
		"uart0_rtsn", NULL, "d_can1_rx", "i2c1_scl",
		"spi1_d1", "spi1_cs0", NULL, "gpio1_9"),
	_AM33XX_MUXENTRY(UART0_RXD, 0,
		"uart0_rxd", "spi1_cs0", "d_can0_tx", "i2c2_sda",
		NULL, NULL, NULL, "gpio1_10"),
	_AM33XX_MUXENTRY(UART0_TXD, 0,
		"uart0_txd", "spi1_cs1", "d_can0_rx", "i2c2_scl",
		NULL, NULL, NULL, "gpio1_11"),
	_AM33XX_MUXENTRY(UART1_CTSN, 0,
		"uart1_ctsn", NULL, "dcan0_tx", "i2c2_sda",
		"spi1_cs0", NULL, NULL, "gpio0_12"),
	_AM33XX_MUXENTRY(UART1_RTSN, 0,
		"uart1_rtsn", NULL, "dcan0_rx", "i2c2_scl",
		"spi1_cs1", NULL, NULL, "gpio0_13"),
	_AM33XX_MUXENTRY(UART1_RXD, 0,
		"uart1_rxd", "mmc1_sdwp", NULL, "i2c1_sda",
		NULL, "pr1_uart0_rxd_mux1", NULL, "gpio0_14"),
	_AM33XX_MUXENTRY(UART1_TXD, 0,
		"uart1_txd", "mmc2_sdwp", NULL, "i2c1_scl",
		NULL, "pr1_uart0_txd_mux1", NULL, "gpio0_15"),
	_AM33XX_MUXENTRY(I2C0_SDA, 0,
		"i2c0_sda", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio3_5"),
	_AM33XX_MUXENTRY(I2C0_SCL, 0,
		"i2c0_scl", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio3_6"),
	_AM33XX_MUXENTRY(MCASP0_ACLKX, 0,
		"mcasp0_aclkx", NULL, NULL, "spi1_sclk",
		"mmc0_sdcd", NULL, NULL, "gpio3_14"),
	_AM33XX_MUXENTRY(MCASP0_FSX, 0,
		"mcasp0_fsx", NULL, NULL, "spi1_d0",
		"mmc1_sdcd", NULL, NULL, "gpio3_15"),
	_AM33XX_MUXENTRY(MCASP0_AXR0, 0,
		"mcasp0_axr0", NULL, NULL, "spi1_d1",
		"mmc2_sdcd", NULL, NULL, "gpio3_16"),
	_AM33XX_MUXENTRY(MCASP0_AHCLKR, 0,
		"mcasp0_ahclkr", NULL, "mcasp0_axr2", "spi1_cs0",
		"ecap2_in_pwm2_out", NULL, NULL, "gpio3_17"),
	_AM33XX_MUXENTRY(MCASP0_ACLKR, 0,
		"mcasp0_aclkr", NULL, "mcasp0_axr2", "mcasp1_aclkx",
		"mmc0_sdwp", NULL, NULL, "gpio3_18"),
	_AM33XX_MUXENTRY(MCASP0_FSR, 0,
		"mcasp0_fsr", NULL, "mcasp0_axr3", "mcasp1_fsx",
		NULL, "pr1_pru0_pru_r30_5", NULL, "gpio3_19"),
	_AM33XX_MUXENTRY(MCASP0_AXR1, 0,
		"mcasp0_axr1", NULL, NULL, "mcasp1_axr0",
		NULL, NULL, NULL, "gpio3_20"),
	_AM33XX_MUXENTRY(MCASP0_AHCLKX, 0,
		"mcasp0_ahclkx", NULL, "mcasp0_axr3", "mcasp1_axr1",
		NULL, NULL, NULL, "gpio3_21"),
	_AM33XX_MUXENTRY(XDMA_EVENT_INTR0, 0,
		"xdma_event_intr0", NULL, NULL, "clkout1",
		"spi1_cs1", NULL, NULL, "gpio0_19"),
	_AM33XX_MUXENTRY(XDMA_EVENT_INTR1, 0,
		"xdma_event_intr1", NULL, NULL, "clkout2",
		NULL, NULL, NULL, "gpio0_20"),
	_AM33XX_MUXENTRY(WARMRSTN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(PWRONRSTN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(NMIN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(XTALIN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(XTALOUT, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(TMS, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(TDI, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(TDO, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(TCK, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(TRSTN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(EMU0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio3_7"),
	_AM33XX_MUXENTRY(EMU1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio3_8"),
	_AM33XX_MUXENTRY(RTC_XTALIN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(RTC_XTALOUT, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(RTC_PWRONRSTN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(PMIC_POWER_EN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(EXT_WAKEUP, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(USB0_DRVVBUS, 0,
		"usb0_drvvbus", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio0_18"),
	_AM33XX_MUXENTRY(USB1_DRVVBUS, 0,
		"usb1_drvvbus", NULL, NULL, NULL,
		NULL, NULL, NULL, "gpio3_13"),
	_AM33XX_MUXENTRY(DDR_RESETN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_CSN0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_CKE, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_CK, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_CKN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_CASN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_RASN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_WEN, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_BA0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_BA1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_BA2, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A2, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A3, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A4, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A5, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A6, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A7, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A8, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A9, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A10, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A11, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A12, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A13, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A14, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_A15, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_ODT, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D2, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D3, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D4, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D5, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D6, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D7, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D8, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D9, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D10, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D11, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D12, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D13, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D14, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_D15, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQM0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQM1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQS0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQSN0, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQS1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_DQSN1, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_VREF, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(DDR_VTP, 0,
		NULL, NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(AIN0, 0,
		"ain0", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(AIN1, 0,
		"ain1", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(AIN2, 0,
		"ain2", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(AIN3, 0,
		"ain3", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(VREFP, 0,
		"vrefp", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	_AM33XX_MUXENTRY(VREFN, 0,
		"vrefn", NULL, NULL, NULL,
		NULL, NULL, NULL, NULL),
	{ .reg_offset = OMAP_MUX_TERMINATOR },
};

int __init am33xx_mux_init(struct omap_board_mux *board_subset)
{
	return omap_mux_init("core", 0, AM33XX_CONTROL_PADCONF_MUX_PBASE,
			AM33XX_CONTROL_PADCONF_MUX_SIZE, am33xx_muxmodes,
			NULL, board_subset, NULL);
}
#else
int __init am33xx_mux_init(struct omap_board_mux *board_subset)
{
	return 0;
}
#endif
