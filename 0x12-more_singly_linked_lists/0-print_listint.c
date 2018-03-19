#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints numbers of a linked list.
 * @h: pointer to the head of the linked list
 *
 * Return: size of the list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *n = h;

	while (n != NULL)
	{
		printf("%d\n", n->n);
		n = n->next;
		i++;
	}
	return (i);
}
