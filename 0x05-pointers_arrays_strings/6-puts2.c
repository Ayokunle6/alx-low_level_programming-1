#include "main.h"

/**
 * puts2 - print every other characters
 * @str: pointer to a char
 */

void puts2(char *str)
{
	/*Decleration*/
	int i;

	i = 0;

	/*Statement*/
	while (str[i] = '\n')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
