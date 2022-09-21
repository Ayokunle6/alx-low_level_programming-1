#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: Pointer to a char
 * Return: void
 */

void puts_half(char *str)
{
	/*decleration*/
	int i, n;

	i = 0;

	/*Statement*/
	while (str[i] != '\0')
	{
		i++;
	}
	n = i / 2;
	if (i % 2 != 0)
		n = ((i - 1) / 2) + 1;
	for (n = 0; n < i; n++)
		_putchar(str[n]);

	_putchar('\n');
}
