#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Copy the string
 * @s1: the original string.
 * @s2: the second string.
 *
 * Return: p.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *p;
	int k;
	int l;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		;
	}
	p = malloc((sizeof(char) * i) + (sizeof(char) * k) + 1);
	if (p == 0)
		return (NULL);
	for (j = 0; j <= i + 1; j++)
		p[j] = s1[j];
	for (l = 0; l <= k + 1; l++)
		p[l + i] = s2[l];
	return (p);
}
