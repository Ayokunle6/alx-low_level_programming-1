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
	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
