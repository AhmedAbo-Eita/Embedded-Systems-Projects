/*
 * DIO.h
 *
 * Created: 7/29/2024 1:25:10 AM
 *  Author: es-ahmedabdellatif20
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../registers.h"
#include "../../Utilities/type.h"

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

//direction defines
#define IN 0
#define OUT 1

//values defines
#define HIGH 1
#define LOW 0

void DIO_init(uint8_t portNumber,uint8_t pinNumber,uint8_t direction);//initialization of direction(in or out)
void DIO_write(uint8_t portNumber,uint8_t pinNumber,uint8_t value);//write data to dio
void DIO_toggle(uint8_t portNumber,uint8_t pinNumber);// toggle dio
void DIO_read(uint8_t portNumber,uint8_t pinNumber,uint8_t* value );//read dio



#endif /* DIO_H_ */