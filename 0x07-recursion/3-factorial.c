#include "holberton.h"
/**
 * factorial - Return the factorial of a number.
 * @n: The starting number.
 *
 * Return: the factorial.
 */
int factorial(int n)
{
	int i;

	if (n <= 1)
		return (1);
	i = n * factorial(n - 1);
	return (i);
}
