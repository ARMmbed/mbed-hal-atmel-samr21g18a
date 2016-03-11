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

#ifndef MBED_PERIPHERALPINS_H
#define MBED_PERIPHERALPINS_H

#include "pinmap.h"
#include "PeripheralNames.h"
#include "pinmap_function.h"
#define PinMap_I2C_SDA  	PinMap_SERCOM_PAD
#define PinMap_I2C_SCL  	PinMap_SERCOM_PAD
#define PinMap_UART_TX  	PinMap_SERCOM_PAD
#define PinMap_UART_RX  	PinMap_SERCOM_PAD
#define PinMap_SPI_SCLK 	PinMap_SERCOM_PAD
#define PinMap_SPI_MOSI 	PinMap_SERCOM_PAD
#define PinMap_SPI_MISO 	PinMap_SERCOM_PAD
#define pinmap_merge(x,y) 	pinmap_merge_sercom((PinName)x,(PinName)y)

/************ADC***************/
extern const PinMap PinMap_ADC[];

//*********SERCOM*************/
extern const PinMap PinMap_SERCOM_PAD[];
extern const PinMap PinMap_SERCOM_PADEx[];

/************PWM***************/
extern const PinMap PinMap_PWM[];

/**********EXTINT*************/
extern const PinMap PinMap_EXTINT[];


#endif
