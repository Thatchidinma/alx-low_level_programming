#include "main.h"

/**
 * more_numbers - print out 0-9
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int n;

	while ( n <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
