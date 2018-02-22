#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to the function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
		f(name);
}
