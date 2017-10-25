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
; A Simple Task Manager v1.00 by Ross Fosler 			    ;
; 								    ;
; Commands for the Task Manager					    ;
; ***************************************************************** ;



; *******************************************************************
swptsk	macro
	bsf	INTCON, TMR0IF, A	; Force an interrupt
	endm	
; *******************************************************************


; *******************************************************************
retfint	macro
	movff	ALT_STATUS, STATUS	; Return STATUS		
	movff	ALT_W0, WREG		; Return WREG
	bsf	T0CON, TMR0ON, A	; Start the timer
	retfie
	endm
; *******************************************************************
