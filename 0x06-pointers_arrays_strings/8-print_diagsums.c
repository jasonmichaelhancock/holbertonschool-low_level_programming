#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - sum diagonals
 * @a: value return
 * @size: the square.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int A = 0;
	int B = 0;
	int i;

	for (i = 0; i < (size * size); i++)
	{
		A = A + a[i];
		i += size;
	}
	for (i = size - 1; i < (size * size -1); i--)
	{
		B = B + a[i];
		i += size;
	}
	printf("%d, ", A);
	printf("%d\n", B);
}
