#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer storing address of head pointer
 * @idx: index where node is to be inserted (starts from 0)
 * @n: value to be inserted
 * Return: Address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	i = 1;
	while (i < idx)
	{
		current = current->next;
		i++;
		if (current == NULL)
		{
			return (NULL);
			free(new);
		}
	}
	new->next = current->next;
	current->next = new;

	return (new);
}
