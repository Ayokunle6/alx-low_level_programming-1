#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Using the continue function to exclude q&e from the alphabet
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
