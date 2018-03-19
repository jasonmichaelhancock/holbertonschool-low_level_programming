#include "holberton.h"

/**
 * void rev_string(char *s) - swap values
 * @s: one pointer value
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length;
	int c;
	int i;

	for (length = 0; s[length] != '\0'; length++)
		;
        for (i = 0; s[i] <= (length / 2); i++)
	{
		c = s[i];
		s[i] = s[(length - 1) - i];
		s[(length -1) - i] = c;
	}
}
