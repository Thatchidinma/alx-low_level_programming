#include "main.h"

/**
 * *_memset - fill the first n bytes
 *
 * @s: a pointer
 *
 * @c: char
 *
 * @n: number of byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *m = s, v = b;

	for (i = 0; i < n; i++)
		m[i] = v;

	return (m);
}
