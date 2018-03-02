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
	list_t *temp;

	if (head == NULL)
	{
		new = malloc(sizeof(struct list_t new));
		return (new);
	}
	else
	{
		new = malloc(sizeof(struct list_t new));
		*head = temp;
		*head = new;
		new->str = str;
		new->next = temp;
	}
	return (new);
}
