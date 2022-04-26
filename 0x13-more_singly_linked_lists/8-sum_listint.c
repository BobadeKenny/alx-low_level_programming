#include "lists.h"

/**
 * sum_listint - sum nodes of list
 * @head: head
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int value;

	current = head;
	value = 0;
	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		value += current->n;
		current = current->next;
	}
	return (value);
}
