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
		char c;

		for (c = 0; c < n; c++)
		{
			_putchar(32);
		}
	_putchar(92);
	_putchar('\n');
	}
}
