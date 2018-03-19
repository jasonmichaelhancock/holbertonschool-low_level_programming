#include "holberton.h"

/**
 * print_triangle  - Entry poin
 * @size: the value to send
 *
 * Return: void
 */
void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 1; y < size - x; y++)
			{
				_putchar(32);
			}
			for (z = 0; z < x + 1; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
