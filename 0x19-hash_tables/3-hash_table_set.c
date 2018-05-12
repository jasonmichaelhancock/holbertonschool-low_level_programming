#include "hash_tables.h"

/**
 * hash_table_set - Set a key:value pair in a hash table.
 * @ht: the hash table.
 * @key: the key value.
 * @value: the value value..
 *
 * Return: 1 or 0..
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		{
			return (0);
		}
		new->key = strdup(key);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
		{
			return (0);
		}
		new->key = strdup(key);
		if (new->key == NULL)
		{
			free(new);
			return (0);
		}
		new->value = strdup(value);
		ht->array[index] = temp;
		new->next = temp->next;
	}
	return (1);
}
