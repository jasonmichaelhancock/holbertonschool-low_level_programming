#include "hash_tables.h"

/**
 * key_index - find the index of a key
 * @key: the key to find.
 * @size: the array size.
 *
 * Return: the hash key index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int preindex, index;

preindex = hash_djb2(key);
index = preindex % size;
return (index);
}
