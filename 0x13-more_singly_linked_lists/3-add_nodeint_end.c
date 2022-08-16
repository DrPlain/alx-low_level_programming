#include "lists.h"

/**
 * add_nodeint_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @n: Value to be stored in the node
 * Return: pointer to new element of list, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;

	if (*head == NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = NULL;
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	return (temp);
}
