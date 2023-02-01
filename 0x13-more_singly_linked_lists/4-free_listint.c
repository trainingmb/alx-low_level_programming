#include "lists.h"

/**
 * free_listint - Free the list
 * @h: the start node
 */
void free_listint(listint_t *head)
{
	size_t n;
	listint_t *iter;
	listint_t *temp;

	if (head == ((void *) 0))
		return;
	for (iter = head; iter != ((void *) 0); )
	{
		temp = iter;
		iter = iter->next;
		free(temp);
	}
}

