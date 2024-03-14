/*


* ICU.c
 *
 *  Created on: Mar 5, 2024
 *      Author: Yassein Hamed
 */



#include "YICU.h"
#include "../../Liberaries/CLOCK.h"
#include "../../HAL/GLCD/GLCD.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int duty;



/* Function That Convert time float value to String */
 void Time2String(f32 data)
{

	int cnt=0;
	char d[10];
	while( data <1)
	{

		data=data *10;
		cnt++;
	}
	data=data*10;
	ltoa(data,d,10);
	char ti[100]="";
	char sec[5]="ms";
	strcat(ti,"0.");
	for (int i = 0 ; i<(cnt-1);i++)
	{
		strcat(ti,"0");
	}
	strcat(ti,d);

	//strcat(ti,A);
	strcat(ti,sec);
	GLCD_String(4,ti,Left);

}



/* Function That get all PWM parameter duty,frequency and period time */
void ICU_GetPWM(void)
{
	unsigned int A,B,C,Ton,T;;
	char duty_cycle[7]={0};
	char frequency[14]={0};

		TCCR1A = 0;
		TCNT1=0;
		TIFR = (1<<ICF1);  	/* Clear ICF (Input Capture flag) flag */

		TCCR1B = 0xC1;  	/* Rising edge, no prescaler ,Noise cansceld */
		while ((TIFR&(1<<ICF1)) == 0);
		A = ICR1;  		/* Take value of capture register */
		TIFR = (1<<ICF1);  	/* Clear ICF flag */

		TCCR1B = 0xC1;  	/* Falling edge, no prescaler Noise cansceld */
		while ((TIFR&(1<<ICF1)) == 0);
		B = ICR1;  		/* Take value of capture register */
		TIFR = (1<<ICF1);  	/* Clear ICF flag */

		TCCR1B = 0x81;  	/* Rising edge, no prescaler Noise cansceld */
		while ((TIFR&(1<<ICF1)) == 0);
		C = ICR1;  		/* Take value of capture register */
		TIFR = (1<<ICF1);  	/* Clear ICF flag */

		TCCR1B = 0;  		/* Stop the timer */

		if(A<B && B<C)  	/* Check for valid condition,
					to avoid timer overflow reading */
		{
			Ton=C-B;
			T=B-A;


			/* Calculate frequency */
			uint32 freq= F_CPU/T;
			freq=freq/1000;

			/* Calculate duty cycle */
			duty =((float) Ton /(float)T)*100;

			/* Calculate Time */
			f32 time =(1/(f32)freq);

			/* Display frequency */
			ltoa(freq,frequency,10);
			char fr[100]="Freq:";
			char hz[5]="Khz";
			strcat(fr,frequency);
			strcat(fr,hz);
			GLCD_String(1,fr,Left);
			/* Display Duty */
			sprintf(duty_cycle,"   Duty:%d",duty);
			strcat(duty_cycle,"%");
			GLCD_String(1,duty_cycle,Right);

			/* Display Time */
			Time2String(time);

		}

		else
		{
			GLCD_ClearAll();
			GLCD_String(1,"OUT OF RANGE!!",Left);
		}
		_delay_ms(50);

}
