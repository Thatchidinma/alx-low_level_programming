#include "main.h"

/**
 * _isdigit - check for digits 0-9
 *
 * @c: int
 *
 * Return: 1 if between 0-9 else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
