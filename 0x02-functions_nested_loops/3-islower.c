#include "main.h"

/**
 * _islower - check if its lower case
 *
 * @c: int
 *
 * Return: returns 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
