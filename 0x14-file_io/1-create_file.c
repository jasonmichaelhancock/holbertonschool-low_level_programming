#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_file - create a file.
 * @filename: the file to create.
 * @text_content: the source content..
 *
 * Return: Always 1, 0, 0r -1..
 */
int create_file(const char *filename, char *text_content)
{
	int newfile;
	int writtenfile;

	if (filename == NULL)
		return (-1);
	newfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (newfile == '\0')
		return (-1);
	if (text_content == NULL)
		text_content = "";
	writtenfile = write(newfile, text_content, _strlen(text_content));
	if (writtenfile == '\0')
		return (-1);
	close(newfile);
	return (1);
}

/**
 * _strlen - string length.
 * @s: the string.
 *
 * Return: the length..
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}
	return (length);
}
