/*
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

// -----------------------------------------------------
// NOTE: THIS HEADER IS ALSO INCLUDED BY ASSEMBLER SO
//       SHOULD ONLY CONSIST OF PREPROCESSOR DIRECTIVES
// -----------------------------------------------------

// Board definition for vcc-gnd.com, YD-RP2040, 4MB Flash
// Pinout: http://152.32.187.208:8080/yd-data/YD-RP2040/YD-2040-PIN.png
// Schematics: http://152.32.187.208:8080/yd-data/YD-RP2040/YD-2040-2022-V1.1-SCH.pdf
// QSPI Flash (datasheet "W25QXXJVEIQTR", PCB measurements): W25Q32JVSSI
// PCB Layout: http://152.32.187.208:8080/yd-data/YD-RP2040/YD-RP2040-Metric-SIZE.pdf
// Buy: https://vcc-gnd.aliexpress.com

#ifndef _BOARDS_VCCGND_YD_RP2040_4MB_H
#define _BOARDS_VCCGND_YD_RP2040_4MB_H

// For board detection
#define VCCGND_YD_RP2040_4MB

// --- BOARD SPECIFIC ---
#define USER_SW_PIN 24

// --- UART ---
#ifndef PICO_DEFAULT_UART
#define PICO_DEFAULT_UART 0
#endif
#ifndef PICO_DEFAULT_UART_TX_PIN
#define PICO_DEFAULT_UART_TX_PIN 0
#endif
#ifndef PICO_DEFAULT_UART_RX_PIN
#define PICO_DEFAULT_UART_RX_PIN 1
#endif

// --- LED ---
#ifndef PICO_DEFAULT_LED_PIN
#define PICO_DEFAULT_LED_PIN 25
#endif

#ifndef PICO_DEFAULT_WS2812_PIN
#define PICO_DEFAULT_WS2812_PIN 23
#endif

// --- I2C ---
#ifndef PICO_DEFAULT_I2C
#define PICO_DEFAULT_I2C 0
#endif
#ifndef PICO_DEFAULT_I2C_SDA_PIN
#define PICO_DEFAULT_I2C_SDA_PIN 4
#endif
#ifndef PICO_DEFAULT_I2C_SCL_PIN
#define PICO_DEFAULT_I2C_SCL_PIN 5
#endif

// --- SPI ---
#ifndef PICO_DEFAULT_SPI
#define PICO_DEFAULT_SPI 0
#endif
#ifndef PICO_DEFAULT_SPI_SCK_PIN
#define PICO_DEFAULT_SPI_SCK_PIN 18
#endif
#ifndef PICO_DEFAULT_SPI_TX_PIN
#define PICO_DEFAULT_SPI_TX_PIN 19
#endif
#ifndef PICO_DEFAULT_SPI_RX_PIN
#define PICO_DEFAULT_SPI_RX_PIN 16
#endif
#ifndef PICO_DEFAULT_SPI_CSN_PIN
#define PICO_DEFAULT_SPI_CSN_PIN 17
#endif

// --- FLASH ---

// TODO check W25Q080 compatibility and CLKDIV 2
//#define PICO_BOOT_STAGE2_CHOOSE_W25Q080 1
// #ifndef PICO_FLASH_SPI_CLKDIV
// #define PICO_FLASH_SPI_CLKDIV 2
// #endif

// TODO Initially: Use slower generic flash access
#define PICO_BOOT_STAGE2_CHOOSE_GENERIC_03H 1
#ifndef PICO_FLASH_SPI_CLKDIV
#define PICO_FLASH_SPI_CLKDIV 4
#endif

#ifndef PICO_FLASH_SIZE_BYTES
#define PICO_FLASH_SIZE_BYTES (4 * 1024 * 1024)
#endif

// All boards have B1 RP2040
#ifndef PICO_RP2040_B0_SUPPORTED
#define PICO_RP2040_B0_SUPPORTED 0
#endif

#endif
