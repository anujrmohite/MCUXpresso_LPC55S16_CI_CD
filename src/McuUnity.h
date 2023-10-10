/*
 * Copyright (c) 2023, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef MCU_UNITY_H_
#define MCU_UNITY_H_

void McuUnity_putc(char c);
void McuUnity_flush(void);
void McuUnity_start(void);
void McuUnity_complete(void);

#endif /* MCU_UNITY_H_ */
