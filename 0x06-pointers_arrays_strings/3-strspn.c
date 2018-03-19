 #include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: the string to review letter by letter
 * @accept: the string to compare against
 *
 * Return: number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int x;

	for (j = 0; accept[j] != '\0'; j++)
	{
		;
	}
	x = j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;

		while  (j <= x)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else
			{
				if (j == x)
				{
					return (i);
				}
				else
				{
					j++;
				}
			}
		}
	}
	return (i);
}
