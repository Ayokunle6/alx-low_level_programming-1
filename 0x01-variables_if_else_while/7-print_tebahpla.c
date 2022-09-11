#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Using the for loop and the decrement statement to print z-a
 * Return: 0 (success)
 */

int main(void)
{
	/* Decleration */
	int alpha;

	/* Statement */
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
