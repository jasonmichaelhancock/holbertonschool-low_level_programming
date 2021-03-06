#include "sort.h"

/**
 * quick_sort - sort according to size
 * @array: the set of numbers
 * @size: the number of numbers
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	qksort(array, 0, size - 1, size);
}

/**
 * partition - sort according to size
 * @array: the set of numbers
 * @low: the low index
 * @high: the high index
 * @size: size of array
 *
 * Return: the index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (j != i)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

/**
 * qksort - sort according to size
 * @array: the set of numbers
 * @low: the low index
 * @high: the high index
 * @size: the size
 *
 * Return: Nothing
 */
void qksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		qksort(array, low, pi - 1, size);
		qksort(array, pi + 1, high, size);
	}
}

/**
 * swap - switch numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: Always 0
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
