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
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
