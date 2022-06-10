#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @h: pointer to list
 * @idx: index of node
 * @n: new node value
 * Return: node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int i;

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	if (current == NULL)
	{
	return(NULL);
	}
	for(i = 0; i < idx; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			return(NULL);
		}
	}
	new->prev = current->prev;
	new->next = current;
	*h = new;
	return(new);
}
