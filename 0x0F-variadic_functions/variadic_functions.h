#ifndef VFUNC_H
#define VFUNC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct op - Struct op
 *
 * @cifs: The operator
 * @fp: The function associated
 */
typedef struct op
{
	char *cifs;
	void (*fp)(va_list);
} op_t;

void op_string(va_list);
void op_float(va_list);
void op_int(va_list);
void op_char(va_list);
#endif
