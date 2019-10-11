/*
 * SEVEN_SEG_prog.c
 *
 *  Created on: Jun 22, 2018
 *      Author: Sedra Frimware
 */
#include<avr/io.h>
#include"../lib/std_types.h"
#include"../lib/macros.h"
#include"DIO_interface.h"
#include"SEVEN_SEG_interface.h"

/*
u8 SEVEN_SEG_RIGHT_PORTS[8]={SEVEN_SEG_RIGHT_A_PORT,SEVEN_SEG_RIGHT_B_PORT,SEVEN_SEG_RIGHT_C_PORT,
	SEVEN_SEG_RIGHT_D_PORT,SEVEN_SEG_RIGHT_E_PORT,SEVEN_SEG_RIGHT_G_PORT,SEVEN_SEG_RIGHT_F_PORT,
	SEVEN_SEG_RIGHT_COM_PORT
};

u8 SEVEN_SEG_LEFT_PORTS[8]={SEVEN_SEG_RIGHT_A_PORT,SEVEN_SEG_RIGHT_B_PORT,SEVEN_SEG_RIGHT_C_PORT,
	SEVEN_SEG_RIGHT_D_PORT,SEVEN_SEG_RIGHT_E_PORT,SEVEN_SEG_RIGHT_G_PORT,SEVEN_SEG_RIGHT_F_PORT,
	SEVEN_SEG_RIGHT_COM_PORT
};

u8 seven_seg_pins[8]={ SEVEN_SEG_A_PIN,SEVEN_SEG_B_PIN,SEVEN_SEG_C_PIN,SEVEN_SEG_D_PIN,
		SEVEN_SEG_E_PIN,SEVEN_SEG_G_PIN,SEVEN_SEG_F_PIN,SEVEN_SEG_COM_PIN

};





void SEVEN_SEG_RIGHT_voidDisplay(u8 Num){

	u8 Seg[10]={0xa0,0xf9,0xc4,0xd0,0x99,0x92,0x82,0xf8,0x80,0x90};
	u8 i;
	for(i=0;i<8;i++){

    DIO_voidSetPinValue(SEVEN_SEG_RIGHT_PORTS[i],seven_seg_pins[i],GET_BIT(Seg[Num],i));

	}
}
void SEVEN_SEG_LEFT_voidDisplay(u8 Num){

	u8 Seg[10]={0xa0,0xf9,0xc4,0xd0,0x99,0x92,0x82,0xf8,0x80,0x90};
	u8 i;
	for(i=0;i<8;i++){

	DIO_voidSetPinValue(SEVEN_SEG_LEFT_PORTS[i],seven_seg_pins[i],GET_BIT(Seg[Num],i));

	}
}



void SEVEN_SEG_voidInit(void){
u8 i ;

for(i=0;i<8;i++){

	DIO_voidSetPinDir(SEVEN_SEG_LEFT_PORTS[i],seven_seg_pins[i],DIO_OUTPUT);
	DIO_voidSetPinDir(SEVEN_SEG_RIGHT_PORTS[i],seven_seg_pins[i],DIO_OUTPUT);

}
}
*/

void SEVEN_SEG_RIGHT_voidDisplay(u8 Num){

	u8 Seg[10]={0xa0,0xf9,0xc4,0xd0,0x99,0x92,0x82,0xf8,0x80,0x90};
	PORTB=Seg[Num];
}
void SEVEN_SEG_LEFT_voidDisplay(u8 Num){

	u8 Seg[10]={0xa0,0xf9,0xc4,0xd0,0x99,0x92,0x82,0xf8,0x80,0x90};
	PORTC=Seg[Num];
}



void SEVEN_SEG_voidInit(void){
	DDRC=0xff;
	DDRB=0xff;

}







