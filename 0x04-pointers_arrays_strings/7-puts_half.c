#include <stdio.h>
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
	printf("%d", length);
	if (length % 2 == 0)
	{
		for (length = (length / 2); str[length] != '\0'; length++)
		{
		_putchar(str[length]);
		}
	}
	else
		for (length = ((length / 2) + 1); str[length] != '\0'; length++)
		{
			_putchar(str[length]);
                }
	_putchar('\n');
}
