#include <stdlib.h>
#include "main.h"

/**
 * more_numbers - prints numbers
 * Description: prints the numbers from 0 to 14 ten times
 * Return: success
 */

void more_numbers(void)
{
	/* Declerations */
	int i, j;

	/* Statement */
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
