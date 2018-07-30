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

if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
	return(NULL);
  if (idx == 0)
  {
	  add_dnodeint(h, n);
	  return(new);
  }

  temp = *h;
  while ((temp != NULL) && (i < idx))
    {
      temp = temp->next;
      i++;
    }
  if (idx != i)
	  return(NULL);
  if (temp == NULL)
  {
          add_dnodeint_end(h, n);
          return(new);
  }
  new->n = n;
  new->next = temp;
  new->prev = temp->prev;
  new->prev->next = new;
  temp->prev = new;
  return (new);
}
