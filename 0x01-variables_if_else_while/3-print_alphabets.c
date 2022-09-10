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
	int y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

