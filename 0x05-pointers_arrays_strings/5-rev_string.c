#include "main.h"

/**
 * rev_string - fuction that reverse strings
 * @s: Pointer to the variable of strings/char
 */

void rev_string(char *s)
{
	/* Declearation */
	int len, first;
	int last, r;

	/*Statement*/
	while (s[len] != '\0')
		len++;
	len--;
	for (r = 0; r <= len / 2; r++)
	{
		first = s[r];
		last = s[len - r];
		s[r] = last;
		s[len - r] = first;
	}
}
