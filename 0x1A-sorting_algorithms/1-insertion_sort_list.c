#include "sort.h"

/**
 * insertion_sort_list - sorts a double linked link with insertion sort
 * @list: the list to sort
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *head;
  listint_t *move;
  listint_t *ins;
  listint_t *pre;

  if (list == NULL || *list == NULL)
    return;

  head = *list;
  move = head->next;

  while (move != NULL)
    {
      ins = move;
      move = move->next;
      pre = ins->prev;

      while (pre != NULL && pre->n > ins->n)
	{
	  pre->next = ins->next;
	  if (ins->next)
	    ins->next->prev = pre;

	  ins->next = pre;
	  if (pre->prev)
	    pre->prev->next = ins;
	  ins->prev = pre->prev;
	  pre->prev = ins;
	  pre = ins->prev;

	  if (pre == NULL)
	    *list = ins;
	  print_list(*list);
	}
    }
}
