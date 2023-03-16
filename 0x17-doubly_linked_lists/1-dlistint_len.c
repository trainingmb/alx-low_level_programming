#include "lists.h"

/**
 * dlistint_len - Get list length
 * @h: ths start node
 * Return: The length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *iter;

	iter = h;
	if (h == ((void *) 0))
		return (0);
	for (n = 0; iter != ((void *) 0); n++)
	{
		iter = iter->next;
	}
	return (n);
}
