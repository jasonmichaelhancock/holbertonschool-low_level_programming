#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints all type arguments.
 * @format: The format string.
 *
 * Return: Always void.
 */
void print_all(const char * const format, ...)
{
	va_list thelist;
	int i = 0;
	int j = 0;
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};
	va_start(thelist, format);
	while (format[j] != '\0')
	{
		while (ops[i].cifs != NULL)
		{
			if (format[j] == *(ops[i].cifs))
			{
				ops[i].fp(thelist);
				printf(", ");
			}
			i++;
		}
		j++;
	}
}
/**
 * op_char - char function.
 * @thelist: The arguments.
 *
 * Return: nothing.
 */
void op_char(va_list thelist)
{
        printf("%c, ", va_arg(thelist, int));
        return;
}
/**
 * op_int - int function.
 * @thelist: The arguments.
 *
 * Return: nothing.
 */
void op_int(va_list thelist)
{
	printf("%d, ", va_arg(thelist, int));
	return;
}
/**
 * op_float - float function
 * @thelist: the arguments
 *
 * Return: nothing.
 */
void op_float(va_list thelist)
{
	printf("%f, ",va_arg(thelist, double));
	return;
}
/**
 * op_string - string function
 * @thelist: the arguments
 *
 * Return: nothing.
 */
void op_string(va_list thelist)
{
	printf("%s, ", va_arg(thelist, char*));
	return;
}
