#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Descrption: Using the _putchar function
 * which is called from the main.h file to print
 * numbers from 0 to 14
 */

void more_numbers(void)
{
	/* Declerations */
	int i;
	int j;

	/* Statement */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
