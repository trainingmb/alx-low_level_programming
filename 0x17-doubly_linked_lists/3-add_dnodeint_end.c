#include "lists.h"

/**
 * add_dnodeint_end - Add a node to the end of a list
 * @head: the start node
 * @n: the int for the node
 * Return: The new head or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *iter;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return ((void *) 0);
	}
	newnode->n = n;
	newnode->next = ((void *) 0);
	if (*head == ((void *) 0))
	{
		newnode->prev = ((void *) 0);
		*head = newnode;
	}
	else
	{
		for (iter = (*head); iter->next != ((void *) 0); iter = iter->next)
		{
			iter = iter;
		}

		iter->next = newnode;
		newnode->prev = iter;
	}
	return (*head);
}
