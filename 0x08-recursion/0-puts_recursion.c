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
	int strpos = 0;

	for (s[strpos] != '\0')
	{
		_putchar(s[strpos]);
		_puts_recursion(s[strpos + 1]);
	}
}
