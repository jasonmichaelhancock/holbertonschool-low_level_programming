#include <stdio.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - the return function
 * @array: the array to return
 * @size: the array size
 * @cmp: the function
 *
 * Return: position or -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
