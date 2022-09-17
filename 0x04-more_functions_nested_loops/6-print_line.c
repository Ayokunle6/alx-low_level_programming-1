#include "main.h"

/**
 * print_line - print straight line
 * @n: variable for length of line
 * Description: Writing a function that prints straight line on
 * the screen with for loop
 */

void print_line(int n)
{
	/*Decleration*/
	int x;

	/*Statement*/
	for (x = 0; x <= n; x++)
	{
		if (n == 0 || n < 0)
			_putchar('\n');
		_putchar('_');
	}
}
