#include "lists.h"

/**
 * free_listint - Free the list
 * @head: the start node
 */
void free_listint(listint_t *head)
{
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
