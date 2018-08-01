#ifndef __NSWITCH_GPIO_H__
#define __NSWITCH_GPIO_H__

#ifdef __cplusplus
extern "C" {
#endif

#define NSWITCH_GPIOA0					(0)
#define NSWITCH_GPIOA1					(1)
#define NSWITCH_GPIOA2					(2)
#define NSWITCH_GPIOA3					(3)
#define NSWITCH_GPIOA4					(4)
#define NSWITCH_GPIOA5					(5)
#define NSWITCH_GPIOA6					(6)
#define NSWITCH_GPIOA7					(7)
#define NSWITCH_GPIOB0					(8)
#define NSWITCH_GPIOB1					(9)
#define NSWITCH_GPIOB2					(10)
#define NSWITCH_GPIOB3					(11)
#define NSWITCH_GPIOB4					(12)
#define NSWITCH_GPIOB5					(13)
#define NSWITCH_GPIOB6					(14)
#define NSWITCH_GPIOB7					(15)
#define NSWITCH_GPIOC0					(16)
#define NSWITCH_GPIOC1					(17)
#define NSWITCH_GPIOC2					(18)
#define NSWITCH_GPIOC3					(19)
#define NSWITCH_GPIOC4					(20)
#define NSWITCH_GPIOC5					(21)
#define NSWITCH_GPIOC6					(22)
#define NSWITCH_GPIOC7					(23)
#define NSWITCH_GPIOD0					(24)
#define NSWITCH_GPIOD1					(25)
#define NSWITCH_GPIOD2					(26)
#define NSWITCH_GPIOD3					(27)
#define NSWITCH_GPIOD4					(28)
#define NSWITCH_GPIOD5					(29)
#define NSWITCH_GPIOD6					(30)
#define NSWITCH_GPIOD7					(31)

#define NSWITCH_GPIOE0					(32)
#define NSWITCH_GPIOE1					(33)
#define NSWITCH_GPIOE2					(34)
#define NSWITCH_GPIOE3					(35)
#define NSWITCH_GPIOE4					(36)
#define NSWITCH_GPIOE5					(37)
#define NSWITCH_GPIOE6					(38)
#define NSWITCH_GPIOE7					(39)
#define NSWITCH_GPIOF0					(40)
#define NSWITCH_GPIOF1					(41)
#define NSWITCH_GPIOF2					(42)
#define NSWITCH_GPIOF3					(43)
#define NSWITCH_GPIOF4					(44)
#define NSWITCH_GPIOF5					(45)
#define NSWITCH_GPIOF6					(46)
#define NSWITCH_GPIOF7					(47)
#define NSWITCH_GPIOG0					(48)
#define NSWITCH_GPIOG1					(49)
#define NSWITCH_GPIOG2					(50)
#define NSWITCH_GPIOG3					(51)
#define NSWITCH_GPIOG4					(52)
#define NSWITCH_GPIOG5					(53)
#define NSWITCH_GPIOG6					(54)
#define NSWITCH_GPIOG7					(55)
#define NSWITCH_GPIOH0					(56)
#define NSWITCH_GPIOH1					(57)
#define NSWITCH_GPIOH2					(58)
#define NSWITCH_GPIOH3					(59)
#define NSWITCH_GPIOH4					(60)
#define NSWITCH_GPIOH5					(61)
#define NSWITCH_GPIOH6					(62)
#define NSWITCH_GPIOH7					(63)

#define NSWITCH_GPIOI0					(64)
#define NSWITCH_GPIOI1					(65)
#define NSWITCH_GPIOI2					(66)
#define NSWITCH_GPIOI3					(67)
#define NSWITCH_GPIOI4					(68)
#define NSWITCH_GPIOI5					(69)
#define NSWITCH_GPIOI6					(70)
#define NSWITCH_GPIOI7					(71)
#define NSWITCH_GPIOJ0					(72)
#define NSWITCH_GPIOJ1					(73)
#define NSWITCH_GPIOJ2					(74)
#define NSWITCH_GPIOJ3					(75)
#define NSWITCH_GPIOJ4					(76)
#define NSWITCH_GPIOJ5					(77)
#define NSWITCH_GPIOJ6					(78)
#define NSWITCH_GPIOJ7					(79)
#define NSWITCH_GPIOK0					(80)
#define NSWITCH_GPIOK1					(81)
#define NSWITCH_GPIOK2					(82)
#define NSWITCH_GPIOK3					(83)
#define NSWITCH_GPIOK4					(84)
#define NSWITCH_GPIOK5					(85)
#define NSWITCH_GPIOK6					(86)
#define NSWITCH_GPIOK7					(87)
#define NSWITCH_GPIOL0					(88)
#define NSWITCH_GPIOL1					(89)
#define NSWITCH_GPIOL2					(90)
#define NSWITCH_GPIOL3					(91)
#define NSWITCH_GPIOL4					(92)
#define NSWITCH_GPIOL5					(93)
#define NSWITCH_GPIOL6					(94)
#define NSWITCH_GPIOL7					(95)

#define NSWITCH_GPIOM0					(96)
#define NSWITCH_GPIOM1					(97)
#define NSWITCH_GPIOM2					(98)
#define NSWITCH_GPIOM3					(99)
#define NSWITCH_GPIOM4					(100)
#define NSWITCH_GPIOM5					(101)
#define NSWITCH_GPIOM6					(102)
#define NSWITCH_GPIOM7					(103)
#define NSWITCH_GPION0					(104)
#define NSWITCH_GPION1					(105)
#define NSWITCH_GPION2					(106)
#define NSWITCH_GPION3					(107)
#define NSWITCH_GPION4					(108)
#define NSWITCH_GPION5					(109)
#define NSWITCH_GPION6					(110)
#define NSWITCH_GPION7					(111)
#define NSWITCH_GPIOO0					(112)
#define NSWITCH_GPIOO1					(113)
#define NSWITCH_GPIOO2					(114)
#define NSWITCH_GPIOO3					(115)
#define NSWITCH_GPIOO4					(116)
#define NSWITCH_GPIOO5					(117)
#define NSWITCH_GPIOO6					(118)
#define NSWITCH_GPIOO7					(119)
#define NSWITCH_GPIOP0					(120)
#define NSWITCH_GPIOP1					(121)
#define NSWITCH_GPIOP2					(122)
#define NSWITCH_GPIOP3					(123)
#define NSWITCH_GPIOP4					(124)
#define NSWITCH_GPIOP5					(125)
#define NSWITCH_GPIOP6					(126)
#define NSWITCH_GPIOP7					(127)

#define NSWITCH_GPIOQ0					(128)
#define NSWITCH_GPIOQ1					(129)
#define NSWITCH_GPIOQ2					(130)
#define NSWITCH_GPIOQ3					(131)
#define NSWITCH_GPIOQ4					(132)
#define NSWITCH_GPIOQ5					(133)
#define NSWITCH_GPIOQ6					(134)
#define NSWITCH_GPIOQ7					(135)
#define NSWITCH_GPIOR0					(136)
#define NSWITCH_GPIOR1					(137)
#define NSWITCH_GPIOR2					(138)
#define NSWITCH_GPIOR3					(139)
#define NSWITCH_GPIOR4					(140)
#define NSWITCH_GPIOR5					(141)
#define NSWITCH_GPIOR6					(142)
#define NSWITCH_GPIOR7					(143)
#define NSWITCH_GPIOS0					(144)
#define NSWITCH_GPIOS1					(145)
#define NSWITCH_GPIOS2					(146)
#define NSWITCH_GPIOS3					(147)
#define NSWITCH_GPIOS4					(148)
#define NSWITCH_GPIOS5					(149)
#define NSWITCH_GPIOS6					(150)
#define NSWITCH_GPIOS7					(151)
#define NSWITCH_GPIOT0					(152)
#define NSWITCH_GPIOT1					(153)
#define NSWITCH_GPIOT2					(154)
#define NSWITCH_GPIOT3					(155)
#define NSWITCH_GPIOT4					(156)
#define NSWITCH_GPIOT5					(157)
#define NSWITCH_GPIOT6					(158)
#define NSWITCH_GPIOT7					(159)

#define NSWITCH_GPIOU0					(160)
#define NSWITCH_GPIOU1					(161)
#define NSWITCH_GPIOU2					(162)
#define NSWITCH_GPIOU3					(163)
#define NSWITCH_GPIOU4					(164)
#define NSWITCH_GPIOU5					(165)
#define NSWITCH_GPIOU6					(166)
#define NSWITCH_GPIOU7					(167)
#define NSWITCH_GPIOV0					(168)
#define NSWITCH_GPIOV1					(169)
#define NSWITCH_GPIOV2					(170)
#define NSWITCH_GPIOV3					(171)
#define NSWITCH_GPIOV4					(172)
#define NSWITCH_GPIOV5					(173)
#define NSWITCH_GPIOV6					(174)
#define NSWITCH_GPIOV7					(175)
#define NSWITCH_GPIOW0					(176)
#define NSWITCH_GPIOW1					(177)
#define NSWITCH_GPIOW2					(178)
#define NSWITCH_GPIOW3					(179)
#define NSWITCH_GPIOW4					(180)
#define NSWITCH_GPIOW5					(181)
#define NSWITCH_GPIOW6					(182)
#define NSWITCH_GPIOW7					(183)
#define NSWITCH_GPIOX0					(184)
#define NSWITCH_GPIOX1					(185)
#define NSWITCH_GPIOX2					(186)
#define NSWITCH_GPIOX3					(187)
#define NSWITCH_GPIOX4					(188)
#define NSWITCH_GPIOX5					(189)
#define NSWITCH_GPIOX6					(190)
#define NSWITCH_GPIOX7					(191)

#define NSWITCH_GPIOY0					(192)
#define NSWITCH_GPIOY1					(193)
#define NSWITCH_GPIOY2					(194)
#define NSWITCH_GPIOY3					(195)
#define NSWITCH_GPIOY4					(196)
#define NSWITCH_GPIOY5					(197)
#define NSWITCH_GPIOY6					(198)
#define NSWITCH_GPIOY7					(199)
#define NSWITCH_GPIOZ0					(200)
#define NSWITCH_GPIOZ1					(201)
#define NSWITCH_GPIOZ2					(202)
#define NSWITCH_GPIOZ3					(203)
#define NSWITCH_GPIOZ4					(204)
#define NSWITCH_GPIOZ5					(205)
#define NSWITCH_GPIOZ6					(206)
#define NSWITCH_GPIOZ7					(207)
#define NSWITCH_GPIOAA0					(208)
#define NSWITCH_GPIOAA1					(209)
#define NSWITCH_GPIOAA2					(210)
#define NSWITCH_GPIOAA3					(211)
#define NSWITCH_GPIOAA4					(212)
#define NSWITCH_GPIOAA5					(213)
#define NSWITCH_GPIOAA6					(214)
#define NSWITCH_GPIOAA7					(215)
#define NSWITCH_GPIOBB0					(216)
#define NSWITCH_GPIOBB1					(217)
#define NSWITCH_GPIOBB2					(218)
#define NSWITCH_GPIOBB3					(219)
#define NSWITCH_GPIOBB4					(220)
#define NSWITCH_GPIOBB5					(221)
#define NSWITCH_GPIOBB6					(222)
#define NSWITCH_GPIOBB7					(223)

#define NSWITCH_GPIOCC0					(224)
#define NSWITCH_GPIOCC1					(225)
#define NSWITCH_GPIOCC2					(226)
#define NSWITCH_GPIOCC3					(227)
#define NSWITCH_GPIOCC4					(228)
#define NSWITCH_GPIOCC5					(229)
#define NSWITCH_GPIOCC6					(230)
#define NSWITCH_GPIOCC7					(231)
#define NSWITCH_GPIODD0					(232)
#define NSWITCH_GPIODD1					(233)
#define NSWITCH_GPIODD2					(234)
#define NSWITCH_GPIODD3					(235)
#define NSWITCH_GPIODD4					(236)
#define NSWITCH_GPIODD5					(237)
#define NSWITCH_GPIODD6					(238)
#define NSWITCH_GPIODD7					(239)
#define NSWITCH_GPIOEE0					(240)
#define NSWITCH_GPIOEE1					(241)
#define NSWITCH_GPIOEE2					(242)
#define NSWITCH_GPIOEE3					(243)
#define NSWITCH_GPIOEE4					(244)
#define NSWITCH_GPIOEE5					(245)
#define NSWITCH_GPIOEE6					(246)
#define NSWITCH_GPIOEE7					(247)

#define NSWITCH_PEX_L0_RST_N_PA0		(0)
#define NSWITCH_PEX_L0_CLKREQ_N_PA1		(1)
#define NSWITCH_PEX_WAKE_N_PA2			(2)
#define NSWITCH_PEX_L1_RST_N_PA3		(3)
#define NSWITCH_PEX_L1_CLKREQ_N_PA4		(4)
#define NSWITCH_SATA_LED_ACTIVE_PA5		(5)
#define NSWITCH_PA6						(6)
#define NSWITCH_DAP1_FS_PB0				(8)
#define NSWITCH_DAP1_DIN_PB1			(9)
#define NSWITCH_DAP1_DOUT_PB2			(10)
#define NSWITCH_DAP1_SCLK_PB3			(11)
#define NSWITCH_SPI2_MOSI_PB4			(12)
#define NSWITCH_SPI2_MISO_PB5			(13)
#define NSWITCH_SPI2_SCK_PB6			(14)
#define NSWITCH_SPI2_CS0_PB7			(15)
#define NSWITCH_SPI1_MOSI_PC0			(16)
#define NSWITCH_SPI1_MISO_PC1			(17)
#define NSWITCH_SPI1_SCK_PC2			(18)
#define NSWITCH_SPI1_CS0_PC3			(19)
#define NSWITCH_SPI1_CS1_PC4			(20)
#define NSWITCH_SPI4_SCK_PC5			(21)
#define NSWITCH_SPI4_CS0_PC6			(22)
#define NSWITCH_SPI4_MOSI_PC7			(23)
#define NSWITCH_SPI4_MISO_PD0			(24)
#define NSWITCH_UART3_TX_PD1			(25)
#define NSWITCH_UART3_RX_PD2			(26)
#define NSWITCH_UART3_RTS_PD3			(27)
#define NSWITCH_UART3_CTS_PD4			(28)
#define NSWITCH_DMIC1_CLK_PE0			(32)
#define NSWITCH_DMIC1_DAT_PE1			(33)
#define NSWITCH_DMIC2_CLK_PE2			(34)
#define NSWITCH_DMIC2_DAT_PE3			(35)
#define NSWITCH_DMIC3_CLK_PE4			(36)
#define NSWITCH_DMIC3_DAT_PE5			(37)
#define NSWITCH_PE6						(38)
#define NSWITCH_PE7						(39)
#define NSWITCH_GEN3_I2C_SCL_PF0		(40)
#define NSWITCH_GEN3_I2C_SDA_PF1		(41)
#define NSWITCH_UART2_TX_PG0			(48)
#define NSWITCH_UART2_RX_PG1			(49)
#define NSWITCH_UART2_RTS_PG2			(50)
#define NSWITCH_UART2_CTS_PG3			(51)
#define NSWITCH_WIFI_EN_PH0				(56)
#define NSWITCH_WIFI_RST_PH1			(57)
#define NSWITCH_WIFI_WAKE_AP_PH2		(58)
#define NSWITCH_AP_WAKE_BT_PH3			(59)
#define NSWITCH_BT_RST_PH4				(60)
#define NSWITCH_BT_WAKE_AP_PH5			(61)
#define NSWITCH_PH6						(62)
#define NSWITCH_AP_WAKE_NFC_PH7			(63)
#define NSWITCH_NFC_EN_PI0				(64)
#define NSWITCH_NFC_INT_PI1				(65)
#define NSWITCH_GPS_EN_PI2				(66)
#define NSWITCH_GPS_RST_PI3				(67)
#define NSWITCH_UART4_TX_PI4			(68)
#define NSWITCH_UART4_RX_PI5			(69)
#define NSWITCH_UART4_RTS_PI6			(70)
#define NSWITCH_UART4_CTS_PI7			(71)
#define NSWITCH_GEN1_I2C_SDA_PJ0		(72)
#define NSWITCH_GEN1_I2C_SCL_PJ1		(73)
#define NSWITCH_GEN2_I2C_SCL_PJ2		(74)
#define NSWITCH_GEN2_I2C_SDA_PJ3		(75)
#define NSWITCH_DAP4_FS_PJ4				(76)
#define NSWITCH_DAP4_DIN_PJ5			(77)
#define NSWITCH_DAP4_DOUT_PJ6			(78)
#define NSWITCH_DAP4_SCLK_PJ7			(79)
#define NSWITCH_PK0						(80)
#define NSWITCH_PK1						(81)
#define NSWITCH_PK2						(82)
#define NSWITCH_PK3						(83)
#define NSWITCH_PK4						(84)
#define NSWITCH_PK5						(85)
#define NSWITCH_PK6						(86)
#define NSWITCH_PK7						(87)
#define NSWITCH_PL0						(88)
#define NSWITCH_PL1						(89)
#define NSWITCH_SDMMC1_CLK_PM0			(96)
#define NSWITCH_SDMMC1_CMD_PM1			(97)
#define NSWITCH_SDMMC1_DAT3_PM2			(98)
#define NSWITCH_SDMMC1_DAT2_PM3			(99)
#define NSWITCH_SDMMC1_DAT1_PM4			(100)
#define NSWITCH_SDMMC1_DAT0_PM5			(101)
#define NSWITCH_SDMMC3_CLK_PP0			(120)
#define NSWITCH_SDMMC3_CMD_PP1			(121)
#define NSWITCH_SDMMC3_DAT3_PP2			(122)
#define NSWITCH_SDMMC3_DAT2_PP3			(123)
#define NSWITCH_SDMMC3_DAT1_PP4			(124)
#define NSWITCH_SDMMC3_DAT0_PP5			(125)
#define NSWITCH_CAM1_MCLK_PS0			(144)
#define NSWITCH_CAM2_MCLK_PS1			(145)
#define NSWITCH_CAM_I2C_SCL_PS2			(146)
#define NSWITCH_CAM_I2C_SDA_PS3			(147)
#define NSWITCH_CAM_RST_PS4				(148)
#define NSWITCH_CAM_AF_EN_PS5			(149)
#define NSWITCH_CAM_FLASH_EN_PS6		(150)
#define NSWITCH_CAM1_PWDN_PS7			(151)
#define NSWITCH_CAM2_PWDN_PT0			(152)
#define NSWITCH_CAM1_STROBE_PT1			(153)
#define NSWITCH_UART1_TX_PU0			(160)
#define NSWITCH_UART1_RX_PU1			(161)
#define NSWITCH_UART1_RTS_PU2			(162)
#define NSWITCH_UART1_CTS_PU3			(163)
#define NSWITCH_LCD_BL_PWM_PV0			(168)
#define NSWITCH_LCD_BL_EN_PV1			(169)
#define NSWITCH_LCD_RST_PV2				(170)
#define NSWITCH_LCD1_PV3				(171)
#define NSWITCH_LCD2_PV4				(172)
#define NSWITCH_AP_READY_PV5			(173)
#define NSWITCH_TOUCH_RST_PV6			(174)
#define NSWITCH_TOUCH_CLK_PV7			(175)
#define NSWITCH_MODEM_WAKE_AP_PX0		(184)
#define NSWITCH_TOUCH_INT_PX1			(185)
#define NSWITCH_MOTION_INT_PX2			(186)
#define NSWITCH_ALS_PROX_INT_PX3		(187)
#define NSWITCH_TEMP_ALERT_PX4			(188)
#define NSWITCH_BUTTON_POWER_ON_PX5		(189)
#define NSWITCH_BUTTON_VOL_UP_PX6		(190)
#define NSWITCH_BUTTON_VOL_DOWN_PX7		(191)
#define NSWITCH_BUTTON_SLIDE_SW_PY0		(192)
#define NSWITCH_BUTTON_HOME_PY1			(193)
#define NSWITCH_LCD_TE_PY2				(194)
#define NSWITCH_PWR_I2C_SCL_PY3			(195)
#define NSWITCH_PWR_I2C_SDA_PY4			(196)
#define NSWITCH_CLK_32K_OUT_PY5			(197)
#define NSWITCH_PZ0						(200)
#define NSWITCH_PZ1						(201)
#define NSWITCH_PZ2						(202)
#define NSWITCH_PZ3						(203)
#define NSWITCH_PZ4						(204)
#define NSWITCH_PZ5						(205)
#define NSWITCH_DAP2_FS_PAA0			(208)
#define NSWITCH_DAP2_SCLK_PAA1			(209)
#define NSWITCH_DAP2_DIN_PAA2			(210)
#define NSWITCH_DAP2_DOUT_PAA3			(211)
#define NSWITCH_AUD_MCLK_PBB0			(216)
#define NSWITCH_DVFS_PWM_PBB1			(217)
#define NSWITCH_DVFS_CLK_PBB2			(218)
#define NSWITCH_X1_AUD_PBB3				(219)
#define NSWITCH_X3_AUD_PBB4				(220)
#define NSWITCH_HDMI_CEC_PCC0			(224)
#define NSWITCH_HDMI_INT_DP_HPD_PCC1	(225)
#define NSWITCH_SPDIF_OUT_PCC2			(226)
#define NSWITCH_SPDIF_IN_PCC3			(227)
#define NSWITCH_USB_VBUS_EN0_PCC4		(228)
#define NSWITCH_USB_VBUS_EN1_PCC5		(229)
#define NSWITCH_DP_HPD0_PCC6			(230)
#define NSWITCH_PCC7					(231)
#define NSWITCH_SPI2_CS1_PDD0			(232)
#define NSWITCH_QSPI_SCK_PEE0			(240)
#define NSWITCH_QSPI_CS_N_PEE1			(241)
#define NSWITCH_QSPI_IO0_PEE2			(242)
#define NSWITCH_QSPI_IO1_PEE3			(243)
#define NSWITCH_QSPI_IO2_PEE4			(244)
#define NSWITCH_QSPI_IO3_PEE5			(245)

#ifdef __cplusplus
}
#endif

#endif /* __NSWITCH_GPIO_H__ */