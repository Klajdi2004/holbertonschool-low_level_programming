#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to store in the new node.
 *
 * Return: If memory allocation fails or head is NULL, return NULL.
 *         Otherwise, return the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *temp;

    if (head == NULL)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }

    temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new;
    new->prev = temp;

    return (new);
}
