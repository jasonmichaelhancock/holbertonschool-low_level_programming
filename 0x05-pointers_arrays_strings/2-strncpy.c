#include "holberton.h"
/**
 * _strncpy - swap at a certain point
 * @dest: destination
 * @src: source
 * @n: max digits
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x;

	while (src[i] != '\0')
		i++;

	x = i;

	if (x < n)
	{
		for (i = 0; i < n; i++)
		{
			if  (i < x)
				dest[i] = src[i];
			else
				dest[i] = '\0';
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
