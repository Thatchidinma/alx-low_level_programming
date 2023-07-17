#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 *
 * @d: the dog to be
 *
 * Return: always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
