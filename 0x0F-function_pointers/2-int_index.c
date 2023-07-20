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

