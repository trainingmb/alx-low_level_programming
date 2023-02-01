#include "lists.h"

/**
 * add_nodeint_end - Add a node to the end of a list
 * @head: the start node
 * @n: the int for the node
 * Return: The new head or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *iter;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		printf("Error\n");
		return ((void *) 0);
	}
	newnode->n = n;
	newnode->next = ((void *) 0);
	if (*head == ((void *) 0))
		*head = newnode;
	else
	{
		for (iter = (*head); iter->next != ((void *) 0); iter = iter->next);
			iter = iter;

		iter->next = newnode;
	}
	return (*head);
}
