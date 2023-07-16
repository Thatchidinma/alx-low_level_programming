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
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		s[i] = rev;
		s[j] = s[i];
		s[j] = rev;
		j++;
	}
}
