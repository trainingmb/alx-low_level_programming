#include "lists.h"

/**
 * _strlen - Gets length of string
 * @s: TO get length
 * Return: length of the string
 */
size_t _strlen(const char *s)
{
	size_t len;

	for (len = 0; s[len]; len++)
		;
	return (len);
}

/**
 * create_node - Create a node
 * @str: String to add to list
 * @next: The next node in the list
 * Return: new list node
 */
list_t *create_node(const char *str, list_t *next)
{
	list_t *newnode;
	size_t s, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = malloc((len + 1) * sizeof(char));
	newnode->len = len;
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	for (s = 0; s <= len; s++)
		newnode->str[s] = str[s];
	newnode->next = next;
	return (newnode);
}

/**
 * add_node - Add a node to the list at the
 * @head: the head of the list
 * @str: String to add to list
 * Return: new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *iter;

	if (str == NULL || head == NULL)
		return (NULL);
	iter = create_node(str, (*head));
	return (iter);
}
