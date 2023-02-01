#include "lists.h"

/**
 * pop_listint - Add a node to the end of a list
 * @head: pointer to the start node
 * Return: poped int value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == ((void *) 0) || *head == ((void *) 0))
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
