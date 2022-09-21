#include "main.h"

/**
 * rev_string - fuction that reverse strings
 * @s: Pointer to the variable of strings/char
 */

void rev_string(char *s)
{
	/* Declearation */
	int len, rev;

	/*Statement*/
	while (s[len] != '\0')
		len++;
	for (rev = (len - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
}
