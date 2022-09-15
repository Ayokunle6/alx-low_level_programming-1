#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Entry point(Calling the function from main.h file)
 * Description: The function computes the absolute value of a number
 * @num: variable for the integer
 * Return: 0 (success)
 */

int _abs(int num)
{
	if (num >= 1)
	{
		return (num);
	}
	else
		return (-num);
}
