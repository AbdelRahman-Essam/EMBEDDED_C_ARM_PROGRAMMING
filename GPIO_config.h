/*
 * GPIO_config.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Abdelrahman Essam
 */

#ifndef GPIO_CONFIG_H_
#define GPIO_CONFIG_H_
#include "Reg_map.h"
/******************************************************************/
/*
 * PORT Configuration
 */

/*
 * Port Bus Control
 * AHB
 * APB
 */
#define PORTA_BUS_CONTROL AHB
#define PORTB_BUS_CONTROL AHB
#define PORTC_BUS_CONTROL AHB
#define PORTD_BUS_CONTROL AHB
#define PORTE_BUS_CONTROL AHB
#define PORTF_BUS_CONTROL AHB
/*
 * Port Mode of Operation
 *  NORMAL_RUN_MODE
 *  SLEEP_MODE          this mode not fully configured
 *  DEEP_SLEEP_MODE     this mode not fully configured
 */
#define PORTA_OPERATION_MODE NORMAL_RUN_MODE
#define PORTB_OPERATION_MODE NORMAL_RUN_MODE
#define PORTC_OPERATION_MODE NORMAL_RUN_MODE
#define PORTD_OPERATION_MODE NORMAL_RUN_MODE
#define PORTE_OPERATION_MODE NORMAL_RUN_MODE
#define PORTF_OPERATION_MODE NORMAL_RUN_MODE
/******************************************************************/
/*
 * Pin Configuration
 */






#endif /* GPIO_CONFIG_H_ */
