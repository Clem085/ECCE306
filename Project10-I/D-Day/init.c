/* Initialize Program Information
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
  File Name : init.c
  Description:  This file contains the Initialization sequences for many of the boards and processes used in this project.
  Programmer: Connor Savugot
  Date Created: Sep 12, 2024
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
*/

// #include as of 11-27-24
//// Header Files
#include  "ADC.h"
#include  "DAC.h"
#include  "Display.h"
#include  "functions.h"
#include  "interrupts.h"
#include  "IR.h"
#include  "IOT.h"
#include  "LCD.h"
#include  "macros.h"
#include  "menu.h"
#include  "motors.h"
#include  "msp430.h"
#include  "ports.h"
#include  "serial.h"
#include  "switches.h"
#include  "timers.h"
//// Libraries
#include  <stdio.h>
#include  <string.h>


//Variables
// No Header File.
extern volatile unsigned char update_display;
extern char display_line[4][11];
extern char *display[4];

void Init_Conditions(void){
//------------------------------------------------------------------------------

  int i;
  for(i=0;i<11;i++){
    display_line[0][i] = RESET_STATE;
    display_line[1][i] = RESET_STATE;
    display_line[2][i] = RESET_STATE;
    display_line[3][i] = RESET_STATE;
  }
  display_line[0][10] = 0;
  display_line[1][10] = 0;
  display_line[2][10] = 0;
  display_line[3][10] = 0;

  display[0] = &display_line[0][0];
  display[1] = &display_line[1][0];
  display[2] = &display_line[2][0];
  display[3] = &display_line[3][0];
  update_display = 0;


// Interrupts are disabled by default, enable them.
  enable_interrupts();
//------------------------------------------------------------------------------
}
