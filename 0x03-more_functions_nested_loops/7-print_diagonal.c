#include "holberton.h"

/**
 * print_diagonal  - Entry point
 * @n: the value to send
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c;

		for (c = 0; c < n; c++)
		{
			int d;
			{
				for (d = (c + 1); d > 1; d--)
				{
					_putchar(32);
				}
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
