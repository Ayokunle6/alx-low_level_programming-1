#include <stdio.h>
#include <stdlib.h>

/** main - Entry point
 * Description: code to solve the FizzBuzz challenge
 * Return: 0 (success)
 */

int main(void)
{
	/*Decleration*/
	int num;

	/*Statement*/
	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
