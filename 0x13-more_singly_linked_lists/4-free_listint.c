#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *nxt;

	current = head;

	while (current != NULL)
	{
		nxt = current->next;
		free(current);
		current = nxt;
	}
}
