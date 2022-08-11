#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - A function that adds a node to the end of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new element of list, NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int len_str = 0;

	while (str[len_str] != '\0')
		len_str++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->len = len_str;
	temp->str = strdup(str);

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
