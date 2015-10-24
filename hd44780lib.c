/*
 * hd44780.c
 *
 *  Created on: Oct 23, 2015
 *      Author: Taras
 */
#include <avr/io.h>
#include <util/delay.h>

void lcd_init(void)
{
	PORTB |= (1 << 0);
	_delay_us(10);
	PORTB &= ~(1 << 0);
	_delay_us(10);

}
