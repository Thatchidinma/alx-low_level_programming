#include "main.h"

/**
 * swap_int - swap values of a and b
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: return a and b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = *a;
}
