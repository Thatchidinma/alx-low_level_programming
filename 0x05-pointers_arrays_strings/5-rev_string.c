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
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	
	for (i -= 1; i >= 0; i--)
	{
		s[j] = s[i];
		j++;
	}
}
