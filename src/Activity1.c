#include <avr/io.h>
#include <util/delay.h>
#include"activity1.h"

void activity1()
{
SET_LED; //To set LED
CLEAR_BUTTON_DATA; //clears 0th bit of PORTD.
PULLUP_BUTTON; //To Set PortB 0th bit.
CLEAR_HEATER_DATA; //clears 1st bit of PORTD.
PULLUP_HEATER;//To Set PortB 1st bit.

}