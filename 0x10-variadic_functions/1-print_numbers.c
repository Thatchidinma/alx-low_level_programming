#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print out numbers seperated by a char
 *
 * @separator: seperates numbers
 *
 * @n: number of arguments
 *
 * @...: arguments
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		i++;
		if (separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
	va_end(args);
}
