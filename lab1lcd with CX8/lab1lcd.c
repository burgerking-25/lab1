
#include "lcd.h"
 
/*
                         Main application
 */
 
// This function creates seconds delay. 
// The argument specifies the delay time in seconds
void Delay_Seconds(unsigned char z)
{
    unsigned char x,y;
    for (y = 0; y < z; y++)
    {
        for (x = 0; x < 100; x++)__delay_ms(10);
    }
}
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    // initialize the LCD
    LCD_Initialize();
 
 
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:
 
    // Enable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighEnable();
 
    // Enable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowEnable();
 
    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();
 
    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();
 
    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();
 
    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();
 
    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
 
    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
 
     LCDPutStr("  Hello World!");  //Display String "Hello World"
     LCDGoto(8,1);                 //Go to column 8 of second line
     LCDPutChar('1');              //Display character '1'
     Delay_Seconds(1);    // 1 second delay
     LCDGoto(8,1);        //Go to column 8 of second line
     LCDPutChar('2');     //Display character '2'
     Delay_Seconds(1);    // 1 second delay
     LCDGoto(8,1);        //Go to column 8 of second line
     LCDPutChar('3');     //Display character '3'
     Delay_Seconds(1);    // 1 second delay
     DisplayClr();        // Clear the display
     
     LCDPutStr("   LCD Display");  //Display String "LCD Display"                     
             LCDGoto(0,1);         //Go to second line                         
            LCDPutStr("StudentCompanion"); //Display String "StudentCompanion"                     
    while (1)
    {
        // Add your application code
    }
}
/**
 End of File
*/