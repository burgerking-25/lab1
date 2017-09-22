
/* Lab 1 first file - ID number 96013952 */
#include <p18f452.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
void main (void)
{
/* Insert code from pre-lab Q14 to change values on PORTB */
    int x;
TRISB = 0X00;
for (x=1;x<=15;x++)
{
PORTB = x;
}
}
