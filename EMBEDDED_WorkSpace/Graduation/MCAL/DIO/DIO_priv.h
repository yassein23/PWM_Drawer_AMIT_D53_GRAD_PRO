#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_


#define DIO_u8PORTA	        	0u
#define DIO_u8PORTB		        1u
#define DIO_u8PORTC	         	2u
#define DIO_u8PORTD		        3u


#define DIO_u8PIN0              0u
#define DIO_u8PIN1              1u
#define DIO_u8PIN2              2u
#define DIO_u8PIN3              3u
#define DIO_u8PIN4              4u
#define DIO_u8PIN5              5u
#define DIO_u8PIN6              6u
#define DIO_u8PIN7              7u


#define DIO_u8PIN_OUTPUT        1u
#define DIO_u8PIN_INPUT         0u


#define DIO_u8PIN_LOW           0u
#define DIO_u8PIN_HIGH          1u


#define DIO_u8PORT_OUTPUT       0xff
#define DIO_u8PORT_INPUT        0u


#define DIO_u8PORT_LOW          0u
#define DIO_u8PORT_HIGH         0xff


#define DIO_u8GROUPA      0
#define DIO_u8GROUPB      1
#define DIO_u8GROUPC      2
#define DIO_u8GROUPD      3



#define DIO_u8OUTPUT       1
#define DIO_u8INPUT        0


#define DIO_u8FLOAT        0
#define DIO_u8PULL_UP      1



#define DIO_u8LOW          0
#define DIO_u8HIGH         1

#define DIO_MASK_BIT		1


#define CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0
#define CONC (b7,b6,b5,b4,b3,b2,b1,b0) CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)

#define INIT_DDR_DIRECTION	CONC(DIO_u8PA7_DIR,DIO_u8PA6_DIR,DIO_u8PA5_DIR,DIO_u8PA4_DIR,DIO_u8PA3_DIR,DIO_u8PA2_DIR,DIO_u8PA1_DIR,DIO_u8PA0_DIR)

#define INTI_PORT_VALUE 	CONC(DIO_u8PC7_VALUE,DIO_u8PC6_VALUE,DIO_u8PC5_VALUE,DIO_u8PC4_VALUE,DIO_u8PC3_VALUE,DIO_u8PC2_VALUE,DIO_u8PC1_VALUE,DIO_u8PC0_VALUE)

/*    INTERFACING    */
 ES_T DIO_enuInit(void);

 ES_T DIO_enuSetPinDirection(uint8 copy_u8PortID , uint8 copy_u8PinID , uint8 copy_u8Direction);

 ES_T DIO_enuSetPinValue (uint8 copy_u8PortID , uint8 copy_u8PinID , uint8 copy_u8Value);

 ES_T DIO_enuTogglePinValue (uint8 copy_u8PortID , uint8 copy_u8PinID);

 ES_T DIO_enuGetPinValue (uint8 copy_u8PortID , uint8 copy_u8PinID , uint8 *copy_pu8Value);

 ES_T DIO_enuSetPortDitection(uint8 copy_u8PortID , uint8 copy_u8Direction );

 ES_T DIO_enuSetPortValue(uint8 copy_u8PortID , uint8 copy_u8Value);

#endif
