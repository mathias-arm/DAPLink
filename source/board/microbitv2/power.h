/**
 * @file    power.h
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright 2020 NXP
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef POWER_H_
#define POWER_H_

typedef enum _microbit_power_mode_t
{
    MB_POWER_RUNNING = 0x01,
    MB_POWER_SLEEP = 0x06,  // VLPS
    MB_POWER_DOWN = 0x08,   // VLLS0
} microbit_if_power_mode_t;

void power_init(void);

/* Lowest power mode available in KL27*/
//void power_enter_VLLS0(void);
void power_down(void);

/* Lowest power mode that allows I2C operation with address match wakeup */
//void power_enter_VLPS(void);
void power_sleep(void);

#endif /* POWER_H_ */
