#include "main.h"

/**
 * _strlen - return length of string
 *
 * @s: string
 *
 * return: string
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; i > s; i++)
	{
		length++;
	}
	return (length);
}
