/*
 * led.h
 *
 * Created: 7/29/2024 3:09:54 AM
 *  Author: es-ahmedabdellatif20
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO_Driver/dio.h"
#include "../../Utilities/type.h"

void LED_init(uint8_t portNumber, uint8_t pinNumber);// initialization of led 
void LED_ON(uint8_t portNumber, uint8_t pinNumber);// turn the led on 
void LED_OFF(uint8_t portNumber, uint8_t pinNumber);// turn the led off
void LED_toggle(uint8_t portNumber, uint8_t pinNumber); // toggle the state of led


#endif /* LED_H_ */