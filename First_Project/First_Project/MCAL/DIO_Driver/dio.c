/*
 * DIO.c
 *
 * Created: 7/29/2024 1:25:33 AM
 *  Author: es-ahmedabdellatif20
 */ 

#include "DIO.h"


void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction)
{
	switch(portNumber)
	{
		//case of port A
		case PORT_A:
		if (direction == OUT)
		{
			DDRA |= (1<<pinNumber);
		}
		else if(direction == IN)
		{
			DDRA &= ~(1<<pinNumber);
		}
		break;
		
		//case of port B
		case PORT_B:
		if (direction == OUT)
		{
			DDRB |= (1<<pinNumber);
		}
		else if(direction == IN)
		{
			DDRB &= ~(1<<pinNumber);
		}
		break;
		
		//case of port C
		case PORT_C:
		if (direction == OUT)
		{
			DDRC |= (1<<pinNumber);
		}
		else if(direction == IN)
		{
			DDRC &= ~(1<<pinNumber);
		}
		break;
		
		//case of port D
		case PORT_D:
		if (direction == OUT)
		{
			DDRD |= (1<<pinNumber);
		}
		else if(direction == IN)
		{
			DDRD &= ~(1<<pinNumber);
		}
		break;
	}
}
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value)//write data to dio
{
	switch(portNumber)
	{
		//case of port A
		case PORT_A:
		if (value == HIGH)
		{
			PORTA |= (1<<pinNumber);
		}
		else if(value == LOW)
		{
			PORTA &= ~(1<<pinNumber);
		}
		break;
		
		//case of port B
		case PORT_B:
		if (value == HIGH)
		{
			PORTB |= (1<<pinNumber);
		}
		else if(value == LOW)
		{
			PORTB &= ~(1<<pinNumber);
		}
		break;
		
		//case of port C
		case PORT_C:
		if (value == HIGH)
		{
			PORTC |= (1<<pinNumber);
		}
		else if(value == LOW)
		{
			PORTC &= ~(1<<pinNumber);
		}
		break;
		
		//case of port D
		case PORT_D:
		if (value == HIGH)
		{
			PORTD |= (1<<pinNumber);
		}
		else if(value == LOW)
		{
			PORTD &= ~(1<<pinNumber);
		}
		break;
	}
}
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber)// toggle dio
{
	switch(portNumber)
	{
		//for port A
		case(PORT_A):
		PORTA ^= (1<<pinNumber);
		break;
		//for port B
		case(PORT_B):
		PORTB ^= (1<<pinNumber);
		break;
		//for port C
		case(PORT_C):
		PORTC ^= (1<<pinNumber);
		break;
		//for port D
		case(PORT_D):
		PORTD ^= (1<<pinNumber);
		break;
	}
}
uint8_t DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value )//read dio
{
	
}

