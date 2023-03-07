/*
 * blink.c
 *
 *  Created on: Mar 7, 2023
 *      Author: nikol
 */


#include<avr/io.h>
#include<util/delay.h>
#include<stdint.h>
int16_t main ()
{
	DDRB |= 1 << 5; // PB5 je izlaz
	while (1)
	{
		PORTB |= 1 << 5; // LED ON
		_delay_ms (1000) ; // pauza 1s
		PORTB &= ~(1 << 5); // LED OFF
		_delay_ms (1000) ; // pauza 1s
	}
return 0;
}
