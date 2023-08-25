#include "main.h"
/**
 * list_len - returns the number of elements in the list
 * @h: singly linked list
 * Return: number of element in the list
 */

int counter = 0;

size_t list_len(const list_t *h)
{
    while(h != NULL)
        counter++;
    h = h->next;
    return(counter);
}
