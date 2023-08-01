#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 *
 * @h: linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t element_no = 0;

	while (h != NULL)
	{
		h = h->next;
		element_no++;
	}
	return (element_no);
}
