#include "holberton.h"
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
	unsigned int i;
	unsigned int j;
	char *p;
	unsigned int k;
	unsigned int l;

        if (s1 == NULL)
                s1 = ("");
        if (s2 == NULL)
                s2 = ("");

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
	if (k < n)
        {
		for (l = 0; l <= k + 1; l++)
			p[l + i] = s2[l];
	}
	else
                for (l = 0; l < n; l++)
                        p[l + i] = s2[l];
        return (p);
}
