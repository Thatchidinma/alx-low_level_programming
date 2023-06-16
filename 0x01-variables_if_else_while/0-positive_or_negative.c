#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - all the blocks of code go in here
 * if else: checks for a condition
 * printf: prints out statement
 * return: returns 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n > 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
