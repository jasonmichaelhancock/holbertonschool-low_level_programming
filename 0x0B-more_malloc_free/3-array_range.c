#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of a range
 * @min: low end
 * @max: high end
 *
 * Return: pointer or NULL
 */
int *array_range(int min, int max)
{
	int size = (max - min + 1);
	int *p;
	int i;

	if (size <= 0)
		return (NULL);
	p = malloc(sizeof(int) * size + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		p[i] = min;
		min++;
	}
	p[i + 1] = max;
	return (p);
}
