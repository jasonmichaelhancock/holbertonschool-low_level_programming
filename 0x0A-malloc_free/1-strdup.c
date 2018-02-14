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
	p = malloc(sizeof(char) * i);
	if (p == 0)
		return (NULL);
	i = 0;
	for (j = 0; str[j] != '\0'; j++)
		p[j] = str[j];
	return (p);
}
