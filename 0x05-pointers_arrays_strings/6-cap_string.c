#include "holberton.h"

/**
 * cap_string - cap words.
 * @a: the value to return
 *
 * Return: the array..
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0 && a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
		if ((a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' ||
		     a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' ||
		     a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' ||
		     a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' ||
		     a[i - 1] == '}') && (a[i] >= 'a' && a[0] <= 'z'))
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
