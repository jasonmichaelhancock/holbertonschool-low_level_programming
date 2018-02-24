#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints all type arguments.
 * @separator: what separates arguments.
 * @n: the number if arguments.
 *
 * Return: Always void.
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	char thing1;
	int thing2;
	float thing3;
	char *thing4;

	va_start(arguments, format);
	while (format[i] != '\0')
	{
		switch(format[i])
		{
		case 'c':
			thing1 = va_arg(arguments, int);
			printf("%c, ", thing1);
		case 'i':
			thing2 = va_arg(arguments, int);
			printf("%d, ", thing2);
		case 'f':
			thing3 = va_arg(arguments, double);
			printf("%f, ", thing3);
		case 's':
			thing4 = va_arg(arguments, char*);
			printf("%s, ", thing4);
		}
		i++;
	}
	printf("\n");
}
