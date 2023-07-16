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
	int i = 0, j;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
