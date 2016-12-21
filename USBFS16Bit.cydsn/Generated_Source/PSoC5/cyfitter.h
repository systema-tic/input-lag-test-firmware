#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* LED */
#define LED__0__INTTYPE CYREG_PICU2_INTTYPE1
#define LED__0__MASK 0x02u
#define LED__0__PC CYREG_PRT2_PC1
#define LED__0__PORT 2u
#define LED__0__SHIFT 1u
#define LED__AG CYREG_PRT2_AG
#define LED__AMUX CYREG_PRT2_AMUX
#define LED__BIE CYREG_PRT2_BIE
#define LED__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED__BYP CYREG_PRT2_BYP
#define LED__CTL CYREG_PRT2_CTL
#define LED__DM0 CYREG_PRT2_DM0
#define LED__DM1 CYREG_PRT2_DM1
#define LED__DM2 CYREG_PRT2_DM2
#define LED__DR CYREG_PRT2_DR
#define LED__INP_DIS CYREG_PRT2_INP_DIS
#define LED__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define LED__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED__LCD_EN CYREG_PRT2_LCD_EN
#define LED__MASK 0x02u
#define LED__P2_1__INTTYPE CYREG_PICU2_INTTYPE1
#define LED__P2_1__MASK 0x02u
#define LED__P2_1__PC CYREG_PRT2_PC1
#define LED__P2_1__PORT 2u
#define LED__P2_1__SHIFT 1u
#define LED__PORT 2u
#define LED__PRT CYREG_PRT2_PRT
#define LED__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED__PS CYREG_PRT2_PS
#define LED__SHIFT 1u
#define LED__SLW CYREG_PRT2_SLW

/* USBFS_arb_int */
#define USBFS_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_arb_int__INTC_MASK 0x400000u
#define USBFS_arb_int__INTC_NUMBER 22u
#define USBFS_arb_int__INTC_PRIOR_NUM 7u
#define USBFS_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBFS_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_bus_reset */
#define USBFS_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_bus_reset__INTC_MASK 0x800000u
#define USBFS_bus_reset__INTC_NUMBER 23u
#define USBFS_bus_reset__INTC_PRIOR_NUM 7u
#define USBFS_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBFS_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_Dm */
#define USBFS_Dm__0__INTTYPE CYREG_PICU15_INTTYPE7
#define USBFS_Dm__0__MASK 0x80u
#define USBFS_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBFS_Dm__0__PORT 15u
#define USBFS_Dm__0__SHIFT 7u
#define USBFS_Dm__AG CYREG_PRT15_AG
#define USBFS_Dm__AMUX CYREG_PRT15_AMUX
#define USBFS_Dm__BIE CYREG_PRT15_BIE
#define USBFS_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBFS_Dm__BYP CYREG_PRT15_BYP
#define USBFS_Dm__CTL CYREG_PRT15_CTL
#define USBFS_Dm__DM0 CYREG_PRT15_DM0
#define USBFS_Dm__DM1 CYREG_PRT15_DM1
#define USBFS_Dm__DM2 CYREG_PRT15_DM2
#define USBFS_Dm__DR CYREG_PRT15_DR
#define USBFS_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBFS_Dm__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBFS_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBFS_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBFS_Dm__MASK 0x80u
#define USBFS_Dm__PORT 15u
#define USBFS_Dm__PRT CYREG_PRT15_PRT
#define USBFS_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBFS_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBFS_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBFS_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBFS_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBFS_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBFS_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBFS_Dm__PS CYREG_PRT15_PS
#define USBFS_Dm__SHIFT 7u
#define USBFS_Dm__SLW CYREG_PRT15_SLW

