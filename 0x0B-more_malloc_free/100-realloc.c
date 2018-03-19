#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates memory
 * @ptr: the address of memory to print
 * @old_size: the old size of the memory to print
 * @new_size: the new size of the memory block
 *
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;

	if ((ptr != NULL) && (new_size == 0))
			 {
				 free(ptr);
				 return (NULL);
			 }
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		return (nptr);
		free (nptr);
		free (ptr);
	}
	if (old_size == new_size)
                return (ptr);
	else if (new_size > old_size)
	{
		nptr = malloc(new_size);
		return (nptr);
		free (nptr);
		free (ptr);
	}
	else if (new_size < old_size)
	{
		nptr = malloc(new_size);
		return (nptr);
		free (nptr);
                free (ptr);
	}
	return ();
}
