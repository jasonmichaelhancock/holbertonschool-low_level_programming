#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	while (h != NULL)
	{
		free(h->str);
		free(h);
		h = h->next;;
	}
}
