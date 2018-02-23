#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - the steak
 * @argc: the number of arguments
 * @argv: the arguent array pointer
 *
 * Return: the output
 */
int main(int argc, char *argv[])
{
	int x;
	int a;
	int b;
	int (*f)(int,int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);

	if (f == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
        b = atoi(argv[3]);

	if ((argv[2][0] == '%' && b == 0) || (argv[2][0] == '/' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	x = f(a,b);
	printf("%d\n", x);
	return (0);
}
