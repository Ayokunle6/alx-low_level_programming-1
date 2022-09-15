#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_times_table - Entry point( calling the function from main.h file)
 * Description: prints the n times table, starting with 0.
 * @n: variable for an integer
 * Return: 0 (success)
 */

void print_times_table(int n)
{
	/* Decleration */
	int a, b, c, d, e, f;

	/* Statement */
	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				d = c / 100;
				e = (c / 100) % 10;
				f = (c % 100) % 10;
				if (b == 0)
				{
					_putchar('0');
				}
				else if (c < 10)
				{
					_putchar(' ');
				_putchar(' ');
				_putchar('0' + f);
				}
				else if (c < 100)
				{
					_putchar(' ');
					_putchar('0' + e);
					_putchar('0' + f);
				}
				else
				{
					_putchar('0' + d);
					_putchar('0' + e);
					_putchar('0' + f);
				}
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
