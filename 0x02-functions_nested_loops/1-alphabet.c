#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Description: calling the function in the header file and printing a-z
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	
	/* Decleration */
	int a;

	/* Statement */
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
