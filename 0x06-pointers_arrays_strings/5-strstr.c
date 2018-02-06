#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: the return pointer
 * @needle: the string to look for
 *
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
				for (j = j; haystack[j] != '\0'; j++)
				{
					if (haystack[j] != needle[i])
					{
						break;
					}
					else
					{
						i++;
					}
				}
				return (&haystack[x]);
			}
		}
	}
	return ('\0');
}
