#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: the array value
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (length = (length / 2); str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
