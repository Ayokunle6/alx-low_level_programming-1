#include "main.h"

/** _memset - fills memory with a constant byte.
 * @s: pointer to a char
 * @b: char variable
 * @n: int variable
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	/*Decleration*/
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return(s);
}
