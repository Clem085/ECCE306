/*
 * macros.h
 *
 *  Created on: Nov 21, 2024
 *      Author: Kayla Radu
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
// STATEMACHINE

#define DETECTED ('D')
#define SPIN ('O')
#define TRACK ('T')
#define TRACKWAIT ('K')


#define NONE ('N')
#define LEFT ('L')
#define CIRCLE ('C')
//#define FIGURE ('B')
#define INTERCEPT ('X')
#define IRCONF ('i')
#define TRIANGLE ('T')
#define WAIT ('W')
#define START ('S')
#define ARCH ('a')
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
#define ARRIVED ('A')
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

#define TB0CCR0_INTERVAL (6250)
#define TB0CCR1_INTERVAL (50000)
#define TB0CCR2_INTERVAL (625) // Temp Change to 125 to make ADC update every 10 ms, OLD=2500


// SERIAL
#define BEGINNING (0)
#define SMALL_RING_SIZE (16)
#define LARGE_RING_SIZE (32)
//#define RECEIVE ('P')
//#define TRANSMIT ('H')
#define SSID_SIZE (10)




#define WHEEL_PERIOD (50005)
#define SMALL (15000)
#define NINETY (37515)
#define FOURFIVE (28135)
#define SLOW (20000)
#define FASTRIGHT (50000)
#define FASTLEFT (30000)
#define FAST (35000)

//


#define ONESEC (5)
#define MS_COUNT (20)
#endif /* MACROS_H_ */
