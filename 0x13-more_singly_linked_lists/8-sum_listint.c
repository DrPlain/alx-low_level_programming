#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a listint_t
 * @head: pointer to the head node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
