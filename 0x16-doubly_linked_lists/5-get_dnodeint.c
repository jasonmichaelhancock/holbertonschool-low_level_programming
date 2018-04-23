#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the node at index.
 * @head: the pointer to the list.
 * @index: the nth node
 *
 * Return: pointer.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);
while ((head != NULL) && (i < index))
{
head = head->next;
i++;
}
if (i == index)
return (head);
else
return (NULL);
}
