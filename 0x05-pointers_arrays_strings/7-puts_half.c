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
		if (i % 2 != 0)
		{
			for (i = (i / 2); i <= str[i]; i++)
				_putchar(str[i]);
		}
		else
		{
			n = (str[i] - 1) / 2;
			_putchar(n);
		}
		i++;
	}
	_putchar('\n');
}
