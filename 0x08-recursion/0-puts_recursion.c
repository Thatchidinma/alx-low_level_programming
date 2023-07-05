#include "main.h"

/**
 * _puts_recursion - print string using recursion
 *
 * @s: string
 *
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
		_putchar('\n');
	}
}
