#include "holberton.h"

/**
 * _memset - fills memory location with n bytes
 * @s: the address of memory
 * @b: the value to write
 * @n: the size of the memory to print
 *
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
