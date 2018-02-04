#include "holberton.h"

/**
 * leet - change to some numbers.
 * @s: the array value
 *
 * Return: Always 0.
 */

char *leet(char *s)
{
	char *alpha = "aeotlAEOTL";
	char *num = "4307143071";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}
