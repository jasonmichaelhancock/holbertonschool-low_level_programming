#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints numbers of a linked list.
 * @h: pointer to the head of the linked list
 *
 * Return: size of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
  int i = 0;
  const dlistint_t *n = h;

  while (n != NULL)
    {
      printf("%d\n", n->n);
      n = n->next;
      i++;
    }
  return (i);
}
