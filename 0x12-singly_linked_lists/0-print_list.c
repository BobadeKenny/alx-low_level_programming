#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in list
 * @h: list
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	list_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[%d] (nil)\n", node->len);
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		i++;
		node = node->next;
	}
	return (i);
}
