/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PERIPHERALNAMES_H
#define MBED_PERIPHERALNAMES_H

#include <compiler.h>
#include "cmsis.h"
#include "PinNames.h"

#ifdef __cplusplus
extern "C" {
#endif

#define _SERCOM_SPI_NAME(n, unused) \
                            SPI##n,

#define _SERCOM_PAD_NAME(n, pad) \
				SERCOM##n##_PAD##pad = ((n & 0xF) | ((pad & 0xF) << 4)),

#define _SERCOM_I2C_NAME(n, unused) \
                            I2C##n,



typedef enum {
    UART_0 = (int)0x42000800UL,  // Base address of SERCOM0
    UART_1 = (int)0x42000C00UL,  // Base address of SERCOM1
    UART_2 = (int)0x42001000UL,  // Base address of SERCOM2
    UART_3 = (int)0x42001400UL,  // Base address of SERCOM3
    UART_4 = (int)0x42001800UL,  // Base address of SERCOM4
    UART_5 = (int)0x42001C00UL   // Base address of SERCOM5
} UARTName;

typedef enum { // for each input control mux  4,5,6,7,16,17,10,11 used in R21
    ADC_2  =  0x2ul,
    ADC_3  =  0x3ul,
    ADC_4  =  0x4ul,
    ADC_5  =  0x5ul,
    ADC_6  =  0x6ul,
    ADC_7  =  0x7ul,
    ADC_8  =  0x8ul,
    ADC_10 =  0xAul,
    ADC_11 =  0xBul,
    ADC_16 =  0x10ul,
    ADC_17 =  0x11ul,
    ADC_18 =  0x12ul,
    ADC_19 =  0x13ul
} ADCName;

typedef enum {  // for each channel
    EXTINT_0 = 0,
    EXTINT_1,
    EXTINT_2,
    EXTINT_3,
    EXTINT_4,
    EXTINT_5,
    EXTINT_6,
    EXTINT_7,
    EXTINT_8,
    EXTINT_9,
    EXTINT_10,
    EXTINT_11,
    EXTINT_12,
    EXTINT_13,
    EXTINT_14,
    EXTINT_15
} EXTINTName;

typedef enum {
    MREPEAT(SERCOM_INST_NUM, _SERCOM_SPI_NAME, ~)
} SPIName;

typedef enum {
    MREPEAT(SERCOM_INST_NUM, _SERCOM_I2C_NAME, ~)
} I2CName;

typedef enum {
    /* Pad 0 definitions */
    MREPEAT(SERCOM_INST_NUM, _SERCOM_PAD_NAME, 0)

    /* Pad 1 definitions */
    MREPEAT(SERCOM_INST_NUM, _SERCOM_PAD_NAME, 1)

    /* Pad 2 definitions */
    MREPEAT(SERCOM_INST_NUM, _SERCOM_PAD_NAME, 2)

    /* Pad 3 definitions */
    MREPEAT(SERCOM_INST_NUM, _SERCOM_PAD_NAME, 3)
} SercomPadName;

typedef enum {
    PWM_0 = (0x42002000UL), /**< \brief (TCC0) APB Base Address */
    PWM_1 = (0x42002400UL), /**< \brief (TCC1) APB Base Address */
    PWM_2 = (0x42002800UL), /**< \brief (TCC2) APB Base Address */
} PWMName;

struct pwm_pin_channel {
    PinName pin;
    PWMName pwm;
    uint8_t channel_index;
};

#define STDIO_UART_TX     USBTX
#define STDIO_UART_RX     USBRX
#define STDIO_UART        UART_0

// Default peripherals
#define MBED_SPI0         PB22, PB02, PB23, PA14

#define MBED_UART0        PA04, PA05
#define MBED_UARTUSB      USBTX, USBRX

#define MBED_I2C0         PA16, PA17

#define MBED_ANALOGIN0    PA04
#define MBED_ANALOGIN1    PA05
#define MBED_ANALOGIN2    PA06
#define MBED_ANALOGIN3    PA07
#define MBED_ANALOGIN4    PB02
#define MBED_ANALOGIN5    PB03
#define MBED_ANALOGIN7    PA08
#define MBED_ANALOGIN8    PA09

#define MBED_PWMOUT0      PA18
#define MBED_PWMOUT1      PA19

#define D0                PA00
#define D1                PA01
#define D2                PA08
#define D3                PA09
#define D4                PA10
#define D5                PB15 /*RF_RST*/
#define D6                PA12
#define D7                PA20 /*RF_SLP_TR*/
#define D8                PA14
#define D9                PB00 /*RF_IRQ*/
#define D10               PB31 /*CS*/
#define D11               PB30 /*MOSI*/
#define D12               PC19 /*MISO*/
#define D13               PC18 /*CLK*/
#define D14               PA22
#define D15               PA23
#define I2C_SDA           PA22 /**/
#define I2C_SCL           PA23 /**/
#define A0                PA15 /**/
#define A1                PA23 /**/
#define A2                PA06
#define A3                PA07
#define A4                PA00 /**/
#define A5                PB03
#define DAC0_OUT          0xFEFE
#define SW1               PA28
#define SW2               PA00 /**/
#define SW3               PB08

#ifdef __cplusplus
}
#endif

#endif
