#ifndef ACTIVITY3_H_INCLUDED
#define ACTIVITY3_H_INCLUDED

#include <avr/io.h>

#define SET_TIMER1A TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11) //Set Timer1 RegisterA which is fast PWM

#define PRESCALER_64 TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10) //Set prescaler 64

#define SET_PWM DDRB|=(1<<PB1) //Set PWM as Output

void activity3(void);

char PWMoutput(uint16_t ADC_Value);

#endif // ACTIVITY3_H_INCLUDED