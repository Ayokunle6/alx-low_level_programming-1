#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Entry point(calling function from main.h)
 * Description: printing very minute of the day starting from 00:00 to 23:59
 * Return: 0 (success)
 */

void jack_bauer(void)
{
	/* Decleration */
	int hours, minutes, first_digit, last_digit;
	int first_digit_min, last_digit_min;

	/* Statement */
	for (hours = 0; hours < 24; hours++)
	{
		first_digit = hours / 10;
		last_digit = hours % 10;

		for (minutes = 0; minutes < 60; minutes++)
		{
			first_digit_min = minutes / 10;
			last_digit_min = minutes % 10;
			_putchar(first_digit + '0');
			_putchar(last_digit + '0');
			_putchar(':');
			_putchar(first_digit_min + '0');
			_putchar(last_digit_min + '0');
			_putchar('\n');
		}
	}
}
