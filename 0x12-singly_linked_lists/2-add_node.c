#include "main.h"
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */

list_t *add_node(list_t **head, const char *str)
{
    list_t *newone = (list_t *)malloc(sizeof(list_t));
    int len = strlen(strdup(str));
    newone->str = strdup(str);
    if (newone->str == NULL) {
        // Handle memory allocation error
        free(newone);
        return NULL;
    }
    newone -> next = *head;
    newone->len = len;
    *head = newone;

    return *head;
}

void print_list(const list_t *h)
{
    while (h != NULL)
    {
        printf("[%d] %s\n",h->len, h->str);
        h = h->next;
    }
}
