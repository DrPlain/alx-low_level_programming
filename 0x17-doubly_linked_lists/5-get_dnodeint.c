#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlist
 * @head: head node
 * @index: Node position
 * Return: Nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count < index)
		{
			count++;
			head = head->next;
		}
		else if (count  == index)
			return (head);
	}
	return (NULL);
}
