#include "main.h"
#include <stdio.h>

/**
 * print_array - print out the number of element in an array
 *
 * @a: array
 *
 * @n: length of array
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int length = 0, n = 0;

	while (a[n] != '\0')
	{
		length++;
	}
	for ( a[n] < a[length - 1])
	{
		printf("%d ", a[n]);
		n++;
	}
	printf("\n");
}
