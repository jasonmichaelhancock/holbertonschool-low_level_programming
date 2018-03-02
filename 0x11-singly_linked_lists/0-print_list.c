#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of a linked list.
 * @h: pointer to the head of the linked list
 *
 * Return: size of the list.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *n = h;

	while (n != NULL)
	{
		if (n->str == NULL)
		{
			printf("[0] (nil)\n");
			n = n->next;
                        i++;
		}
		else
		{
			printf("[%d] %s\n", n->len, n->str);
			n = n->next;
			i++;
		}
	}
	return (i);
}
