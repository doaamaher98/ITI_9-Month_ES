/*
 * TestDIO.c
 *
 * Created: 1/10/2023 7:22:42 PM
 * Author : engdo
 */ 

#define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRA  = 0b00010001;

	/* Replace with your application code */
    while (1) 
    {
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0b00010000;
		_delay_ms(1000);
    }
}

