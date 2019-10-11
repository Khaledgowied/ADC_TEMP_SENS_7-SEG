/*
 * SEVEN_SEG_interface.h
 *
 *  Created on: Jun 22, 2018
 *      Author: Sedra Frimware
 */

#ifndef SEVEN_SEG_INTERFACE_H_
#define SEVEN_SEG_INTERFACE_H_

void SEVEN_SEG_RIGHT_voidDisplay(u8 Num);
void SEVEN_SEG_LEFT_voidDisplay(u8 Num);
void SEVEN_SEG_voidInit(void);

#endif /* SEVEN_SEG_INTERFACE_H_ */

//****************RIGHT_SEG*******************************

#define SEVEN_SEG_RIGHT_A_PORT DIO_PORTB
#define SEVEN_SEG_A_PIN  DIO_PIN_0

#define SEVEN_SEG_RIGHT_B_PORT DIO_PORTB
#define SEVEN_SEG_B_PIN  DIO_PIN_1

#define SEVEN_SEG_RIGHT_C_PORT DIO_PORTB
#define SEVEN_SEG_C_PIN  DIO_PIN_2

#define SEVEN_SEG_RIGHT_D_PORT DIO_PORTB
#define SEVEN_SEG_D_PIN  DIO_PIN_3

#define SEVEN_SEG_RIGHT_E_PORT DIO_PORTB
#define SEVEN_SEG_E_PIN  DIO_PIN_4

#define SEVEN_SEG_RIGHT_G_PORT DIO_PORTB
#define SEVEN_SEG_G_PIN  DIO_PIN_5

#define SEVEN_SEG_RIGHT_F_PORT DIO_PORTB
#define SEVEN_SEG_F_PIN  DIO_PIN_6

#define SEVEN_SEG_RIGHT_COM_PORT DIO_PORTB
#define SEVEN_SEG_COM_PIN  DIO_PIN_7

//*********************************LEFT_SEG*************************************

#define SEVEN_SEG_LEFT_A_PORT DIO_PORTC
#define SEVEN_SEG_A_PIN  DIO_PIN_0

#define SEVEN_SEG_LEFT_B_PORT DIO_PORTC
#define SEVEN_SEG_B_PIN  DIO_PIN_1

#define SEVEN_SEG_LEFT_C_PORT DIO_PORTC
#define SEVEN_SEG_C_PIN  DIO_PIN_2

#define SEVEN_SEG_LEFT_D_PORT DIO_PORTC
#define SEVEN_SEG_D_PIN  DIO_PIN_3

#define SEVEN_SEG_LEFT_E_PORT DIO_PORTC
#define SEVEN_SEG_E_PIN  DIO_PIN_4

#define SEVEN_SEG_LEFT_G_PORT DIO_PORTC
#define SEVEN_SEG_G_PIN  DIO_PIN_5

#define SEVEN_SEG_LEFT_F_PORT DIO_PORTC
#define SEVEN_SEG_F_PIN  DIO_PIN_6

#define SEVEN_SEG_LEFT_COM_PORT DIO_PORTC
#define SEVEN_SEG_COM_PIN  DIO_PIN_7



