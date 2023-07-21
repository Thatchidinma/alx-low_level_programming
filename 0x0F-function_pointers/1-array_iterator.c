#include "function_pointers.h"

/**
 * array_iterator - executes a function
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: pointer to function
 *
 * Returns: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
