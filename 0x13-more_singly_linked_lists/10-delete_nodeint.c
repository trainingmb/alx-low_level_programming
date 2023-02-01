#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to the start node
 * @index: The node to pop
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *iter;
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
		free(iter);
		return (1);
	}
	if (((count + 1) != index) || (iter->next == ((void *) 0)))
	{
		return (-1);
	}
	temp = iter->next;
	iter->next = temp->next;
	free(temp);
	return (1);
}
