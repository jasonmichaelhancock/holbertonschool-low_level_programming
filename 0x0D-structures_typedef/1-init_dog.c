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
	struct dog
	{
		d;
		name;
		age;
		owner;
	} dog;
	d = &dog;
	return (d);
}
