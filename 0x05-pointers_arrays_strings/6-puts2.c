#include "main.h"

/**
 * puts2 - prints out content of string in even positions
 *
 * @str: string
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int strpos = 0;

	while (str[strpos] != '\0')
	{
		strpos++;
	}
	for (strpos = 0; strpos < strlen; strpos += 2)
	{
		_putchar(str[strpos]);
	}
	_putchar('\n');
}
