#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the length of the array.
 *
 * Return: address of hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash;
unsigned long int i = 0;

hash = malloc(sizeof(hash_table_t));
if (hash == NULL)
{
return (NULL);
}
hash->size = size;
hash->array = malloc(sizeof(hash_node_t *) * size);
if (hash->array == NULL)
{
free(hash);
return (NULL);
}
while (i < size)
{
hash->array[i] = NULL;
i++;
}
return (hash);
}
