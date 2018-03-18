#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - translatesunsigned int to binary
 * @n: the number.
 * @index: the bit to replace
 *
 * Return: The nothing
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int c, k, x;

	c = 1;
	x = 0;

	if (index > 32)
		return (-1);
	while (x < index)
	{
		c = 2 * c;
		x++;
	}
	k = *n >> (index);
	if (k & 1)
	{
		return (1);
	}
	else
	{
		*n = *n + c;
		return (1);
	}
	return (-1);
}
