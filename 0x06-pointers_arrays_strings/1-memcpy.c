#include "holberton.h"

/**
 * _memcpy - copy memory
 * @dest: the destination of memory to print
 * @src: the source of the memory to print
 * @n: the number of bytes to print
 *
 * Return: the dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
