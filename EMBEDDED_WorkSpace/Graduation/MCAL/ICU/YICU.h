/*
 * YICU.h
 *
 *  Created on: Mar 6, 2024
 *      Author: Eng.Yassin
 */

#ifndef MCAL_ICU_ICU_H_
#define MCAL_ICU_ICU_H_


#include "../../Liberaries/ERROR_TYPES.h"
#include "../../Liberaries/STD_Types.h"

/* Define all Timer 1 Register */

#define TCCR1A			(*( volatile uint8*)	0X4F)
#define TCCR1B			(*( volatile uint8*)	0X4E)
#define TCNT1H          (*( volatile uint8*)	0x4D)
#define TCNT1L          (*( volatile uint8*)	0x4C)
#define TCNT1			(*( volatile uint16*)	0X4C)    /* u16 for HIGH & LOW */
#define OCR1AL          (*( volatile uint8*)	0x4A)
#define OCR1AH          (*( volatile uint8*)	0x4B)
#define OCR1A			(*( volatile uint16*)	0X4A)
#define OCR1BL          (*( volatile uint8*)	0x48)
#define OCR1BH          (*( volatile uint8*)	0x49)
#define OCR1B			(*( volatile uint16*)	0X48)
#define ICR1H           (*( volatile uint8*)	0x47)
#define ICR1L           (*( volatile uint8*)	0x46)
#define ICR1			(*( volatile uint16*)	0X46)
#define TIMSK		    (*( volatile uint8*)  0x59)	/* Timer/Counter Interrupt Mask Register */
#define TIFR		    (*( volatile uint8*)	0x58)	/* Timer/Counter Interrupt Flag Register */

/* Define TCCR1A Bits */

#define WGM10	(0)
#define WGM11	(1)
#define FOC1B	(2)
#define FOC1A	(3)
#define COM1B0	(4)
#define COM1B1	(5)
#define COM1A0	(6)
#define COM1A1	(7)

/* Define TCCR1B Bits */

#define CS10	(0)
#define CS11	(1)
#define CS12	(2)
#define WGM12	(3)
#define WGM13	(4)
#define ICES1	(6)
#define ICNC1	(7)

/* TIMSK Bits */

#define TICIE1	(5)

/* TIFR Bits */

#define ICF1	(5)

/* Sources */

#define internall		(0)
#define external		(1)

/* Edges */

#define FALLING			(0)
#define RISING			(1)



/* ICU functions */

 void Time2String(f32 data );
 void Freq2String(f32 data);
 void ICU_GetPWM(void);


#endif /* MCAL_ICU_ICU_H_ */
