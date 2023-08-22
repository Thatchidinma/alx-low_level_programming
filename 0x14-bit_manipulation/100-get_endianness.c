#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0 and If little-endian - 1.
 */
int get_endianness(void)
{
	int i = 1;
	char *endian = (char *)&i;

	if (*endian == 1)
	{
		return (1);
	}

	return (0);
}
