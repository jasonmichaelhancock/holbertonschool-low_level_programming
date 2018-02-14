#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array
 * @size: number of bytes to allocate
 * @c: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		p[i] = c;
	}
	return (p);
}
