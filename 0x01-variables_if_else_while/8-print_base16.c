#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that prints all the numbers of base 16 in lowercase
 * Return: 0 (success)
 */

int main(void)
{
	/* decleration */
	int num;
	char alpha;

	/* Statement */

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
