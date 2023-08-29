#include "lists.h"
/**
 * add_nodeint - a function ...
 * @head: the list
 * @n: the chaine
 *
 * Return: 1 or 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = (listint_t *)malloc(sizeof(listint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
