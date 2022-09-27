#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: Pointer to where memory is copied to
 * @src: Pointer to where memory is copied from
 * @n: integer of variable
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return(dest);
}
