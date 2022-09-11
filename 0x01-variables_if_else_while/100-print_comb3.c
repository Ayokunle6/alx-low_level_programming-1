#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0 (success)
 */

int main(void)
{
	/* Decleration */
	int n1, n2;

	/* Statement */
	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = n1 + 1; n2 < 10; n2++)
		{
			putchar(n1 + '0');
				putchar(n2 + '0');
			if (n1 == 8 && n2 == 9)
				continue;
			putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

