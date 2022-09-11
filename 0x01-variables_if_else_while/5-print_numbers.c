#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Using the for loop function to print 0-9
 * Return: 0 (success)
 */

int main(void)
{
	/* Decleration */
	int num;

	/* Statement */
	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
