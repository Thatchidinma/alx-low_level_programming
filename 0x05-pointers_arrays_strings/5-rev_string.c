#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char j[0];

	while (s[i] != '\0')
	{
		i++;
	}
	
	for (i -= 1; i >= 0; i--)
	{
		j[k] = s[i];
		k++;
	}
}
