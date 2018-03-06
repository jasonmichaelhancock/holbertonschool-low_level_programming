#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees the memory of the current list.
 * @head: the pointer to the list.
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head->n);
		free(head);
		head = head->next;
	}
}
