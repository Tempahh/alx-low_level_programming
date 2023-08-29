#include "lists.h"

/**
 * listint_len - a function ...
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	int count = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		p = p->next;
		count++;
	}
	return (count);
}
