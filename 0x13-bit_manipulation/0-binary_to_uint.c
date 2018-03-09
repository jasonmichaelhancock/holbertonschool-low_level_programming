#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
#include <math.h>

/**
 * binary_to_uint - translates binary string to unsigned int
 * @b: pointer to the string.
 *
 * Return: The unsigned int..
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimalNumber = 0, i = 0, remainder;
	unsigned int n;

	n = atoi(b);
	while (n != 0)
	{
		remainder = n % 10;
		n /= 10;
		decimalNumber += remainder * pow(2, i);
		++i;
	}
	return decimalNumber;
}
