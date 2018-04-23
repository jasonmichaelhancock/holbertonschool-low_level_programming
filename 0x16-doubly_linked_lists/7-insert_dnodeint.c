#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts the node at index.
 * @h: the pointer to the list.
 * @idx: the nth node
 * @n: value of node
 *
 * Return: pointer.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  unsigned int i = 0;
  dlistint_t *new;
  dlistint_t *temp;

  if (*h == NULL)
    return (NULL);
  temp = *h;
  while ((temp != NULL) && (i < idx))
    {
      temp = temp->next;
      i++;
    }
  if (i == idx)
    {
      new = malloc(sizeof(dlistint_t));
      if (new == NULL)
	return (NULL);
      new = temp->next;
      new->n = n;
      return (*h);
    }
  else
    return (NULL);
}
