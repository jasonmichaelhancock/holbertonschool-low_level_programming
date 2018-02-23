#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum number agruments.
 * @n: the number of arguments.
 *
 * Return: the total.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg(arguments, const unsigned int);
	}
	va_end(arguments);
	return (sum);
}
