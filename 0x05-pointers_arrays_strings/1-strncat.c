#include "holberton.h"

/**
 * _strncat - amend at a certain point
 * @dest: destination
 * @src: source
 * @n: max digits
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		while (dest[j] != '\0')
		{
			src[j] = dest[i];
			j++;
		}
	}
	return (dest);
}
