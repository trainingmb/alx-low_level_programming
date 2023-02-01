#include "lists.h"

/**
 * reverse_listint - Reverse th list
 * @head: the pointer to the start node
 * Return: The new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *iter;
	listint_t *temp;

	iter = *head;
	temp = ((void *) 0);
	if (head == ((void *) 0) || *head == ((void *) 0))
		return ((void *) 0);
	for (; (*head) != ((void *) 0); )
	{
		iter = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = iter;
	}
	*head = temp;
	return (*head);
}
