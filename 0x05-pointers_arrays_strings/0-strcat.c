#include "holberton.h"

/**
 * _strcat - swap string into address
 * @dest: destination
 * @src: source.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		src[j] = dest[i];
		j++;
	}
	return (dest);
}
