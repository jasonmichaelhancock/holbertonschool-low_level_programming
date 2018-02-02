#include "holberton.h"

/**
 * _strncpy - swap at a certain point
 * @dest: destination
 * @src: source
 * @n: max digits
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x;

	while (src[i] != '\0')
	{
		i++;
	}
	x = i;

	if (x < n)
	{
		i = 0;

		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (x >= n)
	{
		i = 0;

		while (src[i] != '\0')
		{
			if  (i < n)
			{
				dest[i] = src[i];
				i++;
			}
			else
			{
				dest[i] = '*';
				i++;
			}
		}
	}
	return (dest);
}
