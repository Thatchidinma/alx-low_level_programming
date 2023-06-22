#include "main.h"

/**
 *  _isdigit - checks for digits between 0 to 9
 *
 *  @c: int
 *
 *  Return: 1 if bewtween 0-9 else 0.
 */
int _isdigit(int c)
{
	for (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
