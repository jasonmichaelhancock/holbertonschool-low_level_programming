#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>

/**
 * free_dlistint - frees the memory of the current list.
 * @head: the pointer to the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *temp;

  if (head == NULL)
    return;
  while (head != NULL)
    {
      temp = head;
      head = head->next;
      free(temp);
    }
  free(head);
}
