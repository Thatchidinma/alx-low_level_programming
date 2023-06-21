#include "main.h"

/**
 * _isalpha - check if its an alphabet
 *
 * @c: first int
 *
 * Return: return 1 if alphabet else return 0
 */
int _isalpha(int c)
{
	if ( c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
