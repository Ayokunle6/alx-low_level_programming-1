#include "main.h"
#include <stdlib.h>

/**
 * _isupper - Checks for upper case
 * @c: integer variable
 * Description: A code that checks for uppercase
 * Return: 0 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
