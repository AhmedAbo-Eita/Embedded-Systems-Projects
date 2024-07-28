/*
 * LED.c
 *
 * Created: 7/28/2024 1:07:40 PM
 * Author : es-ahmedabdellatif20
 */ 

#include "DIO_Driver/DIO.h"

int main(void)
{
    DIO_init(PORT_A,0,OUT);
    while (1) 
    {
        DIO_write(PORT_A,0,HIGH);
    }
}
