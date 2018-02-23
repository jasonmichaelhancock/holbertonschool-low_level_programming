#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - add func
 *
 * @a: The operator
 * @b: The other operator
 *
 * Return: c
 */
int op_add(int a, int b)
{
	int c = (a + b);

	return (c);
}

/**
 * op_sub - sub func
 *
 * @a: The operato
 * @b: The other operator
 *
 * Return: c
 */
int op_sub(int a, int b)
{
	int c = (a - b);

	return (c);
}

/**
 * op_mul - mul func
 *
 * @a: The operator
 * @b: The other operator
 *
 * Return: c
 */
int op_mul(int a, int b)
{

	int c = (a * b);

	return (c);
}

/**
 * op_div - div func
 *
 * @a: The operator
 * @b: The other operator
 *
 * Return: c
 */
int op_div(int a, int b)
{
	int c = (a / b);

	return (c);
}

/**
 * op_mod - mod func
 *
 * @a: The operator
 * @b: The other operator
 *
 * Return: c
 */
int op_mod(int a, int b)
{
	int c = (a % b);

	return (c);
}
