#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add node to end of linked list.
 * @head: the pointer to the pointer to the list start.
 * @n: the string element of each node.
 *
 * Return: pointer to the head..
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new;
  dlistint_t *temp;

  new = malloc(sizeof(dlistint_t));
  if (new == NULL)
    return (NULL);
  temp = *head;
  new->n = n;
  if (*head == NULL)
    {
      *head = new;
      return (*head);
    }
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  new->prev = temp;
  temp->next = new;
  new->next = NULL;
  return (*head);
}
