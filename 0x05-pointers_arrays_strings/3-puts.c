#include "main.h"

/**
 * _puts - print to standard output
 *
 * @str: string
 *
 * Return: 0
 */
void _puts(char *str)
{
	write(STDOUT, str);
}
