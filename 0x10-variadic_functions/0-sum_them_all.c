#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 *
 * @n: number of parameter
 *
 * @...: varaiables to sum
 *
 * Return: sum and if n == 0 return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list al;

	if (n == 0)
	{
		return (0);
	}

	va_start (al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
