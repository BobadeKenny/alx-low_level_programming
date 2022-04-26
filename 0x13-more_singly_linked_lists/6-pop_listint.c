#include "lists.h"

/**
 * pop_listint - pops head of  a list
 * @head: head
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int value;

	current = *head;
	*head = current->next;
	value = current->n;
	free(current);
	return (value);

}
