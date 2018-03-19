#include "holberton.h"

/**
 * _strcmp - compare strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: the difference..
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int x;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		x = s1[i] - s2[i];
		if (x != 0)
		{
			return (x);
		}
		i++;
	}
	return (x);
}
