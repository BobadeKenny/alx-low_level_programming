#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: pointer to list
 * @index: index of node
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current;
    unsigned int i;

    current = head;
    if (current == NULL)
    {
        return(0);
    }
    for(i = 0; i < index; i++)
    {
        current = current->next;
        if (current == NULL)
        {
            return(0);
        }
    }
    return(current);
}
