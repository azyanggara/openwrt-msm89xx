/* SPDX-License-Identifier: (GPL-2.0-only OR MIT) */
/*
 * Copyright (c) 2022-2023 Amlogic, Inc. All rights reserved.
 * Author: Yu Tu <yu.tu@amlogic.com>
 */

#ifndef _DT_BINDINGS_CLOCK_AMLOGIC_S4_PERIPHERALS_CLKC_H
#define _DT_BINDINGS_CLOCK_AMLOGIC_S4_PERIPHERALS_CLKC_H

#define CLKID_RTC_32K_CLKIN		0
#define CLKID_RTC_32K_DIV		1
#define CLKID_RTC_32K_SEL		2
#define CLKID_RTC_32K_XATL		3
#define CLKID_RTC			4
#define CLKID_SYS_CLK_B_SEL		5
#define CLKID_SYS_CLK_B_DIV		6
#define CLKID_SYS_CLK_B			7
#define CLKID_SYS_CLK_A_SEL		8
#define CLKID_SYS_CLK_A_DIV		9
#define CLKID_SYS_CLK_A			10
#define CLKID_SYS			11
#define CLKID_CECA_32K_CLKIN		12
#define CLKID_CECA_32K_DIV		13
#define CLKID_CECA_32K_SEL_PRE		14
#define CLKID_CECA_32K_SEL		15
#define CLKID_CECA_32K_CLKOUT		16
#define CLKID_CECB_32K_CLKIN		17
#define CLKID_CECB_32K_DIV		18
#define CLKID_CECB_32K_SEL_PRE		19
#define CLKID_CECB_32K_SEL		20
#define CLKID_CECB_32K_CLKOUT		21
#define CLKID_SC_CLK_SEL		22
#define CLKID_SC_CLK_DIV		23
#define CLKID_SC			24
#define CLKID_12_24M			25
#define CLKID_12M_CLK_DIV		26
#define CLKID_12_24M_CLK_SEL		27
#define CLKID_VID_PLL_DIV		28
#define CLKID_VID_PLL_SEL		29
#define CLKID_VID_PLL			30
#define CLKID_VCLK_SEL			31
#define CLKID_VCLK2_SEL			32
#define CLKID_VCLK_INPUT		33
#define CLKID_VCLK2_INPUT		34
#define CLKID_VCLK_DIV			35
#define CLKID_VCLK2_DIV			36
#define CLKID_VCLK			37
#define CLKID_VCLK2			38
#define CLKID_VCLK_DIV1			39
#define CLKID_VCLK_DIV2_EN		40
#define CLKID_VCLK_DIV4_EN		41
#define CLKID_VCLK_DIV6_EN		42
#define CLKID_VCLK_DIV12_EN		43
#define CLKID_VCLK2_DIV1		44
#define CLKID_VCLK2_DIV2_EN		45
#define CLKID_VCLK2_DIV4_EN		46
#define CLKID_VCLK2_DIV6_EN		47
#define CLKID_VCLK2_DIV12_EN		48
#define CLKID_VCLK_DIV2			49
#define CLKID_VCLK_DIV4			50
#define CLKID_VCLK_DIV6			51
#define CLKID_VCLK_DIV12		52
#define CLKID_VCLK2_DIV2		53
#define CLKID_VCLK2_DIV4		54
#define CLKID_VCLK2_DIV6		55
#define CLKID_VCLK2_DIV12		56
#define CLKID_CTS_ENCI_SEL		57
#define CLKID_CTS_ENCP_SEL		58
#define CLKID_CTS_VDAC_SEL		59
#define CLKID_HDMI_TX_SEL		60
#define CLKID_CTS_ENCI			61
#define CLKID_CTS_ENCP			62
#define CLKID_CTS_VDAC			63
#define CLKID_HDMI_TX			64
#define CLKID_HDMI_SEL			65
#define CLKID_HDMI_DIV			66
#define CLKID_HDMI			67
#define CLKID_TS_CLK_DIV		68
#define CLKID_TS			69
#define CLKID_MALI_0_SEL		70
#define CLKID_MALI_0_DIV		71
#define CLKID_MALI_0			72
#define CLKID_MALI_1_SEL		73
#define CLKID_MALI_1_DIV		74
#define CLKID_MALI_1			75
#define CLKID_MALI_SEL			76
#define CLKID_VDEC_P0_SEL		77
#define CLKID_VDEC_P0_DIV		78
#define CLKID_VDEC_P0			79
#define CLKID_VDEC_P1_SEL		80
#define CLKID_VDEC_P1_DIV		81
#define CLKID_VDEC_P1			82
#define CLKID_VDEC_SEL			83
#define CLKID_HEVCF_P0_SEL		84
#define CLKID_HEVCF_P0_DIV		85
#define CLKID_HEVCF_P0			86
#define CLKID_HEVCF_P1_SEL		87
#define CLKID_HEVCF_P1_DIV		88
#define CLKID_HEVCF_P1			89
#define CLKID_HEVCF_SEL			90
#define CLKID_VPU_0_SEL			91
#define CLKID_VPU_0_DIV			92
#define CLKID_VPU_0			93
#define CLKID_VPU_1_SEL			94
#define CLKID_VPU_1_DIV			95
#define CLKID_VPU_1			96
#define CLKID_VPU			97
#define CLKID_VPU_CLKB_TMP_SEL		98
#define CLKID_VPU_CLKB_TMP_DIV		99
#define CLKID_VPU_CLKB_TMP		100
#define CLKID_VPU_CLKB_DIV		101
#define CLKID_VPU_CLKB			102
#define CLKID_VPU_CLKC_P0_SEL		103
#define CLKID_VPU_CLKC_P0_DIV		104
#define CLKID_VPU_CLKC_P0		105
#define CLKID_VPU_CLKC_P1_SEL		106
#define CLKID_VPU_CLKC_P1_DIV		107
#define CLKID_VPU_CLKC_P1		108
#define CLKID_VPU_CLKC_SEL		109
#define CLKID_VAPB_0_SEL		110
#define CLKID_VAPB_0_DIV		111
#define CLKID_VAPB_0			112
#define CLKID_VAPB_1_SEL		113
#define CLKID_VAPB_1_DIV		114
#define CLKID_VAPB_1			115
#define CLKID_VAPB			116
#define CLKID_GE2D			117
#define CLKID_VDIN_MEAS_SEL		118
#define CLKID_VDIN_MEAS_DIV		119
#define CLKID_VDIN_MEAS			120
#define CLKID_SD_EMMC_C_CLK_SEL		121
#define CLKID_SD_EMMC_C_CLK_DIV		122
#define CLKID_SD_EMMC_C			123
#define CLKID_SD_EMMC_A_CLK_SEL		124
#define CLKID_SD_EMMC_A_CLK_DIV		125
#define CLKID_SD_EMMC_A			126
#define CLKID_SD_EMMC_B_CLK_SEL		127
#define CLKID_SD_EMMC_B_CLK_DIV		128
#define CLKID_SD_EMMC_B			129
#define CLKID_SPICC0_SEL		130
#define CLKID_SPICC0_DIV		131
#define CLKID_SPICC0_EN			132
#define CLKID_PWM_A_SEL			133
#define CLKID_PWM_A_DIV			134
#define CLKID_PWM_A			135
#define CLKID_PWM_B_SEL			136
#define CLKID_PWM_B_DIV			137
#define CLKID_PWM_B			138
#define CLKID_PWM_C_SEL			139
#define CLKID_PWM_C_DIV			140
#define CLKID_PWM_C			141
#define CLKID_PWM_D_SEL			142
#define CLKID_PWM_D_DIV			143
#define CLKID_PWM_D			144
#define CLKID_PWM_E_SEL			145
#define CLKID_PWM_E_DIV			146
#define CLKID_PWM_E			147
#define CLKID_PWM_F_SEL			148
#define CLKID_PWM_F_DIV			149
#define CLKID_PWM_F			150
#define CLKID_PWM_G_SEL			151
#define CLKID_PWM_G_DIV			152
#define CLKID_PWM_G			153
#define CLKID_PWM_H_SEL			154
#define CLKID_PWM_H_DIV			155
#define CLKID_PWM_H			156
#define CLKID_PWM_I_SEL			157
#define CLKID_PWM_I_DIV			158
#define CLKID_PWM_I			159
#define CLKID_PWM_J_SEL			160
#define CLKID_PWM_J_DIV			161
#define CLKID_PWM_J			162
#define CLKID_SARADC_SEL		163
#define CLKID_SARADC_DIV		164
#define CLKID_SARADC			165
#define CLKID_GEN_SEL			166
#define CLKID_GEN_DIV			167
#define CLKID_GEN			168
#define CLKID_DDR			169
#define CLKID_DOS			170
#define CLKID_ETHPHY			171
#define CLKID_MALI			172
#define CLKID_AOCPU			173
#define CLKID_AUCPU			174
#define CLKID_CEC			175
#define CLKID_SDEMMC_A			176
#define CLKID_SDEMMC_B			177
#define CLKID_NAND			178
#define CLKID_SMARTCARD			179
#define CLKID_ACODEC			180
#define CLKID_SPIFC			181
#define CLKID_MSR			182
#define CLKID_IR_CTRL			183
#define CLKID_AUDIO			184
#define CLKID_ETH			185
#define CLKID_UART_A			186
#define CLKID_UART_B			187
#define CLKID_UART_C			188
#define CLKID_UART_D			189
#define CLKID_UART_E			190
#define CLKID_AIFIFO			191
#define CLKID_TS_DDR			192
#define CLKID_TS_PLL			193
#define CLKID_G2D			194
#define CLKID_SPICC0			195
#define CLKID_SPICC1			196
#define CLKID_USB			197
#define CLKID_I2C_M_A			198
#define CLKID_I2C_M_B			199
#define CLKID_I2C_M_C			200
#define CLKID_I2C_M_D			201
#define CLKID_I2C_M_E			202
#define CLKID_HDMITX_APB		203
#define CLKID_I2C_S_A			204
#define CLKID_USB1_TO_DDR		205
#define CLKID_HDCP22			206
#define CLKID_MMC_APB			207
#define CLKID_RSA			208
#define CLKID_CPU_DEBUG			209
#define CLKID_VPU_INTR			210
#define CLKID_DEMOD			211
#define CLKID_SAR_ADC			212
#define CLKID_GIC			213
#define CLKID_PWM_AB			214
#define CLKID_PWM_CD			215
#define CLKID_PWM_EF			216
#define CLKID_PWM_GH			217
#define CLKID_PWM_IJ			218
#define CLKID_HDCP22_ESMCLK_SEL		219
#define CLKID_HDCP22_ESMCLK_DIV		220
#define CLKID_HDCP22_ESMCLK		221
#define CLKID_HDCP22_SKPCLK_SEL		222
#define CLKID_HDCP22_SKPCLK_DIV		223
#define CLKID_HDCP22_SKPCLK		224

#endif /* _DT_BINDINGS_CLOCK_AMLOGIC_S4_PERIPHERALS_CLKC_H */
