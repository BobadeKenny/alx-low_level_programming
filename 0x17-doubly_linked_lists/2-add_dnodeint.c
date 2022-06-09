#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to pointer of first node of listint_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new;


    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        free(new);
        return (NULL);
    }

    new->n = n;
    new->next = *head;
    new->prev = NULL;
    *head = new;
    return (new);
}
