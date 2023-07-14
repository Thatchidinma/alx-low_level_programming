#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to an allocated memory
 *
 * @b: int
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b);
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
