#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of list
 *
 * @head: beginning of list
 *
 * @n: ...
 *
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new_list;

	if (head != NULL)
	{
