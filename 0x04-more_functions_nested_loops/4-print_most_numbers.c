#include <stdlib.h>
#include "main.h"

/**
 * print_most_numbers - prints number
 * Description: prints number from 0 to 9 without the number 2 and 4
 * Return: success
 */

void print_most_numbers(void)
{
	/* Decleration */
	int i;

	/* Statement */
	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
