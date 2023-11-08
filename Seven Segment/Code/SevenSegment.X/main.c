/*
 * File:   main.c
 * Author: Islam
 *
 * Created on October 10, 2023, 5:58 AM
 */

#include "config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000
void main(void) {
    
    unsigned char SSD_ARRAY[10] = {0b00111111,0b00000110,0b11011011,
	0b11001111,0b01100110,0b11101101,0b11111101,0b00000111,
	0b11111111,0b11101111};
    
    TRISD = 0xFF;
    TRISB = 0x00;
    int count = 0;
    
    PORTB = ~(0x00);
    
    while(1){
        while(PORTD == 0x00){
            PORTB = ~(SSD_ARRAY[count]);
            count++;
            if (count == 10){
                count = 0 ;
            }
            while (PORTD == 0x00){
                
            }
        }
    }
    
    return;
}
