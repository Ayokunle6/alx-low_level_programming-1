#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Using the putchar function to print 0-9
 * Return: 0 (success)
 */

int main(void)
{
	/* Declaration */
	int num;

	/* Statement */
	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return(0);
}
