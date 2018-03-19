#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c;
	int d;

	for (d = 0; d <= 49; d++)
	{
		if (d < 49)
		{
		c = a + b;
		printf("%li, ", c);
		a = b;
		b = c;
		}
		else
		{
		c = a + b;
		printf("%li\n", c);
		}
	}
	return (0);
}
