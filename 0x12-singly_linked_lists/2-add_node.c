#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds a node to the beginning of linked list
 * @head: head
 * @str: str
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int stlen;

	node = (list_t *)malloc(sizeof(list_t));
	node->str = strdup(str);
	stlen = 0;
	while (str[stlen] != '\0')
	{
		stlen++;
	}	
	node->len = stlen;
	node->next = *head;
	*head = node;
	return (node);
}
