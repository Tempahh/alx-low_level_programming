#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - prints all the elements of a linked list
 * @head: linked list of type listint_t to print
 * @index: the number
 *
 * Return: number of nodes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *p = head;

	while (num != index && p != NULL)
	{
		num++;
		p = p->next;
	}

	if (p == NULL)
		return (NULL);
	else
		return (p);
}
