#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Sums all n values..
 * @head: the pointer to the list.
 *
 * Return: the sum.
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int i = 0;

if (head == NULL)
return (0);
while (head != NULL)
{
i = i + head->n;
head = head->next;
}
return (i);
}
