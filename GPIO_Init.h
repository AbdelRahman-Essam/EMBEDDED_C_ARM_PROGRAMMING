/*
 * GPIO_Init.h
 *
 *  Created on: Feb 10, 2020
 *      Author: Abdelrahman Essam
 */

#ifndef GPIO_INIT_H_
#define GPIO_INIT_H_
#include "GPIO_priv.h"
#include "GPIO_config.h"
#include "Reg_map.h"
#include "utils.h"

//typedef enum {MODE_IN, MODE_OUT} gpio_mode_t;
//typedef enum {PORTA_AHp = PORTA_AHP,PORTA_APb =PORTA_APB ,PORTB_AHp =PORTB_AHP} gpio_port_t;



void GPIO_InitPort(u8 Port);
void GPIO_InitPin(u8 Port,u8 Pin_Number,u8 DIR,u8 Aleternative_Func,u8 Drive_Select,u8 Digital_EN);
void GPIO_SetPin(u8 Port,u8 Pin_Number,u8 Value);
u8 GPIO_GetPin(u8 Port,u8 Pin_Number);


#endif /* GPIO_INIT_H_ */
