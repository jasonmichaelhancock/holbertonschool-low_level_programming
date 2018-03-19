#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to dot_t
 * @d: the addres of dog_t.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	char *new_name;
	char *new_owner;

	if (d != NULL)
	{
		free(new_name);
		free(new_owner);
		free(d);
	}
}
