#include "lists.h"

/**
 * add_nodeint_end - Add a node to the end of a list
 * @head: the start node
 * @idx: The position to place the node
 * @n: the int for the node
 * Return: The new head or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *iter;
	unsigned int count;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return ((void *) 0);
	}
	newnode->n = n;
	newnode->next = ((void *) 0);
	if (*head == ((void *) 0))
		*head = newnode;
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
			*head = newnode;
		}
		else
		{
			newnode->next = iter->next;
			iter->next = newnode;
		}
	}
	return (*head);
}
