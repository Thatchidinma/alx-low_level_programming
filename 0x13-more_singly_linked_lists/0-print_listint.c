#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all elements of a list
 *
 * @h: a linked list
 *
 * Return: the number of noded
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		
		h = h->next;
		count++;
	}

	return (count);
}
