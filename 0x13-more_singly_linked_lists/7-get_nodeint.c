#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a list
 * @head: pointer to the head node
 * @index: index where node is to be inserted
 * Return: nth node of the list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head && index == 0)
		return (head);

	for (i = 0; head && i < index; i++)
		head = head->next;
	if (head)
		return (head);
	return (NULL);
}
