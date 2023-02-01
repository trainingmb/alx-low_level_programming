#include "lists.h"

/**
 * listint_len - Get list length
 * @h: the start node
 * Return: The length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n;
	const listint_t *iter;

	iter = h;
	if (h == ((void *) 0))
		return (0);
	for (n = 0; iter != ((void *) 0); n++)
		iter = iter->next;
	return (n);
}
