#include "holberton.h"

/**
 * print_sign - Entry point
 *
 * @n: the value to return
 *
 * Return: 1, 0, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(1);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	else
	{
		return (-1);
		_putchar(-1);
	}
}
