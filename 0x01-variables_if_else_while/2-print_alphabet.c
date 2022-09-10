#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Using the putchar function to print a-z
 * Return: 0 (success)
 */

int main(void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	return (0);
}	
