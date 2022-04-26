#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *nxt;

	current = *head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current->n);
		free(current);
		current = nxt;
	}
}
