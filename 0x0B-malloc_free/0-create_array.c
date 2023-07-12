#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of 'size' and assign char
 *
 * @size: size of array
 *
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
