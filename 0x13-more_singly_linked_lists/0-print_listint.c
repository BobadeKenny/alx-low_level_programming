#include "lists.h"

/**
 * print_listint - prints all elements in list
 * @h: list
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		printf("%i\n", node->n);
		i++;
		node = node->next;
	}
	return (i);
}
