#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * shash_table_create - create a hash table
 * @size: the length of the array.
 *
 * Return: address of shash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash;
	unsigned long int i = 0;

	shash = malloc(sizeof(shash_table_t));
	if (shash == NULL)
	{
		return (NULL);
	}
	shash->size = size;
	shash->array = malloc(sizeof(shash_node_t *) * size);
	if (shash->array == NULL)
	{
		free(shash);
		return (NULL);
	}
	while (i < size)
	{
		shash->array[i] = NULL;
		i++;
	}
	return (shash);
}
