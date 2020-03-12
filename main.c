#include"INT_init.h"

/**
 * main.c
 */
int main(void)
{
    SYSCTL_RCC_R |= (1<<11);
    SYSCTL_RCC_R &= ~(1<<22);
    SYSCTL_RCC_R |= (1<<4);
    SYSCTL_RCC_R &= ~(1<<5);
    SYSCTL_RCC_R |= (1<<13);

    INT_Enable(INT_PORTA);

    INT_Enable(INT_PORTF);

    INT_Disable(INT_PORTF);

    INT_Enable(INT_PORTA);

    INT_Enable(INT_PORTF);

    INT_Disable(INT_PORTF);

    INT_Enable(INT_PORTA);

    INT_Enable(INT_PORTF);

    INT_Disable(INT_PORTF);

    INT_Enable(INT_16Timer0A);

    INT_Enable(INT_16Timer3B);

    INT_Enable(35);

    INT_Enable(INT_32Timer0B);

    INT_Enable(INT_32Timer5B);


    INT_Disable(INT_PORTF);

    INT_Disable(INT_PORTA);

    INT_Disable(INT_16Timer0A);

    INT_Disable(INT_16Timer3B);

    INT_Disable(35);

    INT_Disable(INT_32Timer0B);

    INT_Disable(INT_32Timer5B);


    INT_SetPending(INT_PORTA);

    INT_SetPending(INT_PORTF);

    INT_SetPending(INT_16Timer0A);

    INT_SetPending(INT_16Timer3B);

    INT_SetPending(INT_32Timer0B);

    INT_SetPending(INT_32Timer5B);


    INT_ClearPending(INT_PORTA);

    INT_ClearPending(INT_PORTF);

    INT_ClearPending(INT_16Timer0A);

    INT_ClearPending(INT_16Timer3B);

    INT_ClearPending(INT_32Timer0B);

    INT_ClearPending(INT_32Timer5B);




    INT_SetPriority(INT_PORTA,7);
    INT_SetPriority(INT_PORTA,5);
    INT_SetPriority(INT_PORTA,2);
    INT_SetPriority(INT_PORTA,0);
    INT_SetPriority(INT_PORTA,1);

    INT_SetPriority(INT_PORTA,2);

    INT_SetPriority(INT_PORTF,4);

    INT_SetPriority(INT_16Timer0A,3);

    INT_SetPriority(INT_PORTF,1);

    INT_SetPriority(INT_16Timer3B,1);

    INT_SetPriority(INT_32Timer0B,0);

    INT_SetPriority(INT_32Timer5B,6);

    INT_SetPriority(100,6);

    INT_SetPriority(100,0);

    INT_SetPriority(90,6);

    INT_SetPriority(90,0);






	return 0;
}
