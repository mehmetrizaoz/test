/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/

/* MODULE pin_mux. */

#include "device_imx.h"
#include "pin_mux.h"
#include "debug_console_imx.h"

void configure_flexcan_pins(CAN_Type* base)
{
    switch((uint32_t)base)
    {
        case CAN1_BASE:
            // CAN1_TX SODIMM 55
            IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_RD3 = IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_RD3_MUX_MODE(1);
            IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD3 = IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD3_PE_MASK |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD3_PS(3)   |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD3_DSE(0)  |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD3_HYS_MASK;

            // CAN1_RX SODIMM 63
            IOMUXC_FLEXCAN1_RX_SELECT_INPUT = 0x4;
            IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_RD2 = IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_RD2_MUX_MODE(1);
            IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD2 = IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD2_PE_MASK |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD2_PS(3)   |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD2_DSE(0)  |
                                               IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_RD2_HYS_MASK;

            break;
        case CAN2_BASE:
            // CAN2_TX SODIMM 178
            IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO15 = IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO15_MUX_MODE(3);
            IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO15 = IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO15_PE_MASK |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO15_PS(3)   |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO15_DSE(0)  |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO15_HYS_MASK;

            // CAN2_RX SODIMM 188
            IOMUXC_FLEXCAN2_RX_SELECT_INPUT = 0x0;
            IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO14 = IOMUXC_SW_MUX_CTL_PAD_GPIO1_IO14_MUX_MODE(3);
            IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO14 = IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO14_PE_MASK |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO14_PS(3)   |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO14_DSE(0)  |
                                               IOMUXC_SW_PAD_CTL_PAD_GPIO1_IO14_HYS_MASK;
            break;
    }
}

void configure_i2c_pins(I2C_Type* base)
{
    switch((uint32_t)base)
    {
        case I2C1_BASE:
            PRINTF("...........I2C1_BASE\r\n");
            // I2C1 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA_SION_MASK;

            IOMUXC_I2C1_SCL_SELECT_INPUT = IOMUXC_I2C1_SCL_SELECT_INPUT_DAISY(1);
            IOMUXC_I2C1_SDA_SELECT_INPUT = IOMUXC_I2C1_SDA_SELECT_INPUT_DAISY(1);

            IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_HYS_MASK;
            break;
        case I2C2_BASE:
            // I2C2 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA_SION_MASK;

            IOMUXC_I2C2_SCL_SELECT_INPUT = IOMUXC_I2C2_SCL_SELECT_INPUT_DAISY(1);
            IOMUXC_I2C2_SDA_SELECT_INPUT = IOMUXC_I2C2_SDA_SELECT_INPUT_DAISY(1);

            IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_HYS_MASK;
            break;
        case I2C3_BASE:
            PRINTF("...........I2C3_BASE\r\n");
            // I2C3 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_I2C3_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C3_SCL_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C3_SCL_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_I2C3_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C3_SDA_MUX_MODE(0) |
                                             IOMUXC_SW_MUX_CTL_PAD_I2C3_SDA_SION_MASK;

            IOMUXC_I2C3_SCL_SELECT_INPUT = IOMUXC_I2C3_SCL_SELECT_INPUT_DAISY(2);
            IOMUXC_I2C3_SDA_SELECT_INPUT = IOMUXC_I2C3_SDA_SELECT_INPUT_DAISY(2);

            IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SCL_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_PE_MASK  |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_PS(3)    |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_DSE(0)   |
                                             IOMUXC_SW_PAD_CTL_PAD_I2C3_SDA_HYS_MASK;
            break;
        case I2C4_BASE:
            // I2C4 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD2 = IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD2_MUX_MODE(3) | // SCL
                                                    IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD2_SION_MASK;
            IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD3 = IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD3_MUX_MODE(3) | // SDA
                                                    IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD3_SION_MASK;

            IOMUXC_I2C4_SCL_SELECT_INPUT = IOMUXC_I2C4_SCL_SELECT_INPUT_DAISY(4);
            IOMUXC_I2C4_SDA_SELECT_INPUT = IOMUXC_I2C4_SDA_SELECT_INPUT_DAISY(4);

            IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2 = IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2_PE_MASK  |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2_PS(1)    |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2_DSE(0)   |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2_HYS_MASK;

            IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3 = IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3_PE_MASK  |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3_PS(1)    |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3_DSE(0)   |
                                                    IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3_HYS_MASK;
            PRINTF("...........I2C4_BASE\r\n");
            PRINTF("IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD2:%.8x\r\n", IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD2);
            PRINTF("IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD3:%.8x\r\n", IOMUXC_SW_MUX_CTL_PAD_ENET1_RGMII_TD3);
            PRINTF("IOMUXC_I2C4_SCL_SELECT_INPUT:%.8x\r\n", IOMUXC_I2C4_SCL_SELECT_INPUT);
            PRINTF("IOMUXC_I2C4_SDA_SELECT_INPUT:%.8x\r\n", IOMUXC_I2C4_SDA_SELECT_INPUT);
            PRINTF("IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2:%.8x\r\n", IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD2);
            PRINTF("IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3:%.8x\r\n", IOMUXC_SW_PAD_CTL_PAD_ENET1_RGMII_TD3);                                                    
            break;
        default:
            break;
    }
}

