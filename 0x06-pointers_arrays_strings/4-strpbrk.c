#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: the return pointer
 * @accept: the hars to look through
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
