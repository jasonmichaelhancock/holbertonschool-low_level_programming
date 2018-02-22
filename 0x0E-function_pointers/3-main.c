#include <stdio.h>
#include "function_pointers.h"

/**
 * main - the steak
 * @argc: the number of arguments
 * @argv: the arguent array pointer
 *
 * Return: the output
 */
int main(argc, *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(aegv[3]);
	int (*f)(int, int);

	f = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(99);
	}
	if (p == NULL || argv[2][1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}
	if ((argv[2][0] == '%' && b == 0) || argv[2][0] == '/' && b == 0))
	{
		printf("ERROR");
		exit(100);
	}
}
