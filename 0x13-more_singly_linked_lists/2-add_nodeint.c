#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node
 *
 * @head: beginning of list
 *
 * @n: ...
 *
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = malloc(sizeof(listint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
	return (0);
}
