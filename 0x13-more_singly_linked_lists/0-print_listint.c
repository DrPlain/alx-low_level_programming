#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
