#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a doubly linked list
 * @head: head pointer
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	while (head)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}


