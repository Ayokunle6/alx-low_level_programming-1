#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - prints number from 0-9
 * Description: the function prints out the numbers 0 to 9 and anew line
 * Return: success
 */

void print_numbers(void)
{
	/* Decleration */
	int i;

	/* Statement */
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
