#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at index.
 * @head: the pointer to the list.
 * @index: the nth node
 *
 * Return: pointer.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	while ((*head != NULL) && (i < idx))
	{
		*head = (*head)->next;
		i++;
	}
	if (i == idx)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		temp = *head;
		new = temp->next;
		new->n = n;
		return (*head);
	}
	else
		return (NULL);
}
