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
	int i;
	int j = 0;
	char *string1 = "";
	char *string2 = ", ";
	op_t ops[] = {
		{"c", op_char},
		{"i", op_int},
		{"f", op_float},
		{"s", op_string},
		{NULL, NULL}
	};
	va_start(thelist, format);
	while (format[j] != '\0' && format != NULL)
	{
		i = 0;
		while (ops[i].cifs != NULL)
		{
			if (format[j] == *(ops[i].cifs))
			{
				printf("%s", string1);
				ops[i].fp(thelist);
				string1 = string2;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(thelist);
}
/**
 * op_char - char function.
 * @thelist: The arguments.
 *
 * Return: nothing.
 */
void op_char(va_list thelist)
{
	printf("%c", va_arg(thelist, int));
}
/**
 * op_int - int function.
 * @thelist: The arguments.
 *
 * Return: nothing.
 */
void op_int(va_list thelist)
{
	printf("%d", va_arg(thelist, int));
}
/**
 * op_float - float function
 * @thelist: the arguments
 *
 * Return: nothing.
 */
void op_float(va_list thelist)
{
	printf("%f", va_arg(thelist, double));
}
/**
 * op_string - string function
 * @thelist: the arguments
 *
 * Return: nothing.
 */
void op_string(va_list thelist)
{
	char *yay;

	yay = va_arg(thelist, char*);
	if (yay == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", yay);
}
