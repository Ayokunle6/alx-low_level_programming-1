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
	int to_upper = toupper(x);

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar(to_upper);
	}
	putchar('\n');
	return (0);
}

