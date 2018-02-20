#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: the pointer to return
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Return: d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d !=0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
