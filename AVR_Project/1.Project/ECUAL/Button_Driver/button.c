/*
 * button.c
 *
 * Created: 7/29/2024 11:43:03 PM
 *  Author: es-ahmedabdellatif20
 */ 

#include "button.h"

//initialization of button
void BUTTON_INIT(uint8_t portNumber,uint8_t pinNumber)
{
	//initialization the pin as input pin
	DIO_init(portNumber,pinNumber,IN);
}

//read value of button
void BUTTON_READ(uint8_t portNumber,uint8_t pinNumber,uint8_t* value)
{
	DIO_read(portNumber,pinNumber, value);
}