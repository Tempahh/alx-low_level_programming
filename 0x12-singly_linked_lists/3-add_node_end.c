#include "main.h"
/**
 * add_node_end - a function ...
 * @head: the list
 * @str: the chaine
 *
 * Return: 1 or 0
 */


list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new = malloc(sizeof(list_t));
    list_t *pointer = *head;

    if (new == NULL)
        return NULL;
    
    new->str = strdup(str);
    new->len = strlen(str);
    new->next = NULL;

    if (pointer == NULL)
    {
        *head = new;
        return (*head);
    }
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    pointer->next = new;
    return (new);
}

void print_list(const list_t *h)
{
    while (h != NULL)
    {
        printf("[%d] %s\n",h->len, h->str);
        h = h->next;
    }
}
