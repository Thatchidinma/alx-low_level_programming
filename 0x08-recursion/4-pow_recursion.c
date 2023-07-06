#include "main.h"

/**
 * _pow_recursion - return a number raised to a certain power
 *
 * @x: number
 *
 * @y: power
 *
 * Return: x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (_pow_recursion(x, y - 1));
}
