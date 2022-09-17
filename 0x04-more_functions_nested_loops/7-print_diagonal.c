#include "main.h"

/**
 * print_diagonal - printing diagonal
 * @n: variable
 */

void print_diagonal(int n)
{
	/*Decleration*/
	int len, space;

	/*Statement*/
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
