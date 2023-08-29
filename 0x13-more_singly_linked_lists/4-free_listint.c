#include "lists.h"
/**
 * free_listint - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */
void free_listint(listint_t *head)
{
    listint_t *temp, *p;
    
    p = head;
    while (p != NULL)
    {
        temp = p;
        p = p->next;
        free(temp);
    }
}
