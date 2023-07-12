#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to copy adress to memory allocated
 * @str: string copied
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *c;
	int i, j;

	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
