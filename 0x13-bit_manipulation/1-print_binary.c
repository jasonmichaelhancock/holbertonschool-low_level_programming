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
	unsigned long int c, k, x;

	c = 1;
	x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (c <= n)
	{
		c = 2 * c;
		x++;
	}
	while (x > 0)
	{
		k = n >> (x - 1);
		if (k & 1)
		{
			_putchar('1');
			x--;
		}
		else
		{
			_putchar('0');
			x--;
		}
	}
}
