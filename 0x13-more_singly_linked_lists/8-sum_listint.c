#include "lists.h"

/**
  * sum_listint - the sum of all the data of listint list
  * @head: pointer of listint structure.
  * Return: the sum if it is failed return (0).
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
