#include "lists.h"
/**
 * print_listint - function that prints the data in nodes
 * @h: pointer used to navigate through the nodes
 * Return: returns the count of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	int count = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	return (count);
}
