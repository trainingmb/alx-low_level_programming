#include "lists.h"

/**
 * get_dnodeint_at_index - Get node in head at index
 * @head: the start node
 * @index: is the index of the node, starting at 0
 * Return: The node at n or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;
	dlistint_t *iter;

	iter = head;
	if (head == ((void *) 0))
		return (head);
	for (n = 0; iter != ((void *) 0) && n < index; n++)
	{
		iter = iter->next;
	}
	return (n == index ? iter : ((void *) 0));
}
