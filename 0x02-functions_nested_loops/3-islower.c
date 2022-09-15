#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - Entry point (check for lower case)
 * @c: variable used to confirm the case
 * Description: calling function from main.h and check for lower case
 * Return: 0 (success)
 */

int _islower(int c)
{
	/* Statement */

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
