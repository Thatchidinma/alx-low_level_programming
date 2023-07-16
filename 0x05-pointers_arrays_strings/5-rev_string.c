#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		s[j] = s[i];
	}
}
