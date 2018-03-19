#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Copy the string
 * @str: the original string.
 *
 * Return: p.
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *p;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == 0)
		return (NULL);
	for (j = 0; j <= i + 1; j++)
		p[j] = str[j];
	return (p);
}
