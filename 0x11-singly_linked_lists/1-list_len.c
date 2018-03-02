#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - deterine number of nodes
 * @h: the pointer to the head element.
 *
 * Return: The number of nodes..
 */
size_t list_len(const list_t *h)
{
	int i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return(i);
}
