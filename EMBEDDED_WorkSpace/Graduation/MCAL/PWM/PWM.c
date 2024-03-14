/*

 * PWM.c
 *
 *  Created on: Mar 6, 2024
 *      Author: Yassein Hamed
 */



/* include used LIB */


#include "PWM.h"
#include "../../Liberaries/BIT_MATH.h"
#include "../DIO/DIO_config.h"
#include "../DIO/DIO_inter.h"
#include "../DIO/DIO_priv.h"
#include "../DIO/DIO_register.h"
#include <string.h>

void PWM_Start(uint8 mode,uint8 clk)
{

	//DDRB=DDRB|(1<<3);		// Set OC0 As a Output >> PB3
	SET_BIT_VALUE(DDRB,3);    /*VAL |= (1<<BIT)*/

	/*	set mode	*/

	TCCR0 |= mode;			// Set Mode Of PWM

	/*	set Clk Source	*/

	TCCR0 |= clk ;			// Set Clk Source from 0 >> 1024 Prescaler

}

void PWM_SetDuty(uint8 duty)
{

	// Set DutyCycle

	OCR0 = ((f32)duty/100)*(Timer0Top);		// Set DutyCycle from 0 % >> 100 % "(0>>255)"

}
