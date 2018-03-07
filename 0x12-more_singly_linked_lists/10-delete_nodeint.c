#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Gets the node at index.
 * @head: the pointer to the list.
 * @index: the nth node
 *
 * Return: pointer.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	while ((*head != NULL) && (i < index))
	{
		*head = (*head)->next;
		i++;
	}
	if (i == index)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (0);
		temp = *head;
		new = temp->next;
		free(new);
		new = temp->next;
		*head = new;
		return (1);
	}
	else
		return (0);
}
