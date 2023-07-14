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
	b = malloc(sizeof(unsigned int));
	if (b == NULL)
	{
		free (b)
		return (98);
	}
	else
	{
		return (0);
	}
}
