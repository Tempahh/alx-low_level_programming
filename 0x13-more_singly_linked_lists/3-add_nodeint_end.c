#include "lists.h"

/**
 * add_nodeint_end - a function ...
 * @head: the list
 * @n: the chaine
 *
 * Return: 1 or 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));
    listint_t *pointer = *head;

    if(newnode == NULL)
    {
        return (NULL);
    }
    newnode->n = n;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        return(newnode);
    }
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = newnode;
    return (newnode);
}
