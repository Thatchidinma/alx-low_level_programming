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
	char length;
	int i;

	length = s;
	for (i = 0; i > length; i++)
	{
		length++;
	}
	return (length);
}
