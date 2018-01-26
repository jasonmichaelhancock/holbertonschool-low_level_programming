#include "holberton.h"

/**
 * more_numbers  - Entry point
 *
 * Return: void
 */
void more_numbers(void)
{
	char c;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 10)
			{
				_putchar('0' + (c / 10));
			}
			_putchar('0' + (c % 10));
		}
	_putchar('\n');
	}
}
