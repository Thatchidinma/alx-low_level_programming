#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print out the structure dog
 *
 * @d: structure dog
 *
 * Return: always 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %s\n", (d->age) ? d->age : "(nil)");
		printf("Owner: %s", (d->owner) ? d->owner : "(nil)");
	}
}
