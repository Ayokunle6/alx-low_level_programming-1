#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - Entry point( calling function from main.h file)
 * Description: print all natural numbers from n to 98
 * @n: variable for integer
 * Return: 0 (success)
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("98\n");
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("98\n");
	}
}
