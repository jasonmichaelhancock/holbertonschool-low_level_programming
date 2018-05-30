#include "sort.h"

/**
 * selection_sort - sort according to size
 * @array: the set of numbers
 * @size: the number of numbers
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
			{
				min_idx = j;
			}
		}
		swap(&array[min_idx], &array[i]);
		if (min_idx != i)
		{
			print_array(array, size);
		}
	}
}

/**
 * swap - switch numbers
 * @xp: 1st number
 * @yp: 2nd number
 *
 * Return: Always 0
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
