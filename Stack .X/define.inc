; ***************************************************************** ;
;        Software License Agreement				    ;
;								    ;
; The software supplied herewith by Microchip Technology 	    ;
; Incorporated (the “Company”) for its PICmicro® Microcontroller is ;
; intended and supplied to you, the Company’s customer, for use     ;
; solely and exclusively on Microchip PICmicro Microcontroller	    ;
; products. The software is owned by the Company and/or its         ;
; supplier, and is protected under applicable copyright laws. All   ;
; rights are reserved. Any use in violation of the foregoing 	    ;
; restrictions may subject the user to criminal sanctions under	    ;
; applicable laws, as well as to civil liability for the breach of  ;
; the terms and conditions of this license.			    ;
;								    ;
; THIS SOFTWARE IS PROVIDED IN AN “AS IS” CONDITION. NO WARRANTIES, ;
; WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT NOT LIMITED ;
; TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A 	    ;
; PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. THE COMPANY SHALL NOT, ;
; IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL OR 	    ;
; CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.		    ;
;								    ;
;								    ;
; A Simple Task Manager v1.00 by Ross Fosler  			    ;
;								    ;
; This is a definition file used to incorporate tasks and 	    ;
; priorities at the start of the task manager.			    ;
; ***************************************************************** ;


; *******************************************************************
; The values after corispond to the position in the hardware stack
; used by the tasks.  Position 0 is not valid since it is set to
; always return a 0x0000 (reset).

#DEFINE	TASK1	0x01
#DEFINE	TASK2	0x08
#DEFINE	TASK3	0x10
#DEFINE	TASK4	0x18
; *******************************************************************


; *******************************************************************
; The following defines the time allotted to the preloaded tasks.  
; The value 0x00 corisponds to a null task; values 0x01 through 0x3F
; set the max allowed time for the task to run before it is 
; interrupted.

#DEFINE	TASK1_TIME	0x3F
#DEFINE	TASK2_TIME	0x02
#DEFINE	TASK3_TIME	0x00
#DEFINE	TASK4_TIME	0x00
; *******************************************************************


; *******************************************************************
; The following defines the names of the preloaded tasks.  Uncomment 
; or comment these as necessary for preloaded tasks.  There must
; be at least one task to pre-load.

#DEFINE	TASK1_NAME	Task1
#DEFINE	TASK2_NAME	Task2
;#DEFINE	TASK3_NAME	Task3Name
;#DEFINE	TASK4_NAME	Task4Name
; *******************************************************************


; *******************************************************************
; This value affects the task time.  Valid range from 0x00 to 0x07.

#DEFINE	TIMER_PRESCALE	0x04
; *******************************************************************


; *******************************************************************
; Set the name of the interrupt handler.  Comment out if none.

;#DEFINE INT_HAND_NAME	InterruptHandler
; *******************************************************************


; *******************************************************************
; Set the name of the setup routine.  Comment out if none.

#DEFINE	SETUP_NAME	Setup
; *******************************************************************


; *******************************************************************
; Setup the SFRs to be managed by the task manager.  Comment out the 
; registers that are not shared across more than one task.  It is best 
; to comment out as many as possible to reduce memory usage and 
; task manager execution length.

#DEFINE	SAVE_FSR0H
#DEFINE	SAVE_FSR0L
#DEFINE	SAVE_FSR1H
#DEFINE	SAVE_FSR1L
#DEFINE	SAVE_FSR2H
#DEFINE	SAVE_FSR2L
#DEFINE	SAVE_PRODH
#DEFINE	SAVE_PRODL
#DEFINE	SAVE_BSR
#DEFINE	SAVE_TBLPTRU
#DEFINE	SAVE_TBLPTRH
#DEFINE	SAVE_TBLPTRL
#DEFINE	SAVE_TABLAT
; *******************************************************************


; *******************************************************************
; Setup the specific processor file to use.

#DEFINE	PROC_INCLUDE	P18C452.INC
; *******************************************************************


; *******************************************************************
; Uncomment if the device has the lfsr bug.

#DEFINE	LFSR_BUG
; *******************************************************************
	
