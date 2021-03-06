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

/**
 * shash_table_print - print a hash table.
 * @ht: the hash table.
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;
	int i = 0;

	if (ht != NULL)
	{
		printf("{");
		while (index < ht->size)
		{
			if (ht->array[index] != NULL)
			{
				temp = (ht->array[index]);
				while (temp != NULL)
				{
					if (i == 1)
					{
						printf(", ");
					}
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->next;
					i = 1;
				}
			}
			index++;
		}
		printf("}\n");
	}
}
/**
 * shash_table_print_rev - print a hash table in reverse..
 * @ht: the hash table.
 *
 * Return: 1 or 0..
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	unsigned long int index = 0;
	int i = ht->size;

	if (ht != NULL)
	{
		printf("{");
		while (index > 0)
		{
			if (ht->array[index] != NULL)
			{
				temp = (ht->array[index]);
				while (temp != NULL)
				{
					temp = temp->next;
				}
				while (temp != NULL)
				{
					if (i == 1)
					{
						printf(", ");
					}
					printf("'%s': '%s'", temp->key, temp->value);
					temp = temp->sprev;
					i = 1;
				}
			}
			index++;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - delete the hashtable
 * @ht: the hash table.
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp = NULL, *temp2 = NULL;
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
