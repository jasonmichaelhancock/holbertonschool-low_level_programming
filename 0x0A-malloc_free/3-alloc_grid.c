#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copy the string
 * @str: the original string.
 *
 * Return: p.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p;

	p = malloc((sizeof(int) * width * height) + width);
	if (p == 0)
	{
		return (NULL);
	}
		   for (i = 0; i < width; i++)
		   {
			   for (j = 0; j < height; j++)
			   {
				   p[i][j] = 0;
			   }
		   }
	return (p);
}
