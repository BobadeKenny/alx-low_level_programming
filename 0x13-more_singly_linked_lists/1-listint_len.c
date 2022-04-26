#include "lists.h"

/**
 * listint_len - prints num of all elements in list
 * @h: linkedlist
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		i++;
		node = node->next;
	}
	return (i);
}
