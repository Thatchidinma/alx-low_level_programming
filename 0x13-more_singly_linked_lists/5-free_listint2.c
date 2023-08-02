#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free list and sets head to NULL
 *
 * @head: pointer to node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	 listint_t *temp;

	 if (head == NULL)
	 {
		 return;
	 }
	 while (head != NULL)
	 {
		 temp = (*head);
		 *head = (*head)->next;
		 free(temp);
	 }
	 free(*head);
	 head = NULL;
}
