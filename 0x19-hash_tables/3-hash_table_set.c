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
	temp = (ht->array[index]);
	if (ht->array[index] != NULL)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return(0);
			}
			temp = temp->next;
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}
	if (strcmp(key, "") == 0)
	{
		return(0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
