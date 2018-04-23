#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - determine number of nodes
 * @h: the pointer to the head element.
 *
 * Return: The number of nodes..
 */
size_t dlistint_len(const dlistint_t *h)
{
  int i = 0;

  while (h != NULL)
    {
      h = h->next;
      i++;
    }
  return (i);
}
