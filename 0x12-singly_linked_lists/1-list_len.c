#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints num of all elements in list
 * @h: list
 *
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	list_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		if (node->str != NULL)
		{
			i++;
		}
		if (node->len != NULL)
		{
			i++;
		}
		node = node->next;
	}
	return (i);
}
