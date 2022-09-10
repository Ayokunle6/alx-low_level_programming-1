#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: Using the putchar function to print a-z and A-Z
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);

		int t0_upper = toupper(x);
		putchar(toupper(x));
	}
	putchar('\n');
	return (0);
}

