#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * @ht: A pointer to the hash table.
 * Return: Notning
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	putchar('{');
	while (i < ht->size)
	{
		if (ht->array[i] == NULL)
		{
			i++;
			continue;
		}
		if (ht->array[i]->next == NULL)
		{
			printf("'%s':'%s', ", ht->array[i]->key, ht->array[i]->value);
		}
		i++;
	}
	printf("}\n");
}			
