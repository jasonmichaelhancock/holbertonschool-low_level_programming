#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - This is the start
 * @argc: the number of argments.
 * @argv: the arguments.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int  a, b, c, d;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	c = 1024;
	while (c == 1024)
	{
		c = read(a, buf, 1024);

		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(b, buf, c);
		if (d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (close(a) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
		exit(100);
	}
	if (close(b) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
	return (0);
}
