#include "holberton.h"

/**
 * print_numbers - Entry point
 *
 * Return: (void)
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
