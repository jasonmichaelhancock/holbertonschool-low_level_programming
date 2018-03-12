#include "holberton.h"
/**
 * _puts_recursion - prints amstring without loops
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
