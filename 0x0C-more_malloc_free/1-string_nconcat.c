#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concentrates to strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * @n: number
 *
 * Return: always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c[] = malloc(s1);

	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s2 != s[n])
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	if (c == NULL)
	{
		return (NULL);
	}
	return (c);
}
