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
	const list_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		i ++;
		node = node->next;
	}
	return (i);
}
