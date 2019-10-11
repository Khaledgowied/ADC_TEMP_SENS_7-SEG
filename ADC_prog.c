/*
 * ADC_prog.c
 *
 *  Created on: Jun 30, 2018
 *      Author: Sedra Frimware
 */

#include"../lib/std_types.h"
#include"../lib/macros.h"
#include<avr/io.h>
#define F_CPU 12000000

void ADC_voidInit(void){
//************************************ADMUXX********************************************
	CLEAR_BIT(ADMUX,7);   // vcc=5
	SET_BIT(ADMUX,6);     //vcc=5
	SET_BIT(ADMUX,5);    //left adjust
	CLEAR_BIT(ADMUX,4);
	CLEAR_BIT(ADMUX,3);
	CLEAR_BIT(ADMUX,2);  //ENABLE ADC0 on pin 0  or if i want to amplify the wave
	CLEAR_BIT(ADMUX,1);
	CLEAR_BIT(ADMUX,0);
//*****************************************************************************************

SET_BIT(ADCSRA,7);      // ENABLE ADC
CLEAR_BIT(ADCSRA,6);    //disable START CONVERSION
CLEAR_BIT(ADCSRA,5);    //disable auto trigger what ?
SET_BIT(ADCSRA,4);      //enable interrupt flag
CLEAR_BIT(ADCSRA,3);    //disable interrupt
CLEAR_BIT(ADCSRA,0);
CLEAR_BIT(ADCSRA,1);    // PIE  freq divisio (16)
SET_BIT(ADCSRA,2);
//************************************************************************************
}
u8 ADC_u8GetResult(void){

	u16 ten_bit_value;
	u8 the_low;


	SET_BIT(ADCSRA,6);            // enable start conversion

	ten_bit_value= (ADCH<<2 | the_low>>6);

	while(GET_BIT(ADCSRA,4)==0);  //flag state (;) -> {  } loop and loop and loop
	                              //if still zero means converting the signal
	                              //when be 1 event occurs finished conversion

	SET_BIT(ADCSRA,4);            //i must put flag 1 by my hand to converting again each time
	                              //to reset flag conditions.
                                  //if didn`t put it by my hand will convert one time only

	return ten_bit_value ;


}



