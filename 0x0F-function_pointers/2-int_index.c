#include "function_pointers.h"

/**
 * int_index -search for integar
 *
 * @array: array
 *
 * @size: length of array
 *
 * @cmp: pointer to array
 *
 * Returns: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
