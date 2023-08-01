#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 *
 * @h: a linked list
 *
 * Return: the number of noded
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
