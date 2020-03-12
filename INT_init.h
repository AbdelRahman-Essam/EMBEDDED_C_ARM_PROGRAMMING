/*
 * INT_init.h
 *
 *  Created on: Mar 4, 2020
 *      Author: Abdelrahman Essam
 */
#include "Reg_map.h"
#include "utils.h"
#include "std_types.h"
#include "INT_config.h"

#ifndef INT_INIT_H_
#define INT_INIT_H_

void INT_Enable(u8 ID);
void INT_Disable(u8 ID);

void INT_SetPending(u8 ID);
void INT_ClearPending(u8 ID);
u8 INT_GetPending(u8 ID);

u8 INT_GetActiveState(u8 ID);
void INT_SetPriority(u8 ID,u8 priority);
u8 INT_GetPriority(u8 ID);



#endif /* INT_INIT_H_ */
