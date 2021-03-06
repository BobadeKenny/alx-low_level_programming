#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_nodeint - adds a node to the beginning of linked list
 * @head: head
 * @str: str
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
