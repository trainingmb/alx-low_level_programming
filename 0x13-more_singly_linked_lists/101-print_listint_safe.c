#include "lists.h"
/**
 * print_listint_safe - Print a singly list of int safely
 * @h: the start node
 * Return: The length of the list
 */
size_t print_listint_safe(const listint_t *h)
{
	size_t n, n2;
	char looped;
	const listint_t *iter;
	const listint_t *iter2;


	iter = h;
	looped = 0;
	if (h == ((void *) 0))
		return (0);
	for (n = 0; iter != ((void *) 0); n++)
	{
		iter2 = h;
		for (n2 = 0; n2 < n; n2++)
		{
			if (iter == iter2)
			{
				looped = 1;
				break;
			}
			iter2 = iter2->next;
		}
		if (looped == 0)
		{
			printf("[%p] %i\n", (void *) iter, iter->n);
		}
		else
		{
			printf("-> [%p] %i\n", (void *) iter, iter->n);
			exit(98);
		}
		iter = iter->next;
	}
	return (n);
}
