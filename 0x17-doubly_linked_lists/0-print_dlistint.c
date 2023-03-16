#include "lists.h"

/**
 * print_dlistint - Print a doubleylinkedlist
 * h@: the start node
 * Return: The length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *iter;

	iter = h;
	if (h == ((void *) 0))
		return (0);
	for (n = 0; iter != ((void *) 0); n++)
	{
		printf("%i\n", iter->n);
		iter = iter->next;
	}
	return (n);
}
