#include "lists.h"

/**
  * add_nodeint - add node on the beginning.
  * @head: a pointer to list structure.
  * @n: integer value put in new node.
  *
  * Return: the address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));

	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;

	return (*head);
}
