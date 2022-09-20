#include "main.h"

/**
 * rev_string - fuction that reverse strings
 * @s: Pointer to the variable of strings/char
 */

void rev_string(char *s)
{
	/*Decleration*/
	int i;

	/*Statement*/
	while (s[i])
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
