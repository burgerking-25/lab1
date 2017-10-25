/* Lab 1 first file - ID number 96013952 */
#include <p18f452.h>
#include "delays.h" 

/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF



void main(void) 
 { 
   TRISB = 0;
   PORTBbits.RB5 = 0;
   while(1) 
   {
     PORTBbits.RB5 = 0;
     Delay10KTCYx(100); 
     PORTBbits.RB5 = 1;
     Delay10KTCYx(100); 
   }//end while 
 }//end main 
  