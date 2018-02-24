#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints string of arguments.
 * @separator: what separates arguments.
 * @n: the number if arguments.
 *
 * Return: Always void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;
	int item;

	va_start(arguments, n);
	for (x = 0; x < n - 1; x++)
	{
		item  = va_arg(arguments, int);
		printf("%d", item);
		if (separator != NULL)
			printf("%s", separator);
	}
	item  = va_arg(arguments, int);
	printf("%d\n", item);
	va_end(arguments);
}
