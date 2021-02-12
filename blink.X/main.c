/*
 * File:   main.c
 * Author: 19179453
 *
 * Created on 12 de Fevereiro de 2021, 15:46
 */


#include <xc.h>
#include "config.h"
void main(void) 
{
    while(1)
    {
    TRISDbits.TRISD7=0;
    
    PORTDbits.RD7=0;
    __delay_ms(500);
    PORTDbits.RD7=1;
    __delay_ms(500);
    PORTDbits.RD7=0;        
    }
}
