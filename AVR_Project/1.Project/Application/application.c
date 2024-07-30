/*
 * application.c
 *
 * Created: 7/29/2024 11:02:17 PM
 *  Author: es-ahmedabdellatif20
 */ 

#include "application.h"
uint8_t button;
void app_init()
{
	
	LED_init(PORT_C,0);
	BUTTON_INIT(PORT_A,0);
}
void app_loop()
{
	BUTTON_READ(PORT_A,0,&button);
	if(button == BUTTON_PRESSED)
	{
		LED_ON(PORT_C,0);
	}
	else
	{
		LED_OFF(PORT_C,0);
	}
	
}
