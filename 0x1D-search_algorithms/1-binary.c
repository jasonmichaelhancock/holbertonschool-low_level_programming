#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Find a value in an array
 *
 * @array: the set of numbers
 * @size: the size of the array
 * @value: the value to find
 *
 * Return: the first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, middle, right;
	unsigned int i;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for(i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	left = 0;
        right = size - 1;
	if (left == right)
	{
		if (value == array[0])
			return (0);
		else
			return (-1);
	}
	while (left < right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
		{
			left = middle + 1;
			printf("Searching in array: ");
			for(i = left; i < right + 1; i++)
			{
				printf("%d", array[i]);
				if (i < size - 1)
					printf(", ");
			}
                        printf("\n");
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
                        printf("Searching in array: ");
                        for(i = left; i < right + 1; i++)
                        {
                                printf("%d", array[i]);
                                if (i < size - 1)
                                        printf(", ");
                        }
			printf("\n");
		}
		else
			return (middle);
	}
	return (-1);
}
