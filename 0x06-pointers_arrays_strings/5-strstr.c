#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: the return pointer
 * @needle: the string to look f *
 * Return: .
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int x;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			x = j;

			if (haystack[j] == needle[i])
			{
				while (haystack[j] == needle[i] && needle[i] != '\0')
				{
					j++;
					i++;
				}
				return (&haystack[x]);
			}
		}
	}
	return ('\0');
}
