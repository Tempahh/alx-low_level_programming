#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
		newnode->prev = current;
	}
	return (newnode);
}
