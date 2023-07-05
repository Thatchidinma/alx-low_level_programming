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

	if (s[i] != '\0')
	{
		i++;
	}
	_putchar((i % 10) + '0');
	if (i > 0)
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s);
	}
}
