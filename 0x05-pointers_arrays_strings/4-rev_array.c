#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - print an array of numbers
 * @a: the array
 * @n: the number of times
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int x = n;

	for (i = 0; i <= n - 1; i++)
	{
		a[i] = a[i] + x;
		x--;
		x--;
	}
}
