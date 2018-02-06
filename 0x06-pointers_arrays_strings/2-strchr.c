#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: the value to return
 * @c: the item to find
 *
 * Return: the poition or null..
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != c; i++)
		;
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
