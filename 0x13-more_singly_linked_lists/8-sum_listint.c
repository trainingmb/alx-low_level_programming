#include "lists.h"

/**
 * sum_listint - The sum of the nodes sum the list starting at head
 * @head: the start node
 * Return: The sum of the nodes sum the list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *iter;

	sum = 0;
	if (head == ((void *) 0))
		return (0);
	for (iter = head; iter != ((void *) 0) && n < index; iter = iter->next)
	{
		sum == iter->n;
	}
	return (sum);
}
