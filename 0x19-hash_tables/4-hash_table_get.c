#include "hash_tables.h"

/**
 * hash_table_get - Get a key:value pair in a hash table.
 * @ht: the hash table.
 * @key: the key value.
 *
 * Return: 1 or 0..
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL)
        {
                return (NULL);
        }
	index = key_index((const unsigned char *)key, ht->size);
	temp = (ht->array[index]);
	if (ht->array[index] != NULL)
	{
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				return (temp->value);
			}
			temp = temp->next;
		}
	}
	return (NULL);
}
