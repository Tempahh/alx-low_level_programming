#include "lists.h"
/**
 * print_listint - function that prints the data in nodes
 * @h: pointer used to navigate through the nodes
 * Return: returns the count of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h)
			{
			printf("%d \n", h->n);
			}
		count++;
		h = h->next;
	}
	return (count);
}
