#include "lists.h"

/**
 * get_nodeint_at_index - Get node in head at index
 * @head: the start node
 * @index: is the index of the node, starting at 0
 * Return: The node at n or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *iter;

	iter = head;
	if (head == ((void *) 0))
		return (head);
	for (n = 0; iter != ((void *) 0) && n < index; n++)
	{
		iter = iter->next;
	}
	return (n == index ? iter : ((void *) 0));
}
