#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - Entry point(calling function from main.h file)
 * Description: program checks for alphabetic characters
 * @c: confirms alphabetic characters
 * Return: 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
