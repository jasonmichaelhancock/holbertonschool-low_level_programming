#include "hash_tables.h"

/**
 * hash_table_delete - delete the hashtable
 * @ht: the hash table.
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL)
	{
		return;
	}
	index = 0;

	temp = (ht->array[index]);
	while (ht->array[index] != NULL)
	{
		while (temp != NULL)
		{
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp->next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
