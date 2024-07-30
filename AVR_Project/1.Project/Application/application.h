/*
 * application.h
 *
 * Created: 7/29/2024 11:02:02 PM
 *  Author: es-ahmedabdellatif20
 */ 


#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "../MCAL/DIO_Driver/dio.h"
#include "../ECUAL/LED_Driver/led.h"
#include "../ECUAL/Button_Driver/button.h"

void app_init();
void app_loop();

#endif /* APPLICATION_H_ */