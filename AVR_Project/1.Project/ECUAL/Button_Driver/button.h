/*
 * button.h
 *
 * Created: 7/29/2024 11:42:50 PM
 *  Author: es-ahmedabdellatif20
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#define BUTTON_PRESSED 1
#define BUTTON_RELEASED 0

//include DIO driver 
#include "../../MCAL/DIO_Driver/dio.h"

//initialization of button
void BUTTON_INIT(uint8_t portNumber,uint8_t pinNumber);

//read value of button 
void BUTTON_READ(uint8_t portNumber,uint8_t pinNumber,uint8_t* value);



#endif /* BUTTON_H_ */