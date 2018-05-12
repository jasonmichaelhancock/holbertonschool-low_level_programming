#include "hash_tables.h"

/**
 * hash_table_print - Get a key:value pair in a hash table.
 * @ht: the hash table.
 *
 * Return: 1 or 0..
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			temp = (ht->array[index]);
			while (temp != NULL)
			{
				printf("%s:%s, ", ht->array[index]->key, ht->array[index]->value);
				temp = temp->next;
			}
		}
		index++;
	}
	return;
}
