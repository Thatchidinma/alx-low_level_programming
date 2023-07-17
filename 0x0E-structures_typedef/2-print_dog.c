#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print out the structure dog
 * @d: structure dog
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->age != NULL)
		{
			printf("Age: %s\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
