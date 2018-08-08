#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Find a value in an array
 *
 * @array: the set of numbers
 * @size: the size of the array
 * @value: the value to find
 *
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return(-1);
	for(i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return(i);
	}
	return(-1);
}
