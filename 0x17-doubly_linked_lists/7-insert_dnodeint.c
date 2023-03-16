#include "lists.h"

/**
 * insert_dnodeint_at_index - Add a node to a list at idx
 * @head: the start node
 * @idx: The position to place the node
 * @n: the int for the node
 * Return: The new head or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
	unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *iter;
	unsigned int count;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return ((void *) 0);
	newnode->n = n;
	newnode->next = ((void *) 0);
	if (*head == ((void *) 0))
	{
		*head = newnode;
		newnode->prev = ((void *) 0);
	}
	else
	{
		count = 0;
		for (iter = (*head); iter->next != ((void *) 0) && ((count + 1) < idx)
			; iter = iter->next)
		{
			count++;
		}
		if (idx == 0)
		{
			newnode->next = iter;
			newnode->prev = iter->prev;
			iter->prev = newnode;
			*head = newnode;
		}
		else if ((count + 1) != idx)
			return ((void *) 0);
		else
		{
			newnode->next = iter->next;
			iter->next = newnode;
			newnode->prev = iter;
		}
	}
	return (newnode);
}
