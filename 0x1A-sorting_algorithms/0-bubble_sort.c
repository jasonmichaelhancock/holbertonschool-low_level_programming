#include "sort.h"

/**
 * bubble_sort - sort according to size
 * @array: the set of numbers
 * @size: the number of numbers
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
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
