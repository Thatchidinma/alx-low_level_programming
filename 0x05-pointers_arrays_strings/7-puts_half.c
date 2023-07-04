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
	int strlen = 0, strlenhalfeven, strlenhalfodd, even;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	strlenhalfeven = strlen / 2;
	strlenhalfodd  = (strlen - 1) / 2;
	even = strlen % 10;
	if (even == 0)
	{
		while (str[strlenhalfeven] < str[strlen])
		{
			_putchar(str[strlenhalfeven]);
			strlenhalfeven++;
		}
		_putchar('\n');
	}
	else
	{
		while (str[strlenhalfodd] < str[strlen])
		{
			_putchar(str[strlenhalfodd]);
			strlenhalfodd++;
		}
	}
}
