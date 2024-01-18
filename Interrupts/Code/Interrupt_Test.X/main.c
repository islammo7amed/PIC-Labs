/*
 * File:   main.c
 * Author: Islam
 *
 * Created on November 24, 2023, 5:07 AM
 */

#include "config.h"
#include <xc.h>

#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISB0 = 1;
    TRISD0 = 0;
    TRISD1 = 0;
    
    RD0 = 0;
    RD1 = 0;
    
    INTE = 1;
    INTEDG = 1;
    GIE = 1;
    
    //RBIE = 1;
    //GIE  = 1;
    
    
    while (1){
        RD1 = 0;
        __delay_ms(300);
        RD1 = 1;
        __delay_ms(300);
    }
    return;
}
 
void __interrupt() ISR(void){
    if (INTF == 1){
        RD0 ^= 1;
        __delay_ms(100);
        INTF = 0; 
    }
}