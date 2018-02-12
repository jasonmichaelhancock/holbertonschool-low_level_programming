#include "holberton.h"

/**
 * main - the function
 * @argc: number of arguments
 * @argv: the array of arguments                                         *
 * Return: 0 is success.
 */
int main(int argc, char **argv)
{
	int x = (*argv[1] * *argv[2]);

	if (argc == 3)
	{
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
