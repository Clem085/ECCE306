/*
 * macros.h
 *
 *  Created on: Jan 25, 2024
 *      Author: varun
 */



#ifndef MACROS_H_
#define MACROS_H_

#define ALWAYS                  (1)
#define RESET_STATE             (0)
#define RED_LED              (0x01) // RED LED 0
#define GRN_LED              (0x40) // GREEN LED 1
#define TEST_PROBE           (0x01) // 0 TEST PROBE
#define TRUE                 (0x01) //
#define MCLK_FREQ_MHZ           (8) // MCLK = 8MHz
#define CLEAR_REGISTER     (0X0000)

// STATES ======================================================================
#define NONE ('N')
#define TRIANGLE ('T')
#define WAIT ('W')
#define START ('S')
#define RUN ('R')
#define END ('E')
#define FORWARDS ('F')
#define RIGHT ('R')
#define CLKW ('K')
#define COUNTERCLKW ('U')
#define IDLE ('I')
#define SEARCH ('Z')
#define ALIGN ('Y')
#define BACK ('B')
#define DETECT ('Q')
#define LINE_TURN ('L')
#define TRACK ('D')
#define TRACKING ('G')
#define TRAINING ('O')
#define LEFT ('C')
#define WHEEL_COUNT_TIME (10)
#define RIGHT_COUNT_TIME (7)
#define LEFT_COUNT_TIME (8)
#define TRAVEL_DISTANCE (18)
#define WAITING2START (50)
#define CIRCLE_TRAVEL_DISTANCE (200)
#define COUNTERCLKW_RIGHT_COUNT_TIME (240)
#define COUNTERCLKW_LEFT_COUNT_TIME (1)
#define CLKW_RIGHT_COUNT_TIME (1)
#define CLKW_LEFT_COUNT_TIME (270)
#define TRIANGLE_TURN_DISTANCE (17)
#define TRITURN_RIGHT_COUNT_TIME (350)
#define TRITURN_LEFT_COUNT_TIME (0)
#define PRESSED (0)
#define RELEASED (1)
#define NOT_OKAY (0)
#define OKAY (1)
#define DEBOUNCE_RESTART (0)
#define DEBOUNCE_TIME (100)

#define SLOW (20000)
#define FAST (50000)
#define PERCENT_100 (50000)
#define PERCENT_80 (45000)
#define SPEED1 (30000)
#define SPEED2 (35000)
#define SPEED3 (40000)

#define TB0CCR0_INTERVAL (2500)
#define TB0CCR1_INTERVAL (50000)
#define TB0CCR2_INTERVAL (50000)


// SERIAL BS

#define BEGINNING (0)
#define SMALL_RING_SIZE (16)
#define LARGE_RING_SIZE (32)
#define RECEIVE ('P')
#define TRANSMIT ('H')
#define SSID_SIZE (10)

// PWM stuff
/*
#define PWM_PERIOD (TB3CCR0)
#define LCD_BACKLITE_DIMING (TB3CCR1)
#define RIGHT_FORWARD_SPEED (TB3CCR2)
#define RIGHT_REVERSE_SPEED (TB3CCR3)
#define LEFT_FORWARD_SPEED (TB3CCR4)
#define LEFT_REVERSE_SPEED (TB3CCR5)
*/


#define WHEEL_PERIOD (50005)
#define WHEEL_OFF (0)
#define SLOW (20000)
#define FAST (50000)
#define PERCENT_100 (50000)
#define PERCENT_80 (45000)

#define ONESEC (5)
#define MS_COUNT (20)
#endif /* MACROS_H_ */