/* USBFS_Dp */
#define USBFS_Dp__0__INTTYPE CYREG_PICU15_INTTYPE6
#define USBFS_Dp__0__MASK 0x40u
#define USBFS_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBFS_Dp__0__PORT 15u
#define USBFS_Dp__0__SHIFT 6u
#define USBFS_Dp__AG CYREG_PRT15_AG
#define USBFS_Dp__AMUX CYREG_PRT15_AMUX
#define USBFS_Dp__BIE CYREG_PRT15_BIE
#define USBFS_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBFS_Dp__BYP CYREG_PRT15_BYP
#define USBFS_Dp__CTL CYREG_PRT15_CTL
#define USBFS_Dp__DM0 CYREG_PRT15_DM0
#define USBFS_Dp__DM1 CYREG_PRT15_DM1
#define USBFS_Dp__DM2 CYREG_PRT15_DM2
#define USBFS_Dp__DR CYREG_PRT15_DR
#define USBFS_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBFS_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBFS_Dp__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBFS_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBFS_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBFS_Dp__MASK 0x40u
#define USBFS_Dp__PORT 15u
#define USBFS_Dp__PRT CYREG_PRT15_PRT
#define USBFS_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBFS_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBFS_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBFS_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBFS_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBFS_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBFS_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBFS_Dp__PS CYREG_PRT15_PS
#define USBFS_Dp__SHIFT 6u
#define USBFS_Dp__SLW CYREG_PRT15_SLW
#define USBFS_Dp__SNAP CYREG_PICU_15_SNAP_15

/* USBFS_dp_int */
#define USBFS_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_dp_int__INTC_MASK 0x1000u
#define USBFS_dp_int__INTC_NUMBER 12u
#define USBFS_dp_int__INTC_PRIOR_NUM 7u
#define USBFS_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBFS_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_ep_0 */
#define USBFS_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_ep_0__INTC_MASK 0x1000000u
#define USBFS_ep_0__INTC_NUMBER 24u
#define USBFS_ep_0__INTC_PRIOR_NUM 7u
#define USBFS_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBFS_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_ep_1 */
#define USBFS_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBFS_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBFS_ep_1__INTC_MASK 0x01u
#define USBFS_ep_1__INTC_NUMBER 0u
#define USBFS_ep_1__INTC_PRIOR_NUM 7u
#define USBFS_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define USBFS_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBFS_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* USBFS_USB */
#define USBFS_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBFS_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBFS_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBFS_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBFS_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBFS_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBFS_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBFS_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBFS_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBFS_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBFS_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBFS_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBFS_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBFS_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBFS_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBFS_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBFS_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBFS_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBFS_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBFS_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBFS_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBFS_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBFS_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBFS_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBFS_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBFS_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBFS_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBFS_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBFS_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBFS_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBFS_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBFS_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBFS_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBFS_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBFS_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBFS_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBFS_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBFS_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBFS_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBFS_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBFS_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBFS_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBFS_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBFS_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBFS_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBFS_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBFS_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBFS_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBFS_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBFS_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBFS_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBFS_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBFS_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBFS_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBFS_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBFS_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBFS_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBFS_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBFS_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBFS_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBFS_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBFS_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBFS_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBFS_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBFS_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBFS_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBFS_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBFS_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBFS_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBFS_USB__CR0 CYREG_USB_CR0
#define USBFS_USB__CR1 CYREG_USB_CR1
#define USBFS_USB__CWA CYREG_USB_CWA
#define USBFS_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBFS_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBFS_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBFS_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBFS_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBFS_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBFS_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBFS_USB__EP0_CR CYREG_USB_EP0_CR
#define USBFS_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBFS_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBFS_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBFS_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBFS_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBFS_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBFS_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBFS_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBFS_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBFS_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBFS_USB__PM_ACT_MSK 0x01u
#define USBFS_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBFS_USB__PM_STBY_MSK 0x01u
#define USBFS_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBFS_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBFS_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBFS_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBFS_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBFS_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBFS_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBFS_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBFS_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBFS_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBFS_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBFS_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBFS_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBFS_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBFS_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBFS_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBFS_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBFS_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBFS_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBFS_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBFS_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBFS_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBFS_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBFS_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBFS_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBFS_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBFS_USB__SOF0 CYREG_USB_SOF0
#define USBFS_USB__SOF1 CYREG_USB_SOF1
#define USBFS_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN
#define USBFS_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBFS_USB__USBIO_CR1 CYREG_USB_USBIO_CR1

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 79500000U
#define BCLK__BUS_CLK__KHZ 79500U
#define BCLK__BUS_CLK__MHZ 79U
#define CY_PROJECT_NAME "USBFS16Bit"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
