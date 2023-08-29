#include "lists.h"
/**
 * free_listint - a function ...
 * @head: the list
 *
 * Return: 1 or 0
 */
void free_listint(listint_t *head)
{
    while (head != NULL)
    {
        listint_t *temp = head;
        head = head->next;
        free(temp);
    }
}
