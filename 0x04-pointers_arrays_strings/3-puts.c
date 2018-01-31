#include "holberton.h"

/**
 * puts - print string
 * @str: the array value
 *
 * Return: void
 */
void _puts(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
