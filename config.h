/*
Copyright 2022 Gondolindrim

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define I2C_DRIVER I2CD1
#define I2C_SCL_PIN B6
#define I2C_SDA_PIN B7
#define I2C_SCL_PAL_MODE 4
#define I2C_SDA_PAL_MODE 4
#define EEPROM_I2C_24LC256
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

/* my settings */

#define LAYER_STATE_8BIT      

#define DEBOUNCE 3
#define MATRIX_IO_DELAY 3
#define QMK_KEYS_PER_SCAN 10
#define USB_POLLING_INTERVAL_MS 1
#define GPIO_INPUT_PIN_DELAY 0

/* disable action features */

#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT