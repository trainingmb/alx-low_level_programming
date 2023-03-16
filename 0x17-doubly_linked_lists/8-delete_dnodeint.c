#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index index of a dlistint_t linked list.
 * @head: pointer to the start node
 * @index: The node to pop
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *iter;
	unsigned int count;


	if (*head == ((void *) 0))
		return (-1);

	count = 0;
	for (iter = (*head)
		; iter->next != ((void *) 0) && ((count + 1) < index)
		; iter = iter->next)
	{
		count++;
	}
	if (index == 0)
	{
		*head = iter->next;
		*head->prev = ((void *) 0);
		free(iter);
		return (1);
	}
	if (((count + 1) != index) || (iter->next == ((void *) 0)))
	{
		return (-1);
	}
	temp = iter->next;
	iter->next = temp->next;
	if (temp->next != ((void *) 0))
	{
		iter->next->prev = iter;
	}
	free(temp);
	return (1);
}
