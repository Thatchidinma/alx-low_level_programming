#include "main.h"

/**
 * factorial - print out the factorial of a number
 *
 * @n : number
 *
 * Return: factorial
 */
int factorial(int n)
{
	int nfactorial = n;

	if (n < 0)
	{
		return(-1);
	}
	else if (n >=0 && n <= 1)
	{
		return(1);
	}
	nfactorial *= factorial(n - 1);
	return (nfactorial);
}
