#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the list to print
 * Return: the number of elemnts in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
