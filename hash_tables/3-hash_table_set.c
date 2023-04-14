#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: pointer to the hash
 *@key: pointer to the key
 *@value: value to add
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *curr_node;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index( (const unsigned char *)key, ht->size);
	curr_node = ht->array[index];
	
	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			if (new_node->value == NULL)
				return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new-node->key = strdup (key);
	new_node->value - strdup (value);
	if (new_node->value == NULL)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
