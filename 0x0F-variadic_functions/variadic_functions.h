#ifndef VFUNC_H
#define VFUNC_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *cifs;
	void (*fp)(va_list thelist);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**                                                                                     
 * struct op - Struct op                                                                
 *                                                                                      
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
        char *cifs;
        void (*fp)(va_list thelist);
} op_t;void op_string(va_list thelist);
void op_float(va_list thelist);
void op_int(va_list thelist);
void op_char(va_list thelist);
void (*fp)(va_list thelist);
#endif
