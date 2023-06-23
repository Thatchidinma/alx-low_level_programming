#include "main.h"

/**
 * more_numbers - print out 0-9
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
