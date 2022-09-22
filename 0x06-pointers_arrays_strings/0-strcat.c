#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Variable that receive first string
 * @src: Variable that receive the second string
 * Return: success
 */

char *_strcat(char *dest, char *src)
{
	/*Decleration*/
	int len1, len2, i;

	len1 = 0;
	len2 = 0;

	/*Statement*/
	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
		len2++;

	for (i = 0; i <= len2; i++)
	       dest[len1 + i] = src[i];
	return (dest);
}
