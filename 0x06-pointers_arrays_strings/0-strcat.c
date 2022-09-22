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
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
