#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * times_table - Entry point( calling function from main.h)
 * Description:  prints the 9 times table, starting with 0
 * Return: 0 (success)
 */

void times_table(void)
{
	int num1, num2, product;

	for (num1 = 0; num1 <= 9; num1++)
	{
		putchar('0');
			for (num2 = 1; num2 <= 9; num2++)
			{
				_putchar(',');
				_putchar(' ');
				product = (num1 * num2);

				if (product < 10)
					_putchar(' ');
				else
					_putchar((product / 10) + '0');
				_putchar((product  % 10) + '0');
			}
		_putchar('\n');
	}
}
