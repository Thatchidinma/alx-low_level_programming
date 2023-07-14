#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocatesa memory
 * @b: size of the memory in bytes
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
