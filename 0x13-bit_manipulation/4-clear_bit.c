#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - translatesunsigned int to binary
 * @n: the number.
 * @index: the bit to replace
 *
 * Return: The nothing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c, k, x;

	c = 1;
	x = 0;

	if (n == NULL)
		return (-1);
	if (index > 32)
		return (-1);
	while (x < index)
	{
		c = 2 * c;
		x++;
	}
	if (*n == 0)
		return (1);
	k = *n >> (index);
	if (k & 0)
	{
		return (1);
	}
	else
	{
		*n = *n - c;
		return (1);
	}
	return (1);
}
