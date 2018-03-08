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
	listint_t *temp;

	if (head == NULL)
                return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
