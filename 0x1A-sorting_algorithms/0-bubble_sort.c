#include "sort.h"

void bubble_sort(int *array, size_t size)
{
      unsigned int i, j;
      for (i = 0; i < size - 1; i++)
	    /* Last i elements are already in place */
	    for (j = 0; j < size-i-1; j++)
		  if (array[j] > array[j+1])
		  {
			swap(&array[j], &array[j+1]);
			print_array(array, size);
		  }
}
void swap(int *xp, int *yp)
{
      int temp = *xp;
      *xp = *yp;
      *yp = temp;
}
