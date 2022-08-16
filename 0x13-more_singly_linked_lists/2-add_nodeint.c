#include "lists.h"

/**
 * add_nodeint - A function that adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @n: Value of the new node
 * Return: pointer to new head of list, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
