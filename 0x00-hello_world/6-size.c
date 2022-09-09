#include <stdio.h>

/**
 * main - Entry point
 * Deacription: Printing out the sizes of each data type
 * Return: 0 (success)
 */

int main(void)
{
	char a;
	int b;
	int long c;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
