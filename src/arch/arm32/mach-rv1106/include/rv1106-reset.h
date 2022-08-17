#ifndef __RV1106_RESET_H__
#define __RV1106_RESET_H__

#ifdef __cplusplus
extern "C" {
#endif

#define RV1106_RESET_P_I2C1				(0 + 3)
#define RV1106_RESET_I2C1				(0 + 4)
#define RV1106_RESET_H_PMU_BIU			(0 + 6)
#define RV1106_RESET_P_PMU_BIU			(0 + 7)
#define RV1106_RESET_H_PMU_SRAM			(0 + 8)
#define RV1106_RESET_PMU_MCU			(0 + 9)
#define RV1106_RESET_PMU_MCU_PWRUP		(0 + 10)
#define RV1106_RESET_PMU_MCU_CPU		(0 + 11)
#define RV1106_RESET_T_PMU_MCU_CPU		(0 + 12)

#define RV1106_RESET_P_PMU_GPIO0		(16 + 2)
#define RV1106_RESET_PMU_GPIO0			(16 + 3)
#define RV1106_RESET_PVTM_PMU			(16 + 4)
#define RV1106_RESET_P_PVTM_PMU			(16 + 5)
#define RV1106_RESET_DDR_FAIL_SAFE		(16 + 15)

#define RV1106_RESET_P_PMU_HP_TIMER		(32 + 0)
#define RV1106_RESET_PMU_HP_TIMER		(32 + 1)
#define RV1106_RESET_PMU_32K_HP_TIMER	(32 + 2)
#define RV1106_RESET_P_PMU_IOC			(32 + 3)
#define RV1106_RESET_P_PMU_CRU			(32 + 4)
#define RV1106_RESET_P_PMU_GRF			(32 + 5)
#define RV1106_RESET_P_PMU_SGRF			(32 + 6)
#define RV1106_RESET_P_PMU_SGRF_REMAP	(32 + 7)
#define RV1106_RESET_P_PMU_WDT			(32 + 8)
#define RV1106_RESET_T_PMU_WDT			(32 + 9)
#define RV1106_RESET_P_PMU_MAILBOX		(32 + 10)

#define RV1106_RESET_REF_PVTPLL_0		(48 + 7)
#define RV1106_RESET_REF_PVTPLL_1		(48 + 8)
#define RV1106_RESET_P_CRU				(48 + 10)
#define RV1106_RESET_P_CRU_BIU			(48 + 11)

#define RV1106_RESET_P_PERI_BIU			(64 + (294916 - 294912))
#define RV1106_RESET_A_PERI_BIU			(64 + (294917 - 294912))
#define RV1106_RESET_H_PERI_BIU			(64 + (294918 - 294912))
#define RV1106_RESET_H_BOOTROM			(64 + (294919 - 294912))
#define RV1106_RESET_P_TIMER			(64 + (294920 - 294912))
#define RV1106_RESET_TIMER0				(64 + (294921 - 294912))
#define RV1106_RESET_TIMER1				(64 + (294922 - 294912))
#define RV1106_RESET_TIMER2				(64 + (294923 - 294912))
#define RV1106_RESET_TIMER3				(64 + (294924 - 294912))
#define RV1106_RESET_TIMER4				(64 + (294925 - 294912))
#define RV1106_RESET_TIMER5				(64 + (294926 - 294912))
#define RV1106_RESET_P_STIMER			(64 + (294927 - 294912))

#define RV1106_RESET_STIMER0			(80 + (294928 - 294928))
#define RV1106_RESET_STIMER1			(80 + (294929 - 294928))
#define RV1106_RESET_P_WDT_NS			(80 + (294930 - 294928))
#define RV1106_RESET_T_WDT_NS			(80 + (294931 - 294928))
#define RV1106_RESET_P_WDT_S			(80 + (294932 - 294928))
#define RV1106_RESET_T_WDT_S			(80 + (294933 - 294928))
#define RV1106_RESET_P_I2C0				(80 + (294934 - 294928))
#define RV1106_RESET_I2C0				(80 + (294935 - 294928))
#define RV1106_RESET_P_I2C2				(80 + (294938 - 294928))
#define RV1106_RESET_I2C2				(80 + (294939 - 294928))
#define RV1106_RESET_P_I2C3				(80 + (294940 - 294928))
#define RV1106_RESET_I2C3				(80 + (294941 - 294928))
#define RV1106_RESET_P_I2C4				(80 + (294942 - 294928))
#define RV1106_RESET_I2C4				(80 + (294943 - 294928))

#define RV1106_RESET_P_GPIO4			(96 + (294944 - 294944))
#define RV1106_RESET_GPIO4				(96 + (294945 - 294944))
#define RV1106_RESET_P_PERI_IOC			(96 + (294946 - 294944))
#define RV1106_RESET_P_UART2			(96 + (294947 - 294944))
#define RV1106_RESET_S_UART2			(96 + (294950 - 294944))
#define RV1106_RESET_P_UART3			(96 + (294951 - 294944))
#define RV1106_RESET_S_UART3			(96 + (294954 - 294944))
#define RV1106_RESET_P_UART4			(96 + (294955 - 294944))
#define RV1106_RESET_S_UART4			(96 + (294958 - 294944))
#define RV1106_RESET_P_UART5			(96 + (294959 - 294944))

#define RV1106_RESET_S_UART5			(112 + (294962 - 294960))
#define RV1106_RESET_P_SARADC			(112 + (294963 - 294960))
#define RV1106_RESET_SARADC				(112 + (294964 - 294960))
#define RV1106_RESET_SARADC_PHY			(112 + (294965 - 294960))
#define RV1106_RESET_P_SPI1				(112 + (294966 - 294960))
#define RV1106_RESET_SPI1				(112 + (294967 - 294960))
#define RV1106_RESET_H_TRNG_NS			(112 + (294969 - 294960))
#define RV1106_RESET_H_TRNG_S			(112 + (294970 - 294960))
#define RV1106_RESET_CORE_CRYPTO		(112 + (294971 - 294960))
#define RV1106_RESET_PKA_CRYPTO			(112 + (294972 - 294960))
#define RV1106_RESET_A_CRYPTO			(112 + (294973 - 294960))
#define RV1106_RESET_H_CRYPTO			(112 + (294974 - 294960))
#define RV1106_RESET_P_PWM1_PERI		(112 + (294975 - 294960))

#define RV1106_RESET_PWM1_PERI			(128 + (294976 - 294976))
#define RV1106_RESET_P_PWM2_PERI		(128 + (294978 - 294976))
#define RV1106_RESET_PWM2_PERI			(128 + (294979 - 294976))
#define RV1106_RESET_P_PERI_GRF			(128 + (294981 - 294976))
#define RV1106_RESET_P_PERI_CRU			(128 + (294982 - 294976))
#define RV1106_RESET_A_USBOTG			(128 + (294983 - 294976))
#define RV1106_RESET_A_BUS_BIU			(128 + (294986 - 294976))
#define RV1106_RESET_H_EMMC				(128 + (294989 - 294976))
#define RV1106_RESET_H_SFC				(128 + (294990 - 294976))

#define RV1106_RESET_S_SFC				(144 + (294992 - 294992))
#define RV1106_RESET_P_USBPHY			(144 + (294993 - 294992))
#define RV1106_RESET_USBPHY_POR			(144 + (294994 - 294992))
#define RV1106_RESET_USBPHY_OTG			(144 + (294995 - 294992))
#define RV1106_RESET_A_DMAC				(144 + (295000 - 294992))
#define RV1106_RESET_A_DECOM			(144 + (295001 - 294992))
#define RV1106_RESET_P_DECOM			(144 + (295002 - 294992))
#define RV1106_RESET_D_DECOM			(144 + (295003 - 294992))
#define RV1106_RESET_P_PERI_SGRF		(144 + (295004 - 294992))
#define RV1106_RESET_H_SAI				(144 + (295005 - 294992))
#define RV1106_RESET_M_SAI				(144 + (295006 - 294992))
#define RV1106_RESET_M_I2S0_8CH_TX		(144 + (295007 - 294992))

#define RV1106_RESET_H_I2S0				(160 + (295008 - 295008))
#define RV1106_RESET_M_DSM				(160 + (295009 - 295008))
#define RV1106_RESET_P_DSM				(160 + (295010 - 295008))
#define RV1106_RESET_P_ACODEC			(160 + (295011 - 295008))
#define RV1106_RESET_M_I2S0_8CH_RX		(160 + (295014 - 295008))
#define RV1106_RESET_P_DFT2APB			(160 + (295015 - 295008))
#define RV1106_RESET_H_IVE				(160 + (295017 - 295008))
#define RV1106_RESET_A_IVE				(160 + (295018 - 295008))
#define RV1106_RESET_P_UART0			(160 + (295019 - 295008))
#define RV1106_RESET_S_UART0			(160 + (295022 - 295008))
#define RV1106_RESET_P_UART1			(160 + (295023 - 295008))

#define RV1106_RESET_S_UART1			(176 + (295026 - 295024))
#define RV1106_RESET_P_PWM0_PERI		(176 + (295027 - 295024))
#define RV1106_RESET_PWM0_PERI			(176 + (295028 - 295024))

#define RV1106_RESET_H_VI_BIU			(192 + (327684 - 327680))
#define RV1106_RESET_A_VI_BIU			(192 + (327685 - 327680))
#define RV1106_RESET_P_VI_BIU			(192 + (327686 - 327680))
#define RV1106_RESET_CORE_ISP3P2		(192 + (327689 - 327680))
#define RV1106_RESET_D_VICAP			(192 + (327690 - 327680))
#define RV1106_RESET_P_VICAP			(192 + (327691 - 327680))
#define RV1106_RESET_A_VICAP			(192 + (327692 - 327680))
#define RV1106_RESET_H_VICAP			(192 + (327693 - 327680))
#define RV1106_RESET_VICAP_I0			(192 + (327694 - 327680))
#define RV1106_RESET_VICAP_I1			(192 + (327695 - 327680))

#define RV1106_RESET_VICAP_RX0			(208 + (327696 - 327696))
#define RV1106_RESET_VICAP_RX1			(208 + (327697 - 327696))
#define RV1106_RESET_VICAP_ISP0			(208 + (327698 - 327696))
#define RV1106_RESET_P_CSIHOST0			(208 + (327700 - 327696))
#define RV1106_RESET_P_CSIHOST1			(208 + (327702 - 327696))
#define RV1106_RESET_H_SDMMC			(208 + (327708 - 327696))
#define RV1106_RESET_SDMMC_DETN_FLT		(208 + (327709 - 327696))
#define RV1106_RESET_P_MIPICSIPHY		(208 + (327710 - 327696))
#define RV1106_RESET_P_GPIO3			(208 + (327711 - 327696))

#define RV1106_RESET_GPIO3				(224 + (327712 - 327712))
#define RV1106_RESET_P_VI_IOC			(224 + (327713 - 327712))
#define RV1106_RESET_P_VI_GRF			(224 + (327714 - 327712))
#define RV1106_RESET_P_VI_SGRF			(224 + (327715 - 327712))
#define RV1106_RESET_P_VI_CRU			(224 + (327716 - 327712))
#define RV1106_RESET_P_VI_RTC_TEST		(224 + (327717 - 327712))
#define RV1106_RESET_P_VI_RTC_NIU		(224 + (327719 - 327712))

#define RV1106_RESET_H_NPU_BIU			(240 + (360451 - 360448))
#define RV1106_RESET_A_NPU_BIU			(240 + (360452 - 360448))
#define RV1106_RESET_P_NPU_BIU			(240 + (360453 - 360448))
#define RV1106_RESET_P_NPU_CRU			(240 + (360454 - 360448))
#define RV1106_RESET_P_NPU_SGRF			(240 + (360455 - 360448))
#define RV1106_RESET_P_NPU_GRF			(240 + (360456 - 360448))
#define RV1106_RESET_H_RKNN				(240 + (360457 - 360448))
#define RV1106_RESET_A_RKNN				(240 + (360458 - 360448))

#define RV1106_RESET_NCOREPORESET		(256 + (393217 - 393216))
#define RV1106_RESET_NCORESET			(256 + (393218 - 393216))
#define RV1106_RESET_NDBGRESET			(256 + (393219 - 393216))
#define RV1106_RESET_NL2RESET			(256 + (393220 - 393216))
#define RV1106_RESET_A_M_CORE_BIU		(256 + (393221 - 393216))
#define RV1106_RESET_P_DBG				(256 + (393222 - 393216))
#define RV1106_RESET_POT_DBG			(256 + (393223 - 393216))
#define RV1106_RESET_NT_DBG				(256 + (393224 - 393216))
#define RV1106_RESET_P_CORE_GRF			(256 + (393227 - 393216))
#define RV1106_RESET_H_CPU_BIU			(256 + (393228 - 393216))
#define RV1106_RESET_P_CPU_BIU			(256 + (393229 - 393216))
#define RV1106_RESET_PVTM_CORE			(256 + (393230 - 393216))
#define RV1106_RESET_P_PVTM_CORE		(256 + (393231 - 393216))

#define RV1106_RESET_REF_PVTPLL_CORE	(272 + (393232 - 393232))
#define RV1106_RESET_CORE_MCU			(272 + (393233 - 393232))
#define RV1106_RESET_CORE_MCU_PWRUP		(272 + (393234 - 393232))
#define RV1106_RESET_CORE_MCU_CPU		(272 + (393235 - 393232))
#define RV1106_RESET_T_CORE_MCU_CPU		(272 + (393236 - 393232))
#define RV1106_RESET_MCU_BIU			(272 + (393237 - 393232))
#define RV1106_RESET_P_MAILBOX			(272 + (393240 - 393232))
#define RV1106_RESET_P_INTMUX			(272 + (393241 - 393232))
#define RV1106_RESET_P_CORE_CRU			(272 + (393242 - 393232))
#define RV1106_RESET_P_CORE_SGRF		(272 + (393243 - 393232))
#define RV1106_RESET_H_CACHE			(272 + (393244 - 393232))

#define RV1106_RESET_H_VEPU_BIU			(288 + (425988 - 425984))
#define RV1106_RESET_A_VEPU_BIU			(288 + (425989 - 425984))
#define RV1106_RESET_A_VEPU_COM_BIU		(288 + (425990 - 425984))
#define RV1106_RESET_P_VEPU_BIU			(288 + (425991 - 425984))
#define RV1106_RESET_H_VEPU				(288 + (425992 - 425984))
#define RV1106_RESET_A_VEPU				(288 + (425993 - 425984))
#define RV1106_RESET_CORE_VEPU			(288 + (425994 - 425984))
#define RV1106_RESET_H_VEPU_PP			(288 + (425995 - 425984))
#define RV1106_RESET_A_VEPU_PP			(288 + (425996 - 425984))
#define RV1106_RESET_CORE_VEPU_DVBM		(288 + (425997 - 425984))
#define RV1106_RESET_P_VICAP_VEPU		(288 + (425998 - 425984))
#define RV1106_RESET_P_GPIO1			(288 + (425999 - 425984))

#define RV1106_RESET_GPIO1				(304 + (426000 - 426000))
#define RV1106_RESET_P_VEPU_IOC			(304 + (426001 - 426000))
#define RV1106_RESET_P_SPI0				(304 + (426002 - 426000))
#define RV1106_RESET_SPI0				(304 + (426003 - 426000))
#define RV1106_RESET_P_VEPU_CRU			(304 + (426005 - 426000))
#define RV1106_RESET_P_VEPU_SGRF		(304 + (426006 - 426000))
#define RV1106_RESET_P_VEPU_GRF			(304 + (426007 - 426000))
#define RV1106_RESET_UART_DETN_FLT		(304 + (426008 - 426000))

#define RV1106_RESET_A_VO_BIU			(320 + (458755 - 458752))
#define RV1106_RESET_H_VO_BIU			(320 + (458756 - 458752))
#define RV1106_RESET_H_RGA2E			(320 + (458759 - 458752))
#define RV1106_RESET_A_RGA2E			(320 + (458760 - 458752))
#define RV1106_RESET_CORE_RGA2E			(320 + (458761 - 458752))
#define RV1106_RESET_P_VO_GRF			(320 + (458762 - 458752))
#define RV1106_RESET_A_VOP_BIU			(320 + (458764 - 458752))
#define RV1106_RESET_H_VOP				(320 + (458765 - 458752))
#define RV1106_RESET_D_VOP				(320 + (458766 - 458752))
#define RV1106_RESET_A_VOP				(320 + (458767 - 458752))

#define RV1106_RESET_P_MAC_BIU			(336 + (458774 - 458768))
#define RV1106_RESET_A_MAC_BIU			(336 + (458775 - 458768))
#define RV1106_RESET_A_MAC				(336 + (458776 - 458768))
#define RV1106_RESET_P_VO_SGRF			(336 + (458780 - 458768))
#define RV1106_RESET_P_VO_CRU			(336 + (458781 - 458768))
#define RV1106_RESET_H_SDIO				(336 + (458783 - 458768))

#define RV1106_RESET_P_TSADC			(352 + (458784 - 458784))
#define RV1106_RESET_TSADC				(352 + (458785 - 458784))
#define RV1106_RESET_P_OTPC_NS			(352 + (458787 - 458784))
#define RV1106_RESET_SBPI_OTPC_NS		(352 + (458789 - 458784))
#define RV1106_RESET_USER_OTPC_NS		(352 + (458790 - 458784))
#define RV1106_RESET_P_OTPC_S			(352 + (458791 - 458784))
#define RV1106_RESET_SBPI_OTPC_S		(352 + (458793 - 458784))
#define RV1106_RESET_USER_OTPC_S		(352 + (458794 - 458784))
#define RV1106_RESET_OTPC_ARB			(352 + (458795 - 458784))
#define RV1106_RESET_MACPHY				(352 + (458797 - 458784))
#define RV1106_RESET_P_OTP_MASK			(352 + (458798 - 458784))
#define RV1106_RESET_PMC_OTP			(352 + (458799 - 458784))

#define RV1106_RESET_P_GPIO2			(368 + (458800 - 458800))
#define RV1106_RESET_GPIO2				(368 + (458801 - 458800))
#define RV1106_RESET_P_VO_IOC			(368 + (458802 - 458800))

#define RV1106_RESET_P_DDR_BIU			(384 + (491522 - 491520))
#define RV1106_RESET_P_DDRC				(384 + (491525 - 491520))
#define RV1106_RESET_P_DDRMON			(384 + (491527 - 491520))
#define RV1106_RESET_TIMER_DDRMON		(384 + (491528 - 491520))
#define RV1106_RESET_P_DFICTRL			(384 + (491531 - 491520))
#define RV1106_RESET_A_SYS_SHRM			(384 + (491533 - 491520))
#define RV1106_RESET_A_SHRM_NIU			(384 + (491534 - 491520))
#define RV1106_RESET_P_DDR_GRF			(384 + (491535 - 491520))

#define RV1106_RESET_P_DDR_CRU			(400 + (491536 - 491536))
#define RV1106_RESET_P_DDR_HWLP			(400 + (491538 - 491536))
#define RV1106_RESET_P_DDRPHY			(400 + (491539 - 491536))

#define RV1106_RESET_MSCH_BIU			(416 + (507904 - 507904))
#define RV1106_RESET_A_DDRC				(416 + (507905 - 507904))
#define RV1106_RESET_CORE_DDRC			(416 + (507907 - 507904))
#define RV1106_RESET_DDRMON				(416 + (507908 - 507904))
#define RV1106_RESET_DFICTRL			(416 + (507909 - 507904))
#define RV1106_RESET_DDR_PHY			(416 + (507910 - 507904))

#ifdef __cplusplus
}
#endif

#endif /* __RV1106_RESET_H__ */
