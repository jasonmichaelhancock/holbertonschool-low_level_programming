#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - inserts the node at index.
 * @head: the pointer to the list.
 * @index: the nth node
 *
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp;

if (head == NULL || *head == NULL)
	return (-1);
temp = *head;
if (index == 0)
{
	*head = temp->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
}
while (i < index)
{
	if (temp == NULL)
		return (-1);
	temp = temp->next;
	i++;
}
temp->prev->next = temp->next;
if (temp->next != NULL)
	temp->next->prev = temp->prev;
free(temp);
return (1);
}
