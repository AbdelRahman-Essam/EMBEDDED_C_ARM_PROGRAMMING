/*
 * GPIO_prog.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Abdelrahman Essam
 */

#ifndef GPIO_PROG_C_
#define GPIO_PROG_C_
#include "GPIO_Init.h"
/******************************************************************************/
void GPIO_InitPort(u8 Port)
{
if(Port==PORTA)
{
    #if(PORTA_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,0);
    #elif(PORTA_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,0);
    #endif

    #if(PORTA_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,0);
    CLRBIT(SYSCTL_SCGCGPIO_R,0);
    CLRBIT(SYSCTL_DCGCGPIO_R,0);
    #elif(PORTA_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,0);
    SETBIT(SYSCTL_SCGCGPIO_R,0);
    CLRBIT(SYSCTL_DCGCGPIO_R,0);
    #elif(PORTA_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,0);
    CLRBIT(SYSCTL_SCGCGPIO_R,0);
    SETBIT(SYSCTL_DCGCGPIO_R,0);
    #endif
}
else if(Port==PORTB)
{
    #if(PORTB_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,1);
    #elif(PORTB_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,1);
    #endif

    #if(PORTB_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,1);
    CLRBIT(SYSCTL_SCGCGPIO_R,1);
    CLRBIT(SYSCTL_DCGCGPIO_R,1);
    #elif(PORTB_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,1);
    SETBIT(SYSCTL_SCGCGPIO_R,1);
    CLRBIT(SYSCTL_DCGCGPIO_R,1);
    #elif(PORTB_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,1);
    CLRBIT(SYSCTL_SCGCGPIO_R,1);
    SETBIT(SYSCTL_DCGCGPIO_R,1);
    #endif
}
else if(Port==PORTC)
{
    #if(PORTC_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,2);
    #elif(PORTC_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,2);
    #endif

    #if(PORTC_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,2);
    CLRBIT(SYSCTL_SCGCGPIO_R,2);
    CLRBIT(SYSCTL_DCGCGPIO_R,2);
    #elif(PORTC_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,2);
    SETBIT(SYSCTL_SCGCGPIO_R,2);
    CLRBIT(SYSCTL_DCGCGPIO_R,2);
    #elif(PORTC_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,2);
    CLRBIT(SYSCTL_SCGCGPIO_R,2);
    SETBIT(SYSCTL_DCGCGPIO_R,2);
    #endif
}
else if(Port==PORTD)
{
    #if(PORTD_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,3);
    #elif(PORTD_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,3);
    #endif

    #if(PORTD_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,3);
    CLRBIT(SYSCTL_SCGCGPIO_R,3);
    CLRBIT(SYSCTL_DCGCGPIO_R,3);
    #elif(PORTD_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,3);
    SETBIT(SYSCTL_SCGCGPIO_R,3);
    CLRBIT(SYSCTL_DCGCGPIO_R,3);
    #elif(PORTD_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,3);
    CLRBIT(SYSCTL_SCGCGPIO_R,3);
    SETBIT(SYSCTL_DCGCGPIO_R,3);
    #endif
}
else if(Port==PORTE)
{
    #if(PORTE_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,4);
    #elif(PORTE_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,4);
    #endif

    #if(PORTE_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,4);
    CLRBIT(SYSCTL_SCGCGPIO_R,4);
    CLRBIT(SYSCTL_DCGCGPIO_R,4);
    #elif(PORTE_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,4);
    SETBIT(SYSCTL_SCGCGPIO_R,4);
    CLRBIT(SYSCTL_DCGCGPIO_R,4);
    #elif(PORTE_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,4);
    CLRBIT(SYSCTL_SCGCGPIO_R,4);
    SETBIT(SYSCTL_DCGCGPIO_R,4);
    #endif
}
else if(Port==PORTF)
{
    #if(PORTF_BUS_CONTROL==APB)
    CLRBIT(SYSCTL_GPIOHBCTL_R,5);
    #elif(PORTF_BUS_CONTROL==AHB)
    SETBIT(SYSCTL_GPIOHBCTL_R,5);
    #endif

    #if(PORTF_OPERATION_MODE==NORMAL_RUN_MODE)
    SETBIT(SYSCTL_RCGCGPIO_R,5);
    CLRBIT(SYSCTL_SCGCGPIO_R,5);
    CLRBIT(SYSCTL_DCGCGPIO_R,5);
    #elif(PORTF_OPERATION_MODE==SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,5);
    SETBIT(SYSCTL_SCGCGPIO_R,5);
    CLRBIT(SYSCTL_DCGCGPIO_R,5);
    #elif(PORTF_OPERATION_MODE==DEEP_SLEEP_MODE)
    CLRBIT(SYSCTL_RCGCGPIO_R,5);
    CLRBIT(SYSCTL_SCGCGPIO_R,5);
    SETBIT(SYSCTL_DCGCGPIO_R,5);
    #endif
}
}
/***************************************************************/
void GPIO_InitPin(u8 Port,u8 Pin_Number,u8 DIR,u8 Aleternative_Func,u8 Drive_Select,u8 Digital_EN)
{
    /*
     * Warning Don't use PC[0-3]
     * Port --> PORTA PORTB PORTC.....,PORTF
     * Pin_Number --> 0,1,2,3,4,5,6,7
     * DIR --> IN,OUT,NULL
     * Alternative Function --> GPIO , AF       this mode not fully configured
     * Drive_Current_Consumption --> DR2R,DR4R,DR8R
     * Digital Enable ---> EN, DIS,AN_EN
     * Analog :is only valid for ports and pins that can be used as ADC AINx inputs.
     * **************************************************
     * Warning Don't use PC[0-3]
     * PA[1:0] UART0
     * PA[5:2] SSI0
     * PB[3:2] I21C0
     * PC[3:0] JTAG/SWD
     * PD[7] GPIOa
     * PF[0] GPIOa
     * This pin is configured as a GPIO by default but is locked
     * and can only be reprogrammed by unlocking the
     */
if(Port==PORTA)
{
    #if(PORTA_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTA_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTA_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTA_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTA_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTA_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTA_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTA_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTA_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTA_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTA_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTA_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTA_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTA_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTA_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
             CLRBIT(GPIO_PORTA_DEN_R,Pin_Number);

    #elif(PORTA_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTA_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTA_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTA_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTA_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTA_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTA_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTA_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTA_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTA_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTA_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTA_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTA_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTA_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTA_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
          CLRBIT(GPIO_PORTA_AHB_DEN_R,Pin_Number);
    #endif
}
else if(Port==PORTB)
{
    #if(PORTB_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTB_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTB_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTB_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTB_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTB_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTB_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTB_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTB_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTB_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTB_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTB_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTB_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTB_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTB_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
         {
           CLRBIT(GPIO_PORTB_DEN_R,Pin_Number);
           CLRBIT(GPIO_PORTB_AMSEL_R,Pin_Number);
         }
         else if(Digital_EN==AN_EN)
           SETBIT(GPIO_PORTB_AMSEL_R,Pin_Number);

    #elif(PORTB_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTB_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTB_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTB_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTB_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTB_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTB_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTB_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTB_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTB_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTB_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTB_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTB_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTB_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTB_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
        {
          CLRBIT(GPIO_PORTB_AHB_DEN_R,Pin_Number);
          CLRBIT(GPIO_PORTB_AHB_AMSEL_R,Pin_Number);
        }
        else if(Digital_EN==AN_EN)
          SETBIT(GPIO_PORTB_AHB_AMSEL_R,Pin_Number);
    #endif
}
else if(Port==PORTC)
{
    #if(PORTC_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTC_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTC_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTC_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTC_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTC_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTC_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTC_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTC_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTC_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTC_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTC_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTC_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTC_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTC_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
          {
             CLRBIT(GPIO_PORTC_DEN_R,Pin_Number);
             CLRBIT(GPIO_PORTC_AMSEL_R,Pin_Number);
          }
          else if(Digital_EN==AN_EN)
             SETBIT(GPIO_PORTC_AMSEL_R,Pin_Number);

    #elif(PORTC_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTC_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTC_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTC_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTC_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTC_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTC_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTC_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTC_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTC_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTC_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTC_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTC_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTC_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTC_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
        {
          CLRBIT(GPIO_PORTC_AHB_DEN_R,Pin_Number);
          CLRBIT(GPIO_PORTC_AHB_AMSEL_R,Pin_Number);
        }
        else if(Digital_EN==AN_EN)
          SETBIT(GPIO_PORTC_AHB_AMSEL_R,Pin_Number);
    #endif
}
else if(Port==PORTD)
{
    #if(PORTD_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTD_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTD_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTD_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTD_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTD_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTD_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTD_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTD_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTD_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTD_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTD_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTD_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTD_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTD_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
         {
             CLRBIT(GPIO_PORTD_DEN_R,Pin_Number);
             CLRBIT(GPIO_PORTD_AMSEL_R,Pin_Number);
         }
         else if(Digital_EN==AN_EN)
             SETBIT(GPIO_PORTD_AMSEL_R,Pin_Number);


    #elif(PORTD_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTD_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTD_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTD_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTD_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTD_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTD_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTD_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTD_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTD_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTD_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTD_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTD_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTD_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTD_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
        {
          CLRBIT(GPIO_PORTD_AHB_DEN_R,Pin_Number);
          CLRBIT(GPIO_PORTD_AHB_AMSEL_R,Pin_Number);
        }
        else if(Digital_EN==AN_EN)
          SETBIT(GPIO_PORTD_AHB_AMSEL_R,Pin_Number);
    #endif
}
else if(Port==PORTE)
{
    #if(PORTE_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTE_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTE_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTE_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTE_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTE_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTE_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTE_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTE_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTE_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTE_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTE_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTE_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTE_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTE_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
         {
             CLRBIT(GPIO_PORTE_DEN_R,Pin_Number);
             CLRBIT(GPIO_PORTE_AMSEL_R,Pin_Number);
         }
         else if(Digital_EN==AN_EN)
             SETBIT(GPIO_PORTE_AMSEL_R,Pin_Number);
    #elif(PORTE_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTE_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTE_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTE_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTE_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTE_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTE_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTE_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTE_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTE_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTE_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTE_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTE_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTE_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTE_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
        {
          CLRBIT(GPIO_PORTE_AHB_DEN_R,Pin_Number);
          CLRBIT(GPIO_PORTE_AHB_AMSEL_R,Pin_Number);
        }
        else if(Digital_EN==AN_EN)
          SETBIT(GPIO_PORTE_AHB_AMSEL_R,Pin_Number);
    #endif
}
else if(Port==PORTF)
{
    #if(PORTF_BUS_CONTROL==APB)
         if(DIR==IN)
         CLRBIT(GPIO_PORTF_DIR_R,Pin_Number);
         else if(DIR==OUT)
         SETBIT(GPIO_PORTF_DIR_R,Pin_Number);

         if(Aleternative_Func==GPIO)
             CLRBIT(GPIO_PORTF_AFSEL_R,Pin_Number);
         else if(Aleternative_Func==AF)
             SETBIT(GPIO_PORTF_AFSEL_R,Pin_Number);

         if(Drive_Select==DR2R)
         {
             SETBIT(GPIO_PORTF_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTF_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTF_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR4R)
         {
             CLRBIT(GPIO_PORTF_DR2R_R,Pin_Number);
             SETBIT(GPIO_PORTF_DR4R_R,Pin_Number);
             CLRBIT(GPIO_PORTF_DR8R_R,Pin_Number);
         }
         else if(Drive_Select==DR8R)
         {
             CLRBIT(GPIO_PORTF_DR2R_R,Pin_Number);
             CLRBIT(GPIO_PORTF_DR4R_R,Pin_Number);
             SETBIT(GPIO_PORTF_DR8R_R,Pin_Number);
         }

         if(Digital_EN==EN)
             SETBIT(GPIO_PORTF_DEN_R,Pin_Number);
         else if(Digital_EN==DIS)
             CLRBIT(GPIO_PORTF_DEN_R,Pin_Number);

    #elif(PORTF_BUS_CONTROL==AHB)
        if(DIR==IN)
        CLRBIT(GPIO_PORTF_AHB_DIR_R,Pin_Number);
        else if(DIR==OUT)
        SETBIT(GPIO_PORTF_AHB_DIR_R,Pin_Number);

        if(Aleternative_Func==GPIO)
          CLRBIT(GPIO_PORTF_AHB_AFSEL_R,Pin_Number);
        else if(Aleternative_Func==AF)
          SETBIT(GPIO_PORTF_AHB_AFSEL_R,Pin_Number);

        if(Drive_Select==DR2R)
        {
          SETBIT(GPIO_PORTF_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTF_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTF_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR4R)
        {
          CLRBIT(GPIO_PORTF_AHB_DR2R_R,Pin_Number);
          SETBIT(GPIO_PORTF_AHB_DR4R_R,Pin_Number);
          CLRBIT(GPIO_PORTF_AHB_DR8R_R,Pin_Number);
        }
        else if(Drive_Select==DR8R)
        {
          CLRBIT(GPIO_PORTF_AHB_DR2R_R,Pin_Number);
          CLRBIT(GPIO_PORTF_AHB_DR4R_R,Pin_Number);
          SETBIT(GPIO_PORTF_AHB_DR8R_R,Pin_Number);
        }

        if(Digital_EN==EN)
          SETBIT(GPIO_PORTF_AHB_DEN_R,Pin_Number);
        else if(Digital_EN==DIS)
          CLRBIT(GPIO_PORTF_AHB_DEN_R,Pin_Number);
    #endif
}
}
/***************************************************************************/
void GPIO_SetPin(u8 Port,u8 Pin_Number,u8 Value)
{
    if(Port==PORTA)
    {
        #if(PORTA_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTA_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTA_DATA_R,Pin_Number);
            }
        #elif(PORTA_BUS_CONTROL==AHB)
            if(Value==HIGH)
                        {
                             SETBIT(GPIO_PORTA_AHB_DATA_R,Pin_Number);
                        }
                        else if(Value==LOW)
                        {
                            CLRBIT(GPIO_PORTA_AHB_DATA_R,Pin_Number);
                        }
        #endif
    }

    else if(Port==PORTB)
    {
        #if(PORTB_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTB_DATA_R,Pin_Number);
            }
        #elif(PORTB_BUS_CONTROL==AHB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTB_AHB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTB_AHB_DATA_R,Pin_Number);
            }
        #endif

    }
    else if(Port==PORTC)
    {
        #if(PORTC_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTC_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTC_DATA_R,Pin_Number);
            }
        #elif(PORTC_BUS_CONTROL==AHB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTC_AHB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTC_AHB_DATA_R,Pin_Number);
            }
        #endif
    }
    else if(Port==PORTD)
    {
        #if(PORTD_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTD_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTD_DATA_R,Pin_Number);
            }
        #elif(PORTD_BUS_CONTROL==AHB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTD_AHB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTD_AHB_DATA_R,Pin_Number);
            }
        #endif
    }
    else if(Port==PORTE)
    {
        #if(PORTE_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTE_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTE_DATA_R,Pin_Number);
            }
        #elif(PORTE_BUS_CONTROL==AHB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTE_AHB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTE_AHB_DATA_R,Pin_Number);
            }
        #endif

    }
    else if(Port==PORTF)
    {
        #if(PORTF_BUS_CONTROL==APB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTF_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTF_DATA_R,Pin_Number);
            }
        #elif(PORTF_BUS_CONTROL==AHB)
            if(Value==HIGH)
            {
                 SETBIT(GPIO_PORTF_AHB_DATA_R,Pin_Number);
            }
            else if(Value==LOW)
            {
                CLRBIT(GPIO_PORTF_AHB_DATA_R,Pin_Number);
            }
        #endif
    }

}
/*********************************************************************/
u8 GPIO_GetPin(u8 Port,u8 Pin_Number)
{
    u8 Value=0;
    if(Port==PORTA)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTA_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTA_AHB_DATA_R,Pin_Number);
        #endif
    }

    else if(Port==PORTB)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTB_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTB_AHB_DATA_R,Pin_Number);
        #endif
    }
    else if(Port==PORTC)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTC_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTC_AHB_DATA_R,Pin_Number);
        #endif
    }
    else if(Port==PORTD)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTD_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTD_AHB_DATA_R,Pin_Number);
        #endif
    }
    else if(Port==PORTE)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTE_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTE_AHB_DATA_R,Pin_Number);
        #endif
    }
    else if(Port==PORTF)
    {
        #if(PORTA_BUS_CONTROL==APB)
        Value =GETBIT(GPIO_PORTF_DATA_R,Pin_Number);

        #elif(PORTA_BUS_CONTROL==AHB)
        Value =GETBIT(GPIO_PORTF_AHB_DATA_R,Pin_Number);
        #endif
    }


return (Value);
}




#endif /* GPIO_PROG_C_ */
