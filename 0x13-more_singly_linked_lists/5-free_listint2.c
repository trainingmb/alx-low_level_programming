#include "lists.h"

/**
 * free_listint2 - Free the list
 * @head: pinter to the start node
 */
void free_listint2(listint_t **head)
{
	listint_t *iter;
	listint_t *temp;

	if (head == ((void *) 0) || *head == ((void *) 0))
		return;
	for (iter = *head; iter != ((void *) 0); )
	{
		temp = iter;
		iter = iter->next;
		free(temp);
	}
}
