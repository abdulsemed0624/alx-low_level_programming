#include "lists.h"

/**
  * free_listint - a fuction that free list
  * @head: a pointer to listint_t structure
  *
  * Return; no retuen value.
  */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{

		tmp = head;

		head = head->next;

		free(tmp);
	}
	free(head);
}
