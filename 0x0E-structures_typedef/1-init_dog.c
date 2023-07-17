#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: pointer to structure
 *
 * @name: its name
 *
 * @age: its age
 *
 * @owner: its owner
 *
 * Return: always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
