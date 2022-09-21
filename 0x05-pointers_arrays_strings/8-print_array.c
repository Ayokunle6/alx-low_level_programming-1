#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an array
 * @n: variable integer
 * Return: void
 */

void print_array(int *a, int n)
{
	/*Decleration*/
	int index;

	index = 0;

	/*Statement*/

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < n - 1)
			printf(", ");
		index++;
	}
	printf("\n");
}
