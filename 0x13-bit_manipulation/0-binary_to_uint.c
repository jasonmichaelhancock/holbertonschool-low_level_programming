#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - translates binary string to unsigned int
 * @b: pointer to the string.
 *
 * Return: The unsigned int..
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, decimal_val = 0, base = 1, rem;

	if (b == NULL)
                return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	j = i;
	for (i = 0; i < j; i++)
        {
		rem = b[j - i - 1];
		decimal_val = decimal_val + (rem * base);
		base = base * 2;
	}
	return (decimal_val);
}
