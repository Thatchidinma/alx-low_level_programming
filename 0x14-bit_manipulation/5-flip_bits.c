#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - flips bit
  *
  * @n: long int
  *
  * @m: unsigned int
  *
  * Return: counter
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, counter = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			counter++;

		i >>= 1;
	}

	return (counter);
}
