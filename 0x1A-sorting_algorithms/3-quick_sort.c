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
 * qk_sort - sort according to size
 * @array: the set of numbers
 * @low: the low index
 * @high: the high index
 *
 * Return: the index
 */
int partition (int *array, int low, int high)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high- 1; j++)
	{
		/* If current element is smaller than or
		   equal to pivot */
		if (array[j] <= pivot)
		{
			i++;    /* increment index of smaller element */
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * qk_sort - sort according to size
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
		/* pi is partitioning index, arr[p] is now
		   at right place */
		int pi = partition(array, low, high);

		/* Separately sort elements before
		   partition and after partition */
		print_array(array, size);
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
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
