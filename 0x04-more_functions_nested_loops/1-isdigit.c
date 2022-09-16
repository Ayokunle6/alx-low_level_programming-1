#include <stdlib.h>
#include "main.h"

/**
 * _isdigit - Checks for numbers
 * @c: int variable 
 * Description: The function checks for a number and returns 1
 * Return: success
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
