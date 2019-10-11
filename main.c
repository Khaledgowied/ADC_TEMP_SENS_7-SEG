/*
 * main.c
 *
 *  Created on: Jun 30, 2018
 *      Author: Sedra Frimware
 */
#include"../lib/std_types.h"                     //temp sensor with 10 bits
#include"../lib/macros.h"
#include"ADC_interface.h"
#include"DIO_interface.h"
#include"SEVEN_SEG_interface.h"

int main (void){

	ADC_voidInit();
	SEVEN_SEG_voidInit();

	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN_0, DIO_OUTPUT);
	DIO_voidSetPinDir(DIO_PORTD, DIO_PIN_1, DIO_OUTPUT);

	u8 result_Digital;
	u8 result_analog;

	while(1){

		result_Digital=ADC_u8GetResult();
		result_analog=((result_Digital*5000)/1024); // 5-> 5000 to be mv instead of v
		                                          //

		SEVEN_SEG_LEFT_voidDisplay(result_analog/10);      //PORTC
		SEVEN_SEG_RIGHT_voidDisplay(result_analog%10);     //PORTB

	}

/*	u8 result_Digital;                      // variable but with analoge resist
	u8 result_analog;

	while(1){

		result_Digital=ADC_u8GetResult();
		result_analog=((result_Digital*5)/255); // 5-> 5000 to be mv instead of v

		if(result_analog>2){

		DIO_voidSetPinValue(DIO_PORTB, DIO_PIN_0, DIO_HIGH);
		DIO_voidSetPinValue(DIO_PORTB, DIO_PIN_1, DIO_LOW);

		}else{

			DIO_voidSetPinValue(DIO_PORTB, DIO_PIN_0, DIO_LOW);
			DIO_voidSetPinValue(DIO_PORTB, DIO_PIN_1, DIO_HIGH);

		}
	}*/
	//**************************************************************************************
	/*
		u8 result;                 // led with variable resist  with digital value
                                    //left and right  led and led

		while(1){

			result=ADC_u8GetResult();  // 5-> 5000 to be mv instead of v

			if(result>128){             digital value max 255

			DIO_voidSetPinValue(DIO_PORTD, DIO_PIN_0, DIO_HIGH);
			DIO_voidSetPinValue(DIO_PORTD, DIO_PIN_1, DIO_LOW);

			}else{

				DIO_voidSetPinValue(DIO_PORTD, DIO_PIN_0, DIO_LOW);
				DIO_voidSetPinValue(DIO_PORTD, DIO_PIN_1, DIO_HIGH);

			}
		}*/

	return 0;

}

