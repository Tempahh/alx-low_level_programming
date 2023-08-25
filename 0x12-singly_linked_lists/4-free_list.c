#include "main.h"
/**
  * free_list - frees a linked list
  * @head: the beginning of the list
  */

void free_list(list_t *head)
{
    while (head != NULL)
    {
        list_t *temp = head;
        head = head->next;
        free(temp->str);
        free(temp);
    }
}
