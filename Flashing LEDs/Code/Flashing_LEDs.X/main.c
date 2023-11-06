/*
 * File:   main.c
 * Author: Islam
 *
 * Created on July 1, 2023, 7:56 PM
 */

#include "config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000

#define LED0 RB0
#define LED1 RB1
#define LED2 RB2

// #define LED0 PORTBbits.RB0
// #define LED1 PORTBbits.RB1
// #define LED2 PORTBbits.RB2

void main(void) {
    
    
    // TRISB &= ~(0x07);
    
    // TRISBbits.TRISB0 = 0;
    // TRISBbits.TRISB1 = 0;
    // TRISBbits.TRISB2 = 0;
     
    TRISB0 = 0;
    TRISB1 = 0;
    TRISB2 = 0;
    
    LED0 = 0;
    LED1 = 0;
    LED2 = 0;
    
    while(1){
        
        // Flash LED0
        LED0 = 1;
        __delay_ms(250);
        LED0 = 0;
        __delay_ms(250);
        
        // Flash LED1
        LED1 = 1;
        __delay_ms(250);
        LED1 = 0;
        __delay_ms(250);
        
        // Flash LED2
        LED2 = 1;
        __delay_ms(250);
        LED2 = 0;
        __delay_ms(250);
        
    }
    return;
}
