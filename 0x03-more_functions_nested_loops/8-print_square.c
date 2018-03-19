#include "holberton.h"

/**
 * print_square  - Entry point
 * @size: the value to send
 *
 * Return: void
 */
void print_square(int size)
{
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			int d;
			{
				for (d = size; d > 0; d--)
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
