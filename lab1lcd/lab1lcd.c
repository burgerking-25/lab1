#include <p18f452.h>
#include "xlcd2.h"
#include <delays.h>

/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF



#define _XTAL_FREQ 4000000

void DelayFor18TCY( void )
{
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
 Nop();
}
void DelayPORXLCD (void)
{
 Delay1KTCYx(15); 
 return;
}



void DelayXLCD (void)
{
 Delay1KTCYx(5); 
 return;
}






void main(void)
{
 
 // configure external LCD
OpenXLCD(FOUR_BIT & LINES_5X7);
while( BusyXLCD() );
WriteCmdXLCD( FOUR_BIT & LINES_5X7 );
while( BusyXLCD() );
WriteCmdXLCD( SHIFT_DISP_LEFT );
 while( BusyXLCD() );
 SetDDRamAddr(0x43); //shift cursor to fourth space of second line
 putrsXLCD("Hello World"); //Display "Hello World"
 while(1)
 {
 }
 }