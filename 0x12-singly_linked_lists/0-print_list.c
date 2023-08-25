#include "main.h"
/**
 * print_list - prints the elements of a singly linked list
 * @h: pointer to the linked list
 * Return: returns the count of elements 
*/
size_t print_list(const list_t *h)
{
    int count = 0;
    while (h != NULL)
    {
        if (h->str != NULL)
        {
            printf("[%d] %s\n",h->len, h->str);
        }
        else
        {
        printf("[0] (nil)\n");
        }
        h = h->next; 
        count++;
    }
    return (count);
}
