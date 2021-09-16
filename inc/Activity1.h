#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED

#include <avr/io.h>

#define SET_LED DDRB|=(1<<PB0) // macro to Set PORTB 0th bit as LED.

#define CLEAR_BUTTON_DATA DDRD&=~(1<<PD0) //macro to clears previous data in the register D0.

#define CLEAR_HEATER_DATA DDRD&=~(1<<PD1) //macro to clears previous data in the register D1.

#define PULLUP_BUTTON PORTD|=(1<<PD0) //macro to Set PORTD's 0th bit as Button sensor.

#define PULLUP_HEATER PORTD|=(1<<PD1) //macro to Set PORTD's 1st bit as Heater.

#define BUTTON_ON (PIND&(1<<PD0)) //macro to Set PIND 0th pin it checks if the button is pressed or not.

#define HEATER_ON (PIND&(1<<PD1)) // macro to Set PIND 1st pin it checks if the button is pressed or not.

#define SET_LED_ON PORTB|=(1<<PB0) //macro to Set the 0th port of LED PORTB.

#define SET_LED_OFF PORTB&=~(1<<PB0) //macro to clear the 1st port of LED PORTB.


void activity1();



#endif // ACTIVITY1_H_INCLUDED