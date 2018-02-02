#include "holberton.h"

/**
 * string_toupper - Make string upper.
 * @: the typecast
 *
 * Return: Always 0.
 */
char *string_toupper(char *)
{
	char *a;
	int i;

	while (a[1] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
			i++;
		}
		else
		{
			a[i] = a[i];
			i++;
		}
	}
	return (a);
}
