#include "lists.h"

/**
  * get_nodeint_at_index - that return the nth node.
  * @head:a pointer to listint_t structure.
  * @index: unsigned integer to set nth node.
  *
  * Return: the node or the node does not exits,return NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
			i++;
	}
	return (NULL);
}
