#include <stdio.h>

/**
 * main  - Entry point
 *
 * Return: int 0
 */



int main(void)
{
	int a;

	for (a = 1; a < 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if (a % 5 == 0)
		{
			printf("Buzz");
		}
		if ((a % 3 == 0) || (a % 5 == 0))
			printf(" ");
		if ((a % 3 != 0) && (a % 5 != 0))
		{
			printf("%d ", a);
		}
	}
	for (a = 100; a < 101; a++)
	{
		if (a % 3 == 0)
		{
			printf("Fizz");
		}
		if (a % 5 == 0)
		{
			printf("Buzz");
		}
		if ((a % 3 != 0) && (a % 5 != 0))
		{
			printf("%d", a);
		}
	}
	printf("\n");
	return (0);
}
