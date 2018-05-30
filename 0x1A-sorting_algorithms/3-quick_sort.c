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
 * quick_sort - sort according to size
 * @first: the set of numbers
 * @last: the number of numbers
 *
 * Return: Nothing
 */
void qksort(int *array, int first, int last, size_t size)
{
	int i, j, pivot, temp;

	if(first<last)
	{
		pivot=last;
		i=first;
		j=last;

		while(i<j)
		{
			while(array[i] <= array[pivot] && i < last)
				i++;
			while(array[j] > array[pivot])
				j--;
			if(i < j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		print_array(array, size);
		temp = array[pivot];
		array[pivot] = array[j];
		array[j] = temp;
		qksort(array, first, j - 1, size);
		qksort(array, j + 1, last, size);
	}
}
