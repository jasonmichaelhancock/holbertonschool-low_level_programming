#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - translatesunsigned int to binary
 * @n: the number.
 * @index: the bit to get.
 *
 * Return: The value or -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c, k, x;

	c = 1;
	x = 0;

	while (c <= n)
	{
		c = 2 * c;
		x++;
	}
	if (index > x)
		return (0);
	k = n >> (index);
	if (k & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
