#include "lists.h"

/**
 * add_nodeint - add a node to the start of a list
 * @head: the start node
 * @n: the int for the node
 * Return: The new head or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return ((void *) 0);
	}
	newnode->n = n;
	newnode->prev = ((void *) 0);
	if (head == ((void *) 0))
	{
		newnode->next = ((void *) 0);
		*head = newnode;
	}
	else
	{
		newnode->next = (*head);
		*head = newnode;
	}
	return (newnode);
}
