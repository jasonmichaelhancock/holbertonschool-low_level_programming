#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - translatesunsigned int to binary
 * @n: the number.
 *
 * Return: The nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int c, k;

	for (c = 31; c > 0; c--)
	{
		k = n >> (c - 1);

		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
