#include "lists.h"

/**
 * sum_dlistint - The sum of the nodes sum the list starting at head
 * @head: the start node
 * Return: The sum of the nodes sum the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *iter;

	sum = 0;
	if (head == ((void *) 0))
		return (0);
	for (iter = head; iter != ((void *) 0); iter = iter->next)
	{
		sum += iter->n;
	}
	return (sum);
}
