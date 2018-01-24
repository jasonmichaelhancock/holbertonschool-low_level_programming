#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: int
 */
void jack_bauer(void)
{
	int n;
	int m;

	for (n = 0; n <= 23; n++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar ('0' + (n / 10));
			_putchar ('0' + (n % 10));
			_putchar (':');
			_putchar ('0' + (m / 10));
			_putchar ('0' + (m % 10));
			_putchar ('\n');
		}
	}
	return (0);
}
