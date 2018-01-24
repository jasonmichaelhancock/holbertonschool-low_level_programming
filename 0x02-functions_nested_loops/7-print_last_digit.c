#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: the value to return
 *
 * Return: int
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
	}
	else
	{
		_putchar('0' + ((n * -1) % 10));
	}
	return (n);
}
