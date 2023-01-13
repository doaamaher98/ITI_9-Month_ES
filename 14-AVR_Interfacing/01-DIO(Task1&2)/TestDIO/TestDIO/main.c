/*
 * TestDIO.c
 *
 * Created: 1/10/2023 7:22:42 PM
 * Author : Doaa Maher
 */ 

#define F_CPU					8000000UL
#define Amplification			91.7

typedef float					f32;
typedef unsigned long int		u32;

#include <avr/io.h>
#include <util/delay.h>

void Delay_MS(u32 time);
void Delay_US(u32 time);

int main(void)
{
    DDRA  = 0b00010001;

	/* Replace with your application code */
    while (1) 
    {
		/*
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0b00010000;
		_delay_ms(1000);
		*/
		PORTA = 0b00000001;
		Delay_US(500);
		PORTA = 0b00010000;
		Delay_US(500);
	}
}


void Delay_MS(u32 time)
{
	u32 Counter = 0 ;
	time = (u32)((f32)time* Amplification *((f32)F_CPU/1000000.0));

	while(Counter < time)
	//while(time)
	{
		asm("NOP"); // processor do nothing
		Counter++;
		//time--;
	}
	return;
}

void Delay_US(u32 time)
{
	u32 Counter = 0 ;
	time = (u32)((f32)time* Amplification *((f32)F_CPU/1000000000.0));

	while(Counter < time)
	//while(time)
	{
		asm("NOP"); // processor do nothing
		Counter++;
		//time--;
	}
	return;
}