#include "main.h"

/**
 * print_square - Entry point
 * @size: variable
 * Description: A function that prints a square shape with the char '#'
 */

void print_square(int size)
{
	/*Decleration*/
	int len;
	int width;

	/*Statement*/
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (len = 1; len <= size; len++)
	{
		for (width = 0; width < size; width++)
			_putchar('#');
		_putchar('\n');
	}
}
