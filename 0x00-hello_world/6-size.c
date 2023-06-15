#include <stdio.h>

/**
 * main - contains all the block of code
 * printf: prints outs the types
 * Return: ends program
 */
int main(void)
{
	printf("Size of a char: %2d byte(s)\n", sizeof(char));
	printf("Size of an int: %2d byte(s)\n", sizeof(int));
	printf("Size of a long int: %2d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s)\n", sizeof(long long int));
	return (0);
}
