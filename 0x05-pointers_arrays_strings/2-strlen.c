#include "main.h"

/**
 * _strlen - Return the length of string
 * @s: pointer to char
 * Return: 0 (success)
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	return (x);
}
