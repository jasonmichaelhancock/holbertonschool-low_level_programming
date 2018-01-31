#include "holberton.h"

/**
 * print_rev - print string
 * @s: the array value
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (length = (length - 1); s[length] >= 0; length--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
