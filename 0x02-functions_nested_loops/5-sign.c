#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_sign - Entry point(Calling the function from the main.h file)
 * Description: printing the sign of a number
 * @n: checks which sign should be allocated to the number
 * Return: 0 (success)
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
