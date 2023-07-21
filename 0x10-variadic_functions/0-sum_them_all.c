#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 *
 * @n: number of parameter
 *
 * Return: sum and if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i;

	if (n == 0)
	{
		return (0);
	}
	va_list al;
	va_start (al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
