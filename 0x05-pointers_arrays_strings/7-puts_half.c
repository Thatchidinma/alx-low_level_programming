#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str: string
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int strlen = 0, strlenhalf, even;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	even = strlen % 10;
	if (even == 0)
	{
		strlenhalf = strlen / 2;
		while (strlenhalf < strlen)
		{
			_putchar(str[strlenhalf]);
			strlenhalf++;
		}
		_putchar('\n');
	}
	else
	{
		strlenhalf = ((strlen - 1) / 2) + 1;
		while (strlenhalf < strlen)
		{
			_putchar(str[strlenhalf]);
			strlenhalf++;
		}
		_putchar('\n');
	}
}
