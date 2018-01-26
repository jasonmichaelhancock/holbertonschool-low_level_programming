#include "holberton.h"

/**
 * print_line  - Entry point
 * @n: the value to send
 *
 * Return: void
 */
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		char c;

		for (c = 0; c <= n; c++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
