/*


 * APP.h
 *
 *  Created on: Mar 3, 2024
 *      Author: Yassein Hamed
 */

#ifndef APP_APP_H_
#define APP_APP_H_


#include "../Liberaries/STD_Types.h"
#include "../MCAL/PWM/PWM.h"

/* if You use internal PWM signal use Timer0 */
void PWM_Drawer_internal_init(uint8 mode,uint8 freq,uint8 duty);
/* if you use external PWM source */
void PWM_Drawer_external_init(void);
/* Draw signal */
void PWM_Draw_Signal(void);
/* Get Duty , period and Freq */
void PWM_Get_Signal(void);


#endif /* APP_APP_H_ */
