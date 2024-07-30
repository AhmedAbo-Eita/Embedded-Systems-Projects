/*
 * DIO.c
 *
 * Created: 7/29/2024 1:25:33 AM
 * Author: es-ahmedabdellatif20
 * configuration of DIO of micro controller
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
			set(DDRA,pinNumber);
		}
		else if(direction == IN)
		{
			clear(DDRA,pinNumber);
		}
		break;
		
		//case of port B
		case PORT_B:
		if (direction == OUT)
		{
			set(DDRB,pinNumber);
		}
		else if(direction == IN)
		{
			clear(DDRB,pinNumber);
		}
		break;
		
		//case of port C
		case PORT_C:
		if (direction == OUT)
		{
			set(DDRC,pinNumber);
		}
		else if(direction == IN)
		{
			clear(DDRC,pinNumber);
		}
		break;
		
		//case of port D
		case PORT_D:
		if (direction == OUT)
		{
			set(DDRD,pinNumber);
		}
		else if(direction == IN)
		{
			clear(DDRD,pinNumber);
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
		if (value == HIGH) // need output high on pin
		{
			set(PORTA,pinNumber);
		}
		else if(value == LOW) // need output low on pin 
		{
			clear(PORTA,pinNumber);
		}
		break;
		
		//case of port B
		case PORT_B:
		if (value == HIGH)
		{
			set(PORTB,pinNumber);
		}
		else if(value == LOW)
		{
			clear(PORTB,pinNumber);
		}
		break;
		
		//case of port C
		case PORT_C:
		if (value == HIGH)
		{
			set(PORTC,pinNumber);
		}
		else if(value == LOW)
		{
			clear(PORTC,pinNumber);
		}
		break;
		
		//case of port D
		case PORT_D:
		if (value == HIGH)
		{
			set(PORTD,pinNumber);
		}
		else if(value == LOW)
		{
			clear(PORTD,pinNumber);
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
		toggle(PORTA,pinNumber);//chage state of bit 
		break;
		//for port B
		case(PORT_B):
		toggle(PORTB,pinNumber);
		break;
		//for port C
		case(PORT_C):
		toggle(PORTC,pinNumber);
		break;
		//for port D
		case(PORT_D):
		toggle(PORTD,pinNumber);
		break;
	}
}
void DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value )//read dio
{
	//for port A
	switch (portNumber)
	{
		case(PORT_A):
		//read the value in PINx register for specific pin and shift it to get value 1 or 0
		*value = (PINA & (1<<pinNumber))>>pinNumber;
		break;
		//for port B
		case(PORT_B):
		*value = (PINB & (1<<pinNumber))>>pinNumber;
		break;
		//for port C
		case(PORT_C):
		*value = (PINC & (1<<pinNumber))>>pinNumber;
		break;
		//for port D
		case(PORT_D):
		*value = (PIND & (1<<pinNumber))>>pinNumber;
		break;
	}
}
	


