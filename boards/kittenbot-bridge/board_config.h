#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#include "../../inc/configkeys.h"

#define VENDOR_NAME "Kittenbot Teams"
#define PRODUCT_NAME "Kittenbot Bridge"
#define VOLUME_LABEL "Bridge"
#define INDEX_URL "http://kittenbot.cn/bridge"
#define BOARD_ID "SAMD51J19A-Bridge"

#define USB_VID 0x239A
#define USB_PID 0x0021

#define LED_PIN PIN_PA16
#define LED_TX_PIN PIN_PA27
#define LED_RX_PIN PIN_PB06

#define BOARD_NEOPIXEL_PIN PIN_PB22
#define BOARD_NEOPIXEL_COUNT 1

#define BOARD_SCREEN 1

#define BOOT_USART_MODULE                 SERCOM3
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA22C_SERCOM3_PAD0
#define BOOT_USART_PAD0                   PINMUX_PA23C_SERCOM3_PAD1
#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

#define HAS_CONFIG_DATA 1


// This configuration data should be edited at https://microsoft.github.io/uf2/patcher/
// Just drop this file there.
// Alternatively, it can be also binary edited there after the bootloader is compiled.

// check configkeys.h for indexing

// this temporary, update after arcade shield defined
#ifdef DEFINE_CONFIG_DATA
const uint32_t config_data[] = {
    /* CF2 START */
    513675505, 539130489, // magic
    62, 100,  // used entries, total entries
    1, 0x21, // PIN_ACCELEROMETER_INT = PB01
    //2, 0x23, // PIN_ACCELEROMETER_SCL = PB03
    //3, 0x22, // PIN_ACCELEROMETER_SDA = PB02
    4, 0x11, // PIN_BTN_A = D12
    5, 0x13, // PIN_BTN_B = D11
    
    13, 0x10, // PIN_LED = PA16
    14, 0x20, // PIN_LIGHT = PB00
    18, 0xe, // PIN_MISO = PA14
    19, 0xc, // PIN_MOSI = PA12
    20, 0x36, // PIN_NEOPIXEL = PB22
    21, 0x17, // PIN_RX = PA23
    23, 0xd, // PIN_SCK = PA13
    24, 0x23, // PIN_SCL = PB03
    25, 0x22, // PIN_SDA = PB02
    27, 0x25, // PIN_TEMPERATURE = PB05
    28, 0x16, // PIN_TX = PA22
    // arcade related
    32, 0x2D, // PIN_DISPLAY_SCK = D4
    34, 0x2F, // PIN_DISPLAY_MOSI = D6
    35, 0x2C, // PIN_DISPLAY_CS = D7
    36, 0x30, // PIN_DISPLAY_DC = D3
    37, 0xa0, // DISPLAY_WIDTH = 160
    38, 0x80, // DISPLAY_HEIGHT = 128
    39, 0x80, // DISPLAY_CFG0 = 0x80
    40, 0x12c2d, // DISPLAY_CFG1 = 0x12c2d
    41, 0x18, // DISPLAY_CFG2 = 0x18
    43, 0x31, // PIN_DISPLAY_RST = D2
    44, 0x2E, // PIN_DISPLAY_BL = D5
    // joystick btn define, ref button.cpp at common packages
    47, 0x4d8, // PIN_BTN_LEFT = 1100 + 100 + A4 = 1240
    48, 0x474, // PIN_BTN_RIGHT = 1100 + 0 + A4 = 1140
    49, 0x475, // PIN_BTN_UP = 1100 + 0 + A5 = 1241
    50, 0x4d9, // PIN_BTN_DOWN = 1100 + 100 + A5 = 1141

    51, 0x12, // PIN_BTN_MENU = D10

    70, 0x68, // ACCELEROMETER_TYPE = MPU6050
    100, 0x2, // PIN_A0 = PA02
    101, 0x5, // PIN_A1 = PA05
    102, 0x6, // PIN_A2 = PA06
    103, 0x4, // PIN_A3 = PA04
    104, 0x28, // PIN_A4 = PB08
    105, 0x29, // PIN_A5 = PB09
    150, 0x17, // PIN_D0 = PA23
    151, 0x16, // PIN_D1 = PA22
    152, 0x31, // PIN_D2 = PB17
    153, 0x30, // PIN_D3 = PB16
    154, 0x2D, // PIN_D4 = PB13
    155, 0x2E, // PIN_D5 = PB14
    156, 0x2F, // PIN_D6 = PB15
    156, 0x2C, // PIN_D7 = PB12
    156, 0x02, // PIN_D8 = PA02
    159, 0x14, // PIN_D9 = PA20
    160, 0x12, // PIN_D10 = PA18
    161, 0x13, // PIN_D11 = PA19
    162, 0x11, // PIN_D12 = PA17
    163, 0x17, // PIN_D13 = PA16
    200, 0x1, // NUM_NEOPIXELS = 1
    204, 0x80000, // FLASH_BYTES = 0x80000
    205, 0x30000, // RAM_BYTES = 0x30000
    208, 0x239a003d, // BOOTLOADER_BOARD_ID = 0x239a003d
    209, 0x55114460, // UF2_FAMILY = ATSAMD51
    210, 0x20, // PINS_PORT_SIZE = PA_32
    CFG_PIN_P0, 0x2, // A0, edge connector start
    CFG_PIN_P1, 0x5, // A1
    CFG_PIN_P2, 0x16, // D1
    CFG_PIN_P3, 0x4, // A3
    CFG_PIN_P4, 0x28, // A4
    CFG_PIN_P5, 0x29, // A5
    CFG_PIN_P6, 0x2F, // D6
    CFG_PIN_P7, 0x2C, // D7
    CFG_PIN_P8, 0x02, // D8
    CFG_PIN_P9, 0x14, // D9
    CFG_PIN_P10, 0x17, // D0
    CFG_PIN_P11, 0x13, // D11
    CFG_PIN_P12, 0x11, // D12
    CFG_PIN_P13, 0xd, // SCK
    CFG_PIN_P14, 0xe, // MISO
    CFG_PIN_P15, 0xc, // MOSI
    CFG_PIN_P16, 0x12, // D10
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};
#endif


#endif
