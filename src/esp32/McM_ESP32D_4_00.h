/* Header for McM_ESP32D_4_00.h
 *
 * Copyright (C) 2018  E-LAGORi https://github.com/E-Lagori/ELi_McM_4_00/tree/main/src/esp32
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 * This header file describes the public API for SerialDebug.
 *
 */



#ifndef McM_ESP32D_4_00.h

#define McM_ESP32D_4_00.h
#include <stdint.h>
#include <Arduino.h>

# define CtrlBUS_Q 36
# define CtrlBUS_R 39
# define CtrlBUS_S 25
# define CtrlBUS_T 35
# define CtrlBUS_U 34
# define CtrlBUS_V 23
# define CtrlBUS_W 22
# define CtrlBUS_X 21
# define CtrlBUS_Y 19
# define CtrlBUS_Z 18
# define CtrlBUS_AA 05
# define CtrlBUS_AB 00
# define CtrlBUS_AC 13
# define CtrlBUS_AD 27
# define CtrlBUS_AE 33
# define CtrlBUS_AF 32

# define I_A 00
# define I_B 01
# define I_C 02
# define I_D 03
# define I_E 04
# define I_F 05
# define I_G 06
# define I_H 07
# define I_I 08
# define I_J 09
# define I_K 10
# define I_L 11
# define I_M 12
# define I_N 13
# define I_O 14
# define I_P 15


# define O_A 00
# define O_B 01
# define O_C 02
# define O_D 03
# define O_E 04
# define O_F 05
# define O_G 06
# define O_H 07
# define O_I 08
# define O_J 09
# define O_K 10
# define O_L 11
# define O_M 12
# define O_N 13
# define O_O 14
# define O_P 15

#define MISO 15
#define MOSI 02
#define SCLK 04

#define SCL 27
#define SDA 14

#define MUX_S0 15
#define MUX_S1 02
#define MUX_S2 12
#define MUX_S3 04

#define McM_ESP32D_4_00_CH_A 00
#define McM_ESP32D_4_00_CH_B 01
#define McM_ESP32D_4_00_CH_C 02
#define McM_ESP32D_4_00_CH_D 03
#define McM_ESP32D_4_00_CH_E 04
#define McM_ESP32D_4_00_CH_F 05
#define McM_ESP32D_4_00_CH_G 06
#define McM_ESP32D_4_00_CH_H 07
#define McM_ESP32D_4_00_CH_I 08
#define McM_ESP32D_4_00_CH_J 09
#define McM_ESP32D_4_00_CH_K 10
#define McM_ESP32D_4_00_CH_L 11
#define McM_ESP32D_4_00_CH_M 12
#define McM_ESP32D_4_00_CH_N 13
#define McM_ESP32D_4_00_CH_O 14
#define McM_ESP32D_4_00_CH_P 15

#define McM_ESP32D_4_00_CH_ADC_DAC 26
#define McM_4_00_LED 00

int McM_ESP32D_4_00_Setmux(uint8_t m,bool i = 0);

#endif
