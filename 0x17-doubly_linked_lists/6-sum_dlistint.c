#include "lists.h"

/**
 * sum_dlistint - sums all nodes
 * @head: pointer to list
 * Return: node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int result;

	current = head;
	result = 0;
	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		result += current->n;
		current = current->next;
	}
	return (result);
}
