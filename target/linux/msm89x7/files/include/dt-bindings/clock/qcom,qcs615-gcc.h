/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_QCS615_H
#define _DT_BINDINGS_CLK_QCOM_GCC_QCS615_H

/* GCC clocks */
#define GPLL0_OUT_AUX2_DIV					0
#define GPLL3_OUT_AUX2_DIV					1
#define GPLL0							2
#define GPLL3							3
#define GPLL4							4
#define GPLL6							5
#define GPLL6_OUT_MAIN						6
#define GPLL7							7
#define GPLL8							8
#define GPLL8_OUT_MAIN						9
#define GCC_AGGRE_UFS_PHY_AXI_CLK				10
#define GCC_AGGRE_USB2_SEC_AXI_CLK				11
#define GCC_AGGRE_USB3_PRIM_AXI_CLK				12
#define GCC_AHB2PHY_EAST_CLK					13
#define GCC_AHB2PHY_WEST_CLK					14
#define GCC_BOOT_ROM_AHB_CLK					15
#define GCC_CAMERA_AHB_CLK					16
#define GCC_CAMERA_HF_AXI_CLK					17
#define GCC_CAMERA_XO_CLK					18
#define GCC_CE1_AHB_CLK						19
#define GCC_CE1_AXI_CLK						20
#define GCC_CE1_CLK						21
#define GCC_CFG_NOC_USB2_SEC_AXI_CLK				22
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				23
#define GCC_CPUSS_AHB_CLK					24
#define GCC_CPUSS_AHB_CLK_SRC					25
#define GCC_CPUSS_GNOC_CLK					26
#define GCC_DDRSS_GPU_AXI_CLK					27
#define GCC_DISP_AHB_CLK					28
#define GCC_DISP_GPLL0_DIV_CLK_SRC				29
#define GCC_DISP_HF_AXI_CLK					30
#define GCC_DISP_XO_CLK						31
#define GCC_EMAC_AXI_CLK					32
#define GCC_EMAC_PTP_CLK					33
#define GCC_EMAC_PTP_CLK_SRC					34
#define GCC_EMAC_RGMII_CLK					35
#define GCC_EMAC_RGMII_CLK_SRC					36
#define GCC_EMAC_SLV_AHB_CLK					37
#define GCC_GP1_CLK						38
#define GCC_GP1_CLK_SRC						39
#define GCC_GP2_CLK						40
#define GCC_GP2_CLK_SRC						41
#define GCC_GP3_CLK						42
#define GCC_GP3_CLK_SRC						43
#define GCC_GPU_CFG_AHB_CLK					44
#define GCC_GPU_GPLL0_CLK_SRC					45
#define GCC_GPU_GPLL0_DIV_CLK_SRC				46
#define GCC_GPU_IREF_CLK					47
#define GCC_GPU_MEMNOC_GFX_CLK					48
#define GCC_GPU_SNOC_DVM_GFX_CLK				49
#define GCC_PCIE0_PHY_REFGEN_CLK				50
#define GCC_PCIE_0_AUX_CLK					51
#define GCC_PCIE_0_AUX_CLK_SRC					52
#define GCC_PCIE_0_CFG_AHB_CLK					53
#define GCC_PCIE_0_CLKREF_CLK					54
#define GCC_PCIE_0_MSTR_AXI_CLK					55
#define GCC_PCIE_0_PIPE_CLK					56
#define GCC_PCIE_0_SLV_AXI_CLK					57
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				58
#define GCC_PCIE_PHY_AUX_CLK					59
#define GCC_PCIE_PHY_REFGEN_CLK_SRC				60
#define GCC_PDM2_CLK						61
#define GCC_PDM2_CLK_SRC					62
#define GCC_PDM_AHB_CLK						63
#define GCC_PDM_XO4_CLK						64
#define GCC_PRNG_AHB_CLK					65
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				66
#define GCC_QMIP_DISP_AHB_CLK					67
#define GCC_QMIP_PCIE_AHB_CLK					68
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				69
#define GCC_QSPI_CNOC_PERIPH_AHB_CLK				70
#define GCC_QSPI_CORE_CLK					71
#define GCC_QSPI_CORE_CLK_SRC					72
#define GCC_QUPV3_WRAP0_CORE_2X_CLK				73
#define GCC_QUPV3_WRAP0_CORE_CLK				74
#define GCC_QUPV3_WRAP0_S0_CLK					75
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				76
#define GCC_QUPV3_WRAP0_S1_CLK					77
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				78
#define GCC_QUPV3_WRAP0_S2_CLK					79
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				80
#define GCC_QUPV3_WRAP0_S3_CLK					81
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				82
#define GCC_QUPV3_WRAP0_S4_CLK					83
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				84
#define GCC_QUPV3_WRAP0_S5_CLK					85
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				86
#define GCC_QUPV3_WRAP1_CORE_2X_CLK				87
#define GCC_QUPV3_WRAP1_CORE_CLK				88
#define GCC_QUPV3_WRAP1_S0_CLK					89
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				90
#define GCC_QUPV3_WRAP1_S1_CLK					91
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				92
#define GCC_QUPV3_WRAP1_S2_CLK					93
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				94
#define GCC_QUPV3_WRAP1_S3_CLK					95
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				96
#define GCC_QUPV3_WRAP1_S4_CLK					97
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				98
#define GCC_QUPV3_WRAP1_S5_CLK					99
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				100
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				101
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				102
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				103
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				104
#define GCC_RX1_USB2_CLKREF_CLK					105
#define GCC_RX3_USB2_CLKREF_CLK					106
#define GCC_SDCC1_AHB_CLK					107
#define GCC_SDCC1_APPS_CLK					108
#define GCC_SDCC1_APPS_CLK_SRC					109
#define GCC_SDCC1_ICE_CORE_CLK					110
#define GCC_SDCC1_ICE_CORE_CLK_SRC				111
#define GCC_SDCC2_AHB_CLK					112
#define GCC_SDCC2_APPS_CLK					113
#define GCC_SDCC2_APPS_CLK_SRC					114
#define GCC_SDR_CORE_CLK					115
#define GCC_SDR_CSR_HCLK					116
#define GCC_SDR_PRI_MI2S_CLK					117
#define GCC_SDR_SEC_MI2S_CLK					118
#define GCC_SDR_WR0_MEM_CLK					119
#define GCC_SDR_WR1_MEM_CLK					120
#define GCC_SDR_WR2_MEM_CLK					121
#define GCC_SYS_NOC_CPUSS_AHB_CLK				122
#define GCC_UFS_CARD_CLKREF_CLK					123
#define GCC_UFS_MEM_CLKREF_CLK					124
#define GCC_UFS_PHY_AHB_CLK					125
#define GCC_UFS_PHY_AXI_CLK					126
#define GCC_UFS_PHY_AXI_CLK_SRC					127
#define GCC_UFS_PHY_ICE_CORE_CLK				128
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				129
#define GCC_UFS_PHY_PHY_AUX_CLK					130
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				131
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				132
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				133
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				134
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				135
#define GCC_USB20_SEC_MASTER_CLK				136
#define GCC_USB20_SEC_MASTER_CLK_SRC				137
#define GCC_USB20_SEC_MOCK_UTMI_CLK				138
#define GCC_USB20_SEC_MOCK_UTMI_CLK_SRC				139
#define GCC_USB20_SEC_SLEEP_CLK					140
#define GCC_USB2_PRIM_CLKREF_CLK				141
#define GCC_USB2_SEC_CLKREF_CLK					142
#define GCC_USB2_SEC_PHY_AUX_CLK				143
#define GCC_USB2_SEC_PHY_AUX_CLK_SRC				144
#define GCC_USB2_SEC_PHY_COM_AUX_CLK				145
#define GCC_USB2_SEC_PHY_PIPE_CLK				146
#define GCC_USB30_PRIM_MASTER_CLK				147
#define GCC_USB30_PRIM_MASTER_CLK_SRC				148
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				149
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			150
#define GCC_USB30_PRIM_SLEEP_CLK				151
#define GCC_USB3_PRIM_CLKREF_CLK				152
#define GCC_USB3_PRIM_PHY_AUX_CLK				153
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				154
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				155
#define GCC_USB3_PRIM_PHY_PIPE_CLK				156
#define GCC_USB3_SEC_CLKREF_CLK					157
#define GCC_VIDEO_AHB_CLK					158
#define GCC_VIDEO_AXI0_CLK					159
#define GCC_VIDEO_XO_CLK					160
#define GCC_VSENSOR_CLK_SRC					161
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK			162
#define GCC_UFS_PHY_AXI_HW_CTL_CLK				163
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK				164
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK				165
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK			166

