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
	int length = 0;

	for (; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}
