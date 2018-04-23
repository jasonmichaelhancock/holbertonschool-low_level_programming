#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add a node to beginning of linked list
 * @head: the pointer to the head pointer
 * @n: the contents of the element.
 *
 * Return: a pointer or null.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);
  new->n = n;
  new->next = *head;
  new->prev = NULL;
  return (*head);
}
