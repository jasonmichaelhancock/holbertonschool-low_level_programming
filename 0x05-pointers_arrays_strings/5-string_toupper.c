#include "holberton.h"

/**
 * string_toupper - Make string upper.
 * @a: the array
 *
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int i;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
			i++;
		}
	}
	return (a);
}
