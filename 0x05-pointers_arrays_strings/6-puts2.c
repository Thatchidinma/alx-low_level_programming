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
	int strlen = 0, strpos = 0;

	while (*str != '\0')
	{
		strlen++;
	}
	for (strpos = 0; strpos < strlen; strgpos += 2)
	{
		_putchar(str[strpos]);
	}
	_putchar('\n');
}
