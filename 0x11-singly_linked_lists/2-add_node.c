#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a node to beginning of linked list
 * @head: the pointer to the head pointer
 * @str: the contents of the element.
 *
 * Return: a pointer or null.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	while (new->str != '\0')
                i++;
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
