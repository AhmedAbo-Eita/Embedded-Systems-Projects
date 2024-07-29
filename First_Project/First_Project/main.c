/*
 * main.c
 *
 * Created: 7/28/2024 1:07:40 PM
 * Author : es-ahmedabdellatif20
 */ 

#include "MCAL/DIO_Driver/dio.h"
#include "ECUAL/LED_Driver/led.h"

int main(void)
{
    LED_init(PORT_C,0);
    while (1) 
    {
        LED_toggle(PORT_C,0);
    }
}
