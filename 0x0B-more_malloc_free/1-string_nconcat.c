git #include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Copy the string
 * @s1: the original string.
 * @s2: the second string.
 * @n: limit of s2
 *
 * Return: p.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, j, k, l;
	char *p;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	for (a = 0; s2[a] != '\0'; a++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
	if (n >= k)
	{
		p = malloc((sizeof(char) * (a + k)) +  1);
	}
	else
	{
		p = malloc((sizeof(char) * (a + n)) +  1);
	}
	if (p == NULL)
		return (NULL);
	for (j = 0; j < a; j++)
		p[j] = s1[j];
	if (n >= k)
	{
		for (l = 0; l < k; l++)
			p[l + j] = s2[l];
		l++;
		p[l + j + 1] = ('\0');
	}
	else
	{
		for (l = 0; l < n; l++)
			p[l + j] = s2[l];
		l++;
		p[l + j + 1] = ('\0');
	}
	return (p);
	free(p);
}
