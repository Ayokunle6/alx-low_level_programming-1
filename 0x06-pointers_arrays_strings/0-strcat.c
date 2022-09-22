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
	int len1, len2;
	char first, sec;

	len1 = 0;
	len2 = 0;


	/*Statement*/
	while (len1 != '\0')
	{
		len1++;
	}
	while (len2 != '\0')
		len2++;

	first = dest[len1];
	sec = src[len2];
	_putchar(first + sec);
	return (dest);
}
