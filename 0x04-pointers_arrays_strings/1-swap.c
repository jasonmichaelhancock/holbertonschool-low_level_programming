#include "holberton.h"

/**
 * swap_int - swap values
 * @a: one pointer value
 * @b: second pointer value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
