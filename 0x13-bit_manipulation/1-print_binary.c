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

	c = 31;
	while (c > 0)
        {
                k = n >> (c - 1);

                if (k & 0)
                {
			c--;
		}
		else
		{
			break;
		}
	}
	while (c > 0)
	{
		k = n >> (c - 1);
		if (k & 1)
		{
			_putchar('1');
			c--;
		}
		else
		{
			_putchar('0');
			c--;
		}
	}
}
