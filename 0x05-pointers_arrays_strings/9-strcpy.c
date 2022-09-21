#include "main.h"

/**
 * _strcpy - pointer that copies the string pointed to by src
 * @dest: pointer
 * @src: Pointer
 * Return: dest (success)
 */

char *_strcpy(char *dest, char *src)
{
	int len, count;

	len = 0;
	while ( src[len] != '\0')
		len++;
	for (count = 0; count <= len; count++)
		dest[count] = src[count];
	return (dest);
}
