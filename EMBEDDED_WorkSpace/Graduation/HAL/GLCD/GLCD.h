/*


* GLCD.h
 *
 *  Created on: Feb 12, 2024
 *      Author: Yassein Hamed
 */


#ifndef GLCD_H_
#define GLCD_H_

//#include "clock.h"
#include "../../MCAL/DIO/DIO_inter.h"
#include "../../MCAL/DIO/DIO_config.h"
#include "../../Liberaries/STD_Types.h"
#include "../../Liberaries/BIT_MATH.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>


#define F_CPU 16000000UL


#define Data_Port			PORTA
#define Command_Port		PORTB
#define Data_Port_Dir		DDRA
#define Command_Port_Dir	DDRB

#define RS					PB2
#define RW					PB1
#define EN					PB0
#define CS1					PB4
#define CS2					PB5
#define RST					PB6



#define Left				(0)			/* Define side */
#define Right				(1)			/* Define control pins */


#define TotalPage			8
#define SCREEN_WIDTH		128
#define SCREEN_HEIGHT	    64

void GLCD_Init(void);		/* initiation function */
void GLCD_Command(char Command);	/* send instruction */
void GLCD_ClearAll(void);		/* clear all on screen */
void GLCD_String(char page_no, char *str,uint8 side);		/* Display string from custom char */




#endif /* GLCD_H_ */
