#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile - read file and print to POSIX standard output
 * @filename: the file to read.
 * @letters: the length of the file..
 *
 * Return: number of letter.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int newfile;
	int readfile;
	int writefile;
	void *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	newfile = open(filename, O_RDONLY);
	if (newfile == -1)
		return (0);
	readfile = read(newfile, buf, letters);
	if (readfile == -1)
		return (0);
	writefile = write(STDOUT_FILENO, buf, letters);
	if (writefile == -1)
		return (0);
	free(buf);
	close(newfile);
	return (readfile);
}
