#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*more headers goes there*/

/**
 * main - Entry point
 * Description: Using the if and else if function to get + or - numbers
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;

		if(n > 0){
			printf("%d is positive\n", n);
		}
		else if(n == 0){
			printf("%d is zero\n", n);
		}
		else {
			printf("%d is negative\n", n);
		}

		return (0);
}
