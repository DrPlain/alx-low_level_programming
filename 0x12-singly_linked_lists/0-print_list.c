#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
		{
			printf("%s\n", h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
