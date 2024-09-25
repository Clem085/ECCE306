/* Program Information Header
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
  File Name : switches.c
  Description:  This file contains the code to control the 3 switches on the MSP430 Board
      >>> As of now, Switch 1 (S1) is used to select a shape to draw. Switch 2 (S2) is used to confirm the Shape. Switch 1 (S1) is unused.
  Programmer: Connor Savugot
  Date: Sep 20, 2024
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
 */
// Inculudes
#include  "msp430.h"
#include  <string.h>
#include  "functions.h"
#include  "LCD.h"
#include  "ports.h"
#include  "macros.h"

// Globals
extern unsigned char dispEvent;
extern volatile unsigned char display_changed;
extern unsigned char event;

extern int Switch1_Pressed;
extern int Switch2_Pressed;
extern int Switch_Counter1;
extern int Switch_Counter2;
extern unsigned int okay_to_look_at_switch1;
extern unsigned int okay_to_look_at_switch2;


int debounce_count_SW1;
int debounce_count_SW2;



// Physical Buttons
void Switch1_Process(void){
    //-----------------------------------------------------------------------------
    // Switch 1 Configurations
    //-----------------------------------------------------------------------------
    if (okay_to_look_at_switch1 && sw1_position){
        if (!(P4IN & SW1)){
            sw1_position = PRESSED;
            okay_to_look_at_switch1 = NOT_OKAY;
            count_debounce_SW1 = DEBOUNCE_RESTART;
            // Event Code
            switch(dispEvent){
            case STRAIGHT:
                dispEvent = CIRCLE;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "- Select -");
                strcpy(display_line[2], "  Circle  ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            case CIRCLE:
                dispEvent = TRIANGLE;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "- Select -");
                strcpy(display_line[2], " Triangle ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            case TRIANGLE:
                dispEvent = FIGURE8;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "- Select -");
                strcpy(display_line[2], " Figure 8 ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            case FIGURE8:
                dispEvent = STRAIGHT;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "- Select -");
                strcpy(display_line[2], " Straight ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            default:
                break;
            }


        }
    }
    if (count_debounce_SW1 <= DEBOUNCE_TIME){
        count_debounce_SW1++;
    }else{
        okay_to_look_at_switch1 = OKAY;
        if (P4IN & SW1){
            sw1_position = RELEASED;
        }
    }
}


void Switch2_Process(void){
    //-----------------------------------------------------------------------------
    // Switch 2 Configurations
    //-----------------------------------------------------------------------------
    if (okay_to_look_at_switch2 && sw2_position){
        if (!(P2IN & SW2)){
            sw2_position = PRESSED;
            okay_to_look_at_switch2 = NOT_OKAY;
            count_debounce_SW2 = DEBOUNCE_RESTART;
            // Event Code
            switch(dispEvent){
            case STRAIGHT:
                event = STRAIGHT;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "  Running ");
                strcpy(display_line[2], " Straight ");
                strcpy(display_line[3], "          ");
            case CIRCLE:
                event = CIRCLE;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "  Running ");
                strcpy(display_line[2], "  Circle  ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            case TRIANGLE:
                event = TRIANGLE;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "  Running ");
                strcpy(display_line[2], " Triangle ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            case FIGURE8:
                event = FIGURE8;
                strcpy(display_line[0], "          ");
                strcpy(display_line[1], "  Running ");
                strcpy(display_line[2], " Figure 8 ");
                strcpy(display_line[3], "          ");
                display_changed = TRUE;
                break;
            default:
                break;
            }

        }
    }
    if (count_debounce_SW2 <= DEBOUNCE_TIME){
        count_debounce_SW2++;
    }else{
        okay_to_look_at_switch2 = OKAY;
        if (P2IN & SW2){
            sw2_position = RELEASED;
        }
    }
}


