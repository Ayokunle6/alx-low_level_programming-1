#include <stdio.h>
#include <stdlib.h>

/** main - Entry point
 * Description: code to solve the FizzBuzz challenge
 * Return: success
 */

int main(void)
{
	/*Decleration*/
	int num;

	/*Statement*/
	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		
		printf("%d ", num);
	}
	
	return (0);
}
