#include "lists.h"

/**
 * add_nodeint - Get list length
 * @h: the start node
 * @n: the int for the node
 * Return: The new head or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return ((void *) 0);
	}
	newnode->n = n;
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
