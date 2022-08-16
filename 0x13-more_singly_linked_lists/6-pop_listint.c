#include "lists.h"

/**
 * pop_listint - deletes the head of a node of listint_t
 * @head: pointer storing the address of head pointer
 * Return: the head node's data n
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
