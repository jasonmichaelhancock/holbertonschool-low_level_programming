#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees the memory of the current list.
 * @head: the pointer to the list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
