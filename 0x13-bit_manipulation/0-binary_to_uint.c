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
	unsigned int i, j, value = 0, base = 1, digit;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (j = 0; j < i; j++)
	{
		digit = ((b[i - j - 1]) - 48);
		value = value + (digit * base);
		base = base * 2;
	}
	return (value);
}