void configure_uart_pins(UART_Type* base)
{
    switch((uint32_t)base)
    {
        case UART2_BASE:
            // UART2 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_UART2_RX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART2_RX_DATA_MUX_MODE(0);
            IOMUXC_SW_MUX_CTL_PAD_UART2_TX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART2_TX_DATA_MUX_MODE(0);
            IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA_DSE(0);
            IOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_RX_DATA_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART2_TX_DATA_DSE(0);
            IOMUXC_UART2_RX_DATA_SELECT_INPUT = IOMUXC_UART2_RX_DATA_SELECT_INPUT_DAISY(3); /* Select TX_PAD for RX data (DTE mode...) */
            break;
        case UART6_BASE:
            // UART6 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_SD1_CD_B = IOMUXC_SW_MUX_CTL_PAD_SD1_CD_B_MUX_MODE(2);
            IOMUXC_SW_MUX_CTL_PAD_SD1_WP = IOMUXC_SW_MUX_CTL_PAD_SD1_WP_MUX_MODE(2);
            IOMUXC_SW_PAD_CTL_PAD_SD1_CD_B = IOMUXC_SW_PAD_CTL_PAD_SD1_CD_B_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_CD_B_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_CD_B_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_CD_B_DSE(0);
            IOMUXC_SW_PAD_CTL_PAD_SD1_WP = IOMUXC_SW_PAD_CTL_PAD_SD1_WP_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_WP_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_WP_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_SD1_WP_DSE(0);
            IOMUXC_UART6_RX_DATA_SELECT_INPUT = IOMUXC_UART6_RX_DATA_SELECT_INPUT_DAISY(5); /* Select TX_PAD for RX data (DTE mode...) */
            break;
        case UART1_BASE:
            // UART1 iomux configuration
            IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART1_RX_DATA_MUX_MODE(0);
            IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA = IOMUXC_SW_MUX_CTL_PAD_UART1_TX_DATA_MUX_MODE(0);
            IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_DSE(0);
            IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA = IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA_PE_MASK  |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA_PS(3)    |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_RX_DATA_HYS_MASK |
                                                  IOMUXC_SW_PAD_CTL_PAD_UART1_TX_DATA_DSE(0);
            IOMUXC_UART1_RX_DATA_SELECT_INPUT = IOMUXC_UART1_RX_DATA_SELECT_INPUT_DAISY(1); /* Select TX_PAD for RX data (DTE mode...) */
            break;
        default:
            break;
    }
}

void configure_ecspi_pins(ECSPI_Type* base)
{
	// ECSPI1 iomux configuration
	/* daisy chain selection */
	IOMUXC_ECSPI3_MISO_SELECT_INPUT = 0;  //(I2C1_SCL  SODIM 90)
	IOMUXC_ECSPI3_MOSI_SELECT_INPUT = 0;  //(I2C1_SCL  SODIM 90)

	/* iomux */
	IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C2_SCL_MUX_MODE(3);    /* ECSPI SLK  */
	IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA = IOMUXC_SW_MUX_CTL_PAD_I2C1_SDA_MUX_MODE(3);    /* ECSPI MOSI */
	IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL = IOMUXC_SW_MUX_CTL_PAD_I2C1_SCL_MUX_MODE(3);    /* ECSPI MISO  */
	IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA  = IOMUXC_SW_MUX_CTL_PAD_I2C2_SDA_MUX_MODE(3);     /* ECSPI SS0 */

	/* pad control */
	IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL =    IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PE_MASK  |
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_PS(0)    |      /* pull down */
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_DSE(0)   |
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SCL_HYS_MASK;

	IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA = IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_DSE(0)   |
			IOMUXC_SW_PAD_CTL_PAD_I2C1_SDA_HYS_MASK;

	IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL = IOMUXC_SW_PAD_CTL_PAD_I2C1_SCL_HYS_MASK;

	IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA  =  IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PE_MASK   |
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_PS(3)     |      /* pull up */
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_DSE(0)    |
			IOMUXC_SW_PAD_CTL_PAD_I2C2_SDA_HYS_MASK;
}

/*******************************************************************************
 * EOF
 ******************************************************************************/
