/*
 * Redirects the header to appropriate version of microcontroler header file
 *
 * Copyright (C) 2018  ELagori https://github.com/
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
 * This file contains the code for ELi_MCM_4_00 library.
 *
 */

#ifndef MCM_4_00_H
#define MCM_4_00_H

#ifdef ESP32
  #define "esp32/MCM_ESP32_4_00.h"
#else 
  #error "Processor not supported"
#endif
#endif
