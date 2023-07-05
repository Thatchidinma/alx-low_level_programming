#include "main.h"

/**
 * _strlen_recursion - return lenght of a string
 *
 * @s string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] != '\0')
	{
		length++;
		length += strlen_recursion(s + 1);
	}
	return (length);
}
