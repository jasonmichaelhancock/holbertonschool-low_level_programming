#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Add node to end of linked list.
 * @head: the pointer to the pointer to the list start.
 * @str: the string element of each node.
 *
 * Return: pointer to the head..
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	new->str = strdup(str);
	while (str[i] != '\0')
	{
		i++;
	}
	new->len = i;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = NULL;
	return (*head);
}
