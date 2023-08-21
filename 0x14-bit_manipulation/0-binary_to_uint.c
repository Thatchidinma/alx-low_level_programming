#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 *
 * @b: The binary string to converts
 *
 * Return: The positive number converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, counter = 0, sum = 0;

	if (b == NULL)
	{
		return(0);
	}

	length = _strlen(b);

	while (len--)
	{
		if (b[length] != 48 && b[length] != 49)
