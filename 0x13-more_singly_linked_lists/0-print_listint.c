#include "lists.h"

/**
 * print_listint - Print a singly list of int
 * @h: the start node
 * Return: The length of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n;
	const listint_t *iter;

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
