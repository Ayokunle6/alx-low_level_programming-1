#include <stdio.h>
#include <stdlib.h>
#include"main.h"

/**
 * print_alphabet_x10 - Entry point(calling function from main.h)
 * Description: printing a-z 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	/* Decleration */
	int b;
	int a;

	/* Statement */
	for (b = 0; b <= 9; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
