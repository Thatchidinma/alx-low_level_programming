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
	if (s[i] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
