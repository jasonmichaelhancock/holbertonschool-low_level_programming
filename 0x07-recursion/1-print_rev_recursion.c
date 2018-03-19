#include "holberton.h"
/**
 * _print_rev_recursion - prints a string without loops
 * @s: pointer to the string..
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
