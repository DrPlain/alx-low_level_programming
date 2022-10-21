#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *value_dup, *key_dup;
	hash_node_t *node;
	
	key_dup = strdup(key);
	value_dup = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (-1);
		node->value = value_dup;
		node->key = key_dup;
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	ht->array[index] = key_dup;
	return (1);
}
