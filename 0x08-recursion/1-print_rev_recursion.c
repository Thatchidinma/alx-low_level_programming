#include "main.h"

/**
 * _print_rev_recursion - print in reverse with recursion
 *
 * @s: string
 *
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
	}
	if (i > 1)
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