/* GCC Resets */
#define GCC_EMAC_BCR                                            0
#define GCC_QUSB2PHY_PRIM_BCR                                   1
#define GCC_QUSB2PHY_SEC_BCR                                    2
#define GCC_USB30_PRIM_BCR                                      3
#define GCC_USB2_PHY_SEC_BCR                                    4
#define GCC_USB3_DP_PHY_SEC_BCR                                 5
#define GCC_USB3PHY_PHY_SEC_BCR                                 6
#define GCC_PCIE_0_BCR                                          7
#define GCC_PCIE_0_PHY_BCR                                      8
#define GCC_PCIE_PHY_BCR                                        9
#define GCC_PCIE_PHY_COM_BCR                                    10
#define GCC_UFS_PHY_BCR                                         11
#define GCC_USB20_SEC_BCR                                       12
#define GCC_USB3_PHY_PRIM_SP0_BCR                               13
#define GCC_USB3PHY_PHY_PRIM_SP0_BCR                            14
#define GCC_SDCC1_BCR                                           15
#define GCC_SDCC2_BCR                                           16

/* GCC power domains */
#define EMAC_GDSC						0
#define PCIE_0_GDSC						1
#define UFS_PHY_GDSC						2
#define USB20_SEC_GDSC						3
#define USB30_PRIM_GDSC						4
#define HLOS1_VOTE_AGGRE_NOC_MMU_AUDIO_TBU_GDSC			5
#define HLOS1_VOTE_AGGRE_NOC_MMU_TBU1_GDSC			6
#define HLOS1_VOTE_AGGRE_NOC_MMU_TBU2_GDSC			7
#define HLOS1_VOTE_AGGRE_NOC_MMU_PCIE_TBU_GDSC			8
#define HLOS1_VOTE_MMNOC_MMU_TBU_HF0_GDSC			9
#define HLOS1_VOTE_MMNOC_MMU_TBU_SF_GDSC			10
#define HLOS1_VOTE_MMNOC_MMU_TBU_HF1_GDSC			11

#endif
