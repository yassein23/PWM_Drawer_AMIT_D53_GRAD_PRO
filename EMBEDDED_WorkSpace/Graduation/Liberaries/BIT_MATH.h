/*

* BIT_MATH.h
 *
 *  Created on: DEC 25, 2023
 *      Author: Yassein
 */

#ifndef LIBERARIES_BIT_MATH_H_
#define LIBERARIES_BIT_MATH_H_


#define CLEAR_BIT_VALUE(VAL,BIT)    VAL &= (~(1<<BIT))

#define SET_BIT_VALUE(VAL,BIT)      VAL |= (1<<BIT)

#define TOGGLE_BIT_VALUE(VAL,BIT)   VAL ^= (1<<BIT)

#define GET_BIT_VALUE(VAL,BIT)      ((VAL>>BIT)&1)


#endif /* LIBERARIES_BIT_MATH_H_ */
