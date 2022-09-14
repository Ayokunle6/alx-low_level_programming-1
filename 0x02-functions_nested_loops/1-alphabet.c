#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * Description: calling the function in the header file and printing a-z
 * Return: 0 (success)
 */

void print_alphabet(void);
int main(void)
{
	
	/* Decleration */
	int a;

	/* Statement */
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
