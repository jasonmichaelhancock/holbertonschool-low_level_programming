#include "holberton.h"

/**
 * main - the function
 * @argc: number of arguments
 * @argv: the array of arguments                                         *
 * Return: 0 is success.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
