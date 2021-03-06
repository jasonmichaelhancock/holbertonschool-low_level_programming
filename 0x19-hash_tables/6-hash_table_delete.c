#include "hash_tables.h"

/**
 * hash_table_delete - delete the hashtable
 * @ht: the hash table.
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL, *temp2 = NULL;
	unsigned long int index;

	if (ht == NULL || ht->size == 0)
	{
		return;
	}
	index = 0;

	while (index < ht->size)
	{
		temp = (ht->array[index]);
		while (temp != NULL)
		{
			temp2 = temp;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
			temp = temp->next;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
