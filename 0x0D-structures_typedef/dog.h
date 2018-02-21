#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initializing the sstruct.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
