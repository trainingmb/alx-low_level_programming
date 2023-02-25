#include "lists.h"

/**
 * free_list - Free a linked list
 * @head: The first node
 */
void free_list(list_t *head)
{
	list_t *iter;

	while (head)
	{
		iter = head;
		free(iter->str);
		head = iter->next;
		free(iter);
	}
}