/*
 * File:   main.c
 * Author: Islam
 *
 * Created on October 10, 2023, 5:14 AM
 */

#include "config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000


void main(void) {
    
    TRISA = 0x00;
    TRISB = 0xFF;
    
    PORTA = 0x00;
    
    while (1){
        while(PORTB == 0x01){
            PORTA = 0x01;
            __delay_ms(500);
            PORTA = 0x00;
            __delay_ms(500);
        }
    }
    
    return;
}
