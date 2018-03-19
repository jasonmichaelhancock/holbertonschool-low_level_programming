#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print an array of numbers
 * @a: the array
 * @n: the number of times
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i <= n - 2)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
