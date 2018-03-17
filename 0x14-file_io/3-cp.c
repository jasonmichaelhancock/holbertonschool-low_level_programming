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
	int not_done = 1, a, b, c, d;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[0], argv[1]);
	a = open(argv[1], O_RDONLY);
	if (a == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
	b = open(argv[2], O_RDWR | O_TRUNC | O_CREAT | O_APPEND, 0664);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[2]);
	while (not_done == 1)
	{
		c = read(a, buf, 1024);
		if (c == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[1]);
		if (c < 1024)
			not_done = 0;
		d = write(b, buf, c);
		if (d == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to the file %s\n", argv[2]);
	}
	c = close(a);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
	d = close(b);
	if (d == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
	return (0);
}
