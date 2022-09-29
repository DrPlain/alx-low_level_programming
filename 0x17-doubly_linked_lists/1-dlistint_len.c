#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlist
 * @h: head pointer
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
