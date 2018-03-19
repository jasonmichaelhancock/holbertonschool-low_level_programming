#include "holberton.h"

/**
 * puts_half - print half string
 * @str: the array value
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;

	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
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
