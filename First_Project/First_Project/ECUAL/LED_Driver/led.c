/*
 * led.c
 *
 * Created: 7/29/2024 3:10:06 AM
 *  Author: es-ahmedabdellatif20
 */ 

#include "led.h"

void LED_init(uint8_t portNumber, uint8_t pinNumber)// initialization of led
{
	DIO_init( portNumber,pinNumber,OUT);
}

void LED_ON(uint8_t portNumber, uint8_t pinNumber)// LED OFF
{
	DIO_write( portNumber, pinNumber,HIGH);
}

void LED_OFF(uint8_t portNumber, uint8_t pinNumber) //LED ON
{
	DIO_write( portNumber, pinNumber,LOW);
}

void LED_toggle(uint8_t portNumber, uint8_t pinNumber) //LED ON
{
	DIO_toggle( portNumber, pinNumber);
}