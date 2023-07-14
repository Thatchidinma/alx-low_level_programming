#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to an allocated memory
 *
 * @b: int
 *
 * Return: 98 if malloc fails else 0
 */
void *malloc_checked(unsigned int b);
{
	void *a;

	a = malloc(sizeof(b));
	if (a == NULL)
	{
		free (a);
		exit(98);
	}
	return (a);
}
