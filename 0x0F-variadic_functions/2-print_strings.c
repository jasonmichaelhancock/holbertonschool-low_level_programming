#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints string arguments.
 * @separator: what separates arguments.
 * @n: the number if arguments.
 *
 * Return: Always void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;
	char *item;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(arguments, n);
	for (x = 0; x < n - 1; x++)
	{
		item = va_arg(arguments, char*);
		if (item == NULL)
		{
			printf("(nil)");
			if (separator != NULL)
				printf("%s", separator);
		}
		else
		{
			printf("%s", item);
			if (separator != NULL)
				printf("%s", separator);
		}
	}
	item = va_arg(arguments, char*);
	if (item == NULL)
		printf("(nil)");
	else
	{
		printf("%s\n", item);
	}
	va_end(arguments);
}
