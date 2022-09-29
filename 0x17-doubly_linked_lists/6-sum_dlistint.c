#include "lists.h"

/**
 * sum_dlistint - Sums all data(n) of a dlist
 * @head: head pointer
 * Return: sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
