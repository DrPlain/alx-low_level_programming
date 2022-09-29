#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlist
 * @head: Address of head
 * @n: Value to insert
 * Return: Address of new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	last = *head;
	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next)
		last = last->next;

	last->next = new;
	new->prev = last;
	return (new);
}
